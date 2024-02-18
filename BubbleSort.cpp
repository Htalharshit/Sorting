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
void BubbleSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
                swap(&arr[j],&arr[j+1]);
        }

    }
    DisplayArr(arr,n);

}
int main()
{
    int n,i;
    cin>>n;
    int arra[n];
    for(i=0;i<n;i++)
        cin>>arra[i];
    BubbleSort(arra,n);
    return 0;
}
