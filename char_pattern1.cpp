#include <iostream>
using namespace std;
int sem;
void change_zero()
{ sem =0;
}
void change_one()
{ sem = 1;
}
void print()
{
    if(sem == 0)
      {cout<<"*";
       sem = 1;}
    else if(sem == 1)
      {cout<<".";
       sem = 0;}
}
int main() {
	
	// your code here
    sem = 0;
    int l;
    int i = 0;
    cin>>l;
    while(l > i)
    {   int rf, cf;
        int ri , ci ;
        cin>>rf;
        cout<<" ";
        cin>>cf;
        for(ri = 0; ri<rf;ri++)
          {   
             if (ri == 0)
              { change_zero();}
             else if (ri == 1)
              { //change_one();}
                sem = 1;}
              else if (ri%2 == 0)
              { change_zero();}               
              else {change_one();}
                for(ci = 0; ci<cf;ci++)
                    {
                      print();                
                    }
                
            cout<<"\n";
          }  
    	i++;
        sem = 0;
    }
	return 0;
}
