; undefined FUN_080cf7a8(void)
; entry 0x80cf7a8  size 20 bytes

080CF7A8: 00b5         push {lr}
080CF7AA: 044a         ldr r2,[0x080cf7bc]
080CF7AC: 017c         ldrb r1,[r0,#0x10]
080CF7AE: 8900         lsl r1,r1,#0x2
080CF7B0: 8918         add r1,r1,r2
080CF7B2: 0968         ldr r1,[r1,#0x0]
080CF7B4: 59f0e4fb     bl 0x08128f80
080CF7B8: 01bc         pop {r0}
080CF7BA: 0047         bx r0
