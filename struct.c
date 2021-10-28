// RECORD Dati strutturati 
// Secondo esempio struct di struct

#include <stdio.h>
#include <string.h> // per copiare 

int main()
{
	FILE *fp;
    fp=fopen("file.txt", "wt");
    struct s_utente 
    {
    char cognome[15];
    char nome [15];
    struct s_data
     {
         int giorno;
         char mese[12];
         int anno;
     }dataNascita;
    int  pin;
    }; 
    
// definizione e assegnazione contestuali
struct s_utente utente1 = {"Verdi", "Mario", 31,"Nov", 2001, 1234}; 
    
// definizione e poi copia info
struct s_utente utente2;    

strcpy (utente2.cognome, "Gialli");
strcpy (utente2.nome, "Giovanni");
utente2.dataNascita.giorno =12;
strcpy (utente2.dataNascita.mese, "Giu");
utente2.dataNascita.anno =2003;
utente2.pin = 3435;

// Stampa stdio

fprintf(fp, "Utente1 \n");
fprintf(fp, "Cognome: %s\n", utente1.cognome);
fprintf(fp, "   Nome: %s\n", utente1.nome);
fprintf(fp, "Nato il: %d/", utente1.dataNascita.giorno);
fprintf(fp, "%s/", utente1.dataNascita.mese);
fprintf(fp, "%d\n", utente1.dataNascita.anno);
fprintf(fp, "   PIN:  %d\n", utente1.pin);

printf("Utente2 \n");
printf("Cognome: %s\n", utente2.cognome);
printf("   Nome: %s\n", utente2.nome);
printf("Nato il: %d/", utente2.dataNascita.giorno);
printf("%s/", utente2.dataNascita.mese);
printf("%d\n", utente2.dataNascita.anno);
printf("   PIN:  %d\n", utente2.pin);


return 0;
}
