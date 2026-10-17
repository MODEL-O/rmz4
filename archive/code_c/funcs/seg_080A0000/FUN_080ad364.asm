; undefined FUN_080ad364(void)
; entry 0x80ad364  size 20 bytes

080AD364: 00b5         push {lr}
080AD366: 044a         ldr r2,[0x080ad378]
080AD368: 017c         ldrb r1,[r0,#0x10]
080AD36A: 8900         lsl r1,r1,#0x2
080AD36C: 8918         add r1,r1,r2
080AD36E: 0968         ldr r1,[r1,#0x0]
080AD370: 7bf006fe     bl 0x08128f80
080AD374: 01bc         pop {r0}
080AD376: 0047         bx r0
