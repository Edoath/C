#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char str1[] = "HalloWelt";
char str2[] = "Ich";
char str3[] = "?";
int var = 4711;
char str4[] = "1234";
char str5[] = "Der String %s hat keine Bedeutung";

int main(int argc, char *argv[])
{
    char input[2];
    fgets(input, 2, stdin);
    int aufgabe = atoi(input);
    int str1length = strlen(str1);
    int str2length = strlen(str2);
    int newLength = (str1length + str2length) + 1;

    switch (aufgabe)
    {
    //   Str1 und Str2 zu einem String verbinden (Konkatinierung) ohne Nutzung von strcat() / strcpy()
    case 1:
    {

        int i, j;
        char result[newLength];

        for (i = 0; i < str1length; i++)
            result[i] = str1[i];

        for (i = str1length, j = 0; j < str2length; i++, j++)
            result[i] = str2[j];

        printf("Lösung von Aufgabe %d: %s\n", aufgabe, result);
    }
    break;
    
    case 2:
    {

        // Str1 und Str2 zu einem String verbindet (Konkatinierung) unter Nutzung von strcpy()
        char result1[newLength]; //
        strcpy(result1, str1);
        strcpy(&result1[strlen(str1)], str2);
        printf("Lösung von Aufgabe %d: %s\n", aufgabe, result1);
        break;
    }

    case 3:
    {
        // Str1 und str2 zu einem String verbinden (Konkatinierung) unter Nutzung von strcat()
        char result2[newLength];
        strcat(result2, str1);
        strcat(result2, str2);
        printf("Lösung von Aufgabe %d: %s\n", aufgabe, result2);
        break;
    }

    case 4:
    {
        //Welche Bedeutung hat das n bei der strncpy()-Funktion. Lesen Sie sich dazu die
        //Man-Pages durch und überlegen sich, was dies bedeutet, wenn die Arraygröße von src größer, gleich oder kleiner als dst ist.
        printf("Das "
               "n"
               " besagt, wie viele Bytes maximal von src nach dest kopiert werden. \nsrc > dest -> wird in dest kein Stringendezeichen geschrieben. \n");
        break;
    }

    case 5:
    {
        //Welche Bedeutung hat das n bei der strncat()-Funktion.
        break;
    }

    case 6:
    {
        // Den Inhalt der Integervariable var in einen String wandelt. (Var kann natürlich jede Integerzahl annehmen)
        int arrLen = 0; //berechnet benötigte Arraylänge
        int modVar = var;
        int varHelp = var;
        while (modVar)
        {
            modVar = varHelp % 10;
            varHelp = varHelp / 10;
            arrLen++;
        }
        char result6[arrLen];
        sprintf(result6, "%d", var);
        printf("Lösung von Aufgabe %d: %s\n", aufgabe, result6);

        break;
    }

    case 8:
    {
        // Im Str5 den Teilstring "%s" suchen und diesen gegen den Inhalt von str1,str2 oder str3 austauschen
        break;
    }

    case 9:
    {
        // In Java sieht eine Switch-Anweisung über Strings wie folgt aus
        break;
    }
    }
}