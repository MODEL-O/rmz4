; undefined FUN_080dcdc0(void)
; entry 0x80dcdc0  size 20 bytes

080DCDC0: 00b5         push {lr}
080DCDC2: 044a         ldr r2,[0x080dcdd4]
080DCDC4: 017c         ldrb r1,[r0,#0x10]
080DCDC6: 8900         lsl r1,r1,#0x2
080DCDC8: 8918         add r1,r1,r2
080DCDCA: 0968         ldr r1,[r1,#0x0]
080DCDCC: 4cf0d8f8     bl 0x08128f80
080DCDD0: 01bc         pop {r0}
080DCDD2: 0047         bx r0
