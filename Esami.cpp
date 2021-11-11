#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define CSTR 30
#define RecordMassimi 10 
#define MATERIE "ESAMI.csv"

 struct s_EsameDaFare
    {
    int  matricola;
    char esame[CSTR];
    }; 

struct s_EsameDaFare EsameDaFare;   

int MyInput (int);
int MyOut(int);

int main()
{

int numRecord, i;

printf("Numero Record (massimo %d) ", RecordMassimi);
scanf ("%d", &numRecord);
printf("\n");


if (numRecord < RecordMassimi)
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
  printf("Numero Reocord Massimi %d \n", RecordMassimi);
  return -1;
  }
}


int MyInput (int index) 

{
    printf("Record %d \n",index);
    printf("  Matricola: ");
    scanf("%d", &EsameDaFare.matricola);
     
    printf("Esame: ");
    scanf("%s", EsameDaFare.esame);
    printf("\n");

return 0;
}

int MyOut(int index)

{

FILE *out;
out = fopen(MATERIE,"a"); 

if (out)
  {
    fprintf(out,"\n Rcd - %d \n",index);
    fprintf(out,"Matricola:, %d\n", EsameDaFare.matricola);
    fprintf(out,"Esame:, %s\n", EsameDaFare.esame);
    fclose(out);
    return 0;
  }
else
  {
   printf("Errore apertura file");
   return -1;
  }
  }
