#include<iostream>

using namespace std;
void swap(int &x, int &y);

int main()
{
	int m,n;
	cout<<"Enter the values of m and n \t";
	cin>>m>>n;
	cout<<"Address of m and n before swapping \t"<<&m<<"\t"<<&n<<"\n";
	swap(m,n);
	cout<<"values of m and n:\t"<<m<<"\t"<<n<<"\n";
	return 0;
	
}

void swap(int &x, int &y)
{
	cout<<"values of &x and &y\t"<<&x<<"\t"<<&y<<"\n";
	cout<<"Values of x and y\t"<<x<<"\t"<<y<<"\n";
	cout<<"now we swap\n";
	int temp=x;
	x=y;
	y=temp;
	cout<<"now after swapping\n";
	cout<<"values of &x and &y\t"<<&x<<"\t"<<&y<<"\n";
	cout<<"values of x and y: \t"<<x<<"\t"<<y<<"\n";
	
}

