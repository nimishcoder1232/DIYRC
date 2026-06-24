# Finished Programming. 
Time spent: 46 min
No lapse, I used hackatime in the cursor IDE without using the AI features. 

## I started with the transmitter code. 

I first defined all the pins by looking at the XIAO ESP 32 S3, looking at the available pins, and figuring out which pins are suitable.

<img width="355" height="246" alt="image" src="https://github.com/user-attachments/assets/ee9019cd-4db8-4cb2-900a-91ae3dcd904e" />

After that, I set up the Radio command, which allows the ESP 32 to communicate with the radio via serial. 

<img width="270" height="49" alt="image" src="https://github.com/user-attachments/assets/a3bf0471-6d4c-4286-ae54-506d9367fa10" />

After that, I defined the joystick pins as inputs in order for me to use the ADC functionality.

<img width="279" height="84" alt="image" src="https://github.com/user-attachments/assets/204f9325-723a-4c4a-9d85-26d12dea9fca" />

Then I defined the Radio pins to communicate using the UART protocol at a 9600 baud rate. 

<img width="413" height="21" alt="image" src="https://github.com/user-attachments/assets/6c241667-8c4c-4034-8299-ce12ecab6c8b" />


After that, I made a function that allows me to input the raw value from the pin and map it to a value between -100 and 100. This is the data I would send over. 

<img width="450" height="150" alt="image" src="https://github.com/user-attachments/assets/1f32bdfd-8b30-49b6-9825-e49314d1578e" />

At the start of the loop, I get the raw pin data, I feed it through my function, and then put it into the variable. 

<img width="460" height="119" alt="image" src="https://github.com/user-attachments/assets/79d4abf4-2bc9-45af-8ac6-5436f1e80d2d" />

Then the code writes those values to the radio, via the UART protocol. 

<img width="463" height="162" alt="image" src="https://github.com/user-attachments/assets/d378bfa2-2490-4501-897b-9eaa9f146113" />

## How I made the receiver code.

First, the pins are defined. This radio needs to read data from the radio and then transmit it via the UART.

<img width="318" height="214" alt="image" src="https://github.com/user-attachments/assets/3eb22499-4e9b-483d-966c-bc897e9d9dbc" />

After that, I initiated the radio UART and the output UART. 

<img width="460" height="249" alt="image" src="https://github.com/user-attachments/assets/99a63982-50e6-464f-a97c-0a70d0677d1b" />

After that, in the loop, I made code that just constantly looks for a radio, and if it gets a packet, prints it out to the console and sends it via the serial connection. More functionality, like preprocessing, can be added later. 

<img width="458" height="201" alt="image" src="https://github.com/user-attachments/assets/8f078e86-3d66-43a5-93b0-6cd188b4fffe" />





