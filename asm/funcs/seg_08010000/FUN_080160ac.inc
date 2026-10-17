@ FUN_080160ac  entry 0x080160ac  size 104
.thumb
.org 0x160ac
FUN_080160ac:
	push {r4, r5, r6, r7, lr}	@ 000160ac f0b5
.org 0x160ae
	sub sp, #8	@ 000160ae 82b0
.org 0x160b0
	adds r7, r0, #0	@ 000160b0 071c
.org 0x160b2
	ldrb r3, [r7, #14]	@ 000160b2 bb7b
.org 0x160b4
	cmp r3, #0	@ 000160b4 002b
.org 0x160b6
	bne.n 0x160e0	@ 000160b6 13d1
.org 0x160b8
	ldr r0, [r7, #92]	@ 000160b8 f86d
.org 0x160ba
	lsls r0, r0, #16	@ 000160ba 0004
.org 0x160bc
	lsrs r0, r0, #20	@ 000160bc 000d
.org 0x160be
	lsls r0, r0, #1	@ 000160be 4000
.org 0x160c0
	ldr r1, [pc, #48]	@ 000160c0 0c49
.org 0x160c2
	adds r0, r0, r1	@ 000160c2 4018
.org 0x160c4
	ldrh r2, [r0, #0]	@ 000160c4 0288
.org 0x160c6
	ldr r1, [pc, #48]	@ 000160c6 0c49
.org 0x160c8
	ands r1, r2	@ 000160c8 1140
.org 0x160ca
	movs r2, #2	@ 000160ca 0222
.org 0x160cc
	orrs r1, r2	@ 000160cc 1143
.org 0x160ce
	strh r1, [r0, #0]	@ 000160ce 0180
.org 0x160d0
	str r3, [r7, #80]	@ 000160d0 3b65
.org 0x160d2
	ldr r1, [pc, #40]	@ 000160d2 0a49
.org 0x160d4
	movs r0, #240	@ 000160d4 f020
.org 0x160d6
	lsls r0, r0, #10	@ 000160d6 8002
.org 0x160d8
	str r0, [r1, #0]	@ 000160d8 0860
.org 0x160da
	ldrb r0, [r7, #14]	@ 000160da b87b
.org 0x160dc
	adds r0, #1	@ 000160dc 0130
.org 0x160de
	strb r0, [r7, #14]	@ 000160de b873
.org 0x160e0
	ldrb r0, [r7, #15]	@ 000160e0 f87b
.org 0x160e2
	cmp r0, #4	@ 000160e2 0428
.org 0x160e4
	bls.n 0x160e8	@ 000160e4 00d9
.org 0x160e6
	b.n 0x163ba	@ 000160e6 68e1
.org 0x160e8
	lsls r0, r0, #2	@ 000160e8 8000
.org 0x160ea
	ldr r1, [pc, #20]	@ 000160ea 0549
.org 0x160ec
	adds r0, r0, r1	@ 000160ec 4018
.org 0x160ee
	ldr r0, [r0, #0]	@ 000160ee 0068
.org 0x160f0
	mov pc, r0	@ 000160f0 8746
.org 0x160f2
	.byte 0x00	@ 000160f2 data
.org 0x160f3
	.byte 0x00	@ 000160f3 data
.org 0x160f4
	.byte 0x04,0x0a,0x00,0x02	@ 000160f4 data
.org 0x160f8
	.byte 0xfc,0xff,0x00,0x00	@ 000160f8 data
.org 0x160fc
	.byte 0x60,0xea,0x02,0x02	@ 000160fc data
.org 0x16100
	.byte 0x04,0x61,0x01,0x08	@ 00016100 data
.org 0x16104
	.byte 0x18,0x61,0x01,0x08	@ 00016104 data
.org 0x16108
	.byte 0x48,0x62,0x01,0x08	@ 00016108 data
.org 0x1610c
	.byte 0x60,0x62,0x01,0x08	@ 0001610c data
.org 0x16110
	.byte 0xf4,0x62,0x01,0x08	@ 00016110 data
