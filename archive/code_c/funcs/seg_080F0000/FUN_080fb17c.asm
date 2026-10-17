; undefined FUN_080fb17c(void)
; entry 0x80fb17c  size 20 bytes

080FB17C: 00b5         push {lr}
080FB17E: 044a         ldr r2,[0x080fb190]
080FB180: 017c         ldrb r1,[r0,#0x10]
080FB182: 8900         lsl r1,r1,#0x2
080FB184: 8918         add r1,r1,r2
080FB186: 0968         ldr r1,[r1,#0x0]
080FB188: 2df0fafe     bl 0x08128f80
080FB18C: 01bc         pop {r0}
080FB18E: 0047         bx r0
