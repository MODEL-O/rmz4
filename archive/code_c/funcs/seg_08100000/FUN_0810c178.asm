; undefined FUN_0810c178(void)
; entry 0x810c178  size 20 bytes

0810C178: 00b5         push {lr}
0810C17A: 044a         ldr r2,[0x0810c18c]
0810C17C: 017c         ldrb r1,[r0,#0x10]
0810C17E: 8900         lsl r1,r1,#0x2
0810C180: 8918         add r1,r1,r2
0810C182: 0968         ldr r1,[r1,#0x0]
0810C184: 1cf0fcfe     bl 0x08128f80
0810C188: 01bc         pop {r0}
0810C18A: 0047         bx r0
