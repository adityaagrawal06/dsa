#include<bits/stdc++.h>
using namespace std;



void print(string name, int count, int n){
    if(count==n){
        return;
    }
    cout<<name<<endl;
   
    print(name,count+1,n);

}

int main(){
    int n;
    cin>>n;
    string name;
    cin>>name;
    cout<<endl;
    print(name,0,n);
    return 0;
}    