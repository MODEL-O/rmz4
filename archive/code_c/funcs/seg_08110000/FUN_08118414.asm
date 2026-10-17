; undefined FUN_08118414(void)
; entry 0x8118414  size 20 bytes

08118414: 00b5         push {lr}
08118416: 044a         ldr r2,[0x08118428]
08118418: 8178         ldrb r1,[r0,#0x2]
0811841A: 8900         lsl r1,r1,#0x2
0811841C: 8918         add r1,r1,r2
0811841E: 0968         ldr r1,[r1,#0x0]
08118420: 10f0aefd     bl 0x08128f80
08118424: 01bc         pop {r0}
08118426: 0047         bx r0
