; undefined FUN_080c888c(void)
; entry 0x80c888c  size 20 bytes

080C888C: 00b5         push {lr}
080C888E: 044a         ldr r2,[0x080c88a0]
080C8890: 017c         ldrb r1,[r0,#0x10]
080C8892: 8900         lsl r1,r1,#0x2
080C8894: 8918         add r1,r1,r2
080C8896: 0968         ldr r1,[r1,#0x0]
080C8898: 60f072fb     bl 0x08128f80
080C889C: 01bc         pop {r0}
080C889E: 0047         bx r0
