#define dataPin 11
#define clockPin 12
#define latchPin 13

int numRef[10] = {126,18,188,182,210,230,238,50,254,246}; //These numbers are decimal repersentations of the binary addresses used for the display

void setup() {
  // put your setup code here, to run once:
  pinMode(dataPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(latchPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int shiftCount = 0; shiftCount < 10; shiftCount ++) {
    digitalWrite(latchPin,LOW);
    shiftOut(dataPin,clockPin,LSBFIRST,numRef[shiftCount]);
    digitalWrite(latchPin,HIGH);
    delay(1000);
  }
}
