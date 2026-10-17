; undefined FUN_080133ec(void)
; entry 0x80133ec  size 66 bytes

080133EC: 00b5         push {lr}
080133EE: 094a         ldr r2,[0x08013414]
080133F0: 918a         ldrh r1,[r2,#0x14]
080133F2: 0120         mov r0,#0x1
080133F4: 0840         and r0,r1
080133F6: 0028         cmp r0,#0x0
080133F8: 0ed0         beq 0x08013418
080133FA: a220         mov r0,#0xa2
080133FC: 4000         lsl r0,r0,#0x1
080133FE: 1118         add r1,r2,r0
08013400: f020         mov r0,#0xf0
08013402: 0002         lsl r0,r0,#0x8
08013404: 0860         str r0,[r1,#0x0]
08013406: a420         mov r0,#0xa4
08013408: 4000         lsl r0,r0,#0x1
0801340A: 1118         add r1,r2,r0
0801340C: f020         mov r0,#0xf0
0801340E: 8003         lsl r0,r0,#0xe
08013410: 0de0         b 0x0801342e
08013418: a220         mov r0,#0xa2
0801341A: 4000         lsl r0,r0,#0x1
0801341C: 1118         add r1,r2,r0
0801341E: ff20         mov r0,#0xff
08013420: 0003         lsl r0,r0,#0xc
08013422: 0860         str r0,[r1,#0x0]
08013424: a420         mov r0,#0xa4
08013426: 4000         lsl r0,r0,#0x1
08013428: 1118         add r1,r2,r0
0801342A: 8a20         mov r0,#0x8a
0801342C: 4003         lsl r0,r0,#0xd
0801342E: 0860         str r0,[r1,#0x0]
08013430: 01bc         pop {r0}
08013432: 0047         bx r0
