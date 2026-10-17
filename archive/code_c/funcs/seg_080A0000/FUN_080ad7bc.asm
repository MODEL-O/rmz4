; undefined FUN_080ad7bc(void)
; entry 0x80ad7bc  size 20 bytes

080AD7BC: 00b5         push {lr}
080AD7BE: 044a         ldr r2,[0x080ad7d0]
080AD7C0: 017c         ldrb r1,[r0,#0x10]
080AD7C2: 8900         lsl r1,r1,#0x2
080AD7C4: 8918         add r1,r1,r2
080AD7C6: 0968         ldr r1,[r1,#0x0]
080AD7C8: 7bf0dafb     bl 0x08128f80
080AD7CC: 01bc         pop {r0}
080AD7CE: 0047         bx r0
