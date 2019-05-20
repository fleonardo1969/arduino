#include <LiquidCrystal_I2C.h>
#include <Wire.h>

int bit1 = 8;
int bit2 = 9;
int subir;
int bajar;
int joystick_X;
int joystick_Y;
int temp;
LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);

  lcd.print("IES VIERA 2019");
  delay(2500);
  lcd.clear();

  pinMode(bit1, OUTPUT);
  pinMode(bit2, OUTPUT);

}

void loop() {
  joystick_X = analogRead(A0);
  joystick_Y = analogRead(A1);

  if (joystick_Y >= 300 && joystick_Y <= 700) {
    digitalWrite(bit1, LOW);
    digitalWrite(bit2, LOW);
  }
  if (joystick_Y < 10) {
    digitalWrite(bit1, LOW);
    digitalWrite(bit2, HIGH);
  }
  if (joystick_Y > 700) {
    digitalWrite(bit1, HIGH);
    digitalWrite(bit2, LOW);
  }
  // Medida de la Temperatura
  temp = analogRead(A2);
  Serial.print("Temp= ");
  Serial.println(temp);
  Serial.print("Valor X: ");
  Serial.println(joystick_X);
  Serial.print("Valor Y: ");
  Serial.println(joystick_Y );
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temp);

}
