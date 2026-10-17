; undefined FUN_0802b7d8(void)
; entry 0x802b7d8  size 22 bytes

0802B7D8: 00b5         push {lr}
0802B7DA: e930         add r0,#0xe9
0802B7DC: 0078         ldrb r0,[r0,#0x0]
0802B7DE: 0028         cmp r0,#0x0
0802B7E0: 01d1         bne 0x0802b7e6
0802B7E2: 0020         mov r0,#0x0
0802B7E4: 01e0         b 0x0802b7ea
0802B7E6: 8020         mov r0,#0x80
0802B7E8: 4000         lsl r0,r0,#0x1
0802B7EA: 02bc         pop {r1}
0802B7EC: 0847         bx r1
