; undefined FUN_080c30e8(void)
; entry 0x80c30e8  size 20 bytes

080C30E8: 00b5         push {lr}
080C30EA: 044a         ldr r2,[0x080c30fc]
080C30EC: 017c         ldrb r1,[r0,#0x10]
080C30EE: 8900         lsl r1,r1,#0x2
080C30F0: 8918         add r1,r1,r2
080C30F2: 0968         ldr r1,[r1,#0x0]
080C30F4: 65f044ff     bl 0x08128f80
080C30F8: 01bc         pop {r0}
080C30FA: 0047         bx r0
