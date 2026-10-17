; undefined FUN_0804584c(void)
; entry 0x804584c  size 20 bytes

0804584C: 00b5         push {lr}
0804584E: 044a         ldr r2,[0x08045860]
08045850: 017c         ldrb r1,[r0,#0x10]
08045852: 8900         lsl r1,r1,#0x2
08045854: 8918         add r1,r1,r2
08045856: 0968         ldr r1,[r1,#0x0]
08045858: e3f092fb     bl 0x08128f80
0804585C: 01bc         pop {r0}
0804585E: 0047         bx r0
