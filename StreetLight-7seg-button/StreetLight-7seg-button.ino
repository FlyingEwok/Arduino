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
void off_dig()
{
  digitalWrite(a,HIGH);         
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);        
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH); 
}

void lightState(int light, int lightState)
{
  switch (lightState)
  {
    case 0:
      digitalWrite(light, LOW);
      break;
    
    case 1:
      digitalWrite(light,HIGH);
    default:
      digitalWrite(light, LOW);
      break;
  }
}

void outputSevenSegState(int sevenSegState)
{
  switch (sevenSegState)
    {
      case 0:
        zero_dig();
        break;
      case 1:
        one_dig();
        break;
      case 2:
        two_dig();
        break;
      case 3:
        three_dig();
        break;
      case 4:
        four_dig();
        break;
      case 5:
        five_dig();
        break;
      case 6:
        six_dig();
        break;
      case 7:
        seven_dig();
        break;
      case 8:
        eight_dig();
        break;
      case 9:
        nine_dig();
        break;
      default:
        off_dig();
        break;
    }
}



unsigned long countDownTimerDuration = 10000;
unsigned long redLightDuration = 120000;
unsigned long greenLightDuration = redLightDuration - countDownTimerDuration;
unsigned long yellowLightDuration = 5000;
unsigned long advancedGreenLightDuration = 10000;

unsigned long countDownTimerCountDuration = 1000;
unsigned long lightFlashDuration = 500;

const int OFF = 0;
const int ON = 1;

int sevenSegOffState = -1;
int sevenSegState = sevenSegOffState;
int greenLightState = OFF;
int yellowLightState = OFF;
int redLightState = OFF;
int advancedGreenLightState = OFF;

unsigned long nextCountIntitated = 0;
unsigned long walkCountdownInitiated = 0;
unsigned long yellowLightInitiated = 0;
unsigned long redLightInitiated = 0;
unsigned long advancedGreenLightInitiated = 0;
unsigned long lightFlashInitiated = 0;

int lastLoopMode = 0;
int currentLoopMode = 1;

void reset()
{
  sevenSegOffState = -1;
  sevenSegState = sevenSegOffState;
  greenLightState = OFF;
  yellowLightState = OFF;
  redLightState = OFF;
  advancedGreenLightState = OFF;

  nextCountIntitated = 0;
  walkCountdownInitiated = 0;
  yellowLightInitiated = 0;
  redLightInitiated = 0;
  advancedGreenLightInitiated = 0;
  lightFlashInitiated = 0;
}

void mode1()
{
  reset();
}

void mode2(unsigned long currentTime)
{
  // intialization code
  if (lastLoopMode != currentLoopMode)
  {
    reset();      
    advancedGreenLightState = ON;
    advancedGreenLightInitiated = currentTime;
    //lightFlashInitiated = currentTime;
    sevenSegState = sevenSegOffState;
  }

  //Countdown timer display and logic
  if ((currentTime - nextCountIntitated) >= countDownTimerCountDuration && (currentTime - walkCountdownInitiated) >= greenLightDuration && walkCountdownInitiated != 0)
  {
    nextCountIntitated = currentTime;
    sevenSegState -= 1;
    
    if (sevenSegState < sevenSegOffState)
    {
      sevenSegState = 9;
    }
    // State exit condition
    else if (sevenSegState == sevenSegOffState)
    {
      greenLightState = OFF;
      yellowLightState = ON;
      yellowLightInitiated = currentTime;
      walkCountdownInitiated = 0;
      nextCountIntitated = 0;
    } 
  }
  
  if (yellowLightState == ON)
  {
    // State exit condition
    if ((currentTime - yellowLightInitiated) >= yellowLightDuration && yellowLightInitiated != 0)
    {
      yellowLightState = OFF;
      redLightState = ON;
      redLightInitiated = currentTime;
      yellowLightInitiated = 0;
    }
  }

  if (redLightState == ON)
  {
    // State exit condition
    if ((currentTime - redLightInitiated) >= redLightDuration && redLightInitiated != 0)
    {
      redLightState = OFF;
      redLightInitiated = 0;
      advancedGreenLightState = ON;
      advancedGreenLightInitiated = currentTime;
      lightFlashInitiated = currentTime;
      sevenSegState = sevenSegOffState;
    }
  }

  if (advancedGreenLightState == ON)
  {    
    flashLight(&greenLightState, currentTime);

    // State exit condition
    if ((currentTime - advancedGreenLightInitiated) >= advancedGreenLightDuration && advancedGreenLightInitiated != 0)
    {
      advancedGreenLightState = OFF;
      advancedGreenLightInitiated = 0;
      greenLightState = ON;
      walkCountdownInitiated = currentTime;
      sevenSegState = sevenSegOffState;
    }    
  }
}

void flashLight(int* lightState, unsigned int currentTime)
{
  if ((currentTime - lightFlashInitiated) >= lightFlashDuration)
  {
    *lightState = *lightState == OFF ? ON : OFF;
    lightFlashInitiated = currentTime;
  }
}

void mode4(unsigned int currentTime)
{
  if (lastLoopMode != currentLoopMode)
  {
    reset();      
  }

  flashLight(&yellowLightState, currentTime);
}

void mode3(unsigned int currentTime)
{
  if (lastLoopMode != currentLoopMode)
  {
    reset();      
  }

  flashLight(&redLightState, currentTime);
}

void loop()
{  
  unsigned long currentTime = millis();

  buttonPress = digitalRead(button);
  if(buttonPress == 1)
  {
    delay(50);
    buttonPress = digitalRead(button);

    if (buttonPress == 0 )
    {
      currentLoopMode++;
      currentLoopMode = currentLoopMode > 4 ? 1 : currentLoopMode;    
    }
  }
  
  switch (currentLoopMode)
  {
    case 1:
      mode1();
      break;
    case 2:
      mode2(currentTime);
      break;
    case 3:
      mode3(currentTime);
      break;
    case 4:
      mode4(currentTime);
      break;
    default:
      mode1(); 
  }
  
  // Output state to components
  lightState(green, greenLightState);
  lightState(yellow, yellowLightState);
  lightState(red, redLightState);
  outputSevenSegState(sevenSegState);

  // track loop mode between loops
  lastLoopMode = currentLoopMode;

}
