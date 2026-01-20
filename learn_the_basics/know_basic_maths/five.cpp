int number = 0;
int x=n;
while(n){
    int digit = n%10;
    n=n/10;
    number+= digit*digit*digit;
}
if(number==x){
    return true;
}
return false;
