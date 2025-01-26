// find a number in the array by using binary search
// in this method we're assuming that the element of array is given in incresing order
// by usng this method time complexity is O(log n)
// so it is more optimal rather than using for loop or linear search 
// in this method we're using two pointer approch  

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    // int arr[6]={10,20,30,40,50,60};
    int n;
    cout <<"enter the length of array :"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array in ascending order : "<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout <<"enter the element for search : ";
    cin>>target;
    int s=0;
    int e=5;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        // mera target mid wale element se match ho gya to
        if(arr[mid]==target)
        {
            cout<<"target find at position :"<<mid;
            return true;
        }

        //jb target wala element mid wale element se small  ho
        //to left jana h 
        else if(arr[mid]>target)
        {
            e=mid-1;
        }

        //jb target wala element mid wale element se big ho
        //to right jana h
        else if(arr[mid]<target)
        {
            s=mid+1;
        }
        //s and e me change krne ki vajah se mid ko update krna hoga 
        mid=s+(e-s)/2;
    }

    // yha tk aane ka mtlb target nhi mila 
    cout<<"target is not found";
    return 0;
}