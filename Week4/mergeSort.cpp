#include<iostream>
using namespace std;

void merge(int [],int,int,int,int&);
void mergeSort(int a[],int l,int r,int &ctr)
{
	if(l<r)
	{
		int m=(l+r)/2;
		mergeSort(a,l,m,ctr);
		mergeSort(a,m+1,r,ctr);
		merge(a,l,m,r,ctr);
	}
}

void merge(int a[],int l,int m,int r,int& ctr)
{
	int n1=m-l+1;
	int n2=r-m;
	int la[n1],ra[n2];
	for(int i=0;i<n1;i++)
		la[i]=a[i+l];
	for(int j=0;j<n2;j++)
		ra[j]=a[m+1+j];

	int i=0,j=0,k=l;
	while(i<n1 && j<n2)
	{
		ctr++;
		if(la[i]<=ra[j])
			a[k++]=la[i++];
		else
			a[k++]=ra[j++];
	}
	while(i<n1)
	{
		a[k++]=la[i++];
	}
	while(j<n2)
	{
		a[k++]=ra[j++];
	}
}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int ctr=0;
		int n,key;
		cin>>n;
		int a[n];
		for(int j=0;j<n;j++)
			cin>>a[j];
		mergeSort(a,0,n-1,ctr);
		cout<<"comparisons = "<<ctr<<endl;
		cout<<"sorted array = ";
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
		cout<<endl<<endl;
	}
}