#include <stdio.h>
void main()
{
  int arr[2][2],i,j;
  printf("enter the element of 2x2 matrix\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      scanf("%d",&arr[i][j]);
    }
  }
  printf("the matrix is\n ");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
      printf("%d",arr[i][j]);
    }
printf("\n");
  }

}
