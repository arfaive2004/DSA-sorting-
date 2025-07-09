#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    for(int i = 0; i<= n-2; i++)
    {
        int min = i;
        for(int j = i; j <= n-1; j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;

            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}
int main()
{
    int n;
    cout<<"Enter number";
    cin>>n;
    int arr[n];
    for(int i = 0; i<= n; i++)
    {
        cout<<"Enter number";
        cin>>arr[i];
    }
    selection_sort(arr, n);
    for(int k = 0; k<=n; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;

}