#include<bits/stdc++.h>
using namespace std;



void print( int count,int n){
    
    if(count==n+1){
        return;
    }
    cout<<count<<endl;
    
    print(count+1,n);

}

int main(){
    int n;
    cin>>n;
    
    cout<<endl;
    print(1,n);
    return 0;
}    