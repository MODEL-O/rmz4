; undefined FUN_080d8fec(void)
; entry 0x80d8fec  size 20 bytes

080D8FEC: 00b5         push {lr}
080D8FEE: 044a         ldr r2,[0x080d9000]
080D8FF0: 417c         ldrb r1,[r0,#0x11]
080D8FF2: 8900         lsl r1,r1,#0x2
080D8FF4: 8918         add r1,r1,r2
080D8FF6: 0968         ldr r1,[r1,#0x0]
080D8FF8: 4ff0c2ff     bl 0x08128f80
080D8FFC: 01bc         pop {r0}
080D8FFE: 0047         bx r0
