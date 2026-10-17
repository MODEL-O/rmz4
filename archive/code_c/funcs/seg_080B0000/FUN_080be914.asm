; undefined FUN_080be914(void)
; entry 0x80be914  size 20 bytes

080BE914: 00b5         push {lr}
080BE916: 044a         ldr r2,[0x080be928]
080BE918: 017c         ldrb r1,[r0,#0x10]
080BE91A: 8900         lsl r1,r1,#0x2
080BE91C: 8918         add r1,r1,r2
080BE91E: 0968         ldr r1,[r1,#0x0]
080BE920: 6af02efb     bl 0x08128f80
080BE924: 01bc         pop {r0}
080BE926: 0047         bx r0
