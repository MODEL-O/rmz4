; undefined FUN_080c82a8(void)
; entry 0x80c82a8  size 20 bytes

080C82A8: 00b5         push {lr}
080C82AA: 044a         ldr r2,[0x080c82bc]
080C82AC: 017c         ldrb r1,[r0,#0x10]
080C82AE: 8900         lsl r1,r1,#0x2
080C82B0: 8918         add r1,r1,r2
080C82B2: 0968         ldr r1,[r1,#0x0]
080C82B4: 60f064fe     bl 0x08128f80
080C82B8: 01bc         pop {r0}
080C82BA: 0047         bx r0
