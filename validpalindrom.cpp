//CHECK GIVEN CHARACTER IS A PALINDROM OR NOT
#include<iostream>
using namespace std;

// Function to get the length of the string
int getLength(char arr[]) {
    int length = 0;
    while (arr[length] != '\0') {
        length++;
    }
    return length;
}

//FUNCTION DEFINE 
bool checkpalindrom(char arr[],int n){
int len= getLength (arr);
int i=0;
int j=len-1;
while(i<=j){
    if(arr[i]==arr[j])
    {
        i++;
        j--;
    }
    else{
        return false;
    }
}
return true;

}

int main()
{
    char arr[1000];
    cin>>arr;
//FUNCTION CALLING 
    bool ans=checkpalindrom(arr,1000);
    cout <<ans;
    return 0;
}
