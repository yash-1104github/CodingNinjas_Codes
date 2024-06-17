long reverseBits(long n) {
   long decimal=0;

    int power=31;

    while(n>0) {

        int bit=n%2;

        decimal=pow(2,power)*bit+decimal;

        n=n/2;

        power--;

    }

    return decimal;
}
