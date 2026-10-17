; undefined FUN_0809c620(void)
; entry 0x809c620  size 20 bytes

0809C620: 00b5         push {lr}
0809C622: 044a         ldr r2,[0x0809c634]
0809C624: 017c         ldrb r1,[r0,#0x10]
0809C626: 8900         lsl r1,r1,#0x2
0809C628: 8918         add r1,r1,r2
0809C62A: 0968         ldr r1,[r1,#0x0]
0809C62C: 8cf0a8fc     bl 0x08128f80
0809C630: 01bc         pop {r0}
0809C632: 0047         bx r0
