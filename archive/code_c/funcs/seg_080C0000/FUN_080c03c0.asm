; undefined FUN_080c03c0(void)
; entry 0x80c03c0  size 20 bytes

080C03C0: 00b5         push {lr}
080C03C2: 044a         ldr r2,[0x080c03d4]
080C03C4: 017c         ldrb r1,[r0,#0x10]
080C03C6: 8900         lsl r1,r1,#0x2
080C03C8: 8918         add r1,r1,r2
080C03CA: 0968         ldr r1,[r1,#0x0]
080C03CC: 68f0d8fd     bl 0x08128f80
080C03D0: 01bc         pop {r0}
080C03D2: 0047         bx r0
