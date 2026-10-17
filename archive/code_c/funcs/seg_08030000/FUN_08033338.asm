; undefined FUN_08033338(void)
; entry 0x8033338  size 20 bytes

08033338: 00b5         push {lr}
0803333A: 044a         ldr r2,[0x0803334c]
0803333C: 817b         ldrb r1,[r0,#0xe]
0803333E: 8900         lsl r1,r1,#0x2
08033340: 8918         add r1,r1,r2
08033342: 0968         ldr r1,[r1,#0x0]
08033344: f5f01cfe     bl 0x08128f80
08033348: 01bc         pop {r0}
0803334A: 0047         bx r0
