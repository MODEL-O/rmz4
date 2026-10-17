; undefined FUN_080ad598(void)
; entry 0x80ad598  size 20 bytes

080AD598: 00b5         push {lr}
080AD59A: 044a         ldr r2,[0x080ad5ac]
080AD59C: 017c         ldrb r1,[r0,#0x10]
080AD59E: 8900         lsl r1,r1,#0x2
080AD5A0: 8918         add r1,r1,r2
080AD5A2: 0968         ldr r1,[r1,#0x0]
080AD5A4: 7bf0ecfc     bl 0x08128f80
080AD5A8: 01bc         pop {r0}
080AD5AA: 0047         bx r0
