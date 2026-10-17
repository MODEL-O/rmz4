; undefined FUN_0802c5f8(void)
; entry 0x802c5f8  size 50 bytes

0802C5F8: 70b5         push {r4,r5,r6,lr}
0802C5FA: 051c         add r5,r0,#0x0
0802C5FC: 0e1c         add r6,r1,#0x0
0802C5FE: 1206         lsl r2,r2,#0x18
0802C600: 140e         lsr r4,r2,#0x18
0802C602: 221c         add r2,r4,#0x0
0802C604: 00f012f8     bl 0x0802c62c
0802C608: 0006         lsl r0,r0,#0x18
0802C60A: 0028         cmp r0,#0x0
0802C60C: 09d0         beq 0x0802c622
0802C60E: 281c         add r0,r5,#0x0
0802C610: 311c         add r1,r6,#0x0
0802C612: 221c         add r2,r4,#0x0
0802C614: 00f02cf8     bl 0x0802c670
0802C618: 0006         lsl r0,r0,#0x18
0802C61A: 0028         cmp r0,#0x0
0802C61C: 01d0         beq 0x0802c622
0802C61E: 0120         mov r0,#0x1
0802C620: 00e0         b 0x0802c624
0802C622: 0020         mov r0,#0x0
0802C624: 70bc         pop {r4,r5,r6}
0802C626: 02bc         pop {r1}
0802C628: 0847         bx r1
