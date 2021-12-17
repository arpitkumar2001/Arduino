//int m = 1;
void setup() 
{
  pinMode(10, OUTPUT);
  //Serial.begin(9600);
}

void loop() 
{
  for(int i = 0; i<=255; i++)
  {
    //Serial.println(m);
    delay(10);
    analogWrite(10, i);
  }

  for(int i = 255; i>=0; i--)
  {
    //Serial.println(m);
    delay(10);
    analogWrite(10, i);
  }

}\\hello there changed

  
