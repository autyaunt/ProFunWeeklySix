#include<stdio.h>
int main(){
    char str[100],*p,*q;
    p = str;
    int i=0,j=1,k;
    scanf("%s",p);

    while (*p != '\0')
    {
        p++;
        i++;  
    }
    // str range
    printf("Input : %s\n",str);
    printf("Output : ");
    while (j<=i)
    {
        k=i;
        while (k>=j)
        {
            printf("%c",*(p-k));
            k--;
        }
        printf("\n");
        j++;
    }
    return 0;
}
