## Example Summary

COMP is configured with external inputs and outputs enabling the analog output
filter and hysteresis.

## Peripherals & Pin Assignments

| Peripheral | Pin | Function |
| --- | --- | --- |
| SYSCTL |  |  |
| VREF | PA23 | VREF Positive (VREF+) |
| COMP0 | PA11 | COMP Output Pin |
| COMP0 | PA26 | COMP Positive Channel 0 Pin |
| COMP0 | PA27 | COMP Negative Channel 0 Pin |
| EVENT |  |  |
| DEBUGSS | PA20 | Debug Clock |
| DEBUGSS | PA19 | Debug Data In Out |

## BoosterPacks, Board Resources & Jumper Settings

Visit [LP_MSPM0G3507](https://www.ti.com/tool/LP-MSPM0G3507) for LaunchPad information, including user guide and hardware files.

| Pin | Peripheral | Function | LaunchPad Pin | LaunchPad Settings |
| --- | --- | --- | --- | --- |
| PA23 | VREF | VREF+ | N/A | <ul><li>PA23 can be connected to GND using C7 or to VREF- using C8<br><ul><li>`C8` is soldered by default connecting pin to VREF-<br><li>`C7` is not soldered by default and can be used for a custom capacitor to GND</ul><br><li>PA23 can be connected to boosterpack connector<br><ul><li>`R22` is not soldered by default<br><li>Solder `R22` to connect pin to J28_10</ul></ul> |
| PA11 | COMP0 | OUT | J4_33/J26_6 | <ul><li>PA11 can be connected to XDS-110 backchannel, boosterpack connector or CAN/LIN connector:<br><ul><li>To use on boosterpack connector and disconnect XDS-110:<br>  `J22 2:3`: Connect pin to `J4_33`<br><li>To use on J26 CAN/LIN connector:<br>  `R63` is populated by default and connects pin to `J26_6`</ul></ul> |
| PA26 | COMP0 | IN0+ | J1_5 | <ul><li>PA26 can be connected to photodiode D1<br><ul><li>`J18 OFF` Disconnect from photodiode D1</ul><br><li>PA26 can be connected to thermistor RT1<br><ul><li>`J9 1:2/OFF` Disconnect from thermistor RT1</ul></ul> |
| PA27 | COMP0 | IN0- | J1_8 | <ul><li>PA27 can be connected to photodiode D1<br><ul><li>`J17 OFF` Disconnect from photodiode D1</ul></ul> |
| PA20 | DEBUGSS | SWCLK | N/A | <ul><li>PA20 is used by SWD during debugging<br><ul><li>`J101 15:16 ON` Connect to XDS-110 SWCLK while debugging<br><li>`J101 15:16 OFF` Disconnect from XDS-110 SWCLK if using pin in application</ul></ul> |
| PA19 | DEBUGSS | SWDIO | N/A | <ul><li>PA19 is used by SWD during debugging<br><ul><li>`J101 13:14 ON` Connect to XDS-110 SWDIO while debugging<br><li>`J101 13:14 OFF` Disconnect from XDS-110 SWDIO if using pin in application</ul></ul> |

### Device Migration Recommendations
This project was developed for a superset device included in the LP_MSPM0G3507 LaunchPad. Please
visit the [CCS User's Guide](https://software-dl.ti.com/msp430/esd/MSPM0-SDK/latest/docs/english/tools/ccs_ide_guide/doc_guide/doc_guide-srcs/ccs_ide_guide.html#sysconfig-project-migration)
for information about migrating to other MSPM0 devices.

### Low-Power Recommendations
TI recommends to terminate unused pins by setting the corresponding functions to
GPIO and configure the pins to output low or input with internal
pullup/pulldown resistor.

SysConfig allows developers to easily configure unused pins by selecting **Board**→**Configure Unused Pins**.

For more information about jumper configuration to achieve low-power using the
MSPM0 LaunchPad, please visit the [LP-MSPM0G3507 User's Guide](https://www.ti.com/lit/slau873).

## Example Usage

Connect COMP0_IN0+ and COMP0_IN0- to external circuitry.
Compile, load and run the example.
Check output COMP0_OUT based on inputs using an oscilloscope.

On powerup, the COMP pin(s) used in this example are by default set to
the correct analog mode. Therefore, calls to
DL_GPIO_initPeripheralAnalogFunction for pinmuxing those pins are not needed.
