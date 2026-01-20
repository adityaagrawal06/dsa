#include<bits/stdc++.h>
using namespace std;



void total( int sum,int count,int n){
    
    if(count==n+1){
        cout<<sum<<endl;
        return;
    }
    sum+=count;
    total(sum,count+1,n);
    
    

}

int main(){
    int n;
    cin>>n;
    int sum=0;
    cout<<endl;
    total(sum,0,n);
    return 0;
}    