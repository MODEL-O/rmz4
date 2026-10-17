; undefined FUN_0803afdc(void)
; entry 0x803afdc  size 36 bytes

0803AFDC: 00b5         push {lr}
0803AFDE: 021c         add r2,r0,#0x0
0803AFE0: 107c         ldrb r0,[r2,#0x10]
0803AFE2: 0028         cmp r0,#0x0
0803AFE4: 08d1         bne 0x0803aff8
0803AFE6: 506d         ldr r0,[r2,#0x54]
0803AFE8: 0860         str r0,[r1,#0x0]
0803AFEA: 906d         ldr r0,[r2,#0x58]
0803AFEC: 014a         ldr r2,[0x0803aff4]
0803AFEE: 8018         add r0,r0,r2
0803AFF0: 05e0         b 0x0803affe
0803AFF8: 506d         ldr r0,[r2,#0x54]
0803AFFA: 0860         str r0,[r1,#0x0]
0803AFFC: 906d         ldr r0,[r2,#0x58]
0803AFFE: 4860         str r0,[r1,#0x4]
0803B000: 0120         mov r0,#0x1
0803B002: 02bc         pop {r1}
0803B004: 0847         bx r1
