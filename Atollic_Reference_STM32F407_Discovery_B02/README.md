Notes and bread crumbs. 

-- Make sure you update the firware in the STLink device with the ST32CubeProgrammer or the STLinkUtility
-- Make sure you have the proper windows driver, it should be V2.1.0.0 or newer. Windows likes to grab the wrong driver. Updated it via the below steps
+ Device manager
+ USB --> STM32 STLink --> properties
+ Update Driver
+ Browse my computer
+ Let me pick from a list
+ choose 2.1.0 or newer
-- Make sure you know your "core clock" or "SYSCLK" This is needs to be correct in the configuration, so that ITM will clock at the proper rate. It's probably 168MHz even though your XTAL is 8MHz. 



The below video shows me how to create a blinking LED using Atollic and some ST tools which create the base project. I now have an ST project which blinks an LED. 
https://www.youtube.com/watch?v=6RqUkFIeN6w

The below video makes it seem simple to get ITM working. 
https://www.youtube.com/watch?v=cmUc8uR_s4I

The below video shows adding header files which are not noted in the above video. 
https://www.youtube.com/watch?v=BwgPV3uKuzY