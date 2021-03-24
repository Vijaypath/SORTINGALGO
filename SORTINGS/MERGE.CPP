// MERGE SORT.CPP 
#include<iostream>
using namespace std;
void merge(int a[],int l,int m,int r)
{
	int i=l;
	int j=m+1;
	int k=l;
	int tmp[100];
	while(i<=m && j<=r)
	{
		if(a[i]<=a[j])
		{
			tmp[k]=a[i];
			i++;
			k++;
		}
		else
		{
		tmp[k]=a[j];
        j++;
        k++;
		}
	}
	
	while(i<=m)
	{
		tmp[k]=a[i];
		i++;
		k++;
	}
	while(j<=r)
	{
		tmp[k]=a[j];
		j++;
		k++;
	}
		for(int s=l;s<=r;s++)
	{
		a[s]=tmp[s];
	}
	
}
void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		merge(a,l,m,r);
		
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
 mergesort(a,0,n-1); // CALLING THE INSERTION SORT HERE
 
for(int i=0;i<n;i++)
{
	cout<<a[i]<<" "; // PRINT THE SORTED ARRAY
}
return 0;
}
