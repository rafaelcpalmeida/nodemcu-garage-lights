# NodeMCU Garage Lights

This code is designed to monitor the status of a reed switch and activate a relay to turn on garage lights when the switch circuit is closed. In this application, a closed switch indicates that the garage door is open.

## Hardware Requirements

- NodeMCU board
- Reed switch
- Relay module
- Garage lights

## Wiring

![Alt text](schematic.png?raw=true "Wiring Diagram")

## Installation

1. Clone this repository to your local machine using git clone https://github.com/rafaelcpalmeida/nodemcu-garage-lights.git.
2. Open the `nodemcu-garage-lights.ino` file in the Arduino IDE.
3. Connect your NodeMCU board to your computer and select the appropriate board and port in the Arduino IDE.
4. Upload the code to the NodeMCU board.
5. Connect the reed switch and relay module to the NodeMCU board according to the wiring diagram provided in the `schematic.png` file.
6. Connect your garage lights to the relay module.
7. Power on the NodeMCU board and test the code by opening and closing the garage door to trigger the reed switch.

## Usage

When the reed switch is closed (garage door is open), the relay will activate and turn on the garage lights. When the switch is open (garage door is closed), the relay will deactivate and turn off the lights.

## License

This code is released under the MIT license. See the LICENSE file for more information.