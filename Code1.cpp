//question link https://www.codechef.com/APRIL21C/problems/BOLT
//https://www.codechef.com/viewsolution/44388408
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float k1,k2,k3,v;
	    cin>>k1>>k2>>k3>>v;
	    float speed = k1*k2*k3*v;
	    float time = (int)((10000/speed)+0.5);
	    time = (float)(time/100);
	    //cout<<time<<endl;
	    int ans = time*100;
	    if(ans>=958)
	    {
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}
