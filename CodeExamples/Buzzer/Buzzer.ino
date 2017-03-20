/*
 * Buzzer Example
 * Author: Tom Van den Bon 
 * 
 * Description: Example of using the Buzzer to make noise
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

int potPin = A0; 
int potValue = 0; 

void setup() {
  
}

void loop() {
  potValue = analogRead( potPin );
  tone(9, potValue + 1000, 50 );
}
