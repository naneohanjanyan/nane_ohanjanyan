#include <iostream>
using namespace std;

// interface
class Graphic
{
    virtual void move(int x, int y);
    virtual void draw();
};

// Simple component.
class Dot : Graphic
{
private:
    int x;
    int y;

public:
    Dot(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void move(int x, int y) override
    {
        this->x += x;
        this->y += y;
    }
    void draw() override
    {
        cout << "\nDraw a point at X, Y coordinate.\n";
    }
};

class Circle : Dot
{
private:
    double radius;

public:
    Circle(int x, int y, double radius) : Dot(x, y)
    {
        this->radius = radius;
    }
    void draw() override
    {
        cout << "\nDraw a circle at X, Y coordinate.\n";
    }
};

class CompoundGraphic : Graphic
{
    Graphic *children; // array of Graphic

    void add(Graphic *child)
    {
        cout << "\nAdd the component to the list of children.\n";
    }
    void remove(Graphic *child)
    {
        cout << "\nRemove the component from the list of children.\n";
    }
};

int main()
{
    // CompoundGraphic *all = new CompoundGraphic();
    // Dot * dot = new Dot(1, 2);
    // Circle * circle = new Circle(5, 3, 10);
    // all->add(dot);
    // all->add(circle);
    return 0;
}