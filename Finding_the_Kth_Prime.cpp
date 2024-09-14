#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool is_prime[90000001];
vector<int> v;
void sieve_of_eratosthenes(){
    int mxN=90000001;
    for(int i=0;i<=mxN;i++){
        is_prime[i]=true;
    }
    is_prime[0]=is_prime[1]=false;

    for(int i=2; i*i<=mxN; i++){
        if(is_prime[i]){
            for(int j=i*i; j<=mxN; j += i){
                is_prime[j]=false;
            }
        }
    }
    for(int i=2;i<=mxN;i++) if(is_prime[i]) v.push_back(i);
}
int main(){
    sieve_of_eratosthenes();
    int q; cin>>q;
    while(q--){
        int n; cin>>n;
        cout<< v[n-1] << endl;
    }
    return 0;
}