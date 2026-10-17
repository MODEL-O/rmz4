; undefined FUN_080ca558(void)
; entry 0x80ca558  size 20 bytes

080CA558: 00b5         push {lr}
080CA55A: 044a         ldr r2,[0x080ca56c]
080CA55C: 017c         ldrb r1,[r0,#0x10]
080CA55E: 8900         lsl r1,r1,#0x2
080CA560: 8918         add r1,r1,r2
080CA562: 0968         ldr r1,[r1,#0x0]
080CA564: 5ef00cfd     bl 0x08128f80
080CA568: 01bc         pop {r0}
080CA56A: 0047         bx r0
