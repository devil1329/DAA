// program for selection sort


#include<iostream>
using namespace std;

void selectionSort(int a[],int n)
{
	int comp=0,swaps=0;
	for(int i=0;i<n-1;i++)
	{
		int min_idx=i;
		for(int j=i+1;j<n;j++)
		{
			comp++;
			if(a[j]<a[min_idx])
			{
				min_idx=j;
			}
		}
		swaps++;
		int temp=a[i];
		a[i]=a[min_idx];
		a[min_idx]=temp;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl<<"comparisons = "<<comp;
	cout<<endl<<"swaps = "<<swaps<<endl;
}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,key;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
			cin>>a[j];
		selectionSort(a,n);
	}
}