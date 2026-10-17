; undefined FUN_0804c710(void)
; entry 0x804c710  size 20 bytes

0804C710: 00b5         push {lr}
0804C712: 044a         ldr r2,[0x0804c724]
0804C714: 017c         ldrb r1,[r0,#0x10]
0804C716: 8900         lsl r1,r1,#0x2
0804C718: 8918         add r1,r1,r2
0804C71A: 0968         ldr r1,[r1,#0x0]
0804C71C: dcf030fc     bl 0x08128f80
0804C720: 01bc         pop {r0}
0804C722: 0047         bx r0
