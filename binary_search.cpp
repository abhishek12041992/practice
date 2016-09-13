#include<iostream>
using namespace std;
void binarySearch (int [],int,int);
int main()
{
	int a[]={1,2,3,4,5,6};
	int n= sizeof(a)/sizeof(int);
	int term;
	cin>>term;
	binarySearch(a,term,n);
	
}
void binarySearch(int a[],int term,int n)
{
	int last=n;
	int first=0;
	while(first<last)
	{
		//cout<<"int there"<<" ";
		int mid=(first+last)/2;
		if (a[mid]<term)
		{
			first=mid+1;
			
		}
		 if(a[mid]>term)
		{
			last = mid;
		}
		if(a[mid]==term)
		{
			cout<<"found the term at:"<<mid<<endl;
			break;
		}
	}
		cout<<"exiting...."<<endl;
}
