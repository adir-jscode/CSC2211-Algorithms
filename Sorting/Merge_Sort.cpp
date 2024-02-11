//info about merge sort
//time complexity of merge sort = O(nlogn) , best case = O(nlogn), average case = O(nlogn), worst case = O(nlogn)
//Merge Sort is a Divide and Conquer Algorithm
//Merge Sort is applicable on both sorted and unsorted array
#include<iostream>
using namespace std;
void merge(int A[],int l,int mid,int h)
{
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid && j<=h)
    {
        if(A[i]<A[j])
        {
            B[k++] = A[i++];
        }
        else
        {
            B[k++] = A[j++];
        }
    }
    for(;i<=mid;i++)
    {
        B[k++] = A[i];
    }
    for(;j<=h;j++)
    {
        B[k++] = A[j];
    }
    for(int i=l;i<=h;i++)
    {
        A[i] = B[i];
    }
}

int main()
{
    int A[] = {2,3,4,5,6,7,8,9};
    int l=0,mid=3,h=7;
    merge(A,l,mid,h);
    for(int i=0;i<8;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}

