#include "segmentDisplay.h"
#include "segment_data.h"

void initDisplay(int pin[]){
    
    for(int i = 0;i<8;i++){
        pinMode(pin[i],OUTPUT);
    } 
}

void printDisplay(int pin[],bool data[]){
    
    for(int z = 0;z<8;z++){
        digitalWrite(pin[z],data[z]);
    }
}

void printDisplayNum(int pin[],int data){
    
    switch(data){
        
        case 0: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d0[z]);
            }
            
        }
        break;
        
        case 1: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d1[z]);
            }
            
        }
        break;
        
        case 2: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d2[z]);
            }
            
        }
        break;
        
        case 3: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d3[z]);
            }
            
        }
        break;
        
        case 4: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d4[z]);
            }
            
        }
        break;
        
        case 5: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d5[z]);
            }
            
        }
        break;
        
        case 6: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d6[z]);
            }
            
        }
        break;
        
        case 7: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d7[z]);
            }
            
        }
        break;
        
        case 8: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d8[z]);
            }
            
        }
        break;
        
        case 9: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d9[z]);
            }
            
        }
        break;
        
        default: {
            for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d[z]);
            }
            
        }
        break;
        
    }
}

void clearDisplay(int pin[]){
    
    for(int z = 0;z<8;z++){
                digitalWrite(pin[z],d[z]);
            }
    
}