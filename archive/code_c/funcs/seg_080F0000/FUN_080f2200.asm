; undefined FUN_080f2200(void)
; entry 0x80f2200  size 20 bytes

080F2200: 00b5         push {lr}
080F2202: 044a         ldr r2,[0x080f2214]
080F2204: 017c         ldrb r1,[r0,#0x10]
080F2206: 8900         lsl r1,r1,#0x2
080F2208: 8918         add r1,r1,r2
080F220A: 0968         ldr r1,[r1,#0x0]
080F220C: 36f0b8fe     bl 0x08128f80
080F2210: 01bc         pop {r0}
080F2212: 0047         bx r0
