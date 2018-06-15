#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,j,ans=0,sum=0,x,y;
    cin>>n;
    string a,b;
    cin>>a;
    cin>>b;
    for(i=0,j=0; a[i]!=0,b[j]!=0; i++,j++)
    {
        ans=0;
        ans=abs(a[i]-b[j]);
        if(ans<=5)
            sum+=ans;
        if(ans>5)
        {
            ans=10-ans;
            sum+=ans;
        }
        /// cout<<ans<<endl;
        /*  else
          {
              x=abs(a[i]-'0');
              if(x>5)
                  x=10-x;
              y=abs('9'-b[j]);
             // if(y>5)
             //     y=9-y;
              ans=x+y+1;
              sum+=ans;

          cout<<x<<" "<<y<<" "<<ans<<endl;
          }*/
    }
    cout<<sum<<endl;


}
