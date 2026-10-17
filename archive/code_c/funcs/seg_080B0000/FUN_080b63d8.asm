; undefined FUN_080b63d8(void)
; entry 0x80b63d8  size 20 bytes

080B63D8: 00b5         push {lr}
080B63DA: 044a         ldr r2,[0x080b63ec]
080B63DC: 417b         ldrb r1,[r0,#0xd]
080B63DE: 8900         lsl r1,r1,#0x2
080B63E0: 8918         add r1,r1,r2
080B63E2: 0968         ldr r1,[r1,#0x0]
080B63E4: 72f0ccfd     bl 0x08128f80
080B63E8: 01bc         pop {r0}
080B63EA: 0047         bx r0
