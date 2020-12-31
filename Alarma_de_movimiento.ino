int foco = 8;
int sensor = 9;
int val = 0;

void setup() {
 pinMode(foco,OUTPUT);
 pinMode(sensor,INPUT);
 digitalWrite(foco,HIGH);
}

void loop() {

val =digitalRead(sensor);




if(val == 1){
  digitalWrite(foco,LOW);
  delay(2000);
}
else{
  digitalWrite(foco,HIGH);
}


}
