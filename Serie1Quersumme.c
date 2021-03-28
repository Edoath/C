#include <stdio.h>
#include <string.h>
 
int
 main(int argc,char *argv[]){
    char input[100];
    fgets(input,100,stdin); // schreibt den Standard input in das Array Input.

   int counter = 0;
   int result = 0;
   // Die Schleife addiert die Ziffernwerte auf für die Quersumme. 
   // -48 wird gerechnet um von Asci auf Dezimal zu kommen.
    int stringLenght = strlen(input);

   while(counter < stringLenght){
        result = result + (input[counter] - 48);
        counter++;
   }
 
    printf("Quersumme von %s ist %i.", input, result);

    return result;
}