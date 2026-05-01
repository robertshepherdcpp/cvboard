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
- i was also originally going to use raspberry pi as the MCU, however i chose to switch to using the arduino mirco, as i found programming it with the arduino
ide actually easier than using QMK (as for the scale of my project for only 2 keys, i thought this was a better choice)

## how to use it
- i havent actually built it yet, however to use it the process should go something like this:
- first flash the firmware from the Arduino onto the board (e.g. using the arduino ide)
- add the Cherry keys onto the PCB, and then add the keycaps
- assemble the case (and put on the lid)
- screw in using the bolts
- then use the left key for control c (copy) and use the right key for control v (paste)

## some screenshots of the project:
the pcb:
<img width="718" height="285" alt="image" src="https://github.com/user-attachments/assets/73e5a903-aa08-4650-be45-8d9a74140903" />
<img width="244" height="699" alt="image" src="https://github.com/user-attachments/assets/1e15dab3-67df-4d44-a918-9fa1d0cd264c" />
3d model: (.step file)
<img width="567" height="658" alt="image" src="https://github.com/user-attachments/assets/7d6c4f17-dc71-4a0f-9975-ceeefd12c0b0" />


the case:
<img width="410" height="673" alt="image" src="https://github.com/user-attachments/assets/b281010b-9518-47e7-b956-4599b61a2f12" />


exploded view:
<img width="489" height="538" alt="image" src="https://github.com/user-attachments/assets/0421236f-c014-429e-914a-1462807c94f3" />

## The Zine
<img width="523" height="743" alt="image" src="https://github.com/user-attachments/assets/400d9211-e399-41ca-b652-e24fb03fc96b" />
(a pdf can also be found in this repository)

firmware:
<img width="527" height="915" alt="image" src="https://github.com/user-attachments/assets/7ec71a45-6f15-41ed-b63a-3a9c1c7e8b0c" />

## BOM
total cost: $31.08 (more details in BOM.csv in this repository)
<img width="1467" height="440" alt="image" src="https://github.com/user-attachments/assets/21dc1370-1684-4503-ae77-4ab618727262" />

