#include <stdio.h>

int n;
int k;
int A[100000];

int p(int x){
    int j=0;
    int sum=0;
    int i;
    for(i = 0; i < n; i++){
      sum=sum+A[i];
      if(A[i]>x){
          return 0;
      }
      else if(sum>x){
          sum=A[i];
          j=j+1;
      }
  }
  return j<k;
}


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
  }
  
  lb=0;
  ub=10000;
  while(ub-lb>1){
      int m=(lb+ub)/2;
      if(p(m)==1){
          ub=m;
      }
      else{
          lb=m;
      }
  }
  printf("%d\n", ub);
  return 0;
}