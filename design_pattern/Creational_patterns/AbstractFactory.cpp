using namespace std;
#include <iostream>

class AbstractProductChair
{
public:
    virtual ~AbstractProductChair(){};
    virtual string UsefulFunctionChair() const = 0;
};

class ModernChair : public AbstractProductChair
{
public:
    string UsefulFunctionChair() const override
    {
        return "The result of the product modern chair ";
    }
};

class VictorianChair : public AbstractProductChair
{
    string UsefulFunctionChair() const override
    {
        return "The result of the product victorian chair ";
    }
};

class AbstractProductSofa
{
public:
    virtual ~AbstractProductSofa(){};
    virtual string UsefulFunctionSofa() const = 0;
    virtual string AnotherUsefulFunctionSofa(const AbstractProductChair &collaborator) const = 0;
};

class ModernSofa : public AbstractProductSofa
{
public:
    string UsefulFunctionSofa() const override
    {
        return "The result of the product modern sofa. ";
    }

    string AnotherUsefulFunctionSofa(const AbstractProductChair &collaborator) const override
    {
        const string result = collaborator.UsefulFunctionChair();
        return "The result of the ModerSofa  collaborating with ( " + result + " )";
    }
};

class VictorianSofa : public AbstractProductSofa
{
public:
    string UsefulFunctionSofa() const override
    {
        return "The result of the product victorian sofa. ";
    }

    string AnotherUsefulFunctionSofa(const AbstractProductChair &collaborator) const override
    {
        const string result = collaborator.UsefulFunctionChair();
        return "The result of the VictorianSofa collaborating with ( " + result + " )";
    }
};

class AbstractFactory
{
public:
    virtual AbstractProductChair *CreateProductChair() const = 0;
    virtual AbstractProductSofa *CreateProductSofa() const = 0;
};

class ConcreteModernFactory : public AbstractFactory
{
public:
    AbstractProductChair *CreateProductChair() const override
    {
        return new ModernChair();
    }
    AbstractProductSofa *CreateProductSofa() const override
    {
        return new ModernSofa();
    }
};

class ConcreteVictorianFactory : public AbstractFactory
{
public:
    AbstractProductChair *CreateProductChair() const override
    {
        return new VictorianChair();
    }
    AbstractProductSofa *CreateProductSofa() const override
    {
        return new VictorianSofa();
    }
};

void ClientCode(const AbstractFactory &factory)
{
    const AbstractProductChair *product_chair = factory.CreateProductChair();
    const AbstractProductSofa *product_sofa = factory.CreateProductSofa();
    cout << product_sofa->UsefulFunctionSofa() << "\n";
    cout << product_sofa->AnotherUsefulFunctionSofa(*product_chair) << "\n";
    delete product_chair;
    delete product_sofa;
}

int main()
{
    cout << "\nClient: Testing client code with the first factory type:\n";
    ConcreteModernFactory *f1 = new ConcreteModernFactory();
    ClientCode(*f1);
    delete f1;
    cout << "\nClient: Testing the same client code with the second factory type:\n";
    ConcreteVictorianFactory *f2 = new ConcreteVictorianFactory();
    ClientCode(*f2);
    delete f2;
    return 0;
}