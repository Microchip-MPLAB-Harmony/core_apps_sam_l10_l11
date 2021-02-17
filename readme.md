---
title: Harmony 3 driver and system service application examples for SAM L10/L11 family
nav_order: 1
has_children: true
has_toc: false
---
[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# Harmony 3 driver and system service application examples for SAM L10/L11 family

MPLAB® Harmony 3 is an extension of the MPLAB® ecosystem for creating embedded firmware solutions for Microchip 32-bit SAM and PIC® microcontroller and microprocessor devices.  Refer to the following links for more information.

- [Microchip 32-bit MCUs](https://www.microchip.com/design-centers/32-bit)
- [Microchip 32-bit MPUs](https://www.microchip.com/design-centers/32-bit-mpus)
- [Microchip MPLAB X IDE](https://www.microchip.com/mplab/mplab-x-ide)
- [Microchip MPLAB® Harmony](https://www.microchip.com/mplab/mplab-harmony)
- [Microchip MPLAB® Harmony Pages](https://microchip-mplab-harmony.github.io/)

This repository contains the MPLAB® Harmony 3 driver and system service application examples for SAM L10/L11 family

- [Release Notes](release_notes.md)
- [MPLAB® Harmony License](mplab_harmony_license.md)

To clone or download these applications from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11) and then click **Clone** button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

## Contents Summary

| Folder     | Description                             |
| ---        | ---                                     |
| apps       | Contains driver and system service example applications |
| docs       | Contains documentation in html format for offline viewing (to be used only after cloning this repository onto a local machine). Use [github pages](https://microchip-mplab-harmony.github.io/core_apps_sam_l10_l11/) of this repository for viewing it online. |

## Code Examples

The following applications are provided to demonstrate the typical or interesting usage models of one or more peripheral libraries.

| Name | Description |
| ---- | ----------- |
| [I2C driver asynchronous - I2C EEPROM](apps/driver/i2c/async/i2c_eeprom/readme.md) | This example application shows how to use the I2C driver in asynchronous mode to perform operations on the EEPROM |
| [I2C driver asynchronous - I2C Multi-client](apps/driver/i2c/async/i2c_multi_slave/readme.md) | This example application shows how to use multi-client feature of the I2C driver in asynchronous mode to communicate with temperature sensor and an EEPROM |
| [SDSPI driver asynchronous - SDSPI Read Write](apps/driver/sdspi/async/sdspi_read_write/readme.md) | This example application shows how to use the SDSPI driver in asynchronous mode to perform non-blocking operations on the SD Card Media |
| [SPI Driver asynchronous - multi slave ](apps/driver/spi/async/spi_multi_slave/readme.md) | This example demonstrates how to use single instance of the SPI driver in asynchronous mode to communicate with multiple EEPROMs |
| [USART driver asynchronous - UART echo](apps/driver/usart/async/usart_echo/readme.md) | This example echoes the received characters over the console using the USART driver in asynchronous mode |
| [FAT filesystem using NVM Media](apps/fs/nvm_fat/readme.md) | This application shows an example of implementing a FAT disk in the device internal Flash memory |
| [FreeRTOS basic](apps/rtos/freertos/basic_freertos/readme.md) | This example application demonstrates context switching between four tasks of different priorites. Two tasks run periodically while the other two tasks are event driven |
| [TrustZone FreeRTOS basic](apps/rtos/freertos/basic_freertos_trustZone/readme.md) | This example application blinks an LED to show the FreeRTOS threads that are running in non-secure mode and to indicate status |
| [Title](apps/rtos/freertos/basic_freertos_trustZone/NonSecure/readme.md) | short_description |
| [Title](apps/rtos/freertos/basic_freertos_trustZone/Secure/readme.md) | short_description |
| [Console Debug System Service using UART](apps/system/console_debug/sys_console_debug_uart_read_write/readme.md) | This example application demonstrates the UART based console and debug system service |
| [Time System Service multi-client](apps/system/time/sys_time_multiclient/readme.md) | This example application demonstrates the multi-client system timer functionality |

____

[![License](https://img.shields.io/badge/license-Harmony%20license-orange.svg)](https://github.com/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11/blob/master/mplab_harmony_license.md)
[![Latest release](https://img.shields.io/github/release/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11.svg)](https://github.com/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11/releases/latest)
[![Latest release date](https://img.shields.io/github/release-date/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11.svg)](https://github.com/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11/releases/latest)
[![Commit activity](https://img.shields.io/github/commit-activity/y/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11.svg)](https://github.com/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11/graphs/commit-activity)
[![Contributors](https://img.shields.io/github/contributors-anon/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11.svg)]()

____

[![Follow us on Youtube](https://img.shields.io/badge/Youtube-Follow%20us%20on%20Youtube-red.svg)](https://www.youtube.com/user/MicrochipTechnology)
[![Follow us on LinkedIn](https://img.shields.io/badge/LinkedIn-Follow%20us%20on%20LinkedIn-blue.svg)](https://www.linkedin.com/company/microchip-technology)
[![Follow us on Facebook](https://img.shields.io/badge/Facebook-Follow%20us%20on%20Facebook-blue.svg)](https://www.facebook.com/microchiptechnology/)
[![Follow us on Twitter](https://img.shields.io/twitter/follow/MicrochipTech.svg?style=social)](https://twitter.com/MicrochipTech)

[![](https://img.shields.io/github/stars/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11.svg?style=social)]()
[![](https://img.shields.io/github/watchers/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11.svg?style=social)]()