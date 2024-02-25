int paperwork(int n, int m){
    if (n < 0 || m < 0){
      return 0;
    } else {
      return m * n;
    }
}

int paperwork(int n, int m){
    return n < 0 || m < 0? 0 : m*n;
}