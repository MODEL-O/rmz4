@ FUN_080d4398  entry 0x080d4398  size 124
.thumb
.org 0xd4398
FUN_080d4398:
	push {r4, r5, r6, r7, lr}	@ 000d4398 f0b5
.org 0xd439a
	mov r7, sl	@ 000d439a 5746
.org 0xd439c
	mov r6, r9	@ 000d439c 4e46
.org 0xd439e
	mov r5, r8	@ 000d439e 4546
.org 0xd43a0
	push {r5, r6, r7}	@ 000d43a0 e0b4
.org 0xd43a2
	sub sp, #44	@ 000d43a2 8bb0
.org 0xd43a4
	ldr r7, [r0, #8]	@ 000d43a4 8768
.org 0xd43a6
	ldrb r0, [r7, #12]	@ 000d43a6 387b
.org 0xd43a8
	cmp r0, #1	@ 000d43a8 0128
.org 0xd43aa
	bls.n 0xd43ae	@ 000d43aa 00d9
.org 0xd43ac
	b.n 0xd4884	@ 000d43ac 6ae2
.org 0xd43ae
	ldrb r0, [r7, #15]	@ 000d43ae f87b
.org 0xd43b0
	cmp r0, #0	@ 000d43b0 0028
.org 0xd43b2
	bne.n 0xd43f2	@ 000d43b2 1ed1
.org 0xd43b4
	ldr r2, [pc, #76]	@ 000d43b4 134a
.org 0xd43b6
	ldrh r1, [r2, #0]	@ 000d43b6 1188
.org 0xd43b8
	movs r3, #128	@ 000d43b8 8023
.org 0xd43ba
	lsls r3, r3, #1	@ 000d43ba 5b00
.org 0xd43bc
	adds r0, r3, #0	@ 000d43bc 181c
.org 0xd43be
	orrs r0, r1	@ 000d43be 0843
.org 0xd43c0
	strh r0, [r2, #0]	@ 000d43c0 1080
.org 0xd43c2
	ldrb r1, [r7, #16]	@ 000d43c2 397c
.org 0xd43c4
	lsls r0, r1, #2	@ 000d43c4 8800
.org 0xd43c6
	adds r0, r0, r1	@ 000d43c6 4018
.org 0xd43c8
	lsls r0, r0, #2	@ 000d43c8 8000
.org 0xd43ca
	ldr r4, [pc, #60]	@ 000d43ca 0f4c
.org 0xd43cc
	adds r0, r0, r4	@ 000d43cc 0019
.org 0xd43ce
	ldrh r2, [r2, #4]	@ 000d43ce 9288
.org 0xd43d0
	movs r1, #12	@ 000d43d0 0c21
.org 0xd43d2
	ands r1, r2	@ 000d43d2 1140
.org 0xd43d4
	lsls r1, r1, #12	@ 000d43d4 0903
.org 0xd43d6
	bl 0x1d30	@ 000d43d6 2df7abfc
.org 0xd43da
	ldrb r1, [r7, #16]	@ 000d43da 397c
.org 0xd43dc
	lsls r0, r1, #2	@ 000d43dc 8800
.org 0xd43de
	adds r0, r0, r1	@ 000d43de 4018
.org 0xd43e0
	lsls r0, r0, #2	@ 000d43e0 8000
.org 0xd43e2
	ldr r6, [pc, #40]	@ 000d43e2 0a4e
.org 0xd43e4
	adds r0, r0, r6	@ 000d43e4 8019
.org 0xd43e6
	movs r1, #0	@ 000d43e6 0021
.org 0xd43e8
	bl 0x2208	@ 000d43e8 2df70eff
.org 0xd43ec
	ldrb r0, [r7, #15]	@ 000d43ec f87b
.org 0xd43ee
	adds r0, #1	@ 000d43ee 0130
.org 0xd43f0
	strb r0, [r7, #15]	@ 000d43f0 f873
.org 0xd43f2
	ldrb r0, [r7, #14]	@ 000d43f2 b87b
.org 0xd43f4
	cmp r0, #5	@ 000d43f4 0528
.org 0xd43f6
	bls.n 0xd43fa	@ 000d43f6 00d9
.org 0xd43f8
	b.n 0xd4884	@ 000d43f8 44e2
.org 0xd43fa
	lsls r0, r0, #2	@ 000d43fa 8000
.org 0xd43fc
	ldr r1, [pc, #16]	@ 000d43fc 0449
.org 0xd43fe
	adds r0, r0, r1	@ 000d43fe 4018
.org 0xd4400
	ldr r0, [r0, #0]	@ 000d4400 0068
.org 0xd4402
	mov pc, r0	@ 000d4402 8746
.org 0xd4404
	.byte 0x00,0x0a,0x00,0x02	@ 000d4404 data
.org 0xd4408
	.byte 0xdc,0xc0,0xb6,0x08	@ 000d4408 data
.org 0xd440c
	.byte 0xe8,0xc0,0xb6,0x08	@ 000d440c data
.org 0xd4410
	.byte 0x14,0x44,0x0d,0x08	@ 000d4410 data
