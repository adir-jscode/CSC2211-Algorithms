#include<iostream>
using namespace std;

void counting_sort(int A[],int n)
{
    int max = A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]>max)
        {
            max = A[i];
        }
    }
    int *count = new int[max+1];
    for(int i=0;i<max+1;i++)
    {
        count[i] = 0;
    }
    for(int i=0;i<n;i++)
    {
        count[A[i]]++;
    }
    int i=0,j=0;
    while(j<max+1)
    {
        if(count[j]>0)
        {
            A[i++] = j;
            count[j]--;
        }
        else
        {
            j++;
        }
    }
}
int main()
{
    int A[] = {2,3,4,5,6,7,8,9};
    int n = 8;
    counting_sort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}