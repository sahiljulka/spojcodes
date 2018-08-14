#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    bool flag=true;
    while(cin>>a){
        if(a==42)
            flag=false;

        flag?cout<<a<<endl:cout<<"";
    }
}
