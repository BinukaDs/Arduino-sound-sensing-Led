/*

* ***************************  
  written : Binuka Dasunpriya
  date : 10th January 2021
  updated : 20th January 2021
  updated By : Binuka Dasunpriya
  Email : binukadasunpriya@gmail.com
  GitHub : https://github.com/BinukaDasunpriya

* ***************************  



 */

* ***************************
we need : 6 jumper wires
        : A led
        : A breadboard 
        : a sound sensor module
        : Arduino Uno/mega/nano board

Led pins : led + = arduino 5
         : led - = adruino Gnd

sound sensor module pins : Analog pin = arduino A0
                         : Vcc pin = arduino 5v 
                         : Gnd pin = arduino Gnd pin
                          
* ***************************        



// initiallize sound sensor pin
int soundsensor = A0;
// initiallize led pin
int led = 5;

void setup()
{
  
  
  //Serial monitor's baud rate
  Serial.begin(9600);
  //initiallize sound sensor as a input
  pinMode (soundsensor, INPUT);
  //initiallize led as a output
  pinMode (led, OUTPUT);
}

void loop()
{
  //initiallize sensor value
  int sensorValue = analogRead (soundsensor);
  //say serial monitor what is it have to print
  Serial.println(sensorValue);
  //set delay of serial data monitoring
  delay(500);
  if (sensorValue < 100)
  {
    //Led on
    digitalWrite(led, HIGH);
  }

  else
  {
    //Led off
    digitalWrite(led, LOW);
  }

}        
  
