long long sumOfSeries(long long n) {
        if(n==0) return 0;
        if(n==1) return 1;
        
        return n*n*n + sumOfSeries(n-1);
    }