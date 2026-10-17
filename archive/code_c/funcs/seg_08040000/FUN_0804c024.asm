; undefined FUN_0804c024(void)
; entry 0x804c024  size 20 bytes

0804C024: 00b5         push {lr}
0804C026: 044a         ldr r2,[0x0804c038]
0804C028: 017c         ldrb r1,[r0,#0x10]
0804C02A: 8900         lsl r1,r1,#0x2
0804C02C: 8918         add r1,r1,r2
0804C02E: 0968         ldr r1,[r1,#0x0]
0804C030: dcf0a6ff     bl 0x08128f80
0804C034: 01bc         pop {r0}
0804C036: 0047         bx r0
