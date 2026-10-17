; undefined FUN_080e4284(void)
; entry 0x80e4284  size 20 bytes

080E4284: 00b5         push {lr}
080E4286: 044a         ldr r2,[0x080e4298]
080E4288: 017c         ldrb r1,[r0,#0x10]
080E428A: 8900         lsl r1,r1,#0x2
080E428C: 8918         add r1,r1,r2
080E428E: 0968         ldr r1,[r1,#0x0]
080E4290: 44f076fe     bl 0x08128f80
080E4294: 01bc         pop {r0}
080E4296: 0047         bx r0
