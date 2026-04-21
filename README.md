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

## some screenshots of the project:
the pcb schematic:
<img width="598" height="646" alt="image" src="https://github.com/user-attachments/assets/da74ea10-42a3-4b62-8ac3-8bd4f274d8a1" />
<img width="148" height="329" alt="image" src="https://github.com/user-attachments/assets/63a6e3ef-7a7c-40a4-a866-9fa0152dc4ef" />
<img width="749" height="330" alt="image" src="https://github.com/user-attachments/assets/92d1e7d2-0f84-41f7-8320-ba6374d0cd11" />



the case:
<img width="1547" height="746" alt="image" src="https://github.com/user-attachments/assets/be0fed43-6942-40ab-98fb-1d287433fd8d" />
<img width="1366" height="811" alt="image" src="https://github.com/user-attachments/assets/d4d2d8d1-5f9b-48cc-b0d2-b66cbf3d9e02" />

<img width="826" height="678" alt="image" src="https://github.com/user-attachments/assets/ef2585f3-d095-4fa6-b572-fb410ee5a5a3" />
exploded view:
<img width="656" height="600" alt="image" src="https://github.com/user-attachments/assets/ad9a0454-7f74-425e-87dd-6d307e9df0ce" />


## BOM
.csv file can be found in this respository:
<img width="608" height="355" alt="image" src="https://github.com/user-attachments/assets/7790e93e-6426-4573-a061-0c44fc617547" />


firmware:
<img width="541" height="886" alt="image" src="https://github.com/user-attachments/assets/98e37f12-0c6b-4323-aede-25ab72e81180" />




