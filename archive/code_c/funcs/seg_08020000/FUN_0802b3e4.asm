; undefined FUN_0802b3e4(void)
; entry 0x802b3e4  size 26 bytes

0802B3E4: 00b5         push {lr}
0802B3E6: 0028         cmp r0,#0x0
0802B3E8: 06d0         beq 0x0802b3f8
0802B3EA: 0021         mov r1,#0x0
0802B3EC: 007b         ldrb r0,[r0,#0xc]
0802B3EE: 0128         cmp r0,#0x1
0802B3F0: 00d9         bls 0x0802b3f4
0802B3F2: 0121         mov r1,#0x1
0802B3F4: 081c         add r0,r1,#0x0
0802B3F6: 00e0         b 0x0802b3fa
0802B3F8: 0120         mov r0,#0x1
0802B3FA: 02bc         pop {r1}
0802B3FC: 0847         bx r1
