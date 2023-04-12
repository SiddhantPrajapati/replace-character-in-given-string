//38.WAP to replace a character in given string.
#include<stdio.h>
#include<conio.h>
void main()
{
    char str[20],ch1,ch2;
    int i,f;
    printf("Enter string:");
    gets(str);
    printf("\n enter character to replace:");
    ch1=getche();
    printf("\n enter character with replace:");
    ch2=getche();
    for(i=0;str[i]!='\0';i++)
    {
        if(ch1==str[i])
        {
            str[i]=ch2;
            f=0;
            break;
        }
        else
            f=1;
    }
    if(f==0)
    {
        printf("\n character is replaced");
        printf("\n new string %s",str);
    }
    else
        printf("\n character is not available to replace");

}
