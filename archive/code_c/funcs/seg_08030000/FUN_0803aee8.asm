; undefined FUN_0803aee8(void)
; entry 0x803aee8  size 48 bytes

0803AEE8: 00b5         push {lr}
0803AEEA: 021c         add r2,r0,#0x0
0803AEEC: 507b         ldrb r0,[r2,#0xd]
0803AEEE: 0128         cmp r0,#0x1
0803AEF0: 03d0         beq 0x0803aefa
0803AEF2: 0328         cmp r0,#0x3
0803AEF4: 01d0         beq 0x0803aefa
0803AEF6: 0528         cmp r0,#0x5
0803AEF8: 05d1         bne 0x0803af06
0803AEFA: 506d         ldr r0,[r2,#0x54]
0803AEFC: 0860         str r0,[r1,#0x0]
0803AEFE: 906d         ldr r0,[r2,#0x58]
0803AF00: 8022         mov r2,#0x80
0803AF02: 5201         lsl r2,r2,#0x5
0803AF04: 03e0         b 0x0803af0e
0803AF06: 506d         ldr r0,[r2,#0x54]
0803AF08: 0860         str r0,[r1,#0x0]
0803AF0A: 906d         ldr r0,[r2,#0x58]
0803AF0C: 024a         ldr r2,[0x0803af18]
0803AF0E: 8018         add r0,r0,r2
0803AF10: 4860         str r0,[r1,#0x4]
0803AF12: 0120         mov r0,#0x1
0803AF14: 02bc         pop {r1}
0803AF16: 0847         bx r1
