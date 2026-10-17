; undefined FUN_080e04c8(void)
; entry 0x80e04c8  size 20 bytes

080E04C8: 00b5         push {lr}
080E04CA: 044a         ldr r2,[0x080e04dc]
080E04CC: 017c         ldrb r1,[r0,#0x10]
080E04CE: 8900         lsl r1,r1,#0x2
080E04D0: 8918         add r1,r1,r2
080E04D2: 0968         ldr r1,[r1,#0x0]
080E04D4: 48f054fd     bl 0x08128f80
080E04D8: 01bc         pop {r0}
080E04DA: 0047         bx r0
