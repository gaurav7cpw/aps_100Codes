//https://www.codechef.com/APRIL21C/problems/SDICE
//https://www.codechef.com/viewsolution/44399978
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int count=0;
	    if(n<=4)
	    {
	        if(n == 0)
	        {
	            count = 0;
	        }
	        if(n == 1)
	        {
	            count = 20;
	        }
	        if(n == 2)
	        {
	            count = 36;
	        }
	        if(n == 3)
	        {
	            count = 51;
	        }
	        if(n == 4)
	        {
	            count = 44 + 16;
	        }
	    }
	    else
	    {
	        long long int l = n/4;
	        count = count+(11*l*4);
	        int r = n%4;
	        if(r==1)
	        {
	            count = count + 20 + 12;
	        }
	        else if(r==2)
	        {
	            count = count + 36 + 8;
	        }
	        else if(r==3)
	        {
	            count = count +  55;
	        }
	        else if(r==0)
	        {
	            count = count + 16;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
