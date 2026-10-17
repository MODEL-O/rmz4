; undefined FUN_080dd6c8(void)
; entry 0x80dd6c8  size 20 bytes

080DD6C8: 00b5         push {lr}
080DD6CA: 044a         ldr r2,[0x080dd6dc]
080DD6CC: 017c         ldrb r1,[r0,#0x10]
080DD6CE: 8900         lsl r1,r1,#0x2
080DD6D0: 8918         add r1,r1,r2
080DD6D2: 0968         ldr r1,[r1,#0x0]
080DD6D4: 4bf054fc     bl 0x08128f80
080DD6D8: 01bc         pop {r0}
080DD6DA: 0047         bx r0
