#include<iostream>
using namespace std;
//write a function for quick sort
//time complexity of quick sort = O(nlogn) , best case = O(nlogn), average case = O(nlogn), worst case = O(n^2)
int partition(int A[],int l,int h)
{
    int pivot = A[l];
    int i=l,j=h;
    do
    {
        do{i++;}while(A[i]<=pivot);
        do{j--;}while(A[j]>pivot);
        if(i<j)
        {
            int temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    }
    while(i<j);
    int temp = A[l];
    A[l] = A[j];
    A[j] = temp;
    return j;
}

int main()
{
    int A[] = {5,4,3,2,1};
    int n = sizeof(A)/sizeof(A[0]);
    int l=0,h=n;
    int j;
    j = partition(A,l,h);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}