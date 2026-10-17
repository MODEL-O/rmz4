@ FUN_08088790  entry 0x08088790  size 152
.thumb
.org 0x88790
FUN_08088790:
	push {r4, r5, r6, r7, lr}	@ 00088790 f0b5
.org 0x88792
	sub sp, #8	@ 00088792 82b0
.org 0x88794
	adds r4, r0, #0	@ 00088794 041c
.org 0x88796
	ldrb r0, [r4, #10]	@ 00088796 a07a
.org 0x88798
	lsrs r5, r0, #5	@ 00088798 4509
.org 0x8879a
	movs r7, #1	@ 0008879a 0127
.org 0x8879c
	ands r5, r7	@ 0008879c 3d40
.org 0x8879e
	adds r0, r4, #0	@ 0008879e 201c
.org 0x887a0
	adds r0, #140	@ 000887a0 8c30
.org 0x887a2
	movs r6, #0	@ 000887a2 0026
.org 0x887a4
	str r6, [r0, #0]	@ 000887a4 0660
.org 0x887a6
	adds r0, #4	@ 000887a6 0430
.org 0x887a8
	str r6, [r0, #0]	@ 000887a8 0660
.org 0x887aa
	adds r0, #4	@ 000887aa 0430
.org 0x887ac
	strb r6, [r0, #0]	@ 000887ac 0670
.org 0x887ae
	ldrb r1, [r4, #10]	@ 000887ae a17a
.org 0x887b0
	movs r0, #251	@ 000887b0 fb20
.org 0x887b2
	ands r0, r1	@ 000887b2 0840
.org 0x887b4
	strb r0, [r4, #10]	@ 000887b4 a072
.org 0x887b6
	ldr r0, [r4, #84]	@ 000887b6 606d
.org 0x887b8
	str r0, [sp, #0]	@ 000887b8 0090
.org 0x887ba
	ldr r0, [r4, #88]	@ 000887ba a06d
.org 0x887bc
	ldr r1, [pc, #32]	@ 000887bc 0849
.org 0x887be
	adds r0, r0, r1	@ 000887be 4018
.org 0x887c0
	str r0, [sp, #4]	@ 000887c0 0190
.org 0x887c2
	movs r2, #128	@ 000887c2 8022
.org 0x887c4
	lsls r2, r2, #2	@ 000887c4 9200
.org 0x887c6
	adds r0, r4, #0	@ 000887c6 201c
.org 0x887c8
	adds r0, #182	@ 000887c8 b630
.org 0x887ca
	ldrb r3, [r0, #0]	@ 000887ca 0378
.org 0x887cc
	movs r0, #0	@ 000887cc 0020
.org 0x887ce
	mov r1, sp	@ 000887ce 6946
.org 0x887d0
	bl 0xd0dc4	@ 000887d0 48f0f8fa
.org 0x887d4
	cmp r5, #0	@ 000887d4 002d
.org 0x887d6
	beq.n 0x887e4	@ 000887d6 05d0
.org 0x887d8
	movs r0, #2	@ 000887d8 0220
.org 0x887da
	strb r0, [r4, #14]	@ 000887da a073
.org 0x887dc
	strb r6, [r4, #15]	@ 000887dc e673
.org 0x887de
	b.n 0x88814	@ 000887de 19e0
.org 0x887e0
	.byte 0x00,0xf8,0xff,0xff	@ 000887e0 data
.org 0x887e4
	ldr r0, [r4, #84]	@ 000887e4 606d
.org 0x887e6
	str r0, [sp, #0]	@ 000887e6 0090
.org 0x887e8
	ldr r1, [r4, #88]	@ 000887e8 a16d
.org 0x887ea
	movs r2, #128	@ 000887ea 8022
.org 0x887ec
	lsls r2, r2, #4	@ 000887ec 1201
.org 0x887ee
	adds r1, r1, r2	@ 000887ee 8918
.org 0x887f0
	str r1, [sp, #4]	@ 000887f0 0191
.org 0x887f2
	bl 0x7c7c	@ 000887f2 7ff743fa
.org 0x887f6
	lsls r0, r0, #16	@ 000887f6 0004
.org 0x887f8
	lsrs r1, r0, #16	@ 000887f8 010c
.org 0x887fa
	cmp r1, #0	@ 000887fa 0029
.org 0x887fc
	beq.n 0x8880e	@ 000887fc 07d0
.org 0x887fe
	ldr r0, [sp, #0]	@ 000887fe 0098
.org 0x88800
	ldr r1, [sp, #4]	@ 00088800 0199
.org 0x88802
	bl 0x8534	@ 00088802 7ff797fe
.org 0x88806
	str r0, [r4, #88]	@ 00088806 a065
.org 0x88808
	strb r7, [r4, #14]	@ 00088808 a773
.org 0x8880a
	strb r5, [r4, #15]	@ 0008880a e573
.org 0x8880c
	b.n 0x88814	@ 0008880c 02e0
.org 0x8880e
	movs r0, #2	@ 0008880e 0220
.org 0x88810
	strb r0, [r4, #14]	@ 00088810 a073
.org 0x88812
	strb r1, [r4, #15]	@ 00088812 e173
.org 0x88814
	ldr r0, [pc, #20]	@ 00088814 0548
.org 0x88816
	ldrb r1, [r4, #14]	@ 00088816 a17b
.org 0x88818
	lsls r1, r1, #2	@ 00088818 8900
.org 0x8881a
	adds r1, r1, r0	@ 0008881a 0918
.org 0x8881c
	ldr r1, [r1, #0]	@ 0008881c 0968
.org 0x8881e
	adds r0, r4, #0	@ 0008881e 201c
.org 0x88820
	bl 0x128f80	@ 00088820 a0f0aefb
.org 0x88824
	add sp, #8	@ 00088824 02b0
.org 0x88826
	pop {r4, r5, r6, r7}	@ 00088826 f0bc
