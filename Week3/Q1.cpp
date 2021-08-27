// program for insertion sort


#include<iostream>
using namespace std;

void insertionSort(int a[],int n)
{
	int temp,comp=0,shifts=0;
	for(int i=0;i<n;i++)
	{
		temp=a[i];
		int j=i-1;
		while(j>=0 && a[j]>temp)
		{
			comp++;
			a[j+1]=a[j];
			j=j-1;
		}
		shifts++;
		a[j+1]=temp;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl<<"comparisons = "<<comp;
	cout<<endl<<"shifts = "<<shifts+comp-1<<endl;
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
		insertionSort(a,n);
	}
}