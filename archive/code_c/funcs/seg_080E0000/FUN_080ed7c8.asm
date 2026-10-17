; undefined FUN_080ed7c8(void)
; entry 0x80ed7c8  size 20 bytes

080ED7C8: 00b5         push {lr}
080ED7CA: 044a         ldr r2,[0x080ed7dc]
080ED7CC: 017c         ldrb r1,[r0,#0x10]
080ED7CE: 8900         lsl r1,r1,#0x2
080ED7D0: 8918         add r1,r1,r2
080ED7D2: 0968         ldr r1,[r1,#0x0]
080ED7D4: 3bf0d4fb     bl 0x08128f80
080ED7D8: 01bc         pop {r0}
080ED7DA: 0047         bx r0
