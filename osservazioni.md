# Osservazioni — Esercitazione 0

Gruppo: ferraro iacopo fronte flavio

Componenti (Iacopo, Ferraro, ferraro2273899, Flavio, Fronte, fronte2277765-sketch)

URL del repository condiviso:https://github.com/ferraro2273899/esercitazione-0-template.git

Chi ha usato la tastiera nello step 1 e nello step 2: Ferraro

Compilate insieme le osservazioni e discutete le risposte: entrambi dovete
saper spiegare le prove svolte.

## Step 1 — Hello World: compilazione ed esecuzione

Comando di compilazione: gcc -std=c17 -Wall -Wextra -Wpedantic hello.c -o hello

Comando di esecuzione e risultato osservato: ./hello , sul terminale:
Hello, computational physics! 


Che cosa ho capito su sorgente ed eseguibile: Il codice sorgente non viene eseguito ma bensì prima compilato in eseguibile, se cambiamo il sorgente bisogna ricompilare per vedere le modifiche nell'eseguibile

Output richiesto e comportamento del programma prima della modifica: hello.c non stampa nulla, come aspettato.

Esito dopo la modifica e spiegazione della correzione: Il programma stampa sul terminale come richiesto. 

## Step 1 — Git

Quali file ho incluso nel commit e perché:

Come ho verificato che la versione provata sia presente su GitHub:

Che cosa ho osservato prima e dopo `git pull`, e perché non serve un nuovo clone:

## Step 2 — Eco: prima prova

Argomenti passati, comando e risultato: ciao 12 3.5 , ./eco ciao 12 3.5 , USA %s TESTO INTERO REALE

Che cosa posso concludere: 
## Step 2 — Eco: seconda prova

Argomenti passati, comando e risultato: HelloWorld123 123.56gh123 12.2345 , ./eco HelloWorld123 123.56gh123 12.2345 , HelloWorld123 123 12.234500

Che cosa ho capito su testo, conversioni e stampa: L'array di stringhe argv[] ha come primo elemento il nome dell'eseguibile, motivo per cui *testo parte da argv[1]; l'input di testo può accettate qualsiasi input siccome stringa,ciò vale anche per l'input intero e reale dopo aver tagliato i valori non numerici tramite atoi/atof. 


## Step 2 — Risultato ed errori

Previsioni per l'esecuzione con argomenti validi e per quella con `dodici`: ciao 12 4.500000 ; ciao 0 3.500000 Notiamo che "dodici" è stato completamente tagliato da atoi e rimpiazzato con il valore 0, infatti echo $? ha riportato 2, ossia un errore nel'esecuzione.

Contenuto di `eco.txt`, messaggi nel terminale e codici di uscita osservati: primo test : ciao 12 3.500000 , 0 ; secondo test: ciao 0 3.500000 , 2 . echo $? ha riportato un errore. 

Come un controllo automatico può riconoscere un errore: 

## Step 2 — Parametri e calcolo fisico

Quando serve ricompilare e quando basta cambiare gli argomenti:

## Step 2 — Git

Come riconosco nella cronologia i commit dei due step:

Come ho verificato che la versione finale sia presente su GitHub:
