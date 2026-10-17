@ FUN_080d5960  entry 0x080d5960  size 156
.thumb
.org 0xd5960
FUN_080d5960:
	push {r4, r5, r6, lr}	@ 000d5960 70b5
.org 0xd5962
	adds r4, r0, #0	@ 000d5962 041c
.org 0xd5964
	adds r5, r1, #0	@ 000d5964 0d1c
.org 0xd5966
	ldr r6, [r4, #8]	@ 000d5966 a668
.org 0xd5968
	adds r0, r6, #0	@ 000d5968 301c
.org 0xd596a
	bl 0x1cc9c	@ 000d596a 47f797f9
.org 0xd596e
	adds r0, r6, #0	@ 000d596e 301c
.org 0xd5970
	adds r0, #126	@ 000d5970 7e30
.org 0xd5972
	ldrh r1, [r0, #0]	@ 000d5972 0188
.org 0xd5974
	adds r0, r6, #0	@ 000d5974 301c
.org 0xd5976
	bl 0x1cf00	@ 000d5976 47f7c3fa
.org 0xd597a
	adds r2, r6, #0	@ 000d597a 321c
.org 0xd597c
	adds r2, #73	@ 000d597c 4932
.org 0xd597e
	ldrb r1, [r2, #0]	@ 000d597e 1178
.org 0xd5980
	movs r0, #13	@ 000d5980 0d20
.org 0xd5982
	negs r0, r0	@ 000d5982 4042
.org 0xd5984
	ands r0, r1	@ 000d5984 0840
.org 0xd5986
	movs r1, #4	@ 000d5986 0421
.org 0xd5988
	orrs r0, r1	@ 000d5988 0843
.org 0xd598a
	strb r0, [r2, #0]	@ 000d598a 1070
.org 0xd598c
	adds r0, r6, #0	@ 000d598c 301c
.org 0xd598e
	bl 0x1cff0	@ 000d598e 47f72ffb
.org 0xd5992
	ldr r0, [r5, #0]	@ 000d5992 2868
.org 0xd5994
	ldr r1, [pc, #76]	@ 000d5994 1349
.org 0xd5996
	adds r0, r0, r1	@ 000d5996 4018
.org 0xd5998
	str r0, [r6, #84]	@ 000d5998 7065
.org 0xd599a
	ldr r0, [r5, #4]	@ 000d599a 6868
.org 0xd599c
	ldr r1, [pc, #72]	@ 000d599c 1249
.org 0xd599e
	adds r0, r0, r1	@ 000d599e 4018
.org 0xd59a0
	str r0, [r6, #88]	@ 000d59a0 b065
.org 0xd59a2
	adds r0, r6, #0	@ 000d59a2 301c
.org 0xd59a4
	adds r0, #84	@ 000d59a4 5430
.org 0xd59a6
	str r0, [r6, #64]	@ 000d59a6 3064
.org 0xd59a8
	ldr r2, [r4, #4]	@ 000d59a8 6268
.org 0xd59aa
	adds r0, r4, #0	@ 000d59aa 201c
.org 0xd59ac
	adds r1, r5, #0	@ 000d59ac 291c
.org 0xd59ae
	bl 0x128f84	@ 000d59ae 53f0e9fa
.org 0xd59b2
	adds r0, r6, #0	@ 000d59b2 301c
.org 0xd59b4
	adds r0, #52	@ 000d59b4 3430
.org 0xd59b6
	ldr r1, [pc, #52]	@ 000d59b6 0d49
.org 0xd59b8
	bl 0x2c94	@ 000d59b8 2df76cf9
.org 0xd59bc
	str r6, [r6, #60]	@ 000d59bc f663
.org 0xd59be
	ldrb r1, [r6, #10]	@ 000d59be b17a
.org 0xd59c0
	movs r0, #247	@ 000d59c0 f720
.org 0xd59c2
	ands r0, r1	@ 000d59c2 0840
.org 0xd59c4
	strb r0, [r6, #10]	@ 000d59c4 b072
.org 0xd59c6
	ldrb r0, [r6, #12]	@ 000d59c6 307b
.org 0xd59c8
	cmp r0, #1	@ 000d59c8 0128
.org 0xd59ca
	bhi.n 0xd5a04	@ 000d59ca 1bd8
.org 0xd59cc
	ldrb r0, [r6, #13]	@ 000d59cc 707b
.org 0xd59ce
	cmp r0, #0	@ 000d59ce 0028
.org 0xd59d0
	bne.n 0xd59f0	@ 000d59d0 0ed1
.org 0xd59d2
	adds r0, r6, #0	@ 000d59d2 301c
.org 0xd59d4
	adds r0, #128	@ 000d59d4 8030
.org 0xd59d6
	ldr r0, [r0, #0]	@ 000d59d6 0068
.org 0xd59d8
	movs r1, #0	@ 000d59d8 0021
.org 0xd59da
	movs r2, #0	@ 000d59da 0022
.org 0xd59dc
	bl 0x10da2c	@ 000d59dc 38f026f8
.org 0xd59e0
	b.n 0xd5a04	@ 000d59e0 10e0
.org 0xd59e2
	.byte 0x00	@ 000d59e2 data
.org 0xd59e3
	.byte 0x00	@ 000d59e3 data
.org 0xd59e4
	.byte 0x00,0x88,0xff,0xff	@ 000d59e4 data
.org 0xd59e8
	.byte 0x00,0xb0,0xff,0xff	@ 000d59e8 data
.org 0xd59ec
	.byte 0x61,0x59,0x0d,0x08	@ 000d59ec data
.org 0xd59f0
	adds r0, r6, #0	@ 000d59f0 301c
.org 0xd59f2
	adds r0, #128	@ 000d59f2 8030
.org 0xd59f4
	ldr r0, [r0, #0]	@ 000d59f4 0068
.org 0xd59f6
	adds r1, r6, #0	@ 000d59f6 311c
.org 0xd59f8
	adds r1, #125	@ 000d59f8 7d31
.org 0xd59fa
	ldrb r3, [r1, #0]	@ 000d59fa 0b78
