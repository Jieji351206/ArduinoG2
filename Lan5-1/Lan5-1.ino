int pin = 13;

void setup(){
  Serial.begin(9600);
  pinMode(pin, OUTPUT);
  attachInterrupt(1, blink, RISING);
  // เลข 1 คือ Interrupt หมายเลข 1 จะอยู่ที่ ขา3
  // blink คือ ชื่อฟังชันที่จะให้ไปทำ
  // RISING คือ ถ้าขา3 มีการเปลี่ยนสถานะจาก LOW เป็น HIGH ให้ทำในฟังก์ชั่น blink
}

void loop(){
  digitalWrite(pin, LOW);
  Serial.println("LED OFF");
  delay(500);
}

void blink(){
  Serial.println("Interrupt");
  Serial.println("LED ON");
  digitalWrite(pin, HIGH);
  delay(1000);
}
