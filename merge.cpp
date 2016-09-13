
#include<iostream>
#include<vector>
using namespace std;
void merge_sort(int[],int,int);
void merge(int [],int,int,int);
int main()
{
   //sorting practice
   //merge sort
     int a[]={12,12,434,23,135,535,245,353535,353535};
   //vector <int> arr(a,a+sizeof(a)/sizeof(a[0]));
   int n=8;
   merge_sort(a,0,n);
  for(int i=0;i<n;i++)
    {
     cout<<a[i]<<"  ";
    }
     cout<<endl;
     



}
void merge_sort(int arr[],int low,int high)
{  
 //      cout<<"in sort";
       int mid;
       if(low<high)
	{
             mid=(low+high)/2;
             merge_sort(arr,low,mid);
             merge_sort(arr,mid+1,high);
             merge(arr,low,mid,high);
	}	 
    return;

}
void merge(int arr[], int low,int mid,int high)
{
	             int i=low,j=mid+1;
	             int temp[high-low+1];
	             int k=0;
	            while(i<mid+1&&j<=high)
	            {
					if(arr[i]<arr[j])
					{
						temp[k]=arr[i];
						k++;
						i++;
					}
					if(arr[j]<arr[i])
					{
						temp[k]=arr[j];
						j++;
						k++;
					}
					if(arr[i]==arr[j])
					{
						temp[k]=arr[i];
						k++;
						j++;
					}
					
				}
				while (i<mid+1)
				{
					temp[k]=arr[i];
					i++;k++;
			 }
			 while(j<=high)
			 {
				    temp[k]=arr[j];
				    j++;k++;
			 }
			 int k_iter=0;
			 for(int iter=low;iter<=high;iter++)
			 {
				   //cout<<temp[k_iter]<<endl;
				    //arr[iter + low ]= temp [iter ];
				    arr[iter]=temp[k_iter];
				    //cout<<temp[k_iter]<<" ";
				    k_iter++;
			 }
			 //cout<<endl;
}
