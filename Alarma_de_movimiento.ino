int foco = 9;
int sensor = 8;
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
