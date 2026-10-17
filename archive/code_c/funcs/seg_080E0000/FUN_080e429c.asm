; undefined FUN_080e429c(void)
; entry 0x80e429c  size 20 bytes

080E429C: 00b5         push {lr}
080E429E: 044a         ldr r2,[0x080e42b0]
080E42A0: 017c         ldrb r1,[r0,#0x10]
080E42A2: 8900         lsl r1,r1,#0x2
080E42A4: 8918         add r1,r1,r2
080E42A6: 0968         ldr r1,[r1,#0x0]
080E42A8: 44f06afe     bl 0x08128f80
080E42AC: 01bc         pop {r0}
080E42AE: 0047         bx r0
