//https://www.codechef.com/APRIL21C/problems/SOCKS1
//https://www.codechef.com/viewsolution/44389573
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b || b==c || a==c)
	{
	    cout<<"Yes"<<endl;
	}
	else 
	{
	    cout<<"No"<<endl;
	}
	return 0;
}
