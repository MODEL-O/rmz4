; undefined FUN_080c53b4(void)
; entry 0x80c53b4  size 20 bytes

080C53B4: 00b5         push {lr}
080C53B6: 044a         ldr r2,[0x080c53c8]
080C53B8: 017c         ldrb r1,[r0,#0x10]
080C53BA: 8900         lsl r1,r1,#0x2
080C53BC: 8918         add r1,r1,r2
080C53BE: 0968         ldr r1,[r1,#0x0]
080C53C0: 63f0defd     bl 0x08128f80
080C53C4: 01bc         pop {r0}
080C53C6: 0047         bx r0
