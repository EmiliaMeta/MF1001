#ifndef MOTOR_H
#define MOTOR_H

#include<Encoder.h>

class Motor{
    private:
        int pinA;
        int pinB;
        int pinEnable;
    public:
        Motor(int pinA, int pinB, int pinEnable);
        void begin();
        void driveVelocity(float velocity);
        void driveToPosition(float position);
};
#endif
