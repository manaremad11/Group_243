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
                       
    bool p= false;               
    for(int i=0;i<n;i++)        
    {                           
        if(a[i]==a[n-1])       
        {                     
          p=true;
           
        }                      
        n--;
    }
    if(p)
    {
        cout<<"yes";
    }
    else
    cout<<"no";
  
    return 0;
}
