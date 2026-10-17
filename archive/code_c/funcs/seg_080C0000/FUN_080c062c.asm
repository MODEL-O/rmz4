; undefined FUN_080c062c(void)
; entry 0x80c062c  size 20 bytes

080C062C: 00b5         push {lr}
080C062E: 044a         ldr r2,[0x080c0640]
080C0630: 017c         ldrb r1,[r0,#0x10]
080C0632: 8900         lsl r1,r1,#0x2
080C0634: 8918         add r1,r1,r2
080C0636: 0968         ldr r1,[r1,#0x0]
080C0638: 68f0a2fc     bl 0x08128f80
080C063C: 01bc         pop {r0}
080C063E: 0047         bx r0
