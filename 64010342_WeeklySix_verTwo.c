#include<stdio.h>
int xyz(char *p,int i,int j,int k){
    
    if (j<=i)
    {       
        if (k>=j)
        {
            printf("%c",*(p-k));
            xyz(p,i,j,k-1);
        }
        else {
            k=i;
            printf("\n");
            xyz(p,i,j+1,k);
        }
    }
    return 0;    
}
int main(){
    char str[100],*p,*q;
    p = str;
    int i=0,j=1,k;
    scanf("%s",str);
    printf("Input : %s\n",str);
    printf("Output : ");
    while (*p != '\0')
    {
        p++;
        i++;  
    }
    k=i;
    xyz(p,i,j,k);
}
