#include<bits/stdc++.h>
using namespace std;



void total( int prd,int count,int n){
    
    if(count==n+1){
        cout<<prd<<endl;
        return;
    }
    prd=prd*count;
    total(prd,count+1,n);
    
    

}

int main(){
    int n;
    cin>>n;
    
    cout<<endl;
    total(1,1,n);
    return 0;
}    