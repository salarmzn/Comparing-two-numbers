#include <iostream>

using namespace std;

class MyClass
{
	int a, b;
public:
	MyClass(int sa=0,int sb=0);
	~MyClass();
	void Sum(){ cout << "Sum Of A and B = " << a + b << "\n"; };
	int fact();
	int power();
	void MaxNum();
	void SetValue(int Num1, int Num2);

};

MyClass::MyClass(int AValue,int BValue)
{
	a = AValue;
	b = BValue;
}

MyClass::~MyClass()
{

}

void MyClass::SetValue(int Num1, int Num2)
{
	
	a = Num1;
	
	b = Num2;
}

int MyClass::fact()
{
	int f = a , s=0;
	while (f > 0)
	{
		s = s + f;
		--f;
	}
	return s;
}

int MyClass::power()
{
	int p=1;
	for (int i = 0; i < b; i++)
		p = p*a;
	return p;
}
void MyClass::MaxNum()
{

	if (a > b)
		cout << "A = " << a << "\n";
	else
		cout << "B = " << b << "\n";

}

int main()
{
	MyClass ob;
	ob.SetValue(5, 6);
	cout << "Fact : " << ob.fact() << "\n";
	cout << "Power : " << ob.power() << "\n";
	ob.MaxNum();
	ob.Sum();
	return 0;
}

