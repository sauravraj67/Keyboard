# Keyboard

I am making a custom keyboard for myself , it is based on 60% keyboard layout . I will also have nobs for volume and brightness control. PCB is designed in kicad and 3D covers are made in fusion.
## Features

- Base on Raspberry pico W
- Has 60% Keyboard Matrix
- Has 2 Rotor Encoder For voulem and brigtness controll 
  ### Schematic
   HOURS Worked :- 4.2 hours  <br>
So i firstly thought what would be the features of my keyboard . It is a simple mechanical keyboard in 60% layout that uses keyboard matrix so that it uses less gpio pins and diodes are used to preventing ghosting. and i will also use hot-swap so that if i want i can change the keys without soldering or de soldering. Prior to that it will has 2 rotor encoders to control the volume and brightness.

So firstly i imported all the footprints and layout of components which would be used.

Then i started with making the keyboard matrix . I used references from the web for the layout of the switches also i assigned the key sizes accordingly . I also added stabilizers for keys whose width was over 1.75 U. then i made the connection of rows and columns of the matrix .
After it i added the 2 rotor encoder ,stabilizers with required size and raspberry pi pico and made the connections of the rotor encoders to the analog pins anf colums and rows to the gpio pins.

The most time consuming part was to make the matrix because firstly you have to decide which key would be assigned to which column because after column one there are more columns then the switches over to that the sizes of each switches aren't same so i have to take a proper look on that as well . Final Look 
  
<img width="875" height="670" alt="Screenshot 2026-05-13 020343" src="https://github.com/user-attachments/assets/5b0f91e0-b78c-4cd1-afe2-05b7a2670b21" />

  ###  PCB Design  
  
   ## PCB Layout   
     HOURS Worked :- 2.5 Hours  <br>
   So i loaded the pcb with all the components again the hardest and most time consuming part was re arranging the keyboard matrix. First i added the satirizers to there responded key size , then i started arranging all the keys as per my layout at 19.05 mm and 0.7937mm grid so that the keys could easy snap with each other but many a times i had difficulties doing so , then i used different sized grides for that after i arranged all the keys then i started with arrangement of the resistors as per there connected switches in such a way that it would turn out to be a ease to me while i rout. Final look

   <img width="1151" height="406" alt="Screenshot 2026-07-01 091626" src="https://github.com/user-attachments/assets/f0621a56-d0e1-4991-8723-fd4f8d142b87" />

 ## Routing    
 Hours Worked :- 3.1 <br>

I started with routing the Diodes to the swich first then after that I routed the Rows and columns and then connected it to the MCU after which I made the connections for the Rotor encoders as well . I tried to make as clean routs as possible and used both side of the PCB to rout. Somethimes there wasn;t a way to rout so I had to make some changes onto the previous rout and this ishow the final PCB looks 
   
  <img width="1021" height="372" alt="Screenshot 2026-05-13 075501" src="https://github.com/user-attachments/assets/4870e2e6-a34d-47d2-9306-f980d9e94c30" />
<br>

### Made the case 

Hours worked :-  3.75 Hours 

So I Firstly took the dimensions of the PCB and moved to fusion for the case design firstly i started with designing the Base for that I created sketch for the base added a base height of 3mm and then moved to calculate the PCB height which will be 4.6mm (3mm for hot swap and 1.6 mm for PCB) and i added .4 mm of free space and modeled the base. Base width was 10mm less by each side in inner meserement so that the PCB can fix into in. Sketch 

<img width="1296" height="492" alt="Screenshot 2026-07-01 092745" src="https://github.com/user-attachments/assets/186ce661-f23d-4bc1-bc6c-d6b2c8040579" />

BASE <img width="1322" height="360" alt="Screenshot 2026-07-01 092849" src="https://github.com/user-attachments/assets/0be04212-6b29-4f29-8c46-96faa61e5479" />

Then I updated the schematics with exact PCB dimensions so that PCB alight perfectly with the base and added holes for the screws onto it. Prior to that i extrude the base so that to fix the above components of the pcb in the base (distance from top of PCB to mid of key switch is 5mm) Top layer would be 1.1mm so i extruded 3.9mm because few components were not fitting in the Base such as the USB-B type<img width="1386" height="372" alt="Screenshot 2026-07-01 092929" src="https://github.com/user-attachments/assets/97834fff-abff-4540-a0c5-89fa5c10f31e" />


Then I added a hole for the USB type connection and polished the Base By curing it's side
<img width="1357" height="491" alt="Screenshot 2026-07-01 093009" src="https://github.com/user-attachments/assets/a1ac8c4d-998e-422e-bb3e-1bf9c96b0943" />


After that i stated with making the Top layer i added the keyboard layout sketches and aligned it perfectly to the keys and made the top layer by adding them and added holes for the rotor encoder .First i thought just to add a small circular hole for the top but later i found that it would not fix well as come part of rotor encoder base was colliding with the top so i made square holes for it  . Final Look 

<img width="806" height="355" alt="Screenshot 2026-05-15 224021" src="https://github.com/user-attachments/assets/f666dcde-871e-44b2-b4c1-6bc68a73ef1f" />
<img width="1133" height="488" alt="Screenshot 2026-05-15 224000" src="https://github.com/user-attachments/assets/ae80e940-c619-48f8-ab78-62e31a89b46d" />
<img width="1229" height="610" alt="Screenshot 2026-05-15 223839" src="https://github.com/user-attachments/assets/979a7000-aa4b-4279-85d5-8dda375dccbc" />


<br>




# Bill of Materials (BOM)

| Index | Component | Qty | Cost (USD) | Link |
|---|---|---|---|---|
| 1 | Mechanical Keyboard Switches | 2 packs | $10.62 | https://www.amazon.in/gp/product/B0G39H2G4H |
| 2 | Meckeys Shipping | 1 | $1.07 | https://meckeys.com |
| 3 | Raspberry Pi Pico SC0917 | 1 | $5.79 | https://www.amazon.in/gp/product/B0B69KZBD8 |
| 4 | Keycap Set | 1 | $10.73 | https://www.amazon.in/gp/product/B0GFNPXVJL |
| 5 | Stabilizers | 1 | $10.74 | https://meckeys.com/shop/accessories/keyboard-accessories/more/glorious-goat-stabilizers/ |
| 6 | Kailh Hot Swap Sockets | 7 packs | $5.41 | https://meckeys.com/shop/accessories/keyboard-accessories/key-switches/kailh-hot-swap-socket/ |
| 7 | PCB + Shipping (JLCPCB) | 1 | $35.98 | https://jlcpcb.com |
| 8 | Rotary Encoder | 1 pack | $1.84 | https://www.amazon.in/gp/product/B0888RWNM1 |
| 9 | Headset / Connector | 1 | $0.79 | https://www.amazon.in/gp/product/B0BB86CQSJ |
| 10 | M3 Screws | 1 | $2.20 | https://www.amazon.in/dp/B07XFP714Z |
| 11 | 3D Printed Case | 1 | 0 | Made by Cookie With Coffee from #printing-legion |

---

## Total Estimated Cost

# ~$84.17 USD


## Hardware
- Raspberry Pico 
- Cherry MX compatible Switches
- Diode
- 2 layer PCB + 3D Case
- 2 Rotor Encoder
- Hot Swap
- Key Caps

## Firmware
- It is Based on KMK and Circuit Python
