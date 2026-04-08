# cvboard
my cvboard for hackclub

## why did i build it
the general description for this project:

`a simple keyboard that has 2 keys, used for copying and pasting. one key will copy (control c equivalent) and the other will paste (control v equivalent) i have chosen this project because it is relatively simple and i am new to hardware and would like something manageable to start off with! id like to build this because i find myself copying and pasting a lot for several different things and i think it would be cool to have my own copy paste keyboord, i know i can reprogram the f keys to do the same thing, but i think it would be better to have my own dedicated one haha. im exited to start building!! i had seen a similiar thing to this being done on dragons den/shark tank and i thought it would be cool to see if i could recreate it im thinking of also adding a little twisting nob that can flip what each button maps to, so can switch round which is copy and which one is paste - however i am not too sure how feasable this is.`

so in short: i saw this cool thing on shark tank (however didnt get any investors) and i thought i wanted to make it similiar, as i find the cntrl v and cntrl c keys a bit annoying and it would be good to have a little keyboard that i could use just to do it for me!


## how does it work
basically there is a case for it, and the pcb itself:
- the pcb uses the microcontroller: seeeduino-xiao (the one recommended in a [tutorial](https://hackpad.hackclub.com/guide) that i took inspiration from)
- then there are 2 keys, one for control c and one for control c
- this is then connected to the computer via a usb (that goes throught the case and goes into the pcb), which sends the signals from the button press.

to set up the project:
- get the case: insert the pcb
- then put the lid on (and screw in)
- then add usb and can use!

## design considerations
- as this was my first pcb project there were several design considerations that had to be made due to failures on my part:
- i chose to not use any key pads as in the design of the pcb i had put the seeeduino-xiao on the other side of the pcb, however i didnt put the buttons in the correct place in order to use a dxf file creator for a macropad (ai03)
- as a reuslt of this, i had to make my own lid, which just had a cut out for where the buttons where, this means it has a more "hardware" kind of look, and actually kind of fits with a look i want.
- i was planning originally to add a turning nob to switch the mappings of the keys around - however i later decided against that idea.

## some screenshots of the project:
the pcb schematic:
<img width="619" height="245" alt="image" src="https://github.com/user-attachments/assets/29a2c084-36e7-4b7f-a066-8646a601eb71" />
the pcb itself:
<img width="167" height="335" alt="image" src="https://github.com/user-attachments/assets/3a11564e-a889-46c5-81f7-0949939c1fe7" />
<img width="838" height="551" alt="image" src="https://github.com/user-attachments/assets/67afaf3a-0a5f-4712-9961-5e15f35b9a62" />
the case:
<img width="749" height="561" alt="image" src="https://github.com/user-attachments/assets/b88cb1f6-ea30-4009-8113-a6ca6ab82df1" />
<img width="756" height="571" alt="image" src="https://github.com/user-attachments/assets/3ff3a788-a87c-4514-b737-5bc804e57fc2" />


## BOM
copied straight from the hackclub repository (with a few small edits)
- 2x Cherry MX Switches
- 5x M3x5x4 Heatset inserts
- 3x M3x16mm SHCS Bolts
- 2X M3x12mm SHCS Bolts
- 5x 1N4148 DO-35 Diodes.
- 2x WS2812B LEDs
- 1x 0.91" 128x32 OLED Display
- 1x EC11 Rotary Encoder
- 1x XIAO RP2040
- 1x Case (3 printed parts, 2 laser cut parts)
  what kicad gives me when i select generate BOM:
  "Reference","Qty","Value","DNP","Exclude from BOM","Exclude from Board","Footprint","Datasheet"
"SW1,SW2","2","SW_Push","","","","Button_Switch_Keyboard:SW_Cherry_MX_1.00u_PCB","~"
"U1","1","MOUDLE-SEEEDUINO-XIAO","","","","footprints:XIAO-Generic-Hybrid-14P-2.54-21X17.8MM",""






