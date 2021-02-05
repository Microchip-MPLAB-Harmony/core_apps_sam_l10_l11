---
parent: Harmony 3 driver and system service application examples for SAM L10/L11 family
title: USART driver asynchronous - UART echo 
has_children: false
has_toc: false
---

[![MCHP](https://www.microchip.com/ResourcePackages/Microchip/assets/dist/images/logo.png)](https://www.microchip.com)

# USART driver asynchronous - UART echo

This example echoes the received characters over the console using the USART driver in asynchronous mode.

## Description

This example uses the USART driver in asynchronous mode in Bare-Metal environment to communicate over the console. It receives and echo's back the characters entered by the user.

## Downloading and building the application

To clone or download this application from Github, go to the [main page of this repository](https://github.com/Microchip-MPLAB-Harmony/core_apps_sam_l10_l11) and then click Clone button to clone this repository or download as zip file.
This content can also be downloaded using content manager by following these [instructions](https://github.com/Microchip-MPLAB-Harmony/contentmanager/wiki).

Path of the application within the repository is **apps/driver/usart/async/usart_echo/firmware** .

To build the application, refer to the following table and open the project using its IDE.

| Project Name      | Description                                    |
| ----------------- | ---------------------------------------------- |
| sam_l10_xpro.X | MPLABX project for [SAML10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204) |
| sam_l10_xpro_keil.KEIL/async_usart_echo_sam_l10_xpro_keil.uvprojx | KEIL project for [SAML10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204) |
|||

## Setting up the hardware

The following table shows the target hardware for the application projects.

| Project Name| Board|
|:---------|:---------:|
| sam_l10_xpro.X or sam_l10_xpro_keil.KEIL/async_usart_echo_sam_l10_xpro_keil.uvprojx | [SAML10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204) |
|||

### Setting up [SAML10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204)

- Connect the Debug USB port on the board to the computer using a micro USB cable

## Running the Application

1. Open the Terminal application (Ex.:Tera term) on the computer
2. Connect to the EDBG Virtual COM port and configure the serial settings as follows:
    - Baud : 115200
    - Data : 8 Bits
    - Parity : None
    - Stop : 1 Bit
    - Flow Control : None
3. Build and Program the application using its IDE
4. Type a character and observe the output on the console as shown below:

    ![output_async_usart_echo](images/output_async_usart_echo.png)

5. LED toggles each time the character is echoed

Refer to the following table for LED name:

| Board | LED Name |
| ----- | -------- |
|  [SAML10 Xplained Pro Evaluation Kit](https://www.microchip.com/DevelopmentTools/ProductDetails/dm320204) | LED0 |
|||
