; undefined FUN_080497e4(void)
; entry 0x80497e4  size 20 bytes

080497E4: 00b5         push {lr}
080497E6: 044a         ldr r2,[0x080497f8]
080497E8: 017c         ldrb r1,[r0,#0x10]
080497EA: 8900         lsl r1,r1,#0x2
080497EC: 8918         add r1,r1,r2
080497EE: 0968         ldr r1,[r1,#0x0]
080497F0: dff0c6fb     bl 0x08128f80
080497F4: 01bc         pop {r0}
080497F6: 0047         bx r0
