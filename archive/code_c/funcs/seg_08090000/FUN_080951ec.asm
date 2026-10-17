; undefined FUN_080951ec(void)
; entry 0x80951ec  size 20 bytes

080951EC: 00b5         push {lr}
080951EE: 044a         ldr r2,[0x08095200]
080951F0: 017c         ldrb r1,[r0,#0x10]
080951F2: 8900         lsl r1,r1,#0x2
080951F4: 8918         add r1,r1,r2
080951F6: 0968         ldr r1,[r1,#0x0]
080951F8: 93f0c2fe     bl 0x08128f80
080951FC: 01bc         pop {r0}
080951FE: 0047         bx r0
