## Example Summary

This example creates a power sequence that allows for devices/pins be turned off and on in different sequences. 

## Peripherals & Pin Assignments

| Peripheral | Pin | Function |
| --- | --- | --- |
| GPIOA | PA12 | Standard Input |
| GPIOA | PA15 | Standard Output |
| GPIOA | PA16 | Standard Output |
| GPIOA | PA17 | Standard with Wake Output |
| GPIOA | PA18 | Standard with Wake Output |
| SYSCTL |  |  |
| TIMG0 |  |  |
| EVENT |  |  |
| DEBUGSS | PA20 | Debug Clock |
| DEBUGSS | PA19 | Debug Data In Out |

## BoosterPacks, Board Resources & Jumper Settings

Visit [LP_MSPM0L1306](https://www.ti.com/tool/LP-MSPM0L1306) for LaunchPad information, including user guide and hardware files.

| Pin | Peripheral | Function | LaunchPad Pin | LaunchPad Settings |
| --- | --- | --- | --- | --- |
| PA12 | GPIOA | PA12 | J4_40 | N/A |
| PA15 | GPIOA | PA15 | J3_23 | <ul><li>PA15 can be connected to thermistor RT1<br><ul><li>`J1 2:3/OFF` Disconnect thermistor RT1</ul></ul> |
| PA16 | GPIOA | PA16 | J3_24 | N/A |
| PA17 | GPIOA | PA17 | J3_25 | N/A |
| PA18 | GPIOA | PA18 | J3_26 | <ul><li>PA18 can be connected to S1 button to VCC with external pull-down<br><ul><li>`J11 ON` Connect S1 button and external pull-down<br><li>`J11 OFF` Disconnect S1 button and external pull-down</ul><br><li>PA18 can be connected to XDS-110 BSL_Invoke<br><ul><li>`J101 17:18 OFF` Disconnect pin to XDS-110 BSL Invoke</ul></ul> |
| PA20 | DEBUGSS | SWCLK | J2_13 | <ul><li>PA20 is used by SWD during debugging<br><ul><li>`J101 15:16 ON` Connect to XDS-110 SWCLK while debugging<br><li>`J101 15:16 OFF` Disconnect from XDS-110 SWCLK if using pin in application</ul></ul> |
| PA19 | DEBUGSS | SWDIO | J2_17 | <ul><li>PA19 is used by SWD during debugging<br><ul><li>`J101 13:14 ON` Connect to XDS-110 SWDIO while debugging<br><li>`J101 13:14 OFF` Disconnect from XDS-110 SWDIO if using pin in application</ul></ul> |

### Device Migration Recommendations
This project was developed for a superset device included in the LP_MSPM0L1306 LaunchPad. Please
visit the [CCS User's Guide](https://software-dl.ti.com/msp430/esd/MSPM0-SDK/latest/docs/english/tools/ccs_ide_guide/doc_guide/doc_guide-srcs/ccs_ide_guide.html#sysconfig-project-migration)
for information about migrating to other MSPM0 devices.

### Low-Power Recommendations
TI recommends to terminate unused pins by setting the corresponding functions to
GPIO and configure the pins to output low or input with internal
pullup/pulldown resistor.

SysConfig allows developers to easily configure unused pins by selecting **Board**→**Configure Unused Pins**.

For more information about jumper configuration to achieve low-power using the
MSPM0 LaunchPad, please visit the [LP-MSPM0L1306 User's Guide](https://www.ti.com/lit/slau869).

## Example Usage

Compile, load, and run the example.
Connect the output GPIOs to external devices or connect a logic analyzer to see the sequence.
To start the example apply a voltage to the input pin.
During the sequence the different pins will set high after a designated amount of time after each one is turned on.

