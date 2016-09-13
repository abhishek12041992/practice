#include<iostream>

using namespace std;
void quick_sort(int [] , int , int);
int partition (int [],int ,int);
int main()
{
	int a[]={9,8,7,6,6,5,5,4,3,2,1};
	int n=sizeof(a)/sizeof(int);
	//int n=8;
	n=n-1;
	quick_sort(a,0,n);
	for(int i=0;i<n+1;i++)
	{
		cout<<a[i]<<" ";
		
	}
	cout<<endl;
	return 0;
}
void quick_sort(int a[],int low,int high)
{
	int pivot;
	if(low<high)
	{
		pivot=partition(a,low,high);
		quick_sort(a,low,pivot-1);
		quick_sort(a,pivot+1,high);
		
		
	}
	
	
}
int partition(int a[],int low,int high)
{
	   int p=a[low];
	   int h=high;
	   int l=low;
	   int temp;
	   while(l<h)
	   {
		   while(a[l]<=p)
		   {
		    l++;
		}
		   while(a[h]>p)
		    {h--;}
		    if(l<h)
		    {
				temp=a[h];
				a[h]=a[l];
				a[l]=temp;
			}  
	   }
	   a[low]=a[h];
	   a[h]=p;
	   
	   return h;
}
