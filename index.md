(https://photos.google.com/share/AF1QipO0ofjm79WtdqiaPgvJbRWMM0RYuNqnRIxu0quzmkNXE34ZWxihrzg3TKo6hJyKCQ/photo/AF1QipN1eUUGFJkVSa8kwsrMisFfCbJeqcWjuiAmPDxa?key=X3ZOT0F1Y0xPVzJGVFREY0xPaG1aeHU5Z0RIQXNn)
# TableTop Robot (205)
This will serve as a brief description of your project. Limit this to three sentences because it can become overly long at that point. This copy should draw the user in and make she/him want to read more.

| **Engineer** | **School** | **Area of Interest** | **Grade** |
|:--:|:--:|:--:|:--:|
| Shaunabh B | San Mateo High School | Electrical Engineering | Incoming Sophomore


  
# Final Milestone
My final milestone is the increased reliability and accuracy of my robot. I ameliorated the sagging and fixed the reliability of the finger. As discussed in my second milestone, the arm sags because of weight. I put in a block of wood at the base to hold up the upper arm; this has reverberating positive effects throughout the arm. I also realized that the forearm was getting disconnected from the elbow servo’s horn because of the weight stress on the joint. Now, I make sure to constantly tighten the screws at that joint. 



# Second Milestone
My second milestone was to build my pcb and build the actual robot so that I can see if it works normally. To build the PCB I just had to put the same connections using soldering from my breadboard to a perfboard, which is a copper board with pre-drilled holes on a grid to help make a prototype circuit board. My first prototype PCB did not work since I had multiple shorts so I had to make another prototype which worked later. I used [online instructions](https://www.instructables.com/Tiny-Wanderer-A-Table-Top-Robot/) to make the structure of the robot. Something I enjoyed about reaching this milestone was to create my first successful Circuit board and making the structure of the robot. Something I stuggled with was the dimensions since they were smaller than the appropriate size so I had to sand some parts to make my screws fit.



# First Milestone
My first milestone was to create a working prototype using a breadboard. The breadboard contains the ATtiny microcontroller, servo motors,the infrared LEDs and phototransistors which act as the infrared sensor. I used this [schematic](https://github.com/BlueStamp-Engineering-2022/Shaunabh_BSE_Project/blob/f8d4d848aaaa821004db3e821adecc59988f2757/Schematic.pdf) to make the appropriate connections between components. I also used an arduino board to [code the function of the infrared sensors and the movement of the servos.](https://github.com/BlueStamp-Engineering-2022/Shaunabh_BSE_Project/blob/a1d07006e6e79339a3740421a67f5c24dbfb9e40/Tabletop_robot.ino) The infrared leds would normally shine onto a tabletop which would be picked up by the photo transistors which does the sensing part of the robot. If at any point it's one of these transistors stops detecting infrared light it would tell the alternating servo to go reverse so that it goes back to detecting infrared light. Something I enjoyed about making this is learning breadboarding and coding on arduino. Something I struggled with was breadboarding since I had no insight on this and it was my first time doing it and learning was money it was really fun my next steps would be to build my pcb and build the actual robot so that I can see if it works normally.
[![Milestone 1 Wiring](https://res.cloudinary.com/dbuxx0uql/image/upload/v1657554964/20220708_112955_uhk9om.jpg)](https://www.youtube.com/watch?v=vzuAO6n93tA "Shaunabh Milestone 1")
*click on image for linked video*
# Starter Project
My starter project is the TV-B-Gone. It switches off Televisions when you point it at a TV. The TV-B-Gone emits a pulse of invisible light, also known as Infrared signal, which is picked up by a television, and turns it off. The microcontroller, or the computer that helps the TV-B-Gone work, was pre-programmed. I soldered all of the components in the right places to assemble it. The switch at the bottom of the circuit board restarts the TV-B-Gone. The green LED next to it, switches on to show if the device is switched on. The resistor right above it reduces the current flowing to the VCC(Common collector voltage) and GND(ground) of the microcontroller. The ceramic oscillator on the circuit board vibrates to generator an oscillating signal of a specific freqency, in this case, the frequency of infrared light. The microcontroller then sends the current through the four transistors to amplify the current to send it to the LED placed in front of it. The LEDs then emit the infrared signal. During this project, something I struggled with is soldering good joints since this was my first soldering experience, the original ceramic oscillator that the TV-B-Gone kit was sent with was defective which prevented it from working, when I switched it out the TV-B-Gone started working again. The wires on the battery pack kept snapping, so I had to solder a new wire entirely. doSomething I Enjoyed about this project, is discovering fixes to the project even when it seemeed like it wouldn't work again and soldering.

[![Shaunabh Starter Project](https://res.cloudinary.com/dbuxx0uql/image/upload/v1657728809/20220708_115729_lcatec.jpg)](https://www.youtube.com/watch?v=WTV-NTjOOtQ "Shaunabh Starter Project")
*click on image for linked video*
