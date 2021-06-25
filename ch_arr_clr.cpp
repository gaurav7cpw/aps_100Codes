#include<iostream>
#include<stdio.h>
 using namespace std;
main ()
{
  char str[400];
  cin>>str;
  cout<<str<<"\n";
  int i=0;
  while(str[i] != '\0')
   {
     str[i] = 0;
     i++;
   }
cout<<"task completed\n";
  cout<<str;
  cin>>str;
cout<<str;
}

