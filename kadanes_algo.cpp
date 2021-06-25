#include<iostream>
using namespace std;
int a[100];
int find_sum(int s,int i)
{
  int b;
  int sums = 0;
  b = s;
for(b =s;b<=i;b++)
  {
    sums = sums + a[b];
  }
 
}
main()
{
int s,e;
int sum_max,sum=0; 
int n,x;
cout<<"enter total number of elements"<<endl;
cin>>n;
cout<<"\nenter elements";
for(int i =0;i<n;i++)
 {
   cin>>a[i];
   cout<<"\n";
 }
int i = 0;
s= 0;
e= -1;
sum_max = a[0];
while(i<n)
  {
    i++;
    sum = find_sum(s,i);
    if (sum < 0)
       {
        i++;
        s = i+1;
	sum_max = a[s];
       }
     else if (sum > sum_max)
       {
         sum_max = sum;
       }
  }
 cout<<"the maximum sum is"<<sum_max<<endl;
}
