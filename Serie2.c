#include<stdio.h>
#include<string.h>

char str1[]="HalloWelt";
char str2[]="Ich";
char str3[]="?";
int  var=4711;
char str4[]="1234";
char str5[]="Der String %s hat keine Bedeutung";




int main(int argc, char * argv[]){


//   Str1 und Str2 zu einem String verbinden (Konkatinierung) ohne Nutzung von strcat() / strcpy()
int str1length = strlen(str1);
int str2length = strlen(str2);

int i, j;
char result[strlen(str1)+ strlen(str2)-1];

    for(i = 0; i < str1length; i++)
        result[i] = str1[i];
    
    for(i = str1length, j = 0; j < str2length; i++,j++)
        result[i] = str2[j];
    
printf("%s\n",result);


// Str1 und Str2 zu einem String verbindet (Konkatinierung) unter Nutzung von strcpy()
char result1[strlen(str1)+ strlen(str2)-1];
strcpy(result1, str1);
strcpy(&result1[strlen(str1)], str2);
printf("%s\n",result1);

// Str1 und str2 zu einem String verbinden (Konkatinierung) unter Nutzung von strcat()
char result2[(strlen(str1)+ strlen(str2))-1];
strcat(result2,str1);
strcat(result2,str2);
printf("%s\n", result2);

}