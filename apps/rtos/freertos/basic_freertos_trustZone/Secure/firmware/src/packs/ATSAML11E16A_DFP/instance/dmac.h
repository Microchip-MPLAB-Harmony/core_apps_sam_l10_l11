/*
 * Instance header file for ATSAML11E16A
 *
 * Copyright (c) 2023 Microchip Technology Inc. and its subsidiaries.
 *
 * Subject to your compliance with these terms, you may use Microchip software and any derivatives
 * exclusively with Microchip products. It is your responsibility to comply with third party license
 * terms applicable to your use of third party software (including open source software) that may
 * accompany Microchip software.
 *
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY,
 * APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND
 * FITNESS FOR A PARTICULAR PURPOSE.
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, INCIDENTAL OR CONSEQUENTIAL
 * LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF
 * MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE FULLEST EXTENT
 * ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT
 * EXCEED THE AMOUNT OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 */

/* file generated from device description version 2023-04-12T14:18:55Z */
#ifndef _SAML11_DMAC_INSTANCE_
#define _SAML11_DMAC_INSTANCE_


/* ========== Instance Parameter definitions for DMAC peripheral ========== */
#define DMAC_CHANNEL0_INT_SRC                    (11)       /* DMA Channel 0 Interrupt */
#define DMAC_CHANNEL1_INT_SRC                    (12)       /* DMA Channel 1 Interrupt */
#define DMAC_CHANNEL2_INT_SRC                    (13)       /* DMA Channel 2 Interrupt */
#define DMAC_CHANNEL3_INT_SRC                    (14)       /* DMA Channel 3 Interrupt */
#define DMAC_CHANNEL4_INT_SRC                    (15)       /* DMA Channel 4 Interrupt */
#define DMAC_CHANNEL5_INT_SRC                    (15)       /* DMA Channel 5 Interrupt */
#define DMAC_CHANNEL6_INT_SRC                    (15)       /* DMA Channel 6 Interrupt */
#define DMAC_CHANNEL7_INT_SRC                    (15)       /* DMA Channel 7 Interrupt */
#define DMAC_CH_BITS                             (3)        /* Number of bits to select channel */
#define DMAC_CH_NUM                              (8)        /* Number of channels */
#define DMAC_EVIN_NUM                            (4)        /* Number of input events */
#define DMAC_EVOUT_NUM                           (4)        /* Number of output events */
#define DMAC_INSTANCE_ID                         (35)       
#define DMAC_LVL_BITS                            (2)        /* Number of bit to select level priority */
#define DMAC_LVL_NUM                             (4)        /* Enable priority level number */
#define DMAC_QOSCTRL_D_RESETVALUE                (2)        /* QOS dmac ahb interface reset value */
#define DMAC_QOSCTRL_F_RESETVALUE                (2)        /* QOS dmac fetch interface reset value */
#define DMAC_QOSCTRL_WRB_RESETVALUE              (2)        /* QOS dmac write back interface reset value */
#define DMAC_TRIG_BITS                           (5)        /* Number of bits to select trigger source */
#define DMAC_TRIG_NUM                            (24)       /* Number of peripheral triggers */

#endif /* _SAML11_DMAC_INSTANCE_ */
