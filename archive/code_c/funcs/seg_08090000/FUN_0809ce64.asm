; undefined FUN_0809ce64(void)
; entry 0x809ce64  size 20 bytes

0809CE64: 00b5         push {lr}
0809CE66: 044a         ldr r2,[0x0809ce78]
0809CE68: 017c         ldrb r1,[r0,#0x10]
0809CE6A: 8900         lsl r1,r1,#0x2
0809CE6C: 8918         add r1,r1,r2
0809CE6E: 0968         ldr r1,[r1,#0x0]
0809CE70: 8cf086f8     bl 0x08128f80
0809CE74: 01bc         pop {r0}
0809CE76: 0047         bx r0
