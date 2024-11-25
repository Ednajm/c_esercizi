// Easy level !!

1.Calcolare e visualizzare l’area di un rettangolo avendo la base (int) e l’altezza (int)

2.Dati due numeri (int), calcolare e visualizzare il risultato della somma, della sottrazione, del prodotto e della divisione fra i due numeri

3.Calcolare (float) e visualizzare l’area di un triangolo avendo la base (int) e l’altezza (int)

4.Calcolare (float) e visualizzare la distanza fra due punti 2D date le loro coordinate (int)

5.Dato un numero (int), visualizzare se il numero è positivo o negativo, e se pari o dispari

6.Trovare il massimo fra tre numeri (int) e visualizzarlo

7.Dato un numero n (int), calcolare e visualizzare l’operazione di elevamento a potenza con base 2 ed esponente n

8.Calcolare (int) e visualizzare la somma dei numeri dispari da 1 a N (int)

9.Calcolare e visualizzare il logaritmo in base 10 approssimando il risultato al valore intero inferiore. L’input e l’output sono espressi tramite una variabile unsigned int

10.Da un numero intero, identificare se è primo

11.Dati due numeri interi, effettuare l’operazione di divisione intera mostrando la parte intera e il resto della divisione separatamente.

12.Dato un numero intero compreso fra 1 a 12, visualizzare il nome del mese corrispondente (1 = gennaio, 2 = febbraio, ...)

13.Dato un numero N (unsigned int), calcolare e visualizzare la somma dell’inverso dei numeri da 1 ad N (esempio: 5 -> 1 + 1/2 + 1/3 + 1/4 + 1/5)

14.Dato un numero N (unsigned int), trovare e visualizzare tutti i divisori di quel numero

15.Trasformare un intervallo di tempo espresso in millisecondi (unsigned long) in giorni, ore, minuti e secondi. L’output va visualizzato nel formato ‘giorni-ore-minuti-secondi’

16.Dato un numero N (unsigned int), visualizzarlo nei formati ottale, decimale ed esadecimale

17.Visualizzare la tabella dei caratteri ascii in cui ogni riga è dedicata a un carattere ed è formata da tre colonne allineate: la prima colonna mostra il simbolo ascii del carattere, la seconda il suo valore decimale e la terza il suo valore esadecimale

18.Dati due numeri N (unsigned int) e COLS (unsigned int), visualizzare i numeri interi da 0 a N per righe di dimensione COLS allineate

19.Dato un numero (unsigned int), contare il numero di bit impostati a 1 nella sua rappresentazione binaria (ad esempio, il risultato per l’intero 5 è 2)

20.Mostrare un numero intero senza segno (unsigned int) tramite i numeri romani

// medium level

Esercizio 21. Implementare una funzione reversei che inverte l’ordine di un array di interi rispettando il seguente prototipo:

void reversei(int *dst, const int *src, unsigned size);
dove:

dst è il puntatore all’array destinazione (invertito)
src è il puntatore all’array sorgente
size è la dimensione dell’array
Esercizio 2. Implementare una funzione reverses che inverte l’ordine dei caratteri di una stringa C rispettando il seguente prototipo: seguente prototipo:

void reverses(char *dst, const char *src);
dove:

dst è il puntatore all’array destinazione (invertito)
src è il puntatore all’array sorgente
Esercizio 22. Implementare una funzione rotate che trasforma una stringa in un’altra stringa di uguale dimensione, ma in cui ogni carattere è "spostato" di shift caratteri (considerando una successione di caratteri "ciclica", dove la a segue la z). Ad esempio: rotate(dst, "nicolaz", 2) -> "pkeqncb"

void rotate(char *dst, const char *src, char shift);
dove:

dst è il puntatore all’array destinazione (ruotato)
src è il puntatore all’array sorgente
shift il numero di caratteri con cui ruotare src
Esercizio 23. Implementare una funzione findi che individua la posizione di un valore all’interno di un array di interi. La funzione rispetta il seguente prototipo:

