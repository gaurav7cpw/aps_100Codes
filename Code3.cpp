//https://www.codechef.com/APRIL21C/problems/SSCRIPT
//https://www.codechef.com/viewsolution/44390545
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int l,k;
	    cin>>l>>k;
	    string s;
	    cin>>s;
	    int count=0;
	    int flag = 0;
	    for(int i=0;i<l;i++)
	    {
	        if(s[i]=='*')
	        {
	            count++;
	        }
	        else
	        {
	            count =0;
	        }
	        
	        if(count==k)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
