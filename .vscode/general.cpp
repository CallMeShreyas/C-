#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    int f=1;
    for(int i=1;i<=n;++i){
        f=f*i;
    }
    return f;
}

void isPrime(int n){
    int flag=1;
    for(int i=2;i<n;++i){
        if(n%i == 0){
            flag=0;
        }
    }
    if(flag==1){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }
}

int main(){
    int n;
    cin>>n;
    
    // int fac = fact(n);
    // cout<<fac;

    // isPrime(n);

}