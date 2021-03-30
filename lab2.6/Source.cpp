#include <iostream>
#pragma pack(1)

#include "Rational.h"

int main()
{
    Rational::Pair a;
    cout << "\n1 object of class Pair = " << Rational::Pair::getCounter();

    Rational::Pair b;
    cout << "\n2 objects of class Pair = " << Rational::Pair::getCounter();

    Rational::Pair c;
    cout << "\n3 objects of class Pair = " << Rational::Pair::getCounter();


    cout << "\n0 objects of class Fraction = " << Rational::getCounter();
    Rational f(0, 0);
    cout << "\n1 object of class Fraction = " << Rational::getCounter();


    int result;
   
    cout << "\nPair a " << endl;
    cout << "(x/y)" << endl;

    cin >> a;
    cout << a;

    cout << "____________________" << endl;
    cout << "\nPair b " << endl;
    cout << "(x/y)" << endl;

    cin >> b;
    cout << b;
    cout << "____________________" << endl;
    cout << "\nPair c " << endl;
    cout << "(x/y)" << endl;

    
    cin >> c;
    cout << c;

    cout << "\na and b" << endl;
    result = f.ComparePairs(a, b);
    f.ComparePairsResult(result);

    cout << "\na and c" << endl;
    result = f.ComparePairs(a, c);
    f.ComparePairsResult(result);

    cout << "\nb and c" << endl;
    result = f.ComparePairs(b, c);
    f.ComparePairsResult(result);

    cout << "a++" << endl;
    cout << a++ << endl;

    cout << "a--" << endl;
    cout << a-- << endl;

    cout << "++a" << endl;
    cout << ++a << endl;

    cout << "--a" << endl;
    cout << --a << endl;

    cout << "Size of class is equal to " << sizeof(Rational) << endl;

    return 0;
}