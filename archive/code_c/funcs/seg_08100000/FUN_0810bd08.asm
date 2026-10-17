; undefined FUN_0810bd08(void)
; entry 0x810bd08  size 20 bytes

0810BD08: 00b5         push {lr}
0810BD0A: 044a         ldr r2,[0x0810bd1c]
0810BD0C: 017c         ldrb r1,[r0,#0x10]
0810BD0E: 8900         lsl r1,r1,#0x2
0810BD10: 8918         add r1,r1,r2
0810BD12: 0968         ldr r1,[r1,#0x0]
0810BD14: 1df034f9     bl 0x08128f80
0810BD18: 01bc         pop {r0}
0810BD1A: 0047         bx r0
