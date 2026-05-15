# Keyboard

I am making a custom keyboard for myself , it is based on 60% keyboard layout . I will also have nobs for volume and brightness control. PCB is designed in kicad and 3D covers are made in fusion.
## Features

- Base on Raspberry pico W
- Has 60% Keyboard Matrix
- Has 2 Rotor Encoder For voulem and brigtness controll 
  ### Schematic
  <br>
  
<img width="875" height="670" alt="Screenshot 2026-05-13 020343" src="https://github.com/user-attachments/assets/5b0f91e0-b78c-4cd1-afe2-05b7a2670b21" />

  ###  PCB Design
  <img width="1021" height="372" alt="Screenshot 2026-05-13 075501" src="https://github.com/user-attachments/assets/4870e2e6-a34d-47d2-9306-f980d9e94c30" />
<br>

### 3D Design
<img width="806" height="355" alt="Screenshot 2026-05-15 224021" src="https://github.com/user-attachments/assets/f666dcde-871e-44b2-b4c1-6bc68a73ef1f" />
<img width="1133" height="488" alt="Screenshot 2026-05-15 224000" src="https://github.com/user-attachments/assets/ae80e940-c619-48f8-ab78-62e31a89b46d" />
<img width="1229" height="610" alt="Screenshot 2026-05-15 223839" src="https://github.com/user-attachments/assets/979a7000-aa4b-4279-85d5-8dda375dccbc" />


<br>




- ## Bill of Materials (BOM)

| # | Item | Description | Quantity | Unit Price (USD) | Total (USD) | Link |
|---|------|-------------|----------|------------------|-------------|------|
| 1 | HMX Xinhai Switch | Mechanical keyboard switches | 7 (pack of 10) | 3.15 | 22.01 | https://meckeys.com/shop/accessories/keyboard-accessories/key-switches/hmx-xinhai-switch/?attribute_pa_key-switches=hmx-xinhai-45g |
| 2 | Meckeys Shipping | Shipping cost | 1 | 1.07 | 1.07 | https://meckeys.com |
| 3 | Raspberry Pi Pico W | RP2040 microcontroller board | 1 | 6.45 | 6.45 | https://www.amazon.in/gp/product/B08WPNM7JB/ref=sw_img_1?smid=AJ6SIZC8YQDZX&th=1 |
| 4 | Keycap Set (Baron) | Full keycap set | 1 | 19.34 | 19.34 | https://meckeys.com/shop/accessories/keyboard-accessories/keycaps/baron-keycap-set/ |
| 5 | Glorious GOAT Stabilizers | Keyboard stabilizers | 1 | 10.74 | 10.74 | https://meckeys.com/shop/accessories/keyboard-accessories/more/glorious-goat-stabilizers/ |
| 6 | Kailh Hot Swap Socket | Hot-swap sockets (pack of 10) | 7 (pack of 10) | 0.77 | 5.41 | https://meckeys.com/shop/accessories/keyboard-accessories/key-switches/kailh-hot-swap-socket/?attribute_pa_variations=white |
| 7 | PCB + 3D Print + Shipping | PCB fabrication service | 1 | 70.92 | 70.29 | https://jlcpcb.com |
| 8 | Rotary Encoder | Encoder module (pack of 2) | 1 | 1.90 | 1.90 | https://amazon.in/gp/product/B0787CN57Y/ref=sw_img_1?smid=AJ6SIZC8YQDZX&psc=1 |

**Estimated Total Hardware Cost:** **USD 137.21**

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
