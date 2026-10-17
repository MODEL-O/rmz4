; undefined FUN_080c5300(void)
; entry 0x80c5300  size 20 bytes

080C5300: 00b5         push {lr}
080C5302: 044a         ldr r2,[0x080c5314]
080C5304: 017c         ldrb r1,[r0,#0x10]
080C5306: 8900         lsl r1,r1,#0x2
080C5308: 8918         add r1,r1,r2
080C530A: 0968         ldr r1,[r1,#0x0]
080C530C: 63f038fe     bl 0x08128f80
080C5310: 01bc         pop {r0}
080C5312: 0047         bx r0
