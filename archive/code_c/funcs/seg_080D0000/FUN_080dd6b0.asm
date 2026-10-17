; undefined FUN_080dd6b0(void)
; entry 0x80dd6b0  size 20 bytes

080DD6B0: 00b5         push {lr}
080DD6B2: 044a         ldr r2,[0x080dd6c4]
080DD6B4: 017c         ldrb r1,[r0,#0x10]
080DD6B6: 8900         lsl r1,r1,#0x2
080DD6B8: 8918         add r1,r1,r2
080DD6BA: 0968         ldr r1,[r1,#0x0]
080DD6BC: 4bf060fc     bl 0x08128f80
080DD6C0: 01bc         pop {r0}
080DD6C2: 0047         bx r0
