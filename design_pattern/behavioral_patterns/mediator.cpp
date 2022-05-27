#include <iostream>
#include <cstring>
using namespace std;

class Employee;
class Employee;
class Director;
class Designer;
class Controller;

class Mediator
{
public:
    virtual void Notify(Employee *employee, string message) = 0;
};

class Employee
{
protected:
    Mediator *mediator;

public:
    Employee(Mediator *_mediator = nullptr) : mediator(_mediator) {}
    void setMediator(Mediator *_mediator)
    {
        mediator = _mediator;
    }
    virtual ~Employee() {}
};

class Designer : public Employee
{
private:
    bool isWorking;

public:
    Designer(Mediator *mediator = nullptr) : Employee(mediator) {}
    void executerWork()
    {
        cout << "\nDesigner at work.\n";
        mediator->Notify(this, "designs");
    }
    void setWork(bool state)
    {
        isWorking = state;
        if (state)
        {
            cout << "\nDesigner is free.\n";
        }
        else
        {
            cout << "\nThe designer is busy.\n";
        }
    }
};

class Director : public Employee
{
private:
    string text;

public:
    Director(Mediator *mediator = nullptr) : Employee(mediator) {}
    void giveCommand(string text)
    {
        this->text = text;
        if (text.empty())
        {
            cout << "\nThe director knows that the designer is already working.\n";
        }
        else
        {
            cout << "\nThe director ordered. " << text << endl;
        }
        mediator->Notify(this, text);
    }
};

class Controller : public Mediator
{
private:
    Designer *designer;
    Director *director;

public:
    Controller(Designer *_designer, Director *_director)
    {
        designer = _designer;
        director = _director;
        designer->setMediator(this);
        director->setMediator(this);
    }
    void Notify(Employee *employee, string messages) override
    {
        if (messages == "busy")
        {
            designer->setWork(false);
        }
        else if (messages == "free.")
        {
            designer->setWork(true);
        }
        else if (messages == "designs")
        {
            director->giveCommand("");
        }
    }
};

int main()
{

    Designer *designer = new Designer();
    Director *director = new Director();
    Controller *mediator = new Controller(designer, director);

    director->giveCommand("designs");
    cout << endl;
    designer->executerWork();

    delete designer;
    delete director;
    delete mediator;

    return 0;
}