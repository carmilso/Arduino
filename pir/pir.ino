#define luz 4
#define pir 9


int val;
int countT;
int countF;

void setup(){
  pinMode(luz, OUTPUT);
  digitalWrite(luz, HIGH);
  pinMode(pir, INPUT);
  countT = 0;
  countF = 0;
  delay(3000);
  Serial.begin(9600);
}

void loop(){
  val = digitalRead(pir);
  Serial.print("Valor leido -> ");
  Serial.println(val);
  Serial.println();
  if(val==1){
    countT++;
    countF = 0;
  }
  else{
    countT = 0;
    countF++;
  }
  if(countT == 3)
    digitalWrite(luz, LOW);
  if(countF >= 30)
    digitalWrite(luz, HIGH);
  delay(1000);
}
