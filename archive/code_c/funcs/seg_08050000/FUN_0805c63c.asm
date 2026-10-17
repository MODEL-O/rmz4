; undefined FUN_0805c63c(void)
; entry 0x805c63c  size 28 bytes

0805C63C: 00b5         push {lr}
0805C63E: 064a         ldr r2,[0x0805c658]
0805C640: 017c         ldrb r1,[r0,#0x10]
0805C642: 8900         lsl r1,r1,#0x2
0805C644: 8918         add r1,r1,r2
0805C646: 427b         ldrb r2,[r0,#0xd]
0805C648: 0968         ldr r1,[r1,#0x0]
0805C64A: 9200         lsl r2,r2,#0x2
0805C64C: 5218         add r2,r2,r1
0805C64E: 1168         ldr r1,[r2,#0x0]
0805C650: ccf096fc     bl 0x08128f80
0805C654: 01bc         pop {r0}
0805C656: 0047         bx r0
