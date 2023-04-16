const int PIN_L = 10;
const int PIN_C = 11;
const int PIN_R = 12;

void setup(){
    Serial.begin(9600);
    pinMode(PIN_L, INPUT);
    pinMode(PIN_C, INPUT);
    pinMode(PIN_R, INPUT);
}
void loop(){
    int nilaiPinL = digitalRead(PIN_L);
    int nilaiPinC = digitalRead(PIN_C);
    int nilaiPinR = digitalRead(PIN_R);

    Serial.print("L = ");
    Serial.println(nilaiPinL);

    Serial.print("C = ");
    Serial.println(nilaiPinC);

    Serial.print("R = ");
    Serial.println(nilaiPinR);

    delay(1000);
}
