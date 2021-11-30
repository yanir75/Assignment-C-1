#include <stdio.h>
#include "my_mat.h"
int main()
{
    int mat[10][10];
    char ch ='x';
    while(ch!='D')
    {
    scanf("%c",&ch);
    if(ch=='A')
    create_mat(mat);
    if(ch=='B')
    path_exist(mat);
    if(ch=='C')
    shortest_path(mat);
    }
    return 0;
}

