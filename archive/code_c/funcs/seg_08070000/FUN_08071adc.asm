; undefined FUN_08071adc(void)
; entry 0x8071adc  size 20 bytes

08071ADC: 00b5         push {lr}
08071ADE: 044a         ldr r2,[0x08071af0]
08071AE0: 817b         ldrb r1,[r0,#0xe]
08071AE2: 8900         lsl r1,r1,#0x2
08071AE4: 8918         add r1,r1,r2
08071AE6: 0968         ldr r1,[r1,#0x0]
08071AE8: b7f04afa     bl 0x08128f80
08071AEC: 01bc         pop {r0}
08071AEE: 0047         bx r0
