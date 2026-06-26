

#include<iostream>
using namespace std;

//int main()
//{
//	int a = 0;
//	int& b=a;
//	int c = 1;
//	b = c;
//	cout << &a << endl;
//	cout << &b << endl;
//	cout << &c << endl;
//	return 0;
//}


void f(int x)
{
	cout << "f(int x)" << endl;
}
void f(int* ptr)
{
	cout << "f(int* ptr)" << endl;
}

int main()
{
	f(0);
	f(NULL);

	f(nullptr);
	return 0;
}