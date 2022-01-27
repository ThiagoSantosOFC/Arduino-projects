
char reading;
int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;


void setup() {
  Serial.begin(9600);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

void loop() {
  if (Serial.available()){
     reading = Serial.read();

       if (reading == '1'){
         digitalWrite(led1, HIGH);
        }
       if (reading == '0'){
         digitalWrite(led1, LOW);
       }
       if (reading == '3'){
         digitalWrite(led2, HIGH);
       }
       if (reading == '2'){
         digitalWrite(led2, LOW);
       }
       if (reading == '5'){
         digitalWrite(led3, HIGH);
       }
       if (reading == '4'){
         digitalWrite(led3, LOW);
       }
       if (reading == '7'){
         digitalWrite(led4, HIGH);
       }
       if (reading == '6'){
         digitalWrite(led4, LOW);
       }
    }
}
