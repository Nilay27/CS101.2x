#include<iostream>
using namespace std;
void swapbyptr(int *ptrx, int *ptry);

int main()
{
	int m,n;
	cout<< "Give m, n: \n \n" ;
	cin>>m>>n;
	cout<<"the address of m is:"<<&m<<"\n\n";
	swapbyptr(&m,&n);
	cout<<m<<" "<<n<<endl;
	return 0;
}

void swapbyptr(int *ptrx, int *ptry)
{
	
int temp;
cout<<"the value stored at ptrx is "<<ptrx<<"\n\n " ;
cout<<"that means address of &m is being copied! \n\n";
cout<<"if we use *ptrx, then it is dereferencing, as it can be clearly seen that now the value of *ptrx is "<<*ptrx<<"\n\n";
cout<<"after swapping, the numbers are: \n";
temp=*ptrx;
*ptrx=*ptry;
*ptry=temp;
return;
}

