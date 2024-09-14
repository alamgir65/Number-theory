#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool is_prime[1000001];
int main(){
    int mxN = 1000001;
    for(int i=2;i<=mxN;i++) is_prime[i]=true;
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i <= mxN; i++){
        if(is_prime[i]){
            for(int j=i*i; j<= mxN; j += i){
                is_prime[j]=false;
            }
        }
    }
    int n; cin>>n;
    if(is_prime[n]) cout<<"Prime\n";
    else cout<<"Not prime\n";
    return 0;
}
