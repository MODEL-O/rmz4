; undefined FUN_080f2218(void)
; entry 0x80f2218  size 20 bytes

080F2218: 00b5         push {lr}
080F221A: 044a         ldr r2,[0x080f222c]
080F221C: 017c         ldrb r1,[r0,#0x10]
080F221E: 8900         lsl r1,r1,#0x2
080F2220: 8918         add r1,r1,r2
080F2222: 0968         ldr r1,[r1,#0x0]
080F2224: 36f0acfe     bl 0x08128f80
080F2228: 01bc         pop {r0}
080F222A: 0047         bx r0
