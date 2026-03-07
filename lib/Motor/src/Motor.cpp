#include<Arduino.h>
#include<Motor.h>


Motor::Motor(int pinA, int pinB, int pinEnable){
    this->pinA = pinA;
    this->pinB = pinB;
    this->pinEnable = pinEnable;
}

void Motor::begin(){
    pinMode(pinA, OUTPUT);
    pinMode(pinB, OUTPUT);
}
/*
void Motor::driveVelocity(float velocity){
    
    //Turn forward
    if (velocity >= 0){
        digitalWrite(pinA, HIGH);
        digitalWrite(pinB, LOW);
    }
    //Turn backward
    else{
        digitalWrite(pinA, LOW);
        digitalWrite(pinB, HIGH);
    }
    
    float clampedVelocity = abs(max(-1.0, min(velocity, 1.0))); //Clamp velocity to between -1 and 1 and take absolute value
    bool pwmSpeed = clampedVelocity != 0;

    digitalWrite(pinEnable, pwmSpeed);  //Maybe implement PWM with ESP32
}
*/