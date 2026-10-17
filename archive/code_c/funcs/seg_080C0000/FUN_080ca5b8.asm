; undefined FUN_080ca5b8(void)
; entry 0x80ca5b8  size 20 bytes

080CA5B8: 00b5         push {lr}
080CA5BA: 044a         ldr r2,[0x080ca5cc]
080CA5BC: 017c         ldrb r1,[r0,#0x10]
080CA5BE: 8900         lsl r1,r1,#0x2
080CA5C0: 8918         add r1,r1,r2
080CA5C2: 0968         ldr r1,[r1,#0x0]
080CA5C4: 5ef0dcfc     bl 0x08128f80
080CA5C8: 01bc         pop {r0}
080CA5CA: 0047         bx r0
