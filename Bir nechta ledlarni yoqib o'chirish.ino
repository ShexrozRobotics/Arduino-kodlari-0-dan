int led_1 = 13; //Birinchi led chiroqni 13 - pinga ulaymiz
int led_2 = 12; //Ikkinchi led chiroqni 12 - pinga ulaymiz
int led_3 = 11; //Uchinchi led chiroqni 11 - pinga ulaymiz

void setup(){
  pinMode(led_1,OUTPUT);  // Birinchi ledni OUTPUT deb e'lon qilamiz
  pinMode(led_2,OUTPUT);  // Ikkinchi ledni OUTPUT deb e'lon qilamiz
  pinMode(led_3,OUTPUT);  // Uchinchi ledni OUTPUT deb e'lon qilamiz
}

void loop(){
  digitalWrite(led_1,1);  // Birinchi led ni yoqamiz (HIGH yoki 1 | yoqilsin)
  delay(1000);            // 1 sekund kutib turish
  digitalWrite(led_1,0);  // Birinchi led ni o'chiramiz
  digitalWrite(led_2,1);  // Ikkinchi led ni yoqamiz
  delay(1000);            // 1 sekund kutib turish
  digitalWrite(led_2,0);  // Ikkinchi led ni o'chirish
  digitalWrite(led_3,1);  // Uchinchi led ni yoqish
  delay(1000);            // 1 sekund kutish
  digitalWrite(led_3,0);  // Uchinchi led ni o'chirish
  delay(1000);            // 1 sekund kutib turish
}
