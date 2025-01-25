#include <iostream>
using namespace std;
int main()
{
	int a,i;
	cin >>a;
	for (i=1;i<=a;i++)
{
	if (a%i==0)
	cout <<"it is multiple of "<<i<<endl;
}
return 0;
}