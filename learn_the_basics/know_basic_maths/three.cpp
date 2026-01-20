if(x<0){
    return false;
}
if(x==0){
    return true;
}
int reverse = 0;
int n=x;
while(x){
    reverse = reverse*10+(x%10);
    x=x/10;
}
if(reverse==x){
    return true;
}  