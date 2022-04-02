#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr,int si,int ei)
{
   
    int pivot = arr[si];
    int cnt = 0;
    for(int i = si+1;i<=ei;i++)
    {
        if(arr[i]<=pivot)
        {
            cnt++;
        }
    }
    int pivindex = si+cnt;
    arr[si] = arr[pivindex];
    arr[pivindex] = pivot;


    int i = si;
    int j = ei;

    while(i<pivindex and j>pivindex)
    {
        if(arr[i]<pivot)
        {
            i++;
        }
        else if(arr[j]>pivot)
        {
            j--;
        }
        else
        {
            swap(arr[i],arr[j]);
            j--;
            i++;
        }
    }
    return pivindex;



}

void quicksort(vector<int> &arr,int si,int ei)
{
    if(si>=ei)
    {
        return;
    }

    int c = partition(arr,si,ei);
    quicksort(arr,si,c-1);
    quicksort(arr,c+1,ei);

}


int main()
{
    vector<int> arr={5,4,3,2,1,100,999,12,6,7};
    quicksort(arr,0,arr.size()-1);
    for(auto it:arr)
    {
        cout<<it<<" ";
    }
}