; undefined FUN_080d629c(void)
; entry 0x80d629c  size 20 bytes

080D629C: 00b5         push {lr}
080D629E: 044a         ldr r2,[0x080d62b0]
080D62A0: 017c         ldrb r1,[r0,#0x10]
080D62A2: 8900         lsl r1,r1,#0x2
080D62A4: 8918         add r1,r1,r2
080D62A6: 0968         ldr r1,[r1,#0x0]
080D62A8: 52f06afe     bl 0x08128f80
080D62AC: 01bc         pop {r0}
080D62AE: 0047         bx r0
