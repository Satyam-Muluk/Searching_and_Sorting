#include<bits/stdc++.h>
using namespace std;


void bubble(vector<int> &arr)
{
     int n = arr.size();
     for(int i = 0;i<n-1;i++)
     {
         for(int j = 0;j<n-1-i;j++)
         {
             if(arr[j]>arr[j+1])
             {
                 swap(arr[j],arr[j+1]);
             }
         }
     }

}

int main()
{
    vector<int> arr={5,4,3,2,1};
    bubble(arr);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}