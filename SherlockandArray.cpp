#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n,found=0;
        cin>>n;
        int a[n];
        long sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        long currsum=0;
        if(n>1){
        for(int i=0;i<n-1;i++){
                currsum+=a[i];
            if(currsum==(sum-a[i+1])/2){
                cout<<"YES\n";
                found=1;
                break;
            }
        }
        
        if(!found)
        cout<<"NO\n";
       }  
        else
            cout<<"YES\n";
    }
    return 0;
}
