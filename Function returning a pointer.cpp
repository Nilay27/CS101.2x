#include<iostream>

using namespace std;

int* myfunc(int* ptrB);

int main()
{
	int* a, b ;
	
	cout<<"Give b: \t";
	cin>>b;
	cout<<"the address of b is:\t"<<&b<<"\n";	
	a=&b;
	myfunc(&b);
	cout<<"the address of a in the main function is\t"<< &a<<"\n";
	cout<<"the value of b is : \t"<<b<<"\n";
	cout<<"a is :\t"<<*a<<"\n";
	cout<<"the value of a is : \t"<<a<<"\n";
	
	return 0;
}

int* myfunc(int* ptrB)
{
	int a;
	cout<<"the value/ address stored at ptr B is:\t"<<ptrB<<"\n";
	a=(*ptrB)*(*ptrB);
	cout<<"the value of a is : \t"<<a<<"\n";
	cout<<"the address of a is : \t"<<&a<<"\n";
	cout<<"the address of ptrB is : \t"<<&ptrB<<"\n";
	*ptrB=a; // this means that the value of a in the called function is stored in the value of the address at which ptrB is pointing to, i.e

	
}
