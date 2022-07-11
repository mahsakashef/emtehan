#include <iostream>
using namespace std;
void tabe()
{
	int temp=0;
	int a[10];
	for(int i=0; i<10; i++)
	{
		cin>>a[i];
		
	}
	for(int j=0; j<9; j++)
	{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;
	}
	
	for(int i=0; i<=9; i++)
	{
		cout<<a[i];
	}
}

int main(){
tabe();
return 0;
}