; undefined FUN_08047150(void)
; entry 0x8047150  size 20 bytes

08047150: 00b5         push {lr}
08047152: 044a         ldr r2,[0x08047164]
08047154: 017c         ldrb r1,[r0,#0x10]
08047156: 8900         lsl r1,r1,#0x2
08047158: 8918         add r1,r1,r2
0804715A: 0968         ldr r1,[r1,#0x0]
0804715C: e1f010ff     bl 0x08128f80
08047160: 01bc         pop {r0}
08047162: 0047         bx r0
