#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char keyword[32][10]={"auto","double","float","long","switch","case","while","enum","register","typedef","sizeof","short","unsign","continue","for","if","goto","void"};
    char str[10];
    int i, flag=0;
    printf("Input a string : ");
    gets(str);
    for(i=0; i<32;i++)
    {
        if(strcmp(str,keyword[i])==0)
        {
            flag=1;
        }
    }
    if(flag==1)
        printf("%s is a Keyword",str);
    else
        printf("%s is not a Keyword", str);
    return 0;
}
