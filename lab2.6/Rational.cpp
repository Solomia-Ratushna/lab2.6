#include "Rational.h"
//Class Pair

int Rational::Pair::counter = 0;
int Rational::Pair::getCounter()
{
	return Rational::Pair::counter;
}

void Rational::Pair::SetFirst(double value) { first = value; }
void Rational::Pair::SetSecond(double value) { second = value; }

double Rational::Pair::GetFirst() const { return first; }
double Rational::Pair::GetSecond() const { return second; }

Rational::Pair::Pair() { first = 0, second = 0; Rational::Pair::counter++; }
Rational::Pair::Pair(double first = 0, double second = 0)
{
	this->first = first;
	this->second = second;
	Rational::Pair::counter++;
}
Rational::Pair::Pair(const Pair& A)
{
	first = A.GetFirst();
	second = A.GetSecond();
	Rational::Pair::counter++;
}

Rational::Pair& Rational::Pair::operator = (const Pair& A)
{
	first = A.first;
	second = A.second;

	return *this;
}
ostream& operator << (ostream& out, const Rational::Pair& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Rational::Pair& A)
{
	cout << "Enter a first number of pair: "; in >> A.first;
	cout << "Enter a second number of pair: "; in >> A.second;
	return in;
}
Rational::Pair::operator string() const
{
	stringstream ss;
	ss << "First number of pair is equal to " << first << endl;
	ss << "Second number of pair is equal to " << second << endl;
	return ss.str();
}

Rational::Pair& Rational::Pair::operator ++ ()
{
	first++;
	return *this;
}
Rational::Pair& Rational::Pair::operator -- ()
{
	first--;
	return *this;
}
Rational::Pair Rational::Pair::operator ++ (int)
{
	Pair t(*this);
	second++;
	return t;
}
Rational::Pair Rational::Pair::operator -- (int)
{
	Pair t(*this);
	second--;
	return t;
}

//Class Rational

int Rational::counter = 0;
int Rational::getCounter()
{
	return Rational::counter;
}

void Rational::SetP(double first, double second) { Pair(first, second); }
Rational::Rational(double first = 0, double second = 0)
	: p(first, second)
{
	counter++;
}

bool operator > (const Rational::Pair p1, const Rational::Pair p2)
{
	if (p1.GetFirst() > p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() > p2.GetSecond()))
		return 1;
	else
		return 0;
}
bool operator < (const Rational::Pair p1, const Rational::Pair p2)
{
	if (p1.GetFirst() < p2.GetFirst() ||
		(p1.GetFirst() == p2.GetFirst() && p1.GetSecond() < p2.GetSecond()))
		return 1;
	else
		return 0;
}
bool operator == (const Rational::Pair p1, const Rational::Pair p2)
{
	if ((p1.GetFirst() == p2.GetFirst()) &&
		(p1.GetSecond() == p2.GetSecond()))
		return 1;
	else
		return 0;
}

int Rational::ComparePairs(const Pair p1, const Pair p2) const
{
	if (p1 > p2)
		return 1;
	if (p1 < p2)
		return 2;
	if (p1 == p2)
		return 3;
}
void Rational::ComparePairsResult(int result)
{
	switch (result)
	{
	case 1:
		cout << "\nP1 > P2" << endl;
		break;
	case 2:
		cout << "\nP1 < P2" << endl;
		break;
	case 3:
		cout << "\nP1 = P2" << endl;
		break;
	}
}