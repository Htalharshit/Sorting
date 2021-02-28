#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int l,int h)
{
    int pivot=arr[h],i=l-1,j;
    for(j=l;j<h;j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[j]);
    return i+1;
}
void QuickSort(int arr[],int l,int h)
{
    if(l<h){
        int pivot=partition(arr,l,h);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,h);
    }
}
void DisplayArr(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    QuickSort(arr,0,n-1);
    DisplayArr(arr,n);
    return 0;
}
