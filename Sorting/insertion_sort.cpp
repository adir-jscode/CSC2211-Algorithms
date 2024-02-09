#include<iostream>
using namespace std;
//Best Case: O(n)
//Average Case: O(n^2)
//Worst Case: O(n^2)
void Insertion_Sort(int A[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = A[i];
        int j=i-1;
        while(j>=0 && A[j]>temp)
        {
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}

int main()
{
    int A[] = {43,31,26,29,12};
    int n = 5;
    Insertion_Sort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;
}