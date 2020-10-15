void setup()
{
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  int t = 1000;
  //int n = 1;
  int time = 0;
  
   for(time = 0 ; 0 <= time <= 10000 ; )
    {
      digitalWrite(13, HIGH);
      digitalWrite(2, HIGH);
      delay(500);
      digitalWrite(2, LOW);
      delay(500);
      time = time + 1000;
     
      if(time >= 10000)
      {
      	break;
      }  
    }
  
  for(time = 10000  ; 0 <= time < 30000 ; delay(t))
  {
    digitalWrite(4, HIGH);
    digitalWrite(2, HIGH);
    time = time + 1000;
    
    if(time > 30000)
     {
       break;
     }
  }
  
  delay(80000);
  time = 0;
    
  	for(time = 0 ; 0 <= time <= 10000 ; )
    {
      digitalWrite(4, LOW);
      delay(500);
      digitalWrite(4, HIGH);
      delay(500);
      time = time + 1000;
     
     if(time >= 10000)
     {
       break;
     }
      
    }
  
  	
  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  
  digitalWrite(3, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  
  digitalWrite(3, LOW);
  digitalWrite(8, HIGH);
  delay(1000);
  
  digitalWrite(13, LOW);
  
  //Reset time variable
  time = 0;
  
   for(time = 0 ; 0 <= time <= 10000 ; )
    {
      digitalWrite(11, HIGH);
      delay(500);
      digitalWrite(11, LOW);
      delay(500);
      time = time + 1000;
     
      if(time >= 10000)
      {
      	break;
      }  
    }
  
  for(time = 10000  ; 0 <= time < 30000 ; delay(t))
  {
    digitalWrite(10, HIGH);
    digitalWrite(11, HIGH);
    time = time + 1000;
    
    if(time > 30000)
     {
       break;
     }
  }
  
  delay(80000);
  time = 0;
    
  	for(time = 0 ; 0 <= time <= 10000 ; )
    {
      digitalWrite(10, LOW);
      delay(500);
      digitalWrite(10, HIGH);
      delay(500);
      time = time + 1000;
     
     if(time >= 10000)
     {
       break;
     }
      
    }
  
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  
  digitalWrite(12, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  
  digitalWrite(12, LOW);
  digitalWrite(13, HIGH);
  
  delay(1000);
  digitalWrite(8, LOW);
}
