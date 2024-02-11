#include<iostream>
using namespace std;

int Binary_Search(int A[],int n,int data)
{
    int l,r,mid;
    l=0;
    r=n-1;
    
    while(l<=r)
    {
        mid=(l+r)/2;
        if(data == A[mid])
        {
            return mid;
        }
        else if(data>A[mid])
        {
            l = mid +1;
        }
        else
        {
            r = mid -1;
        }
    }
    return -1;
}

int main()
{
    //implement binary srarch
    int A[] = {2,3,4,5,6,7};
    int n = sizeof(A)/sizeof(A[0]);
    int data;
    cout<<"Enter a number to Search :";
    cin>>data;
    int result = Binary_Search(A,n,data);
    if(result == -1)
    {
        cout<<"Data not found";
    }
    else
    {
        cout<<data<<" Found at Index "<<result;
    }
    
    return 0;
}