//https://www.codechef.com/MAY21C/problems/SOLBLTY
//https://www.codechef.com/viewsolution/46269790
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    int ans = a + (100 - x)*b ;
	    cout<<ans*10<<endl;
	}
	return 0;
}
