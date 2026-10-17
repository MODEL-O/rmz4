; undefined FUN_080dd6e0(void)
; entry 0x80dd6e0  size 20 bytes

080DD6E0: 00b5         push {lr}
080DD6E2: 044a         ldr r2,[0x080dd6f4]
080DD6E4: 017c         ldrb r1,[r0,#0x10]
080DD6E6: 8900         lsl r1,r1,#0x2
080DD6E8: 8918         add r1,r1,r2
080DD6EA: 0968         ldr r1,[r1,#0x0]
080DD6EC: 4bf048fc     bl 0x08128f80
080DD6F0: 01bc         pop {r0}
080DD6F2: 0047         bx r0
