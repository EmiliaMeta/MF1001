#include <Arduino.h>

#include <Motor.h>
#include <Encoder.h>
#define INTERVAL 0.1

Encoder encoder(4, 5, 600);


int lastMillis = 0;
int lastStep = 0;
float speed = 0;

void updateEncoders(){
    encoder.update();
}

void setup(){
    Serial.begin(256000);
    encoder.begin();
}

void loop(){
    attachInterrupt(5, updateEncoders, CHANGE);

    float deltaSeconds = (millis() - lastMillis) / 1000.0;

    if(deltaSeconds >= INTERVAL){
        speed = (float)(encoder.counter - lastStep) / deltaSeconds;

        lastStep = encoder.counter;
        lastMillis = millis();
    }


/*
    Serial.print("Steps: ");
    Serial.print(encoder.counter);
    Serial.print("   Revolutions: ");
    Serial.print(encoder.getRevolutions());
    Serial.print("   Speed: ");*/
    Serial.println(speed * 60 / encoder.countsPerRev);
    //Serial.println(" revs/min");
}