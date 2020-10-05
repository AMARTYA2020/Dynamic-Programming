#include<bits/stdc++.h>
using namespace std;
int t[100][1000];
int solve(int arr[],int i,int j)
{
    if(i>=j)
    {
        return 0;
    }
    int min = INT_MAX;
    for(int k=i;k<j;k++)
    {
        int temp = solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
        if(min>temp)
        {
            min=temp;
        }

    }
    return min;

}
int main()
{
    int arr[]={40,30,20,30};
    int i=1,j=3;
    cout<<solve(arr,i,j);
    return 0;
}