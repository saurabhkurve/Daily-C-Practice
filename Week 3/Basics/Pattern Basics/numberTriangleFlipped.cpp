    //         1
    //       1 2
    //     1 2 3
    //   1 2 3 4
         
//  consider this as,
//    ---
//    --
//    -    

//      +


//    *
//    **
//    ***
//    ****

//    =

//    ---*
//    --**
//    -***
//    ****


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){ 
            cout<<" "<<" ";         
        }

        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}