; undefined FUN_080fafc4(void)
; entry 0x80fafc4  size 20 bytes

080FAFC4: 00b5         push {lr}
080FAFC6: 044a         ldr r2,[0x080fafd8]
080FAFC8: 017c         ldrb r1,[r0,#0x10]
080FAFCA: 8900         lsl r1,r1,#0x2
080FAFCC: 8918         add r1,r1,r2
080FAFCE: 0968         ldr r1,[r1,#0x0]
080FAFD0: 2df0d6ff     bl 0x08128f80
080FAFD4: 01bc         pop {r0}
080FAFD6: 0047         bx r0
