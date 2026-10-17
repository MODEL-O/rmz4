; undefined FUN_080ec920(void)
; entry 0x80ec920  size 20 bytes

080EC920: 00b5         push {lr}
080EC922: 044a         ldr r2,[0x080ec934]
080EC924: 017c         ldrb r1,[r0,#0x10]
080EC926: 8900         lsl r1,r1,#0x2
080EC928: 8918         add r1,r1,r2
080EC92A: 0968         ldr r1,[r1,#0x0]
080EC92C: 3cf028fb     bl 0x08128f80
080EC930: 01bc         pop {r0}
080EC932: 0047         bx r0
