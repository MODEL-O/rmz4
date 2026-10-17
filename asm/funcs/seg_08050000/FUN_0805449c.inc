@ FUN_0805449c  entry 0x0805449c  size 126
.thumb
.org 0x5449c
FUN_0805449c:
	push {r4, lr}	@ 0005449c 10b5
.org 0x5449e
	adds r4, r0, #0	@ 0005449e 041c
.org 0x544a0
	ldrb r0, [r4, #15]	@ 000544a0 e07b
.org 0x544a2
	cmp r0, #0	@ 000544a2 0028
.org 0x544a4
	bne.n 0x544da	@ 000544a4 19d1
.org 0x544a6
	adds r2, r4, #0	@ 000544a6 221c
.org 0x544a8
	adds r2, #196	@ 000544a8 c432
.org 0x544aa
	ldr r0, [r2, #0]	@ 000544aa 1068
.org 0x544ac
	adds r0, #184	@ 000544ac b830
.org 0x544ae
	movs r1, #7	@ 000544ae 0721
.org 0x544b0
	strb r1, [r0, #0]	@ 000544b0 0170
.org 0x544b2
	ldr r0, [r2, #0]	@ 000544b2 1068
.org 0x544b4
	adds r0, #188	@ 000544b4 bc30
.org 0x544b6
	movs r3, #32	@ 000544b6 2023
.org 0x544b8
	strh r3, [r0, #0]	@ 000544b8 0380
.org 0x544ba
	adds r2, #4	@ 000544ba 0432
.org 0x544bc
	ldr r0, [r2, #0]	@ 000544bc 1068
.org 0x544be
	adds r0, #184	@ 000544be b830
.org 0x544c0
	movs r1, #4	@ 000544c0 0421
.org 0x544c2
	strb r1, [r0, #0]	@ 000544c2 0170
.org 0x544c4
	ldr r0, [r2, #0]	@ 000544c4 1068
.org 0x544c6
	adds r0, #188	@ 000544c6 bc30
.org 0x544c8
	strh r3, [r0, #0]	@ 000544c8 0380
.org 0x544ca
	movs r1, #176	@ 000544ca b021
.org 0x544cc
	lsls r1, r1, #6	@ 000544cc 8901
.org 0x544ce
	adds r0, r4, #0	@ 000544ce 201c
.org 0x544d0
	bl 0x1cf00	@ 000544d0 c8f716fd
.org 0x544d4
	ldrb r0, [r4, #15]	@ 000544d4 e07b
.org 0x544d6
	adds r0, #1	@ 000544d6 0130
.org 0x544d8
	strb r0, [r4, #15]	@ 000544d8 e073
.org 0x544da
	adds r0, r4, #0	@ 000544da 201c
.org 0x544dc
	bl 0x1cff0	@ 000544dc c8f788fd
.org 0x544e0
	adds r0, r4, #0	@ 000544e0 201c
.org 0x544e2
	bl 0x54fb0	@ 000544e2 00f065fd
.org 0x544e6
	adds r0, r4, #0	@ 000544e6 201c
.org 0x544e8
	movs r1, #0	@ 000544e8 0021
.org 0x544ea
	bl 0x55068	@ 000544ea 00f0bdfd
.org 0x544ee
	adds r0, r4, #0	@ 000544ee 201c
.org 0x544f0
	adds r0, #196	@ 000544f0 c430
.org 0x544f2
	ldr r0, [r0, #0]	@ 000544f2 0068
.org 0x544f4
	adds r0, #188	@ 000544f4 bc30
.org 0x544f6
	movs r1, #0	@ 000544f6 0021
.org 0x544f8
	ldrsh r0, [r0, r1]	@ 000544f8 405e
.org 0x544fa
	cmp r0, #0	@ 000544fa 0028
.org 0x544fc
	bne.n 0x54514	@ 000544fc 0ad1
.org 0x544fe
	adds r0, r4, #0	@ 000544fe 201c
.org 0x54500
	adds r0, #200	@ 00054500 c830
.org 0x54502
	ldr r0, [r0, #0]	@ 00054502 0068
.org 0x54504
	adds r0, #188	@ 00054504 bc30
.org 0x54506
	movs r2, #0	@ 00054506 0022
.org 0x54508
	ldrsh r1, [r0, r2]	@ 00054508 815e
.org 0x5450a
	cmp r1, #0	@ 0005450a 0029
.org 0x5450c
	bne.n 0x54514	@ 0005450c 02d1
.org 0x5450e
	movs r0, #4	@ 0005450e 0420
.org 0x54510
	strb r0, [r4, #14]	@ 00054510 a073
.org 0x54512
	strb r1, [r4, #15]	@ 00054512 e173
.org 0x54514
	pop {r4}	@ 00054514 10bc
.org 0x54516
	pop {r0}	@ 00054516 01bc
.org 0x54518
	bx r0	@ 00054518 0047
