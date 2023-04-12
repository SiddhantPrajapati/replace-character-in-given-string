//replace character in given string
#include<stdio.h>
#include<conio.h>
void main()
{
    char ch1,ch2,str[20];
    int i,f;
    printf("enter the string\n");
    gets(str);
    printf("\n enter the character that you want to replace:");
    ch1=getche();
    printf("\n enter the new character:");
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
        printf("\n character is available in string\n");
        printf("\n new string is\n %s",str);
    }
    else
        printf("character is not available in given string.");

}
