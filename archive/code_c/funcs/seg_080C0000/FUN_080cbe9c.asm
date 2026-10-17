; undefined FUN_080cbe9c(void)
; entry 0x80cbe9c  size 20 bytes

080CBE9C: 00b5         push {lr}
080CBE9E: 044a         ldr r2,[0x080cbeb0]
080CBEA0: 017c         ldrb r1,[r0,#0x10]
080CBEA2: 8900         lsl r1,r1,#0x2
080CBEA4: 8918         add r1,r1,r2
080CBEA6: 0968         ldr r1,[r1,#0x0]
080CBEA8: 5df06af8     bl 0x08128f80
080CBEAC: 01bc         pop {r0}
080CBEAE: 0047         bx r0
