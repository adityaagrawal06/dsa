#include<bits/stdc++.h>
using namespace std;



void reverseArray(vector<int> &arr) {
        // code here

        if(n>=arr.size()/2){
            for(int i=0;i<arr.size();i++){
               cout<<arr[i]<<" "; 
            }
            return;
        }
        int size = arr.size();
        int temp=arr[n];
        arr[n]=arr[size-1-n];
        arr[size-1-n]=temp;
        reverseArray(arr,n+1);
        
    }   

int main(){
    vector<int> arr=[1,4,3,2,6,5];
    reverseArray(arr,0);
    
}    