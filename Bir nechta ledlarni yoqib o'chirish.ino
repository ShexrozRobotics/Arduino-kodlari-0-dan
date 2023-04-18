int led_1 = 13;
int led_2 = 12;
int led_3 = 11;

void setup(){
  pinMode(led_1,OUTPUT);
  pinMode(led_2,OUTPUT);
  pinMode(led_3,OUTPUT);
}

void loop(){
  digitalWrite(led_1,1);
  delay(1000);
  digitalWrite(led_1,0);
  digitalWrite(led_2,1);
  delay(1000);
  digitalWrite(led_2,0);
  digitalWrite(led_3,1);
  delay(1000);
  digitalWrite(led_3,0);
  delay(1000);
}
