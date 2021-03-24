//INSERTION SORT .CPP        T.C==O(N^2)
#include<iostream>
using namespace std;
void insertionsort(int a[],int n)
{
	int j=0,key=0;
	
	for(int i=1;i<=n-1;i++)
	{
		key=a[i];
		j=i-1;
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
}
int main()
{ 
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
 insertionsort(a,n);
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
}
