/*
 * Buttons Example
 * Author: Tom Van den Bon 
 * 
 * Description: Example of using the buttons to turn on leds
 *  
  * LED Connections:
 * 
 * LED1 - D2
 * LED2 - D3
 * LED3 - D4
 * LED4 - D5
 * LED5 - D6
 * LED6 - D7
 * LED7 - D8
 * LED8 - D10
 * LED9 - D11
 * LED10 - D12
 * LED11 - D13
 * 
 * Potentiometer Connection: A0
 * 
 * Button Connections:
 * 
 * BUTTON1 A1
 * BUTTON2 A2
 * BUTTON3 A3
 * BUTTON4 A4
 * 
 * Buzzer Connection: D9
 * 
 */


int ledPins[] = { 2, 3, 4, 5, 6, 7, 8, 10, 11, 12, 13 };
int buttonPins[] = {A1, A2, A3, A4};
int c = 0;
int ledc = 0;

int potPin = A0; 
int potValue = 0; 

void setup() {
  
  // set all leds as output
  for ( c = 0; c < 11; c++ )
  {
    pinMode( ledPins[c], OUTPUT );
  }

  // set all buttons as input
  for ( c = 0; c < 4; c++ )
  {
    pinMode( buttonPins[c], INPUT );
  }

  // turn all leds off
  for ( c = 0; c < 11; c++ )
    digitalWrite(ledPins[c], LOW);
}

void loop() {

  if ( digitalRead( buttonPins[0] ) == HIGH )
    digitalWrite( ledPins[0], HIGH );
  else
    digitalWrite( ledPins[0], LOW );

  if ( digitalRead( buttonPins[1] ) == HIGH)
    digitalWrite( ledPins[1], HIGH );
  else
    digitalWrite( ledPins[1], LOW );

  if ( digitalRead( buttonPins[2] ) == HIGH)
    digitalWrite( ledPins[2], HIGH );
  else
    digitalWrite( ledPins[2], LOW );

  if ( digitalRead( buttonPins[3] ) == HIGH )
    digitalWrite( ledPins[3], HIGH );
  else
    digitalWrite( ledPins[3], LOW );


}
