int led = 13;  // O'zgaruvchi yaratib oldik, qiymatini 13 ga tenglashtiramiz

void setup(){
  pinMode(led,OUTPUT);  // Led - 13 pinga ma'lumot chiqaramiz deb e'lon qilamiz
}

void loop(){
  digitalWrite(led,HIGH);   // Raqamli Led ga HIGH-(yoqilsin) deb buyruq berilgan
  delay(1000);              // 1 sekund kutish
  digitalWrite(led,LOW);    // Raqamli Led ga LOW-(o'chirilsin) deb buyruq berilgan
  delay(1000);              // 1 sekund kutish
}
