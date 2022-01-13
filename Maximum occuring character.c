#include <stdio.h>
#include<string.h>
int main()
{
    char string[20],result;
    int i,len,max=0,count=0;
    printf("Enter the string: ");
    scanf("%s",string);
    len = strlen(string);
    int array1[300] = {0};
    for (i=0;i<len;i++){
        array1[string[i]]++;
    }
    for(i=0;i<len;i++){
        if (max<array1[string[i]])
        {
            max = array1[string[i]];
            result=string[i];
        }
    }
    printf("%c",result);
    
}


