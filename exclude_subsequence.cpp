#include<iostream>
using namespace std;
void print_subsequence(string str,int i,string output)
{
    //base case
    if(i==str.length())
    {
        cout <<output<<endl;
        return ;
    }

    //recursive case
    //include
    print_subsequence(str,i+1,output+str[i]);

    //excude
    print_subsequence(str,i+1,output);

}
int main()
{
    string str="abcd";
    int index=0;
    string output="";
    print_subsequence(str,index,output);
return 0;
}