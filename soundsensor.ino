// test code for Grove - Sound Sensor

#define pinAdc A0

void setup()
{
    Serial.begin(115200);
    //Serial.println("Grove - Sound Sensor Test...");
}

void loop()
{
    long sum = 0;
    for(int i=0; i<32; i++)
    {
        sum += analogRead(A0);
    }
    sum >>= 5;
  
    Serial.println(sum);
    
    delay(10);
}