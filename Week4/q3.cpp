#include<iostream>
#include<vector>
using namespace std;

void heapify(vector<int>& heap,int cur,int size)
{
	int lar=cur;
	int l=2*cur+1;
	int r=2*cur+2;

	if(l<size and heap[l]<heap[lar])
		lar=l;
	if(r<size and heap[r]<heap[lar])
		lar=r;
	if(lar!=cur)
	{
		int temp=heap[cur];
		heap[cur] = heap[lar];
		heap[lar] = temp;

		heapify(heap,lar,size);
	}

}

void minheapify(vector <int>& heap)
{
	for(int i=heap.size()/2 ; i>=0; i--)
	{
		heapify(heap,i,heap.size());
	}
}

int extract_min(vector<int>& heap,int n)
{
	swap(heap[0],heap[n-1]);
	int res=heap[n-1];
	n--;
	heapify(heap,0,n);
	return res;

}

void algo(vector<int>&heap,int k)
{
	int res=0;
	int n=heap.size();
	minheapify(heap);
	for(int i=0;i<k;i++)
	{
		res=extract_min(heap,n);
		n--;
	}
	cout<<res<<endl;
}

int main()
{
	int t;
	cin>>t;
	for (int i = 0; i < t; ++i)
	{
		int n,key;
		cin>>n;
		vector<int> heap;
		for(int j=0;j<n;j++)
		{
			cin>>key;
			heap.push_back(key);
		}
		cin>>key;
		algo(heap,key);
	}
	return 0;
}