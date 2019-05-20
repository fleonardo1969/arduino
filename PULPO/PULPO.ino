int derecha_x; //valor analog
int derecha_y; //valor analog
//int izqda_x; //valor analog
int izqda_y;   //valor analog

int subir_bajar; //valor analog
int avanzar;  //valor analog
int girar;  //valor analog

int motor_dcha_pin1 = 4;
int motor_dcha_pin2 = 5;
int motor_izqda_pin1 = 6;
int motor_izqda_pin2 = 7;
int motor_subir = 2;
int motor_bajar = 3;

void setup() {
  Serial.begin(9600);
  pinMode(motor_dcha_pin1, OUTPUT);
  pinMode(motor_dcha_pin2, OUTPUT);
  pinMode(motor_izqda_pin1, OUTPUT);
  pinMode(motor_izqda_pin2, OUTPUT);
  pinMode(motor_subir, OUTPUT);
  pinMode(motor_bajar, OUTPUT);

}

void loop() {
  //lecturas de los valores analógicos de los joystick
  subir_bajar = analogRead(A1);
  avanzar = analogRead(A4);
  girar = analogRead(A5);

  //Subir y bajar

  if (subir_bajar > 700) {
    digitalWrite(motor_subir, HIGH);
    digitalWrite(motor_bajar, LOW);
  }
  if (subir_bajar < 300) {
    digitalWrite(motor_subir, LOW);
    digitalWrite(motor_bajar, HIGH);
  }
  if (subir_bajar < 700 && subir_bajar > 300) {
    digitalWrite(motor_subir, LOW);
    digitalWrite(motor_bajar, LOW);
  }
  //Avanzar y retroceder, se arrancan los dos motores, derecho e izquierdo, a la vez
  if (avanzar > 700) {
    //arrancamos los 2 motores
    digitalWrite(motor_dcha_pin1, HIGH);
    digitalWrite(motor_dcha_pin2, LOW);
    digitalWrite(motor_izqda_pin1, HIGH);
    digitalWrite(motor_izqda_pin2, LOW);
  }
  if (avanzar < 300) {
    //arrancamos los 2 motores
    digitalWrite(motor_dcha_pin1, LOW);
    digitalWrite(motor_dcha_pin2, HIGH);
    digitalWrite(motor_izqda_pin1, LOW);
    digitalWrite(motor_izqda_pin2, HIGH);
  }
  if (avanzar < 700 && avanzar > 300) {
    //paramos  los 2 motores
    digitalWrite(motor_dcha_pin1, LOW);
    digitalWrite(motor_dcha_pin2, LOW);
    digitalWrite(motor_izqda_pin1, LOW);
    digitalWrite(motor_izqda_pin2, LOW);
  }

  //Girar
  if(girar>700){
    digitalWrite(motor_dcha_pin1, LOW);
    digitalWrite(motor_dcha_pin2, HIGH);
    digitalWrite(motor_izqda_pin1, LOW);
    digitalWrite(motor_izqda_pin2, LOW);
  }
  if(girar<300){
    digitalWrite(motor_dcha_pin1, LOW);
    digitalWrite(motor_dcha_pin2, LOW);
    digitalWrite(motor_izqda_pin1, HIGH);
    digitalWrite(motor_izqda_pin2, LOW);
  }
  if(girar<700 && girar>300){
    digitalWrite(motor_dcha_pin1, LOW);
    digitalWrite(motor_dcha_pin2, LOW);
    digitalWrite(motor_izqda_pin1, LOW);
    digitalWrite(motor_izqda_pin2, LOW);
  }
}
