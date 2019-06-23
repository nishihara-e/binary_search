#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int m=0;
    int i;
    for(i = 0; i < n; i++){
        m=m+A[i]/x;
    }
    return m>=k;
}

int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }

  ub=10000;
  int max=A[0];
  for(i = 1; i < n; i++){
      if(A[i]>max){max=A[i];}
  }
  lb=max/k;

  while(ub-lb>1){
   int m=(lb+ub)/2;
    if(p(m)==1){
       lb=m;
   }
    else{
       ub=m;
   }
  }
  printf("%d\n", lb);
  return 0;
}