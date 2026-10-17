; undefined FUN_080ed7e0(void)
; entry 0x80ed7e0  size 20 bytes

080ED7E0: 00b5         push {lr}
080ED7E2: 044a         ldr r2,[0x080ed7f4]
080ED7E4: 017c         ldrb r1,[r0,#0x10]
080ED7E6: 8900         lsl r1,r1,#0x2
080ED7E8: 8918         add r1,r1,r2
080ED7EA: 0968         ldr r1,[r1,#0x0]
080ED7EC: 3bf0c8fb     bl 0x08128f80
080ED7F0: 01bc         pop {r0}
080ED7F2: 0047         bx r0
