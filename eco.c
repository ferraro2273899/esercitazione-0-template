#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
      if(argc != 4){
      printf("Usa TESTO INTERO REALE \n");
      return 2;
    }

    char *testo = argv[1];
    int intero = atoi(argv[2]);
    double reale = atof(argv[3]);

    /* TODO: converti gli argomenti in tipi appropriati. Usa atoi o atof
    * prendi ispirazione da:
    * https://en.cppreference.com/c/string/byte/atoi e 
    * https://en.cppreference.com/c/string/byte/atof */

    /* Evita un warning finche' la variabiletesto non viene usato nella stampa. */
    //(void)testo;

    /* TODO: scrivi una sola chiamata a printf che stampi testo, intero e reale,
     * separati da uno spazio e seguiti da un carattere di nuova riga. */
    
    if(argc == 4){
      printf("%s %i %1.6f \n", testo, intero, reale);
      return 2;
    }

    return 0;
}
