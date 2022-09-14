
void setup()
{
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() 
{
  // put your main code here, to run repeatedly:

  // lampu merah menyala 5 detik
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(5000);

  // lampu kuning menyala 0,5 detik
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(500);

  // lampu hijau menyala 5 detik
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, HIGH);
  delay(5000);

  // lampu kuning menyala lagi 0,5 detik
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(500);
}
