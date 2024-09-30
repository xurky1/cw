
#include <iostream>
using namespace std;

class A
{
public:
    int Rational(int numerator, int denominator)
        : numerator{numerator}
        , denominator{denominator}
    {
        cout << "Constructor\n"
    }

    ~Rational()
    {
        cout << "Deconstructor\n"
    }

    void print()
    {
        cout << numerator << '/' << denominator << '\n';
    }

    Rational operator*(const Rational& other)
    {
        return Rational(
            this->numerator * other.numerator,
            this->numerator * other.denominator);
        )

    Rational operator*(const Rational& other)
    {
        return Rational(
        this->other.deteminator;
        this->other.numerator;
        )
    }

private:
    int numerator;
    int denominator;
};



int main()
{
    Rational rat1(5, 7);

    return 0;
}

