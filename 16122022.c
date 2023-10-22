/*The program will recieve 3 English words inputs from STDIN
These three words will be read one at a time, in three separate line
The first word should be changed like all vowels should be replaced by %
The second word should be changed like all consonants should be replaced by #
The third word should be changed like all char should be converted to upper case
Then concatenate the three words and print them
Other than these concatenated word, no other characters/string should or message should be written to STDOUT
For example if you print how are you then output should be h%wa#eYOU.
You can assume that input of each word will not exceed more than 5 chars 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() 
{
    char str1[6], str2[6], str3[6];
    int i;
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);
    if(strlen(str1)<=5 && strlen(str2)<=5 &&strlen(str3)<=5)
    {
        for(i=0; i<strlen(str1) ; i++)
        {
            if(str1[i]>=65 && str1[i]<=90)
            {
                if(str1[i]=='A' || str1[i]=='E' || str1[i]=='I' || str1[i]=='O' || str1[i]=='U')
                    str1[i]='%';
                else 
                    continue;
            }   
            else if(str1[i]>=97 && str1[i]<=122)
            {
                if(str1[i]=='a' || str1[i]=='e' || str1[i]=='i' || str1[i]=='o' || str1[i]=='u')
                    str1[i]='%';
                else 
                    continue;
            }    
            else 
                exit(0);        
        }
        for(i=0; i<strlen(str2); i++)
        {
            if(str2[i]>=65 && str2[i]<=90)
            {
                if(str2[i]!='A' && str2[i]!='E' && str2[i]!='I' && str2[i]!='O' && str2[i]!='U')
                    str2[i]='#';
                else 
                    continue;
            }
            else if(str2[i]>=97 && str2[i]<=122)
            {
                if(str2[i]!='a' && str2[i]!='e' && str2[i]!='i' && str2[i]!='o' && str2[i]!='u')
                    str2[i]='#';
                else 
                    continue;
            }
            else
                exit(0);
        }
        for(i=0; i<strlen(str3); i++)
        {
            if(str3[i]>=65 && str3[i]<=90)
                continue;
            else if(str3[i]>=97 && str3[i]<=122) 
                str3[i]=str3[i]-32;
            else
                exit(0);
        }
        strcat(str1, str2);
        strcat(str1, str3);
        printf("%s\n", str1);
        return 0;
    }
    else
        return 0;   
}