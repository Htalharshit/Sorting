#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
void DisplayArr(int arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}
void SelectionSort(int arr[],int n)
{
    int index,temp;
    for(int i=0;i<n-1;i++){
        temp=arr[i];
        index=i;
        for(int j=i+1;j<n;j++){
            if(temp>arr[j]){
                temp=arr[j];
                index=j;
            }
        }
        swap(&arr[i],&arr[index]);
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
    SelectionSort(arr,n);
    return 0;
}
