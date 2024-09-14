#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int n; cin>>n;
    bool flag=false;
    for(int i=2;i*i <= n;i++){
        if(n%i == 0) flag=true;
    }
    if(flag) cout<<"Not prime\n";
    else cout<<"Prime\n";
    return 0;
}
