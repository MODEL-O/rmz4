; undefined FUN_080bde3c(void)
; entry 0x80bde3c  size 20 bytes

080BDE3C: 00b5         push {lr}
080BDE3E: 044a         ldr r2,[0x080bde50]
080BDE40: 017c         ldrb r1,[r0,#0x10]
080BDE42: 8900         lsl r1,r1,#0x2
080BDE44: 8918         add r1,r1,r2
080BDE46: 0968         ldr r1,[r1,#0x0]
080BDE48: 6bf09af8     bl 0x08128f80
080BDE4C: 01bc         pop {r0}
080BDE4E: 0047         bx r0
