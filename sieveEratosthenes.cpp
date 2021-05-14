void sieve(int n, vector <bool> & isPrimeArray) {
    isPrimeArray[0] = false; isPrimeArray[1] = false;
    
    for(int i = 2; i*i < n; i++) {
        if(isPrimeArray[i])
            for(int j = i*2; j < n; j += i)
                isPrimeArray[j] = false;
    }
}
