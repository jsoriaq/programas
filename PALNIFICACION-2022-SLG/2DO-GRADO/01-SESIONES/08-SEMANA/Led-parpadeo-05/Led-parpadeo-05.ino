int led7=9;
int led6=8;
int led5=7;
int led4=6;
int led3=5;
int led2=4;
int led1=3;
int led0=2;

int tiempo1=70;
int tiempo2=80;
int tiempo3=90;
int tiempo4=100;

void setup() {

pinMode (led7, OUTPUT);
pinMode (led6, OUTPUT);
pinMode (led5, OUTPUT);
pinMode (led4, OUTPUT);
pinMode (led3, OUTPUT);
pinMode (led2, OUTPUT);
pinMode (led1, OUTPUT);
pinMode (led0, OUTPUT);
}

void loop() {

for (int s1=0; s1<13; s1++) {
//01
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, HIGH);
delay(tiempo1);
//02
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, HIGH);
digitalWrite (led0, LOW);
delay(tiempo1);
//03
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, HIGH);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo1);
//04
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, HIGH);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo1);
//05
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, HIGH);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo1);
//06
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo1);
//07
digitalWrite (led7, LOW);
digitalWrite (led6, HIGH);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo1);
//08
digitalWrite (led7, HIGH);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo1);
}

for (int s2=0; s2<31; s2++) {

//s2-01
digitalWrite (led7, HIGH);
digitalWrite (led6, HIGH);
digitalWrite (led5, HIGH);
digitalWrite (led4, HIGH);
digitalWrite (led3, HIGH);
digitalWrite (led2, HIGH);
digitalWrite (led1, HIGH);
digitalWrite (led0, HIGH);
delay(tiempo2);
//s2-02
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo2);
}

for (int s3=0; s3<13; s3++) {
//01
digitalWrite (led7, HIGH);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, HIGH);
delay(tiempo3);
//02
digitalWrite (led7, LOW);
digitalWrite (led6, HIGH);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, HIGH);
digitalWrite (led0, LOW);
delay(tiempo3);
//03
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, HIGH);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo3);
//04
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, HIGH);
digitalWrite (led3, HIGH);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo3);
//05
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, HIGH);
digitalWrite (led3, HIGH);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo3);
//06
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, HIGH);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, HIGH);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo3);
//07
digitalWrite (led7, LOW);
digitalWrite (led6, HIGH);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, HIGH);
digitalWrite (led0, LOW);
delay(tiempo3);
//08
digitalWrite (led7, HIGH);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, HIGH);
delay(tiempo3);
}

for (int s4=0; s4<31; s4++) {

//s4-01
digitalWrite (led7, HIGH);
digitalWrite (led6, HIGH);
digitalWrite (led5, HIGH);
digitalWrite (led4, HIGH);
digitalWrite (led3, LOW);
digitalWrite (led2, LOW);
digitalWrite (led1, LOW);
digitalWrite (led0, LOW);
delay(tiempo4);
//s4-02
digitalWrite (led7, LOW);
digitalWrite (led6, LOW);
digitalWrite (led5, LOW);
digitalWrite (led4, LOW);
digitalWrite (led3, HIGH);
digitalWrite (led2, HIGH);
digitalWrite (led1, HIGH);
digitalWrite (led0, HIGH);
delay(tiempo4);
}

}

