/* ESEMPIO 1 INSERIMENTO MATRICOLE */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define CSTR 15
#define maxRecord 5 
#define ISCRIZIONI "STUDENTI.csv"

 struct s_studente 
    {
    char cognome[CSTR];
    char nome [CSTR];
    int  matricola;
    }; 

struct s_studente studente; 
int MyInput (int);
int MyOut(int);

int main()
{

int numRecord, i;

printf("Numero Record (max %d) ", maxRecord);
scanf ("%d", &numRecord);
printf("\n");


if (numRecord < maxRecord)
 {
  for (i=1;i<=numRecord;i++)
    {
      MyInput(i);
      MyOut(i);
    }
  return i-1;
 }
else
  {
  printf("Max Numero Record %d \n", maxRecord);
  return -1;
  }
}


int MyInput (int index) 

{
   printf("Studente%d \n",index);
   printf("  Cognome: ");
   scanf("%s", studente.cognome);
   printf("     Nome: ");
   scanf("%s", studente.nome);
   printf("Matricola: ");
   scanf ("%d", &studente.matricola);
   printf("\n");

return 0;
}

int MyOut(int index)

{

FILE *out;
out = fopen(ISCRIZIONI,"a"); //apertura del file append

if (out)
  {
   fprintf(out,"\n Studente%d \n",index);
   fprintf(out,"Cognome:, %s\n", studente.cognome);
   fprintf(out,"Nome:, %s\n", studente.nome);
   fprintf(out,"Matricola:, %d\n", studente.matricola);
   fclose(out);
   return 0;
   }
else
  {
   printf("Errore apertura file");
   return -1;
  }

}
