; undefined FUN_080c1370(void)
; entry 0x80c1370  size 20 bytes

080C1370: 00b5         push {lr}
080C1372: 044a         ldr r2,[0x080c1384]
080C1374: 017c         ldrb r1,[r0,#0x10]
080C1376: 8900         lsl r1,r1,#0x2
080C1378: 8918         add r1,r1,r2
080C137A: 0968         ldr r1,[r1,#0x0]
080C137C: 67f000fe     bl 0x08128f80
080C1380: 01bc         pop {r0}
080C1382: 0047         bx r0
