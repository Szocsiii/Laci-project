int power;
int control;

void setup() {
  pinMode(5, OUTPUT);
  pinMode(0, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  if(Serial.available()){
    control=Serial.parseInt();
    if(control>=0 && control <=100){
      power=map(control,0,100,0,255);
      analogWrite(5, power);
      analogWrite(6, power);
      analogWrite(7, power);
      analogWrite(4, power);
      analogWrite(3, power);
      analogWrite(2, power);
      analogWrite(1, power);
      analogWrite(0, power);
      Serial.print("LED power:");
      Serial.println(control);
    }
    else{
      Serial.println("Number must be betwen 0-100");
    }
  }
}
