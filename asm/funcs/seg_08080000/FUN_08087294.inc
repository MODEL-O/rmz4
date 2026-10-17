@ FUN_08087294  entry 0x08087294  size 110
.thumb
.org 0x87294
FUN_08087294:
	push {r4, lr}	@ 00087294 10b5
.org 0x87296
	sub sp, #8	@ 00087296 82b0
.org 0x87298
	adds r4, r0, #0	@ 00087298 041c
.org 0x8729a
	adds r0, #140	@ 0008729a 8c30
.org 0x8729c
	ldr r0, [r0, #0]	@ 0008729c 0068
.org 0x8729e
	movs r1, #1	@ 0008729e 0121
.org 0x872a0
	ands r0, r1	@ 000872a0 0840
.org 0x872a2
	cmp r0, #0	@ 000872a2 0028
.org 0x872a4
	beq.n 0x87302	@ 000872a4 2dd0
.org 0x872a6
	ldr r2, [r4, #44]	@ 000872a6 e26a
.org 0x872a8
	cmp r2, #0	@ 000872a8 002a
.org 0x872aa
	bne.n 0x87302	@ 000872aa 2ad1
.org 0x872ac
	ldr r0, [pc, #48]	@ 000872ac 0c48
.org 0x872ae
	ldr r1, [pc, #52]	@ 000872ae 0d49
.org 0x872b0
	adds r0, r0, r1	@ 000872b0 4018
.org 0x872b2
	ldr r1, [r4, #88]	@ 000872b2 a16d
.org 0x872b4
	ldr r0, [r0, #0]	@ 000872b4 0068
.org 0x872b6
	cmp r1, r0	@ 000872b6 8142
.org 0x872b8
	ble.n 0x872e8	@ 000872b8 16dd
.org 0x872ba
	adds r0, r4, #0	@ 000872ba 201c
.org 0x872bc
	adds r0, #151	@ 000872bc 9730
.org 0x872be
	ldrb r1, [r0, #0]	@ 000872be 0178
.org 0x872c0
	movs r0, #240	@ 000872c0 f020
.org 0x872c2
	ands r0, r1	@ 000872c2 0840
.org 0x872c4
	cmp r0, #32	@ 000872c4 2028
.org 0x872c6
	bne.n 0x872e8	@ 000872c6 0fd1
.org 0x872c8
	movs r0, #128	@ 000872c8 8020
.org 0x872ca
	lsls r0, r0, #4	@ 000872ca 0001
.org 0x872cc
	str r0, [sp, #0]	@ 000872cc 0090
.org 0x872ce
	str r2, [sp, #4]	@ 000872ce 0192
.org 0x872d0
	adds r0, r4, #0	@ 000872d0 201c
.org 0x872d2
	adds r0, #84	@ 000872d2 5430
.org 0x872d4
	mov r1, sp	@ 000872d4 6946
.org 0x872d6
	movs r2, #6	@ 000872d6 0622
.org 0x872d8
	movs r3, #8	@ 000872d8 0823
.org 0x872da
	bl 0x88ff0	@ 000872da 01f089fe
.org 0x872de
	b.n 0x87302	@ 000872de 10e0
.org 0x872e0
	.byte 0xb0,0x0a,0x00,0x02	@ 000872e0 data
.org 0x872e4
	.byte 0x0c,0xc0,0x02,0x00	@ 000872e4 data
.org 0x872e8
	ldr r2, [pc, #32]	@ 000872e8 084a
.org 0x872ea
	movs r0, #0	@ 000872ea 0020
.org 0x872ec
	adds r1, r4, #0	@ 000872ec 211c
.org 0x872ee
	bl 0x2adac	@ 000872ee a3f75dfd
.org 0x872f2
	str r0, [r4, #44]	@ 000872f2 e062
.org 0x872f4
	cmp r0, #0	@ 000872f4 0028
.org 0x872f6
	beq.n 0x87302	@ 000872f6 04d0
.org 0x872f8
	movs r1, #0	@ 000872f8 0021
.org 0x872fa
	movs r0, #11	@ 000872fa 0b20
.org 0x872fc
	strb r0, [r4, #13]	@ 000872fc 6073
.org 0x872fe
	strb r1, [r4, #14]	@ 000872fe a173
.org 0x87300
	strb r1, [r4, #15]	@ 00087300 e173
