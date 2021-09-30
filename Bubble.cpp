//Bubble Search by 202115
#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
    for (int i=0; i<n-1; i++)
    {
       if (arr[i] > arr[i+1])
       {
         int temp=arr[i+1];  
            arr[i+1]=arr[i];
            arr[i]=temp;   
       }      
    }    
    bubbleSort(arr, n-1);
}
int main()
{
    int n;
    cout<<"Enter your array size"<<endl;
    cin>>n;         
    int arr[n];
    cout<<"Enter your array elements"<<endl;
    for(int i=0;i<n;i++)      
    {
        cin>>arr[i];
    }
    bubbleSort(arr,n);
   for(int i=0;i<n;i++)  
   {
       cout<<arr[i]<<" ";
   }
    return 0;
}