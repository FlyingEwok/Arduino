int a = 12;                     // initialization of the variables that will be the values of the pin

int b = 13;

int c = 8;

int d = 9;

int e = 10;

int f = 11;

int g = 7;

void setup()

{

  pinMode(a, OUTPUT);          // initialization of the arduino OUTPUT pins

  pinMode(b, OUTPUT);

  pinMode(c, OUTPUT);

  pinMode(d, OUTPUT);

  pinMode(e, OUTPUT);

  pinMode(f, OUTPUT);

  pinMode(g, OUTPUT);

  

}

void nine_dig() {             // function called nine_dig: this function will display the digit 9 

  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);

  delay(1000);

  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW); 

  delay(1000);

  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);

  delay(1000);

  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW); 

  delay(1000);

  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);

  delay(1000);

  digitalWrite(a,HIGH);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW); 

  delay(1000);

  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW); 

  delay(1000);

  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW); 

  delay(1000);

  digitalWrite(a,HIGH);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH); 

  delay(1000);

  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH); 

  delay(1000);
   
}



void loop()         

{

  nine_dig();             //call a function and print the digit 9

 

}
