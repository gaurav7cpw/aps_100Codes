#include<iostream>
using namespace std;

void reverse(int x)
{
    int f;
    f = x;
    int count;
  while(3 <= f)
	   {if (f%2 == 1)
          {count++;}
          f = f/2 ;
          cout<<f<<endl;
	   }  
  cout<<count+1<<endl;
  count= 0;
}

int main()
{
int n;
cin>>n;
while(n--){
  int x;
  cin>>x;
 reverse(x);}
  return 0;
}

