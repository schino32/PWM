# Controllo luminosità LED con potenziometro (PWM)

# Descrizione
In questo progetto andiamo ad utilizzare un potenziometro, il quale permette di controllare in base a quanto viene "girato" l'intesità della luce emessa dal LED tramite PWN (Pulse Width Modulation) tramite la simulazione di Arduino ocn Thinkercard.

## Obbiettivo
- Riuscire a collegare in maniera corretta i cavi sia sulla breadboard che sulla scheda di Arduino;
- Utilizzare il PWN per controllare il LED.

## Componenti Utilizzati
- Arduino UNO;
- Potenziometro;
- LED;
- Resistenza (220 ohm);
- Breadboard;
- Cavi;

## Schema del circuito
- Pin centrale potenziometro (A2);
- Pin laterali (5V e GND);
- LED (13);

## Funzionamento
Il potenziometro fornisce un valore analogico a Arduino; questo valore viene trasformato in un segnale PWN tramite cui controlliamo la luminosità del LED.
Ruotando il potenziometro da sinistra verso destro tende ad aumentare l'intensità luminosa, invece il contrario diminuisce quest'ultima.

## File del progetto
Code_Potenziometro.cpp
Progetto.md

## Come usare il progetto
1. Aprire il link;
2. Cliccare su modifica progetto;
3. Cliccare su esegui;


## Autore
Francesco Chiarei
