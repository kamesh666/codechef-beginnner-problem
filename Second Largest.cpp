#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b && a>c){
            if(b>c){
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
        }
        else if(b>c && b>a){
          if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
        }
        else {
            if(b<a){
                cout<<a<<endl;
            }
            else{
                cout<<b<<endl;
            }
        }
    }
}

