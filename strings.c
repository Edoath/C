#include <stdio.h>
#include <string.h>

int main(int argc, char * argv[]){
    
//strcpy(zuErsetzenderString, Ersatz)
char a[30] = "Edo" ;
printf("%s\n", a);
strcpy(a,"Marius");
printf("%s\n", a);
//strcat(alterString, anzuhängender String)
char b[30] = "Marius";
printf("%s\n", b);
strcat(b, " Edo");
printf("%s\n", b);
//Stringlänge
printf("%s hat %d Buchstaben ", a, strlen(a));
//Stringvergleich

const char c[] = "Theresa";
const char d[] = "Theresa";

if (strcmp(a,d)){
        printf("\nTrue");
}else{
    printf("\nFalse");
}

//Substring suchen. Wenn gefunden Zeiger auf das erste Auftreten sonst NULL
printf(" %s", strstr(c, "esa"));
printf("\n");
//Character suchen. Wenn gefunden Zeiger auf das erste Auftreten sonst NULL
printf("%s", strchr(c, 'e'));
//String an Token aufsplitten
//printf("%s", strtok(a,'e'));



int test;

printf("%d", test);


}