#include<iostream>
using namespace std;

void linearSearch(int n,int a[],int key)
{
	int i=0;
	for(;i<n;i++)
	{
		if(a[i]==key){
			cout<<"Present "<<i+1<<endl;
			return;
		}
	}
	cout<<"Not Present "<<i<<endl;
	return;
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
		cin>>key;
		linearSearch(n,a,key);
	}
	return 0;
}
