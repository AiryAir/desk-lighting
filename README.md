# desktop-lighting
Dimmable Desktop Lighting with an Arduino

I made a small project for my own desktop where I used:
- Arduino Uno 
- A couple of LEDs
- A potentiometer (B10K)
- Breadboard
- Jumper Cables

The total cost of this project should be about US$15.

## How to make this on your own
### Connections:

B10K VCC (input voltage) --> 5V on Arduino

B10K GND (ground)        --> Ground on Arduino

B10K OUT (output)        --> A1 on Arduino

Breadboard +ve Rail 1 --> Pin 6 

Breadboard -ve Rail 1 --> Ground

Breadboard +ve Rail 2 --> Pin 5

Breadboard -ve Rail 2 --> -ve Rail 1 (we share the ground rail of the breadboard to keep the arduino tidy)

Breadboard 20 --> Pin 9

Breadboard 25 --> -ve Rail 1 (we share the ground rail again)

Now, connect a couple of LEDs on the +ve and -ve Rails on the breadboards and place one LED with +ve on breadboard pin 20 and -ve on 25.

Download the file in my github repo (dimmable_led.ino) and upload it to the arduino.

Test out the circuit by turning the knob on the potentiometer. The lights should dim and brighten.

Next step is to find a sweet spot somewhere over your desk where you can slap the arduino and the breadboard on to.
I have a small storage loft above my desk so I just stuck it to the bottom of that. I can just turn my lights off and work
with the desktop lights I made on my own.


## How does this project work?
<coming soon!>

https://youtu.be/7wKdxsvXAFo

This video should help you out a little till then.
