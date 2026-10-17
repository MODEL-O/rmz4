; undefined FUN_080cef3c(void)
; entry 0x80cef3c  size 20 bytes

080CEF3C: 00b5         push {lr}
080CEF3E: 044a         ldr r2,[0x080cef50]
080CEF40: 017c         ldrb r1,[r0,#0x10]
080CEF42: 8900         lsl r1,r1,#0x2
080CEF44: 8918         add r1,r1,r2
080CEF46: 0968         ldr r1,[r1,#0x0]
080CEF48: 5af01af8     bl 0x08128f80
080CEF4C: 01bc         pop {r0}
080CEF4E: 0047         bx r0
