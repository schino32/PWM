int LED =13;
int pote=A2;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(pote, INPUT);
  
}

void loop()
{
  	int input= analogRead(pote);
 	int posizione= map(input, 0, 1023, 0, 255);
	analogWrite(LED, posizione);
    
  
}

