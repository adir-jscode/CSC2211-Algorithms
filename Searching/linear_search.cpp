#include<iostream>
using namespace std;
//Best Case : O(1)
//Worst Case : O(n)
//Average case : All Cases / No of Case = O(n+1/2)

int main()
{
    int n;
    cout<<"Enter a number to Search :";
    cin>>n;
    int A[] = {2,3,4,5,6,7};
    int flag =0;
    for(int i=0;i<5;i++)
    {
        if(A[i] == n)
        {
            cout<<n<<" Found at Index "<<i;
            flag ++;
            break;
        }
    }
    if(flag == 0)
    {
        cout<<"Data not found";
    }
}