; undefined FUN_080c6530(void)
; entry 0x80c6530  size 20 bytes

080C6530: 00b5         push {lr}
080C6532: 044a         ldr r2,[0x080c6544]
080C6534: 017c         ldrb r1,[r0,#0x10]
080C6536: 8900         lsl r1,r1,#0x2
080C6538: 8918         add r1,r1,r2
080C653A: 0968         ldr r1,[r1,#0x0]
080C653C: 62f020fd     bl 0x08128f80
080C6540: 01bc         pop {r0}
080C6542: 0047         bx r0
