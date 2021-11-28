#include <stdio.h>
int min(int mat[10][10] ,int i,int j,int k){
    if(mat[i][j]==0 && (mat[i][k]==0 || mat[k][j]==0))
    return 0;
    if((mat[i][k]==0|| mat[k][j])==0)
    return mat[i][j];
    if(0== mat[i][j])
    return mat[i][k] + mat[k][j];
    if(mat[i][k] + mat[k][j] < mat[i][j])
    return mat[i][k] + mat[k][j];
    return mat[i][j];
}
int fix(int mat[10][10]){
for (int k = 0; k < 10; k++) {
    for (int i = 0; i < 10; i++) {
      for (int j = 0; j < 10; j++) {
        mat[i][j] = min(mat,i,j,k);
      }
    }
  }
    return 0;
}
int A(int mat[10][10]){
    for (int i = 0;i<10;i++){
         for (int j = 0;j<10;j++){
            int d;
            scanf("%d",&d);
            mat[i][j]=d;
    } 
    }
    fix(mat);
    return 0;
}
int B(int mat[10][10])
{   int i,j;
    scanf("%d%d",&i,&j);
    if(mat[i][j]>0)
    printf("True\n");
    else
    printf("False\n");
    return 0;
}
int C(int mat[10][10])
{
    int i,j;
    scanf("%d%d",&i,&j);
    if(mat[i][j]>0)
    printf("%d\n",mat[i][j]);
    else
    printf("-1\n");
    return 0;
}
