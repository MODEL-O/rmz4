; undefined FUN_080478a0(void)
; entry 0x80478a0  size 20 bytes

080478A0: 00b5         push {lr}
080478A2: 044a         ldr r2,[0x080478b4]
080478A4: 017c         ldrb r1,[r0,#0x10]
080478A6: 8900         lsl r1,r1,#0x2
080478A8: 8918         add r1,r1,r2
080478AA: 0968         ldr r1,[r1,#0x0]
080478AC: e1f068fb     bl 0x08128f80
080478B0: 01bc         pop {r0}
080478B2: 0047         bx r0
