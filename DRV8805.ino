const int enbl = 46;
const int home = 48;
const int step = 50;
const int dir = 52;

const int sm0 = 51;
const int sm1 = 49;
//const int reset = 47;
const int reset = 25;
int nhome = 0;

void setup()
{
  pinMode(enbl, OUTPUT);
  pinMode(home, INPUT);
  pinMode(step, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(sm0, OUTPUT);
  pinMode(sm1, OUTPUT);
  pinMode(reset, OUTPUT);
  Serial.begin(9600);

  digitalWrite(enbl, false);
  digitalWrite(dir, true);
  digitalWrite(sm0, LOW);
  digitalWrite(sm1, HIGH);
        
  digitalWrite(reset, HIGH);
  delay(2);
  //delayMicroseconds(30);
  digitalWrite(reset,LOW);
}

void loop()
{
  digitalWrite(step, HIGH);
  delay(2);
  //delayMicroseconds(2);
  digitalWrite(step, LOW);
  delay(2);
  //delayMicroseconds(1400);
}