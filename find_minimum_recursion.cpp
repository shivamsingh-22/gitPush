#include<iostream>
using namespace std;
int min(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else{
        return b;
    }
}

void minINarray(int arr[],int size,int index,int &mini)
{
    //base case
    if(index==size)
    {
        return ;
    } 

    //recursive call
    mini=min(mini,arr[index]);
    minINarray(arr,size,index+1,mini);

}

int main()
{
    int arr[]={10,20,30,40,50};
    int size=5,index=0;
    int mini=arr[0];
    minINarray(arr,size,index,mini);
    cout <<"min no ->   "<<mini;
}