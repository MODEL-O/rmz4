; undefined FUN_0802b5c4(void)
; entry 0x802b5c4  size 68 bytes

0802B5C4: 70b5         push {r4,r5,r6,lr}
0802B5C6: 061c         add r6,r0,#0x0
0802B5C8: 351c         add r5,r6,#0x0
0802B5CA: a435         add r5,#0xa4
0802B5CC: 0020         mov r0,#0x0
0802B5CE: 2c5e         ldrsh r4,[r5,r0]
0802B5D0: 301c         add r0,r6,#0x0
0802B5D2: 00f023f8     bl 0x0802b61c
0802B5D6: 0006         lsl r0,r0,#0x18
0802B5D8: 000e         lsr r0,r0,#0x18
0802B5DA: 8442         cmp r4,r0
0802B5DC: 10da         bge 0x0802b600
0802B5DE: 2888         ldrh r0,[r5,#0x0]
0802B5E0: 0130         add r0,#0x1
0802B5E2: 2880         strh r0,[r5,#0x0]
0802B5E4: 1f20         mov r0,#0x1f
0802B5E6: d7f793fa     bl 0x08002b10
0802B5EA: 0020         mov r0,#0x0
0802B5EC: 2c5e         ldrsh r4,[r5,r0]
0802B5EE: 301c         add r0,r6,#0x0
0802B5F0: 00f014f8     bl 0x0802b61c
0802B5F4: 0006         lsl r0,r0,#0x18
0802B5F6: 000e         lsr r0,r0,#0x18
0802B5F8: 8442         cmp r4,r0
0802B5FA: 01d0         beq 0x0802b600
0802B5FC: 0120         mov r0,#0x1
0802B5FE: 00e0         b 0x0802b602
0802B600: 0020         mov r0,#0x0
0802B602: 70bc         pop {r4,r5,r6}
0802B604: 02bc         pop {r1}
0802B606: 0847         bx r1
