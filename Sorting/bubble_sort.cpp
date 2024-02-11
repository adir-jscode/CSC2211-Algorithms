#include<iostream>
using namespace std;
//Best Case: O(n)
//Average Case: O(n^2)
//Worst Case: O(n^2)
void bubble_sort(int A[],int n)
{
    for(int i=0;i<n-1;i++) //number of iterations
    {
        int flag = 0;
        for(int j=0;j<n-1-i;j++) //number of comparisons
        {
            if(A[j]>A[j+1])
            {
                int temp = A[j];
                A[j] = A[j+1];
                A[j+1] = temp;
                flag=1;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
}

int main()
{
    
    int A[] = {5,4,3,2,1};
    int n = 5;
    bubble_sort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
    return 0;

}