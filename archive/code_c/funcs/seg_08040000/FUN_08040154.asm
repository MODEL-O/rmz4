; undefined FUN_08040154(void)
; entry 0x8040154  size 20 bytes

08040154: 00b5         push {lr}
08040156: 044a         ldr r2,[0x08040168]
08040158: 017c         ldrb r1,[r0,#0x10]
0804015A: 8900         lsl r1,r1,#0x2
0804015C: 8918         add r1,r1,r2
0804015E: 0968         ldr r1,[r1,#0x0]
08040160: e8f00eff     bl 0x08128f80
08040164: 01bc         pop {r0}
08040166: 0047         bx r0
