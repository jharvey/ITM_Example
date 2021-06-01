####### Current status June 1st 2021

-- There is an FreeSTUDIO project that compiles and deminstrates ITM via SWO which shows hardware is working properly. 
-- ChibiStudio project will compile and install and will debug vis SWD. However it will not display printf statements via ITM and SWO. 

####### Misc instlal notes. 

This project is an attempt to configure the ITM via SWO conneciton on a STLink to a discovery board. 

-- This project uses ChibiStudio. This must be installed prior to programming
-- At the time of development, June of 2021 this is using ChibiOS 20.3 and you must launch the launcher titled "Chibi Studio GCC 7.0" 
-- This was done with STM32F407 discovery board found here.  https://www.st.com/en/evaluation-tools/stm32f4discovery.html

##### Key notes for getting ITM to work. 
-- Make sure STLink firmware has been updated 
-- Make sure Windows drivers is proper. Windows likes to grab a wrong over driver, make sure it's 2.1.0 or newer. 
-- Make sure your STLink has the SWO trace connected, it's common that the SDLinkV2 dongles do not have this trace. 
-- Mkae sure you know your "SYSCLK" this is required to be set up in the debugger to get a proper signal to relay. 

-- The folder "Atollic_Reference_STM32F407_Discovery_B02" contains an attolic project which was made using STM32CubeMX and it proves the hardware is fucntional. It will print an "H" to the terminal in FreeSTUDIO. It was made by following the below three videos. 

The below video shows me how to create a blinking LED using Atollic and some ST tools which create the base project. I now have an ST project which blinks an LED. 
https://www.youtube.com/watch?v=6RqUkFIeN6w

The below video makes it seem simple to get ITM working. 
https://www.youtube.com/watch?v=cmUc8uR_s4I

The below video shows adding header files which are not noted in the above video. 
https://www.youtube.com/watch?v=BwgPV3uKuzY

-- TBD

THIS IS A DEMO PROJECT, AT THIS TIME THIS DOES NOT WORK WITH ChibiStudio. I'm sharing it with people to help get this project working. 