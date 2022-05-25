#include <iostream>
#include <cmath>
using namespace std;

class RoundPeg
{
private:
    double roundRadius;

public:
    RoundPeg() = default;
    RoundPeg(double radius)
    {
        this->roundRadius = radius;
    }
    double getRadius()
    {
        return roundRadius;
    }
};

class RoundHole
{
private:
    double radius;

public:
    RoundHole(double radius)
    {
        this->radius = radius;
    }

    double getRadius()
    {
        return radius;
    }
    bool fits(RoundPeg *peg)
    {
        return (this->getRadius() >= peg->getRadius());
    }
};

class SquarePeg
{
private:
    double width;

public:
    SquarePeg(double width)
    {
        this->width = width;
    }

    double getWidth()
    {
        return width;
    }
};

class SquarePegAdapter : RoundPeg
{
private:
    SquarePeg *peg;

public:
    SquarePegAdapter(SquarePeg *peg)
    {
        this->peg = peg;
    }
    double getRadius()
    {
        return (peg->getWidth() * sqrt(2)) / 2;
    }
};

int main()
{
    RoundHole *hole = new RoundHole(5);
    RoundPeg *roundPeg = new RoundPeg(5);
    cout << endl;
    cout << hole->fits(roundPeg) << endl; // TRUE

    SquarePeg *small_squarePeg = new SquarePeg(5);
    SquarePeg *large_squarePeg = new SquarePeg(10);

    SquarePegAdapter *small_squarePeg_adapter = new SquarePegAdapter(small_squarePeg);
    SquarePegAdapter *large_squarePeg_adapter = new SquarePegAdapter(large_squarePeg);
    // cout << hole->fits(small_squarePeg_adapter) << endl; // TRUE
    //  cout << hole->fits(large_squarePeg_adapter) << endl; // FALSE

    return 0;
}