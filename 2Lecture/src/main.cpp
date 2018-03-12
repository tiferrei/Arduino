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

int potPin = 0;     // Store the potentiometer pin.
int LEDPin = 13;    // Store the LED pin.
int delayValue = 0; // Store the dealy value to be used.

void setup() {
	pinMode(potPin, INPUT); // Set the potentiometer pin as INPUT.
	pinMode(LEDPin, OUTPUT); // Set the LED pin as OUTPUT.
}

void loop() {
	delayValue = analogRead(potPin); // Change delay to measured value.
	digitalWrite(LEDPin, HIGH);      // Turn the LED on.
	delay(delayValue);               // Stop the program for some time.
	digitalWrite(LEDPin, LOW);       // turn the LED off.
	delay(delayValue);               // Stop the program for some time.
}
