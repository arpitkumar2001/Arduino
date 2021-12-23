float voltage = 0;


void setup() 
{
  Serial.begin(9600);
  Serial.println("enter voltage value : ");
  while(Serial.available() == 0)
  { }
  voltage = Serial.parseInt();
  float v_after_conversion = (256/5)*voltage;
  float v_using_map = map(voltage, 0, 5, 0, 255);
  Serial.print("voltage : ");
  Serial.println(voltage);
  Serial.print("voltage value after normal conversion : ");
  Serial.println(v_after_conversion);
  Serial.print("voltage value after using map() : ");
  Serial.println(v_using_map);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
