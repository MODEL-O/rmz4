; undefined FUN_0807bd6c(void)
; entry 0x807bd6c  size 20 bytes

0807BD6C: 00b5         push {lr}
0807BD6E: 044a         ldr r2,[0x0807bd80]
0807BD70: 817b         ldrb r1,[r0,#0xe]
0807BD72: 8900         lsl r1,r1,#0x2
0807BD74: 8918         add r1,r1,r2
0807BD76: 0968         ldr r1,[r1,#0x0]
0807BD78: adf002f9     bl 0x08128f80
0807BD7C: 01bc         pop {r0}
0807BD7E: 0047         bx r0
