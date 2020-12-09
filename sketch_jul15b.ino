
void setup() {
  pinMode (5,OUTPUT);
  pinMode (14,OUTPUT);
  pinMode (4, OUTPUT);
}

void loop() {
 //digitalWrite (2, HIGH);
 //delay (1000);
 //digitalWrite (2, LOW);//

 digitalWrite (5, LOW);
 digitalWrite (14, LOW);
 digitalWrite (4, HIGH);
 delay (75);
 digitalWrite (5, HIGH);
 digitalWrite (14, HIGH);
 digitalWrite (4, LOW);
 delay (75);
 
}

 
