#include <stdio.h>

int n;
int k;
int A[100000];


int main(){
  int i, lb, ub;
  scanf("%d%d", &n, &k);
  for(i = 0; i < n; i++){
    scanf("%d", &A[i]);
    }
  lb=0;
  ub=100000;
  int m=(lb+ub)/2;
  while(ub-lb>0){
  if(A[m]>k){
    m=m/2;
  }
  else if(A[m]<k){
    m=m+m/2;
  }
  else{
    ub=lb=m;
  }
   }
   printf("%d¥n",ub);
   return 0;
  }