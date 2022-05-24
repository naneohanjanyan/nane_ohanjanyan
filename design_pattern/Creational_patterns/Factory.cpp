#include <iostream>
using namespace std;

class Transport
{
public:
    virtual ~Transport() {}
    virtual string Operation() const = 0;
};

class Truck : public Transport
{
public:
    string Operation() const override
    {
        return "{Result of the Truck}";
    }
};
class Ship : public Transport
{
public:
    string Operation() const override
    {
        return "{Result of the Ship}";
    }
};

class Creator
{
public:
    virtual ~Creator(){};
    virtual Transport *FactoryMethod() const = 0;
    string SomeOperation() const
    {
        Transport *transport = this->FactoryMethod();
        string result = "Creator: The same creator's code has just worked with " + transport->Operation();
        delete transport;
        return result;
    }
};

class TruckCreator : public Creator
{

public:
    Transport *FactoryMethod() const override
    {
        return new Truck();
    }
};

class ShipCreator : public Creator
{
public:
    Transport *FactoryMethod() const override
    {
        return new Ship();
    }
};

void ClientCode(const Creator &creator)
{
    cout << "Client: I'm not aware of the creator's class, but it still works.\n"
         << creator.SomeOperation() << endl;
}

int main()
{
    cout << "\nApp: Launched with the ConcreteCreator1.\n";
    Creator *creator = new TruckCreator();
    ClientCode(*creator);
    cout << "\nApp: Launched with the ConcreteCreator2.\n";
    Creator *creator2 = new ShipCreator();
    ClientCode(*creator2);

    delete creator;
    delete creator2;
    return 0;
}