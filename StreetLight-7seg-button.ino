//inital setup
int buttonPress = 0;     
int button = 2;
int state = 0;
int old = 0;

// initialization of the variables that will be the values of the pin
//7 segement pins
int a = 12;                     
int b = 13;
int c = 8;
int d = 9;
int e = 10;
int f = 11;
int g = 7;

//Street lights pins
int green = 3;
int yellow = 4;
int red = 5;

void setup()

{
  // initialization of the arduino OUTPUT pins
  pinMode(button,INPUT);
  pinMode(6,OUTPUT);

  pinMode(a, OUTPUT);          
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);

  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);  
}

//Intialize 7 segment display functions
void nine_dig()
{
  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void eight_dig()
{
  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW); 
}

void seven_dig()
{
  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}

void six_dig()
{
  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW); 
}

void five_dig()
{
  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}

void four_dig()
{
  digitalWrite(a,HIGH);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW); 
}

void three_dig()
{
  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW); 
}

void two_dig()
{
  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW); 
}

void one_dig()
{
  digitalWrite(a,HIGH);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH); 
}

void zero_dig()
{
  digitalWrite(a,LOW);          //to turn a pin on, it has to have a LOW digitalWrite
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);         //to turn a pin off, it has to have a HIGH digitalWrite
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH); 
}

void loop()

{

  buttonPress = digitalRead(button);

  if(buttonPress == 1){
    delay(50);
    buttonPress = digitalRead(button);

    if (buttonPress == 0 ) {
      state = old + 1; 
    }}

   else{
    delay(100); 
}


  switch (state) {

    case 1:
      //regular cycle
      digitalWrite(green, HIGH);
      delay(110000);
      
      nine_dig();
      delay(1000);
      eight_dig();
      delay(1000);
      seven_dig();
      delay(1000);
      six_dig();
      delay(1000);
      five_dig();
      delay(1000);
      four_dig();
      delay(1000);
      three_dig();
      delay(1000);
      two_dig();
      delay(1000);
      one_dig();
      delay(1000);
      zero_dig();
      delay(1000);

      digitalWrite(yellow, HIGH);
      digitalWrite(green, LOW);
      delay(5000);

      digitalWrite(red, HIGH);
      digitalWrite(yellow, LOW);      

      old = state;
      break;

    case 2:

      digitalWrite(9,HIGH);
      old = state;
      break;

    case 3:

      digitalWrite(9,LOW);
      old = state;
      break;

    default:

      //Everything off
      digitalWrite(a, HIGH);
      digitalWrite(b, HIGH);
      digitalWrite(c, HIGH);
      digitalWrite(d, HIGH);
      digitalWrite(e, HIGH);
      digitalWrite(f, HIGH);
      digitalWrite(g, HIGH);
      digitalWrite(green, LOW);
      digitalWrite(yellow, LOW);
      digitalWrite(red, LOW);

      old = 0;
      break;
  }

}
