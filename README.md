# DIYRC
I will make a DIY RC transmitter that has joysticks and a radio. I will also have a receiver that can be plugged into any project. :D

The way this works is that the receiver needs to connect to the craft via a UART connection at a 9600 baud rate. This is not a traditional receiver with Servo ports.

The controller needs to be powered via USB. Preferably on a laptop so you can capture serial output for debugging. The receiver will have a ground wire and a 3V3 wire coming out, to be powered by the craft. The usb port is only for debugging. 

Also, note that the radios need to be paired on the same channel and frequency before the code can be used. 

Because the radios are running at 915 MHz, the open range will be realy good where there are no obstructions. I am expecting a kilometer or two. Though this drone will be usless, if there are obstacles, like in a forest, or in a large city, then it will be effective. If you want a more balanced connection, get a 2.4 connection. 

Also, this radio gives you the ability to fly way out of range and altitude, and break alot of FAA rules. Please check the rules in your area for how far you can go from your controller and the maximum altitude. I would recommend always being under 400 feet and always being able to see your drone clearly. ALSO REGISTER YOUR DRONE. 

CAD Screenshots: 

<img width="582" height="685" alt="image" src="https://github.com/user-attachments/assets/4bde53b5-fc35-42f5-afaa-81f87cc4d0e1" />

<img width="1010" height="783" alt="image" src="https://github.com/user-attachments/assets/5b4fa767-8927-4927-815a-8c68b00756d3" />

This project has no PCB, as I did not feel the need to add a PCB, just for a few simple connections. Wires will be soldered dirrectly to the microcontroller, for simplicity. My cases have enough space for the wires to fit. 
