#include <stdio.h>
int n, i, j = 0, k=0, p, q, s, x, a, size, per[100], prm[1000], rng[1000];
int  main(){
  
    scanf("%d",&x);
    
    perfect (x);    
    prime(x);
    
    printf("");
        for(i = 0; i <(j-1); i++){
            p = per[i];
            q = per[i+1];
            printf("\n");
            printf("%d - %d : ", p, q);
            n = 0;
            size = 0;
            while(1) {
                if (p <= prm[n]){
                    if (q >= prm[n]){
                        rng[n] = prm[n];
                        size++;
                    }
                    else if (q <= prm[n]) {
                        break;
                    }
                }
                n++;
            }
            printf("%d  ", size);
        }
}

int perfect (int x) {
    for(n=0;n<=x;n++){
    i=1;
    s = 0;
    while(i<n){
      if(n%i==0)
           s=s+i;
          i++;
    }
    if(s==n) {
      per[j] = n;
      j++;
    }
  }
}

int prime(int x) {
    n = 0;
    while (n <= x) {
      a = 0;
      
      if (n <= 1) {
         ++n;
         continue;
      }

      for (i = 2; i <= n / 2; ++i) {

         if (n % i == 0) {
            a = 1;
            break;
         }
      }

      if (a == 0) {
        prm[k] = n;
        k++;
      }
      ++n;
   }
}
