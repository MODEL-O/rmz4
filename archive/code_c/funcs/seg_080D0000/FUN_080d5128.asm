; undefined FUN_080d5128(void)
; entry 0x80d5128  size 20 bytes

080D5128: 00b5         push {lr}
080D512A: 044a         ldr r2,[0x080d513c]
080D512C: 017c         ldrb r1,[r0,#0x10]
080D512E: 8900         lsl r1,r1,#0x2
080D5130: 8918         add r1,r1,r2
080D5132: 0968         ldr r1,[r1,#0x0]
080D5134: 53f024ff     bl 0x08128f80
080D5138: 01bc         pop {r0}
080D513A: 0047         bx r0
