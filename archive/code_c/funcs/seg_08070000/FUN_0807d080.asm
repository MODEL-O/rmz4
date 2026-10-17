; undefined FUN_0807d080(void)
; entry 0x807d080  size 20 bytes

0807D080: 00b5         push {lr}
0807D082: 044a         ldr r2,[0x0807d094]
0807D084: 817b         ldrb r1,[r0,#0xe]
0807D086: 8900         lsl r1,r1,#0x2
0807D088: 8918         add r1,r1,r2
0807D08A: 0968         ldr r1,[r1,#0x0]
0807D08C: abf078ff     bl 0x08128f80
0807D090: 01bc         pop {r0}
0807D092: 0047         bx r0
