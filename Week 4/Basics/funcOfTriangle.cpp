#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void trianglePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;

    cin>>n;

    trianglePattern(n);
    trianglePattern(n+1);
    trianglePattern(n+2);
    return 0;
}