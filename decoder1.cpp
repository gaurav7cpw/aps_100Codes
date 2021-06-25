#include<iostream>
#include<stdio.h>
using namespace std;

/*void comma_delimiter(char arr[])
{
  cout<<"value passed";
  int i;//to itterate the string 
   while(arr[i] != '\n')
   {  
    char part[400];
    int j = 0;
    while(arr[i] != ',')
      {
          part[j] = arr[i] ;
          j++;
          i++;
      }
    printf("%s\n",part);
    i++;
   }
}*/
main()
{
  char arr[400];
  int i = -1;
  scanf("%s",arr);
 // comma_delimiter(arr);
do
   {      i++;
    char part[400];
    int j = 0;
    while(arr[i] != ',' && arr[i] != '\0')
      {
          part[j] = arr[i] ;
          j++;
          i++;
      }
    printf("%s\n",part);
      int t = 0;
       while(part[t] != '\0')
   {
     part[t] = 0;
     t++;
   }

   }while(arr[i] != '\0' );
}

