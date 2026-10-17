; undefined FUN_080fad64(void)
; entry 0x80fad64  size 20 bytes

080FAD64: 00b5         push {lr}
080FAD66: 044a         ldr r2,[0x080fad78]
080FAD68: 017c         ldrb r1,[r0,#0x10]
080FAD6A: 8900         lsl r1,r1,#0x2
080FAD6C: 8918         add r1,r1,r2
080FAD6E: 0968         ldr r1,[r1,#0x0]
080FAD70: 2ef006f9     bl 0x08128f80
080FAD74: 01bc         pop {r0}
080FAD76: 0047         bx r0
