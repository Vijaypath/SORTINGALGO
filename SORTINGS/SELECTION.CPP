//SELECTION SORT .CPP
#include<iostream>
using namespace std;
void selecsort(int a[],int n)
{
for(int i=0;i<n;i++)	{
		int min=i;
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int tmp=a[min];
			a[min]=a[i];
			a[i]=tmp;
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
	selecsort(a,n);
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" ";
}
}
