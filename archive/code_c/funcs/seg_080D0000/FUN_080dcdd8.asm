; undefined FUN_080dcdd8(void)
; entry 0x80dcdd8  size 20 bytes

080DCDD8: 00b5         push {lr}
080DCDDA: 044a         ldr r2,[0x080dcdec]
080DCDDC: 017c         ldrb r1,[r0,#0x10]
080DCDDE: 8900         lsl r1,r1,#0x2
080DCDE0: 8918         add r1,r1,r2
080DCDE2: 0968         ldr r1,[r1,#0x0]
080DCDE4: 4cf0ccf8     bl 0x08128f80
080DCDE8: 01bc         pop {r0}
080DCDEA: 0047         bx r0
