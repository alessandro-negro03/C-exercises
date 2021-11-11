#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define CSTR 30
#define maxRecord 10 
#define MATERIE "ESAMI.csv"

 struct s_percorso 
    {
    int  matricola;
    char materia[CSTR];
    }; 

struct s_percorso curriculum;   

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
    printf("Record%d \n",index);
    printf("  Matricola: ");
    scanf("%d", &curriculum.matricola);
     
    printf("Esame: ");
    scanf("%s", curriculum.materia);
    printf("\n");

return 0;
}

int MyOut(int index)

{

FILE *out;
out = fopen(MATERIE,"a"); //apertura del file append

if (out)
  {
    fprintf(out,"\n Rcd %d \n",index);
    fprintf(out,"Matricola:, %d\n", curriculum.matricola);
    fprintf(out,"Esame:, %s\n", curriculum.materia);
    fclose(out);
    return 0;
  }
else
  {
   printf("Errore apertura file");
   return -1;
  }
  }

