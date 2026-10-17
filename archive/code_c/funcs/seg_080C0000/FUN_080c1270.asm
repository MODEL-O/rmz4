; undefined FUN_080c1270(void)
; entry 0x80c1270  size 20 bytes

080C1270: 00b5         push {lr}
080C1272: 044a         ldr r2,[0x080c1284]
080C1274: 417b         ldrb r1,[r0,#0xd]
080C1276: 8900         lsl r1,r1,#0x2
080C1278: 8918         add r1,r1,r2
080C127A: 0968         ldr r1,[r1,#0x0]
080C127C: 67f080fe     bl 0x08128f80
080C1280: 01bc         pop {r0}
080C1282: 0047         bx r0
