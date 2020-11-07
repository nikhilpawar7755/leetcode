

int mySqrt(int x){
   long int result = 1;
    long int i = 1;
    if (x == 0 || x == 1){
        return x;
    }
    while (result <= x ){
        i++;
        result = i * i;
    }
    return i-1;
}