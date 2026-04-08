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





