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
    int minn=0;
    
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[minn])  
        {
            minn=i;   
        }
    }
   cout<<minn;
  
    return 0;
}
