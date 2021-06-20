//https://www.codechef.com/MAY21C/problems/LKDNGOLF
//https://www.codechef.com/viewsolution/46278910
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,k;
	    cin>>n>>x>>k;
	    int flag = 0;
	    if(x%k==0)
	    {
	        cout<<"YES"<<endl;
	        flag = 1;
	    }
	    if(flag == 0)
	    {
	        if((n+1-x)%k==0)
	        {
	            cout<<"YES"<<endl;
	            flag = 1;
	        }
	    }
	    if(flag == 0)
	    {
	        cout<<"NO"<<endl;
	    }
	    
	}
	return 0;
}
