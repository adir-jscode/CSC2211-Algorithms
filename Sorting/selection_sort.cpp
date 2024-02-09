#include<iostream>
using namespace std;

void Selection_Sort(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            {
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
}


int main()
{
    
    int A[] = {9,13,15,11,2};
    int n = 5;
    Selection_Sort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;

}