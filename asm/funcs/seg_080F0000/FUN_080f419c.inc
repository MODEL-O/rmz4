@ FUN_080f419c  entry 0x080f419c  size 114
.thumb
.org 0xf419c
FUN_080f419c:
	push {r4, lr}	@ 000f419c 10b5
.org 0xf419e
	adds r4, r0, #0	@ 000f419e 041c
.org 0xf41a0
	adds r2, r4, #0	@ 000f41a0 221c
.org 0xf41a2
	adds r2, #140	@ 000f41a2 8c32
.org 0xf41a4
	ldr r0, [r2, #0]	@ 000f41a4 1068
.org 0xf41a6
	movs r1, #128	@ 000f41a6 8021
.org 0xf41a8
	lsls r1, r1, #2	@ 000f41a8 8900
.org 0xf41aa
	ands r0, r1	@ 000f41aa 0840
.org 0xf41ac
	cmp r0, #0	@ 000f41ac 0028
.org 0xf41ae
	beq.n 0xf4202	@ 000f41ae 28d0
.org 0xf41b0
	ldr r1, [pc, #92]	@ 000f41b0 1749
.org 0xf41b2
	ldrb r0, [r4, #9]	@ 000f41b2 607a
.org 0xf41b4
	lsls r0, r0, #2	@ 000f41b4 8000
.org 0xf41b6
	adds r0, r0, r1	@ 000f41b6 4018
.org 0xf41b8
	movs r1, #2	@ 000f41b8 0221
.org 0xf41ba
	str r1, [r4, #12]	@ 000f41ba e160
.org 0xf41bc
	ldr r0, [r0, #0]	@ 000f41bc 0068
.org 0xf41be
	ldr r0, [r0, #8]	@ 000f41be 8068
.org 0xf41c0
	str r0, [r4, #20]	@ 000f41c0 6061
.org 0xf41c2
	ldr r0, [r2, #0]	@ 000f41c2 1068
.org 0xf41c4
	movs r1, #128	@ 000f41c4 8021
.org 0xf41c6
	lsls r1, r1, #10	@ 000f41c6 8902
.org 0xf41c8
	ands r0, r1	@ 000f41c8 0840
.org 0xf41ca
	cmp r0, #0	@ 000f41ca 0028
.org 0xf41cc
	beq.n 0xf41d4	@ 000f41cc 02d0
.org 0xf41ce
	ldrb r0, [r4, #16]	@ 000f41ce 207c
.org 0xf41d0
	adds r0, #3	@ 000f41d0 0330
.org 0xf41d2
	strb r0, [r4, #16]	@ 000f41d2 2074
.org 0xf41d4
	movs r1, #0	@ 000f41d4 0021
.org 0xf41d6
	str r1, [r2, #0]	@ 000f41d6 1160
.org 0xf41d8
	adds r0, r4, #0	@ 000f41d8 201c
.org 0xf41da
	adds r0, #144	@ 000f41da 9030
.org 0xf41dc
	str r1, [r0, #0]	@ 000f41dc 0160
.org 0xf41de
	adds r0, #4	@ 000f41de 0430
.org 0xf41e0
	strb r1, [r0, #0]	@ 000f41e0 0170
.org 0xf41e2
	ldrb r1, [r4, #10]	@ 000f41e2 a17a
.org 0xf41e4
	movs r0, #251	@ 000f41e4 fb20
.org 0xf41e6
	ands r0, r1	@ 000f41e6 0840
.org 0xf41e8
	strb r0, [r4, #10]	@ 000f41e8 a072
.org 0xf41ea
	ldr r2, [pc, #40]	@ 000f41ea 0a4a
.org 0xf41ec
	ldr r0, [pc, #40]	@ 000f41ec 0a48
.org 0xf41ee
	adds r2, r2, r0	@ 000f41ee 1218
.org 0xf41f0
	movs r0, #1	@ 000f41f0 0120
.org 0xf41f2
	ldrb r1, [r4, #17]	@ 000f41f2 617c
.org 0xf41f4
	lsls r0, r1	@ 000f41f4 8840
.org 0xf41f6
	ldrb r1, [r2, #0]	@ 000f41f6 1178
.org 0xf41f8
	orrs r0, r1	@ 000f41f8 0843
.org 0xf41fa
	strb r0, [r2, #0]	@ 000f41fa 1070
.org 0xf41fc
	adds r0, r4, #0	@ 000f41fc 201c
.org 0xf41fe
	bl 0xf3f1c	@ 000f41fe fff78dfe
.org 0xf4202
	adds r0, r4, #0	@ 000f4202 201c
.org 0xf4204
	bl 0x1cff0	@ 000f4204 28f7f4fe
.org 0xf4208
	pop {r4}	@ 000f4208 10bc
.org 0xf420a
	pop {r0}	@ 000f420a 01bc
.org 0xf420c
	bx r0	@ 000f420c 0047
