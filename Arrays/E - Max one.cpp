#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxx=0;
    
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[maxx])
        {
            maxx=i;
        }
    }
   cout<<maxx;
  
    return 0;
}
