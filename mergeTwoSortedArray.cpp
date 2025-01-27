#include<iostream>
#include<vector>
using  namespace std;
void  mergeArry(vector<int> &arr1,int n1,vector<int> &arr2,int n2,vector<int> &Arr)
{
    //es problem ke liye two pointer ka use krenge 
    //i -> for arr1 
    //j -> for arr2
    //dono arr me check kr lenge ki kaun sa element small h and then usko Arr me push kr denge 
    
    int i=0;
    int j=0;
    while (i<n1 && j<n2)
    {
        if(arr1[i]>arr2[j])
        {
            Arr.push_back(arr2[j]);
            j++;
        }
        else
        {
            Arr.push_back(arr1[i]);
            i++;
        }
    }

    //may be both array me elements remaining ho 
    // to es case me hm sare element ko Arr me push kr denge 

    // if arr1 me remaining element ho
    while(i<n1)
    {
        Arr.push_back(arr1[i]);
        i++;
    }
    // if arr2 me ramaining element ho 
    while (j<n2)
    {
        Arr.push_back(arr2[j]);
        j++;
    }
}

int main()
{
    vector<int> arr1={10,20,30,40,50};
    int n1=5;
    vector<int> arr2={1,11,22,33,44,55};
    int n2=6;

    vector<int> Arr;
    mergeArry(arr1,n1,arr2,n2,Arr);
    for(auto i:Arr)
    {
        cout<<i<<" ";
    }
    return 0;
    
}