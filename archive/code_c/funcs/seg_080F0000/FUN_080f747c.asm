; undefined FUN_080f747c(void)
; entry 0x80f747c  size 20 bytes

080F747C: 00b5         push {lr}
080F747E: 044a         ldr r2,[0x080f7490]
080F7480: 017c         ldrb r1,[r0,#0x10]
080F7482: 8900         lsl r1,r1,#0x2
080F7484: 8918         add r1,r1,r2
080F7486: 0968         ldr r1,[r1,#0x0]
080F7488: 31f07afd     bl 0x08128f80
080F748C: 01bc         pop {r0}
080F748E: 0047         bx r0
