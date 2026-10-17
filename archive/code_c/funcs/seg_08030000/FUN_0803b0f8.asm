; undefined FUN_0803b0f8(void)
; entry 0x803b0f8  size 28 bytes

0803B0F8: 00b5         push {lr}
0803B0FA: 021c         add r2,r0,#0x0
0803B0FC: 507c         ldrb r0,[r2,#0x11]
0803B0FE: 0028         cmp r0,#0x0
0803B100: 05d0         beq 0x0803b10e
0803B102: 506d         ldr r0,[r2,#0x54]
0803B104: 0860         str r0,[r1,#0x0]
0803B106: 906d         ldr r0,[r2,#0x58]
0803B108: 4860         str r0,[r1,#0x4]
0803B10A: 0120         mov r0,#0x1
0803B10C: 00e0         b 0x0803b110
0803B10E: 0020         mov r0,#0x0
0803B110: 02bc         pop {r1}
0803B112: 0847         bx r1
