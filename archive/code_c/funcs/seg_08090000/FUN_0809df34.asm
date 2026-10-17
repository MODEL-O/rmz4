; undefined FUN_0809df34(void)
; entry 0x809df34  size 58 bytes

0809DF34: 10b5         push {r4,lr}
0809DF36: 041c         add r4,r0,#0x0
0809DF38: 606d         ldr r0,[r4,#0x54]
0809DF3A: a16d         ldr r1,[r4,#0x58]
0809DF3C: 8022         mov r2,#0x80
0809DF3E: 1201         lsl r2,r2,#0x4
0809DF40: 8918         add r1,r1,r2
0809DF42: 69f79bfe     bl 0x08007c7c
0809DF46: 0004         lsl r0,r0,#0x10
0809DF48: 010c         lsr r1,r0,#0x10
0809DF4A: 0029         cmp r1,#0x0
0809DF4C: 09d0         beq 0x0809df62
0809DF4E: 606d         ldr r0,[r4,#0x54]
0809DF50: a16d         ldr r1,[r4,#0x58]
0809DF52: 6af7effa     bl 0x08008534
0809DF56: a065         str r0,[r4,#0x58]
0809DF58: 211c         add r1,r4,#0x0
0809DF5A: be31         add r1,#0xbe
0809DF5C: 0120         mov r0,#0x1
0809DF5E: 0870         strb r0,[r1,#0x0]
0809DF60: 02e0         b 0x0809df68
0809DF62: 201c         add r0,r4,#0x0
0809DF64: be30         add r0,#0xbe
0809DF66: 0170         strb r1,[r0,#0x0]
0809DF68: 10bc         pop {r4}
0809DF6A: 01bc         pop {r0}
0809DF6C: 0047         bx r0
