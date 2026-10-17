@ FUN_080c00f4  entry 0x080c00f4  size 102
.thumb
.org 0xc00f4
FUN_080c00f4:
	push {r4, lr}	@ 000c00f4 10b5
.org 0xc00f6
	adds r4, r0, #0	@ 000c00f6 041c
.org 0xc00f8
	bl 0x1cff0	@ 000c00f8 5cf77aff
.org 0xc00fc
	ldr r0, [r4, #84]	@ 000c00fc 606d
.org 0xc00fe
	ldr r1, [r4, #92]	@ 000c00fe e16d
.org 0xc0100
	adds r0, r0, r1	@ 000c0100 4018
.org 0xc0102
	str r0, [r4, #84]	@ 000c0102 6065
.org 0xc0104
	ldr r0, [r4, #88]	@ 000c0104 a06d
.org 0xc0106
	ldr r1, [r4, #96]	@ 000c0106 216e
.org 0xc0108
	adds r0, r0, r1	@ 000c0108 4018
.org 0xc010a
	str r0, [r4, #88]	@ 000c010a a065
.org 0xc010c
	ldr r0, [pc, #76]	@ 000c010c 1348
.org 0xc010e
	adds r1, r4, #0	@ 000c010e 211c
.org 0xc0110
	adds r1, #84	@ 000c0110 5431
.org 0xc0112
	bl 0x1fb14	@ 000c0112 5ff7fffc
.org 0xc0116
	movs r1, #240	@ 000c0116 f021
.org 0xc0118
	lsls r1, r1, #8	@ 000c0118 0902
.org 0xc011a
	cmp r0, r1	@ 000c011a 8842
.org 0xc011c
	bls.n 0xc0154	@ 000c011c 1ad9
.org 0xc011e
	ldrb r1, [r4, #10]	@ 000c011e a17a
.org 0xc0120
	movs r0, #254	@ 000c0120 fe20
.org 0xc0122
	ands r0, r1	@ 000c0122 0840
.org 0xc0124
	movs r2, #0	@ 000c0124 0022
.org 0xc0126
	movs r1, #253	@ 000c0126 fd21
.org 0xc0128
	ands r0, r1	@ 000c0128 0840
.org 0xc012a
	strb r0, [r4, #10]	@ 000c012a a072
.org 0xc012c
	adds r0, r4, #0	@ 000c012c 201c
.org 0xc012e
	adds r0, #140	@ 000c012e 8c30
.org 0xc0130
	str r2, [r0, #0]	@ 000c0130 0260
.org 0xc0132
	adds r0, #4	@ 000c0132 0430
.org 0xc0134
	str r2, [r0, #0]	@ 000c0134 0260
.org 0xc0136
	adds r0, #4	@ 000c0136 0430
.org 0xc0138
	strb r2, [r0, #0]	@ 000c0138 0270
.org 0xc013a
	ldrb r1, [r4, #10]	@ 000c013a a17a
.org 0xc013c
	movs r0, #251	@ 000c013c fb20
.org 0xc013e
	ands r0, r1	@ 000c013e 0840
.org 0xc0140
	strb r0, [r4, #10]	@ 000c0140 a072
.org 0xc0142
	ldr r1, [pc, #28]	@ 000c0142 0749
.org 0xc0144
	ldrb r0, [r4, #9]	@ 000c0144 607a
.org 0xc0146
	lsls r0, r0, #2	@ 000c0146 8000
.org 0xc0148
	adds r0, r0, r1	@ 000c0148 4018
.org 0xc014a
	movs r1, #3	@ 000c014a 0321
.org 0xc014c
	str r1, [r4, #12]	@ 000c014c e160
.org 0xc014e
	ldr r0, [r0, #0]	@ 000c014e 0068
.org 0xc0150
	ldr r0, [r0, #12]	@ 000c0150 c068
.org 0xc0152
	str r0, [r4, #20]	@ 000c0152 6061
.org 0xc0154
	pop {r4}	@ 000c0154 10bc
.org 0xc0156
	pop {r0}	@ 000c0156 01bc
.org 0xc0158
	bx r0	@ 000c0158 0047
