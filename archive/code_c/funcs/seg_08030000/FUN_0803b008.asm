; undefined FUN_0803b008(void)
; entry 0x803b008  size 28 bytes

0803B008: 00b5         push {lr}
0803B00A: 021c         add r2,r0,#0x0
0803B00C: 107c         ldrb r0,[r2,#0x10]
0803B00E: 0128         cmp r0,#0x1
0803B010: 05d0         beq 0x0803b01e
0803B012: 506d         ldr r0,[r2,#0x54]
0803B014: 0860         str r0,[r1,#0x0]
0803B016: 906d         ldr r0,[r2,#0x58]
0803B018: 4860         str r0,[r1,#0x4]
0803B01A: 0120         mov r0,#0x1
0803B01C: 00e0         b 0x0803b020
0803B01E: 0020         mov r0,#0x0
0803B020: 02bc         pop {r1}
0803B022: 0847         bx r1