long findi(int value, const int *values, unsigned size);
dove:

value è il valore da ricercare
values è il puntatore all’array di input
size è la dimensione dell’array
il valore di ritorno indica la posizione all’interno dell’array, e ha valore speciale -1 se l’elemento non esiste
Esercizio 24. Implementare una funzione capitalize che, data una stringa C di input, ne genera un’altra in cui tutte le lettere alfabetiche che seguono uno spazio siano maiuscole, mentre tutte le altre minuscole. Assumere che l’input possa contenere lettere maiuscole, minuscole, altri simboli.

void capitalize(char *dst, const char *src);
dove:

dst è il puntatore all’array destinazione
src è il puntatore all’array sorgente
Esercizio 25. Implementare una funzione frequencies per il calcolo delle frequenza di caratteri all’interno di una stringa. La funzione conta quante volte compare ogni carattere all’interno di una stringa e memorizza il risultato in un array:

void frequencies(unsigned *freqs, const char *src);
dove:

freqs è il puntatore all’array delle frequenze (array di 26 elementi, uno per ogni lettera dell'alfabeto inglese)
src è il puntatore all’array sorgente
Esercizio 26. Implementare una funzione merge che dati due array di interi ordinati in modo crescente, generi un terzo array che contenga tutti i valori dei precedenti array in modo ordinato. Assumere che all’interno degli array ci possano essere elementi duplicati. La funzione rispetta il seguente prototipo:

void merge(int *dst, const int *a1, unsigned s1, const int *a2, unsigned s2);
dove:

dst è il puntatore all’array destinazione
a1 è il puntatore al primo array di input
s1 è la dimensione del primo array
a2 è il puntatore al secondo array di input
s2 è la dimensione del secondo array
Esercizio 27. Implementare una funzione fibonacci per il calcolo della serie di Fibonacci, che calcola i primi n valori della serie e li memorizza di un array. La funzione rispetta il seguente prototipo:

void fibonacci(unsigned *dst, unsigned n);
dove:

dst è il puntatore all’array destinazione
n è il numero di valori della serie di fibonacci da calcolare
Esercizio 28. Implementare una funzione trova_max per individuare il valore massimo all’interno di un array di numeri interi che rispetta il seguente prototipo:

void trova_max(int *rmax, const int *values, unsigned size);
dove:

rmax è il puntatore alla variabile che conterrà il valore massimo trovato;
values è il puntatore all’array;
size è la dimensione dell’array.
Si assuma che il puntatore all’array sia valido, che la dimensione indicata dalla variabile size sia sempre maggiore di 0 e consistente con i valori effettivamente presenti nell’array

Esercizio 29. Implementare una funzione trova_minmax simile a quella indicata nell’esercizio precedente, ma che individui sia il valore minimo che quello massimo. La funzione rispettara il seguente prototipo:

void trova_minmax(int *rmin, int *rmax, const int *values, unsigned size);
dove:

rmin è il puntatore alla variabile che conterrà il valore minimo trovato;
rmax è il puntatore alla variabile che conterrà il valore massimo trovato;
values è il puntatore all’array;
size è la dimensione dell’array.
Esercizio 30. Implementare una funzione compute_mean_variance per il calolo della media aritmetica e della varianza di un insieme di valori, che rispetti il seguente prototipo:

void compute_mean_variance(float *rmean, float *rvariance, float *values, unsigned size);
dove:

rmean è il puntatore alla variabile dove viene memorizzata la media;
rvariance è il puntatore alla variabile dove viene memorizzata la varianza;
values è il puntatore all’array;
size è la dimensione dell’array.
Esercizio 31. Implementare una funzione my_strcpy, ispirata alla funzione strcpy dichiarata all'interno di string.h, che copia il contenuto di una stringa all'interno di un'altra stringa. La funzione deve rispettare il seguente prototipo:

void my_strcpy(char *dst, const char *src);
dove:

dst è il puntatore al vettore di caratteri verso cui effettuare la copia;
src è il puntatore al vettore di caratteri da cui effettuare la copia.
Esercizio 32. Implementare una funzione my_strcat, ispirata alla funzione strcat dichiarata all'interno di string.h, che concatena il contenuto di una stringa con quello di un'altra stringa. La funzione deve rispettare il seguente prototipo:

void my_strcat(char *dst, const char *src);
dove:

dst è il puntatore al vettore di caratteri a cui concatenare;
src è il puntatore al vettore di caratteri da concatenare a dst.
Esercizio 33. Implementare una funzione my_strlen, ispirata alla funzione strlen dichiarata all'interno di string.h, che determina la lunghezza di una stringa zero-terminata. La funzione deve rispettare il seguente prototipo:

unsigned my_strlen(const char *src);
dove:

src è il puntatore al vettore di caratteri di cui si vuole calcolare la lunghezza;
la funzione ritorna la lunghezza della stringa, escluso il carattere di terminazione.
Esercizio 34. Implementare una funzione my_strcmp, ispirata alla funzione strcmp dichiarata all'interno di string.h, che confronta due stringhe. La funzione deve rispettare il seguente prototipo:

int my_strcmp(const char *s1, const char *s2);
dove:

s1 è il puntatore al primo vettore di caratteri;
s2 è il puntatore al secondo vettore di caratteri;
la funzione ritorna 0 in caso le stringhe siano uguali, 1 in caso siano diverse.
Esercizio 34. Le funzioni di libreria, dichiarate in string.h, memcpy e memmove vengono utilizzate per copiare aree di memoria fra una sorgente ed una destinazione. La differenza principale fra le due consiste nel fatto che mentre memcpy è stata scritta per essere veloce, memmove è in grado di gestire correttamente casi in cui area sorgente e destinazione sono sovrapposte. Per fare un esempio:

int src[8] = {0,1,2,3,4,5,6,7};
memmove(src + 4, src + 2, 4 * sizeof(*src));
/* output: 0 1 2 3 2 3 4 5 */
int src[8] = {0,1,2,3,4,5,6,7};
memcpy(src + 4, src + 2, 4 * sizeof(*src));
/* output: 0 1 2 3 2 3 2 3  */
Implementare due funzioni my_memmove, e my_memcpy ispirate a memmove e memcpy rispettando il seguente prototipo:

void *my_memcpy(void *dst, void *src, size_t size);
void *my_memmove(void *dst, void *src, size_t size);
dove:

dst è il puntatore all'area (di memoria) destinazione;
src è il puntatore all'area (di memoria) sorgente;
la funzione ritorna l'indirizzo dell'area destinazione.
Esercizio 35. Implementare un gruppo di funzioni init, sort, search, show per trattare vettori di interi. init inizializza il vettore con numeri random compresi fra 0 e 100. sort ordina il vettore in modo crescente utilizzando l'algoritmo Bubble Sort (https://en.wikipedia.org/wiki/Bubble_sort). search ritorna l'indice in cui il valore value si trova, -1 in caso non sia presente nel vettore. show mostra il contenuto del vettore a video. Le funzioni devono rispettare i seguenti prototipi:

void init(int *v, unsigned size);
void sort(int *v, unsigned size);
int search(int *v, unsigned size, int value);
void show(int *v, unsigned size).
dove:

arr è il vettore;
n è la dimensione del vettore;
value è il valore da cercare.
Esercizio 36. (Approfondimento, non richiesto all'esame). Implementare una funzione merge_sort che ordini un vettore di interi in modo crescente utilizzando l'algoritmo Merge Sort (https://en.wikipedia.org/wiki/Merge_sort). La funzione deve rispettare il seguente prototipo.

void merge_sort(int arr[], int l, int r);
dove:

arr è il vettore da ordinare;
l è l'indice di sinistra del blocco da ordinare, tipicamente l = 0;
r è l'indice di destra del blocco da ordinare, tipicamente r = sizeof(arr) - 1.
