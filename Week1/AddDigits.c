

int addDigits(int n){
int sum=0,remainder;
int i;

while (n != 0)
{
    remainder = n % 10;
    n  = n / 10;
    sum = sum + remainder;
}

while(sum>9)
{
    remainder = sum%10;
    sum= sum/10;
    sum= sum+remainder;
}
return sum;
}