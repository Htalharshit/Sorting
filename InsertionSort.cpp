#include<iostream>
using namespace std;
void DisplayArr(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void InsertionSort(int arr[],int n)
{
    int temp,j;
    for(int i=1;i<n;i++){
        temp=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    DisplayArr(arr,n);
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    InsertionSort(arr,n);
    return 0;
}
