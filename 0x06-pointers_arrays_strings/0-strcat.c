#include <stdio.h>
#include <string.h>

int strlength();
int main(void)
{
       	strlength();
        return(0);

}

int strlength()
{
        char s1 [98] = "Hello ";
        char s2 [] = "World!\n";
        /*char *ptr;*/
        int l1,l2;
        int i;
        l1  = strlen(s1);
        l2 = strlen(s2);

 for (i=0; i<=7; i++)
        {
		s1[l1 + i] = s2[i];
        }
        // s1[strlen(l1)]= s2[i];
        /*printf("%s\n", s1);
        printf("%s",s2);
        ptr = strcat(s1,s2);
        printf("%s", s1);
        printf("%s", s2);
        printf("%s", ptr);*/
       
	 printf("%s", s1);
        /*return (s1);*/

}
