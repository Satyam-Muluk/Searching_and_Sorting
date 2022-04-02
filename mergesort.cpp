#include<bits/stdc++.h>
using namespace std;



void merge(vector<int> &arr,int si,int ei)
{
    int newsize = ei-si+1;
    int output[newsize];
    
    int i = si;
    int mid = si+(ei-si)/2;
    int j = mid+1;
    int k = 0;
    while(i<=mid and j<=ei)
    {
        if(arr[i]<=arr[j])
        {
            output[k++] = arr[i++];
        }
        else
        {
            output[k++] = arr[j++];
        }
    }

    while(i<=mid)
    {
        output[k++] = arr[i++];
    }
    while(j<=ei)
    {
        output[k++] = arr[j++];
    }
     
    int m = 0;
    for(int i = si;i<=ei;i++)
    {
       arr[i] = output[m++];
    }


}


void mergesort(vector<int> &arr,int si,int ei)
{
    if(si>=ei)
    {
        return;
    }

    int mid = si+(ei-si)/2;
    mergesort(arr,si,mid);
    mergesort(arr,mid+1,ei);
    merge(arr,si,ei);
}

int main()
{
    vector<int> arr={5,4,3,2,1,100,999,12,6,7};
    mergesort(arr,0,arr.size()-1);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}