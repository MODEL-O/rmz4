; undefined FUN_0802b674(void)
; entry 0x802b674  size 60 bytes

0802B674: 00b5         push {lr}
0802B676: 031c         add r3,r0,#0x0
0802B678: 0022         mov r2,#0x0
0802B67A: 181c         add r0,r3,#0x0
0802B67C: bc30         add r0,#0xbc
0802B67E: 8118         add r1,r0,r2
0802B680: 0878         ldrb r0,[r1,#0x0]
0802B682: 1f28         cmp r0,#0x1f
0802B684: 0ed8         bhi 0x0802b6a4
0802B686: 0130         add r0,#0x1
0802B688: 0870         strb r0,[r1,#0x0]
0802B68A: 0006         lsl r0,r0,#0x18
0802B68C: 000e         lsr r0,r0,#0x18
0802B68E: 2028         cmp r0,#0x20
0802B690: 03d1         bne 0x0802b69a
0802B692: 2120         mov r0,#0x21
0802B694: d7f73cfa     bl 0x08002b10
0802B698: 07e0         b 0x0802b6aa
0802B69A: 2020         mov r0,#0x20
0802B69C: d7f738fa     bl 0x08002b10
0802B6A0: 0120         mov r0,#0x1
0802B6A2: 03e0         b 0x0802b6ac
0802B6A4: 0132         add r2,#0x1
0802B6A6: 032a         cmp r2,#0x3
0802B6A8: e7d9         bls 0x0802b67a
0802B6AA: 0020         mov r0,#0x0
0802B6AC: 02bc         pop {r1}
0802B6AE: 0847         bx r1
