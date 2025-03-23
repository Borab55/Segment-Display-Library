#ifndef segmentDisplay_H
#define segmentDisplay_H 

#include <Arduino.h> 

void initDisplay(int pin[]);    //displayin belirlenen portlarını çıkış olarak ayarla.

void printDisplay(int pin[],bool data[]);    //displaye yazdır.

void printDisplayNum(int pin[],int data);    //displaye sayı yazdır.

void clearDisplay(int pin[]);    //displayi temizler.

#endif