#include <Robot.h>

const int PIN_L = 10;
const int PIN_C = 11;
const int PIN_R = 12;

Robot bot(3,5,6,9);

void setup(){
    Serial.begin(9600);
    pinMode(PIN_L, INPUT);
    pinMode(PIN_C, INPUT);
    pinMode(PIN_R, INPUT);
    bot.aturKecepatan(60);
}
void loop(){
    int nilaiPinL = digitalRead(PIN_L);
    int nilaiPinC = digitalRead(PIN_C);
    int nilaiPinR = digitalRead(PIN_R);

    if (nilaiPinL == 1 && nilaiPinR == 0)
    {
        // Sensor kiri diluar garis hitam
        bot.belokKanan(2);
        Serial.println("Belok Kanan");
    }
    else if (nilaiPinR == 1 && nilaiPinL == 0)
    {
        bot.belokKiri(2);
        Serial.println("Belok Kiri");
    }
    else if (nilaiPinL + nilaiPinC + nilaiPinR == 0)
    {
        bot.maju(6);
        Serial.println("Maju");
    }
    else if ( nilaiPinC + nilaiPinL + nilaiPinR == 3)
    {
        bot.mundur(2);
        Serial.println("Mundur");
    }
}
