; undefined FUN_08042000(void)
; entry 0x8042000  size 20 bytes

08042000: 00b5         push {lr}
08042002: 044a         ldr r2,[0x08042014]
08042004: 017c         ldrb r1,[r0,#0x10]
08042006: 8900         lsl r1,r1,#0x2
08042008: 8918         add r1,r1,r2
0804200A: 0968         ldr r1,[r1,#0x0]
0804200C: e6f0b8ff     bl 0x08128f80
08042010: 01bc         pop {r0}
08042012: 0047         bx r0
