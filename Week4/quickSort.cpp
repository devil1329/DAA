#include<iostream>
using namespace std;


void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 

int partition(int [],int,int,int&,int&);
void quickSort(int a[],int l,int r,int &ctr,int&sp)
{
	if(l<r)
	{
		int p=partition(a,l,r,ctr,sp);
		quickSort(a,l,p-1,ctr,sp);
		quickSort(a,p+1,r,ctr,sp);
	}
}

int partition(int a[],int l,int r,int& ctr,int& sp)
{
	int x= (rand()%(r-l+1))+l;
	swap(a[x],a[r]);
	sp++;

	int pivot = a[r];
	int  i=(l-1);
	for(int j=l;j<=r;j++)
	{
		ctr++;
		if(a[j]<pivot)
		{
			i++;
			swap(&a[i],&a[j]);
			sp++;
		}
	}
	sp++;
	swap(&a[1+i],&a[r]);
	return (i+1);
}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int ctr=0,sp=0;
		int n,key;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
			cin>>a[j];
		quickSort(a,0,n-1,ctr,sp);
		cout<<"comparisons = "<<ctr<<endl;
		cout<<"swaps = "<<sp<<endl;
		cout<<"sorted array = ";
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl<<endl;
	}
}