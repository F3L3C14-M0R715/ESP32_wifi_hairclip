# ESP32_wifi_hairclip
A hairclip that has a funny light that looks cool when wifi is detected. We getting chromed up with this one, choom.

The goal of this project is to make a basic device which scans for nearby Wifi every 30 seconds and lights up an LED if it is detected, It is designed so that it can be glued to a hair clip or worn decoratively for fun (mainly because the actual function is basically just null.) AND looking cool is objectively a reasonable goal.

You need:
- Wire
- Soldering Iron
- ESP32-D
- LED (blue!)
- bare hair clip of some form
- CS-IPNA5SL battery (240mAh 0.89Wh)
- TP4056 USB-C board (for recharging)

BASIC:

1. Clone the repo or copy the code in hairclip.ino
2. Flashing the ESP32
	a. Copy the code in hairclip.ino
	b. 'mkdir hairclip && cd hairclip && touch hairclip.ino && nano hairclip.ino'- Paste the code
	c. 'brew install esptool' then 'cp $(which esptool) ~/Library/Arduino15/packages/esp32/tools/esptool_py/5.3.1/esptool'
	d. 'arduino-cli compile --fqbn esp32:esp32:esp32 /path/path/hairclip'
	e. 'arduino-cli upload -p /dev/cu.usbserial-0001 -b esp32:esp32:esp32 /path/path/hairclip'
	f. 'arduino-cli monitor -p /dev/cu.usbserial-0001 --config baudrate=115200'- Make sure you see "BLIP: device detected"
3. Soldering!!11!1
	a. Solder the + Blue LED leg (long one) to the GPIO 2 pad on the ESP32
	b. Solder the - Blue LED leg (short one) to the GND (please read ahead to see that there will be another wire added here!)
	c. Solder the pad on the tag of the battery closest to its "body" to the 3v3 pad
	d. Solder the pad on the tag of the battery farthest from its "body" to GND pad (with the short leg of the LED)
4. To confirm it works, put your phone on airplane mode and walk away until the blipping stops. Walk closer to ensure it resumes again.
5. Cosmetic Assembly
	a. Trim the pins on the back of the ESP32 (where theres no soldering) to about 5mm
	b. You can now very carefully bend the pins of the ESP32 outwards and slot the battery CAREFULLY in the area
	c. Hot glue the battery to the back of the ESP32, and then the battery to the clip

RECHARGING:

1. Creating the recharging module
	a. Solder a wire to B+ and another to B-
	b. Attatch alligator clips to the ends of the wires
2. Charging process
	a.Desolder the 3v3 wire
	b.Clip alligator clips to the respective battery pads
	c.Once battery is charged (I believe the module's light will go off), disconnect the alligator wires, and resolder the 3v3 to the positive pad.

YAYYY
(half of this is entirely theoretical. Will be testing soon elfakjslfjksd)
