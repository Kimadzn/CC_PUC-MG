#include <stdio.h>
#include <stdlib.h>

int isParImpar(int x) {
  if (x%2==0){
    printf("2 -- \n\n");
  }else{
    printf("1 -- \n\n");
  }
}


int main(void) {
  int n;
  int x;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
      scanf("%d", &x);
      system("cls");
      isParImpar(x);

  }
  
  return 0;
}