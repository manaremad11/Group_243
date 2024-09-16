// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;                //5
    int a[n];             //0--->4
    int freq[n+1] = {0};    //5
    for(int i=0;i<n;i++)
    {
        cin>>a[i];   // 1 3 2 1 4
       freq[a[i]]++; 
        
    }
    int cnt=0;
    for(int i=0;i<n;i++)
    {
       if(freq[i]>0)
       {
           cnt++;
       }
    }
    cout<<cnt<<endl;
    
}
