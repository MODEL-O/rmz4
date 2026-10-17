; undefined FUN_0802b6d8(void)
; entry 0x802b6d8  size 38 bytes

0802B6D8: 00b5         push {lr}
0802B6DA: 031c         add r3,r0,#0x0
0802B6DC: 0906         lsl r1,r1,#0x18
0802B6DE: 090e         lsr r1,r1,#0x18
0802B6E0: 9f20         mov r0,#0x9f
0802B6E2: 4000         lsl r0,r0,#0x1
0802B6E4: 1a18         add r2,r3,r0
0802B6E6: 1078         ldrb r0,[r2,#0x0]
0802B6E8: 401a         sub r0,r0,r1
0802B6EA: 0028         cmp r0,#0x0
0802B6EC: 00da         bge 0x0802b6f0
0802B6EE: 0020         mov r0,#0x0
0802B6F0: 1070         strb r0,[r2,#0x0]
0802B6F2: 9f21         mov r1,#0x9f
0802B6F4: 4900         lsl r1,r1,#0x1
0802B6F6: 5818         add r0,r3,r1
0802B6F8: 0078         ldrb r0,[r0,#0x0]
0802B6FA: 02bc         pop {r1}
0802B6FC: 0847         bx r1
