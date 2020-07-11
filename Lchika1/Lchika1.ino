//
// D2 port に接続したLEDを1秒周期で点滅を繰り替えす
// delay()関数版
// 

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
   digitalWrite(2, HIGH);
   delay(1000);
   digitalWrite(2, LOW);
   delay(1000);
}
