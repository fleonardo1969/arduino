int joystick_izquda_vrx = A5;
int joystick_izquda_vry = A4;
int joystick_izquda_sw = 13;
int joystick_dcha_vrx = A2;
int joystick_dcha_vry = A1;
int joystick_dcha_sw = 10;
int motor1_pin1 = 2;
int motor1_pin2 = 3;
int motor2_pin1 = 4;
int motor2_pin2 = 5;
int motor3_pin1 = 6;
int motor3_pin2 = 7;
int motor4_pin1 = 8;
int motor4_pin2 = 9;
int joystick_derechaX;
int joystick_derechaY;
int joystick_izquierdaX;
int joystick_izquierdaY;


void setup() {
  Serial.begin(9600);
  pinMode(motor1_pin1, OUTPUT);
  pinMode(motor1_pin2, OUTPUT);
  pinMode(motor2_pin1, OUTPUT);
  pinMode(motor2_pin2, OUTPUT);
  pinMode(motor3_pin1, OUTPUT);
  pinMode(motor3_pin2, OUTPUT);
  pinMode(motor4_pin1, OUTPUT);
  pinMode(motor4_pin2, OUTPUT);
  pinMode(joystick_izquda_sw, INPUT);
  pinMode(joystick_dcha_sw, INPUT);

}

void loop() {
  //Control del ejeX del joystick de la derecha
  //Avance y/o retroceso del ROV
  Serial.print("Valor de VRX joystick derecha: ");
  Serial.println(analogRead(joystick_dcha_vrx));
  joystick_derechaX = analogRead(joystick_dcha_vrx);

  if (joystick_derechaX >= 700) {
    //Motor al contrario
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, HIGH);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, HIGH);

  }
  if (joystick_derechaX <= 115) {
    //Motor gira en una dirección
    digitalWrite(motor1_pin1, HIGH);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, HIGH);
    digitalWrite(motor2_pin2, LOW);

  }

  if (joystick_derechaX == 515) {
    //Motor parado
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, LOW);

  }
//Control del ejeY del joystick de la derecha

 //Avance y/o retroceso del ROV
  Serial.print("Valor de VRY joystick derecha: ");
  Serial.println(analogRead(joystick_dcha_vry));
  joystick_derechaY = analogRead(joystick_dcha_vry);

  if (joystick_derechaY >= 700) {
    //Motor al contrario
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, HIGH);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, HIGH);

  }
  if (joystick_derechaY <= 115) {
    //Motor gira en una dirección
    digitalWrite(motor1_pin1, HIGH);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, HIGH);
    digitalWrite(motor2_pin2, LOW);

  }

  if (joystick_derechaY == 508) {
    //Motor parado
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, LOW);

  }
    //Control del ejeX del joystick de la izquierda
  //Avance y/o retroceso del ROV
  Serial.print("Valor de VRX joystick izquierda: ");
  Serial.println(analogRead(joystick_izquda_vrx));
  joystick_izquierdaX = analogRead(joystick_izquda_vrx);

  if (joystick_izquierdaX >= 700) {
    //Motor al contrario
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, HIGH);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, HIGH);

  }
  if (joystick_izquierdaX <= 115) {
    //Motor gira en una dirección
    digitalWrite(motor1_pin1, HIGH);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, HIGH);
    digitalWrite(motor2_pin2, LOW);

  }

  if (joystick_izquierdaX == 506) {
    //Motor parado
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, LOW);

  }
//Control del ejeY del joystick de la izquierda

 //Avance y/o retroceso del ROV
  Serial.print("Valor de VRY joystick izquierda: ");
  Serial.println(analogRead(joystick_izquda_vry));
  joystick_izquierdaY = analogRead(joystick_izquda_vry);

  if (joystick_izquierdaY >= 700) {
    //Motor al contrario
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, HIGH);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, HIGH);

  }
  if (joystick_izquierdaY <= 115) {
    //Motor gira en una dirección
    digitalWrite(motor1_pin1, HIGH);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, HIGH);
    digitalWrite(motor2_pin2, LOW);

  }

  if (joystick_izquierdaY == 508) {
    //Motor parado
    digitalWrite(motor1_pin1, LOW);
    digitalWrite(motor1_pin2, LOW);
    digitalWrite(motor2_pin1, LOW);
    digitalWrite(motor2_pin2, LOW);

  }

}
