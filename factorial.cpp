#include <bits/stdc++.h>
using namespace std;
long getfactorial(int n){
    //base case
    if(n==0 || n==1){
        return 1;
    }
    
    // recursion call
    long long recAns=getfactorial(n-1);
    long long finalAns=n*recAns;
    return finalAns;
    
}

int main() {
	// your code goes here
	//  int t;
    // cin >> t;
    
    // while (t--) 
    // {
        int n;
        cin >> n;
        long long fact=getfactorial(n);
        cout<<fact<<endl;
    // }
return 0;
}