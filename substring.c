#include <stdio.h>
#include <string.h>

int main()
{
char string[] = ("my_name_is_edcast_future_skills");
char delimeter[] = ("_");

char *str = strtok(string,delimeter);
while(str!= NULL)
 {
   printf("\"%s\"\n",str);
   str = strtok(NULL,delimeter);
 }
 printf("\n\n************Enter a sentence with words seperated by '_'**************\n\n");
char userinput[50];   //enter a sentence spaced by '_' instead of whitespace
gets(userinput);
char *p =strtok(userinput,delimeter);

while(p!= NULL)
 {
   printf("\"%s\"\n",p);
   p = strtok(NULL,delimeter);
 }
 return (0);
}
