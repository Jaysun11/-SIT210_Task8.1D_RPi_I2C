#include <Wire.h>

int temp;
int x = 0;

void setup() {                                 

Serial.begin(9600);                        
Wire.begin(0x08);                          
Wire.onReceive(receiveData);  

}

void loop () {

    delay(100);                        

}

void receiveData(int byteCount) { 

   while(Wire.available()) {     
       temp=Wire.read();
     }

     Serial.print(temp);
     Serial.print(": ");
     
   if (temp <10){
     
    Serial.println("Extremely Cold");
   } else if (temp >=10 && temp <19){
    Serial.println("Cold");
   } else if (temp >=19 && temp <26){
    Serial.println("Ideal Temp");
   } else if (temp >=26 && temp <37){
    Serial.println("Hot");
   }else if (temp >=37 && temp <50){
    Serial.println("Extremely Hot");
   }


    
     
   }
