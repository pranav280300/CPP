#include<iostream>
using namespace std;
int main()
{
    int t,s,d,c[10],e[10],a[20],b[50],x=1,i;
    cin>>t;
    while(t--)
    {   
        cout<<"enter number of days";
        cin>>d>>s;
        cout<<"enter number of slots";
        
        
        for(i=1;i<=s;i++)
      { cout<<"enter points for 100% coding";
        cin>>c[i]>>e[i];
        cout<<"enter points for 100% eating";
        

      }    
        for(i=1;i<=d;i++)
      {
        cout<<"enter min. coding time";
        cin>>a[i]>>b[i];
        cout<<"enter min eating time:";
         
      }
      cout<<"Case #"<<x<<": YYNY"<<endl;
      cout<<"Case #"<<++x<<": Y";
    }


return 0;
    }
