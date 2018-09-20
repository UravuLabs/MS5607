#include<../MS5607.h>

MS5607 P_Sens;

void setup(void){
  Serial.begin(9600);
  if(!P_Sens.begin()){
    Serial.println("Error in Communicating with sensor, check your connections!");
  }else{
    Serial.prinln("MS5607 initialization successful!");
  }
}

void loop(void){
  float P_val,T_val,H_val;
  if(P_Sens.readDigitalValue()){
    T_val = P_Sens.getTemperature();
    P_val = P_Sens.getPressure();
    H_val = P_Sens.getAltitude();
  }else{
    Serial.println("Error in reading digital value in sensor!");
  }

  Serial.print("Temperature : ");
  Serial.println(T_val);
  Serial.print("Pressure    : ");
  Serial.println(P_val);
  Serial.print("Altitude    : ");
  Serial.println(H_val);
  
  delay(1000);
}
