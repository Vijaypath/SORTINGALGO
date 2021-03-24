//BUBBLE SORT----
#include<iostream>
using namespace std;
void bublesort(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		int flag=false;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				flag=true;
				int tmp=a[j];
				a[j]=a[j+1];
				a[j+1]=tmp;
			}
		}
		if(flag==false)
		{
			break;
		}
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
	bublesort(a,n);
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
}
