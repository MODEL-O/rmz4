; undefined FUN_0804016c(void)
; entry 0x804016c  size 20 bytes

0804016C: 00b5         push {lr}
0804016E: 044a         ldr r2,[0x08040180]
08040170: 017c         ldrb r1,[r0,#0x10]
08040172: 8900         lsl r1,r1,#0x2
08040174: 8918         add r1,r1,r2
08040176: 0968         ldr r1,[r1,#0x0]
08040178: e8f002ff     bl 0x08128f80
0804017C: 01bc         pop {r0}
0804017E: 0047         bx r0
