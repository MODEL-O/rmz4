; undefined FUN_080ecefc(void)
; entry 0x80ecefc  size 20 bytes

080ECEFC: 00b5         push {lr}
080ECEFE: 044a         ldr r2,[0x080ecf10]
080ECF00: 017c         ldrb r1,[r0,#0x10]
080ECF02: 8900         lsl r1,r1,#0x2
080ECF04: 8918         add r1,r1,r2
080ECF06: 0968         ldr r1,[r1,#0x0]
080ECF08: 3cf03af8     bl 0x08128f80
080ECF0C: 01bc         pop {r0}
080ECF0E: 0047         bx r0
