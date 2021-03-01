#include<iostream>
using namespace std;
void Merge_(int arr[],int l,int m,int r)
{
    int n1=m-l+1,n2=r-m;
    int L[n1],R[n2],i=0,j=0,k=l;
    while(i<n1)
            L[i++] = arr[k++];
    while(j<n2)
            R[j++] = arr[k++];
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<R[j])
                arr[k++] = L[i++];
        else
                arr[k++] = R[j++];
    }

    while(i<n1)
        arr[k++] = L[i++];
    while(j<n2)
        arr[k++] = R[j++];
}
void MergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m = (l+r)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge_(arr,l,m,r);
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
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
	cin>>arr[i];
    MergeSort(arr,0,n-1);
    DisplayArr(arr,n);
    return 0;
}
