; undefined FUN_080483f8(void)
; entry 0x80483f8  size 20 bytes

080483F8: 00b5         push {lr}
080483FA: 044a         ldr r2,[0x0804840c]
080483FC: 017c         ldrb r1,[r0,#0x10]
080483FE: 8900         lsl r1,r1,#0x2
08048400: 8918         add r1,r1,r2
08048402: 0968         ldr r1,[r1,#0x0]
08048404: e0f0bcfd     bl 0x08128f80
08048408: 01bc         pop {r0}
0804840A: 0047         bx r0
