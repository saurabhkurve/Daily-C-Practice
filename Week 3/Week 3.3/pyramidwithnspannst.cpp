#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // int nsp =  n-1;
    // int nst = 1;
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=nsp;j++){
    //         cout<<" ";
    //     }
    //     nsp--;
    //     for(int k=1;k<=nst;k++){
    //         cout<<"*";
    //     }       
    //     nst+=2;
    //     cout<<endl;

    // }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}