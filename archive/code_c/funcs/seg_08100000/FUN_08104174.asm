; undefined FUN_08104174(void)
; entry 0x8104174  size 20 bytes

08104174: 00b5         push {lr}
08104176: 044a         ldr r2,[0x08104188]
08104178: 017c         ldrb r1,[r0,#0x10]
0810417A: 8900         lsl r1,r1,#0x2
0810417C: 8918         add r1,r1,r2
0810417E: 0968         ldr r1,[r1,#0x0]
08104180: 24f0fefe     bl 0x08128f80
08104184: 01bc         pop {r0}
08104186: 0047         bx r0
