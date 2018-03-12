//
//  main.cpp
//  Advanced Blink
//
//  Created by Tiago Ferreira on 22/02/2018.
//  Copyright © 2018 Tiago Ferreira.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
//  SOFTWARE.
//

#include <Arduino.h>

int potPin = 0;   // Declare potPin to be analog pin A0.
int LEDPin = 11;  // Declare LEDPin to be Digital 11 (PWM).
int readValue;    // Use this variable to read Potentiometer.
int writeValue;   // Use this variable for writing to LED.

void setup() {
    pinMode(potPin, INPUT);   // Set potPin to be an Input.
    pinMode(LEDPin, OUTPUT);  // Set LEDPin to be an Output.
}

void loop() {
    readValue = analogRead(potPin);          // Read the voltage on the Potentiometer. 
    writeValue = (255.0/1023.0) * readValue; // Calculate writeValue for LED.
    analogWrite(LEDPin, writeValue);         // Write to the LED.
}
