#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
}
int main(){
    cout<<gcd(18,12)<<endl;
    cout<<gcd(12,18)<<endl;
    cout<<"LCM"<<" "<<(12*18)/gcd(12,18)<<endl;
    cout<<gcd(gcd(12,18),20)<<endl;
}
