; undefined FUN_080ec5e0(void)
; entry 0x80ec5e0  size 20 bytes

080EC5E0: 00b5         push {lr}
080EC5E2: 044a         ldr r2,[0x080ec5f4]
080EC5E4: 017c         ldrb r1,[r0,#0x10]
080EC5E6: 8900         lsl r1,r1,#0x2
080EC5E8: 8918         add r1,r1,r2
080EC5EA: 0968         ldr r1,[r1,#0x0]
080EC5EC: 3cf0c8fc     bl 0x08128f80
080EC5F0: 01bc         pop {r0}
080EC5F2: 0047         bx r0
