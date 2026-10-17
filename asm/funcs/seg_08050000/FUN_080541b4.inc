@ FUN_080541b4  entry 0x080541b4  size 94
.thumb
.org 0x541b4
FUN_080541b4:
	push {r4, lr}	@ 000541b4 10b5
.org 0x541b6
	adds r4, r0, #0	@ 000541b6 041c
.org 0x541b8
	ldrb r0, [r4, #15]	@ 000541b8 e07b
.org 0x541ba
	cmp r0, #0	@ 000541ba 0028
.org 0x541bc
	bne.n 0x541e2	@ 000541bc 11d1
.org 0x541be
	adds r2, r4, #0	@ 000541be 221c
.org 0x541c0
	adds r2, #196	@ 000541c0 c432
.org 0x541c2
	ldr r0, [r2, #0]	@ 000541c2 1068
.org 0x541c4
	adds r0, #184	@ 000541c4 b830
.org 0x541c6
	movs r1, #3	@ 000541c6 0321
.org 0x541c8
	strb r1, [r0, #0]	@ 000541c8 0170
.org 0x541ca
	ldr r0, [r2, #0]	@ 000541ca 1068
.org 0x541cc
	adds r0, #188	@ 000541cc bc30
.org 0x541ce
	movs r1, #32	@ 000541ce 2021
.org 0x541d0
	strh r1, [r0, #0]	@ 000541d0 0180
.org 0x541d2
	movs r1, #176	@ 000541d2 b021
.org 0x541d4
	lsls r1, r1, #6	@ 000541d4 8901
.org 0x541d6
	adds r0, r4, #0	@ 000541d6 201c
.org 0x541d8
	bl 0x1cf00	@ 000541d8 c8f792fe
.org 0x541dc
	ldrb r0, [r4, #15]	@ 000541dc e07b
.org 0x541de
	adds r0, #1	@ 000541de 0130
.org 0x541e0
	strb r0, [r4, #15]	@ 000541e0 e073
.org 0x541e2
	adds r0, r4, #0	@ 000541e2 201c
.org 0x541e4
	bl 0x1cff0	@ 000541e4 c8f704ff
.org 0x541e8
	adds r0, r4, #0	@ 000541e8 201c
.org 0x541ea
	bl 0x54fb0	@ 000541ea 00f0e1fe
.org 0x541ee
	adds r0, r4, #0	@ 000541ee 201c
.org 0x541f0
	movs r1, #0	@ 000541f0 0021
.org 0x541f2
	bl 0x55068	@ 000541f2 00f039ff
.org 0x541f6
	adds r0, r4, #0	@ 000541f6 201c
.org 0x541f8
	adds r0, #196	@ 000541f8 c430
.org 0x541fa
	ldr r0, [r0, #0]	@ 000541fa 0068
.org 0x541fc
	adds r0, #188	@ 000541fc bc30
.org 0x541fe
	movs r2, #0	@ 000541fe 0022
.org 0x54200
	ldrsh r1, [r0, r2]	@ 00054200 815e
.org 0x54202
	cmp r1, #0	@ 00054202 0029
.org 0x54204
	bne.n 0x5420c	@ 00054204 02d1
.org 0x54206
	movs r0, #3	@ 00054206 0320
.org 0x54208
	strb r0, [r4, #14]	@ 00054208 a073
.org 0x5420a
	strb r1, [r4, #15]	@ 0005420a e173
.org 0x5420c
	pop {r4}	@ 0005420c 10bc
.org 0x5420e
	pop {r0}	@ 0005420e 01bc
.org 0x54210
	bx r0	@ 00054210 0047
