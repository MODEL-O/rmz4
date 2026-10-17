@ FUN_080165a8  entry 0x080165a8  size 130
.thumb
.org 0x165a8
FUN_080165a8:
	push {r4, r5, r6, r7, lr}	@ 000165a8 f0b5
.org 0x165aa
	sub sp, #8	@ 000165aa 82b0
.org 0x165ac
	adds r7, r0, #0	@ 000165ac 071c
.org 0x165ae
	ldrb r4, [r7, #14]	@ 000165ae bc7b
.org 0x165b0
	cmp r4, #0	@ 000165b0 002c
.org 0x165b2
	bne.n 0x16622	@ 000165b2 36d1
.org 0x165b4
	ldr r0, [r7, #92]	@ 000165b4 f86d
.org 0x165b6
	lsls r0, r0, #16	@ 000165b6 0004
.org 0x165b8
	lsrs r0, r0, #20	@ 000165b8 000d
.org 0x165ba
	lsls r5, r0, #1	@ 000165ba 4500
.org 0x165bc
	ldr r3, [pc, #108]	@ 000165bc 1b4b
.org 0x165be
	adds r5, r5, r3	@ 000165be ed18
.org 0x165c0
	ldr r1, [r7, #100]	@ 000165c0 796e
.org 0x165c2
	ldr r6, [pc, #108]	@ 000165c2 1b4e
.org 0x165c4
	adds r2, r6, #0	@ 000165c4 321c
.org 0x165c6
	orrs r1, r2	@ 000165c6 1143
.org 0x165c8
	strh r1, [r5, #0]	@ 000165c8 2980
.org 0x165ca
	lsls r0, r0, #2	@ 000165ca 8000
.org 0x165cc
	adds r3, #8	@ 000165cc 0833
.org 0x165ce
	adds r0, r0, r3	@ 000165ce c018
.org 0x165d0
	str r4, [r0, #0]	@ 000165d0 0460
.org 0x165d2
	ldr r0, [pc, #96]	@ 000165d2 1848
.org 0x165d4
	ldr r0, [r0, #0]	@ 000165d4 0068
.org 0x165d6
	ldr r2, [pc, #96]	@ 000165d6 184a
.org 0x165d8
	adds r0, r0, r2	@ 000165d8 8018
.org 0x165da
	movs r4, #248	@ 000165da f824
.org 0x165dc
	lsls r4, r4, #5	@ 000165dc 6401
.org 0x165de
	ands r1, r4	@ 000165de 2140
.org 0x165e0
	lsls r1, r1, #3	@ 000165e0 c900
.org 0x165e2
	movs r2, #192	@ 000165e2 c022
.org 0x165e4
	lsls r2, r2, #19	@ 000165e4 d204
.org 0x165e6
	adds r1, r1, r2	@ 000165e6 8918
.org 0x165e8
	movs r6, #128	@ 000165e8 8026
.org 0x165ea
	lsls r6, r6, #2	@ 000165ea b600
.org 0x165ec
	adds r2, r6, #0	@ 000165ec 321c
.org 0x165ee
	bl 0x128be0	@ 000165ee 12f1f7fa
.org 0x165f2
	ldr r1, [pc, #72]	@ 000165f2 1249
.org 0x165f4
	ldrh r0, [r5, #0]	@ 000165f4 2888
.org 0x165f6
	ands r4, r0	@ 000165f6 0440
.org 0x165f8
	lsls r4, r4, #3	@ 000165f8 e400
.org 0x165fa
	ldr r0, [pc, #68]	@ 000165fa 1148
.org 0x165fc
	adds r4, r4, r0	@ 000165fc 2418
.org 0x165fe
	str r1, [sp, #0]	@ 000165fe 0091
.org 0x16600
	movs r2, #128	@ 00016600 8022
.org 0x16602
	lsls r2, r2, #17	@ 00016602 5204
.org 0x16604
	orrs r2, r6	@ 00016604 3243
.org 0x16606
	mov r0, sp	@ 00016606 6846
.org 0x16608
	adds r1, r4, #0	@ 00016608 211c
.org 0x1660a
	bl 0x128be0	@ 0001660a 12f1e9fa
.org 0x1660e
	movs r0, #240	@ 0001660e f020
.org 0x16610
	str r0, [r7, #76]	@ 00016610 f864
.org 0x16612
	movs r0, #224	@ 00016612 e020
.org 0x16614
	str r0, [r7, #80]	@ 00016614 3865
.org 0x16616
	movs r0, #128	@ 00016616 8020
.org 0x16618
	str r0, [r7, #68]	@ 00016618 7864
.org 0x1661a
	str r0, [r7, #72]	@ 0001661a b864
.org 0x1661c
	ldrb r0, [r7, #14]	@ 0001661c b87b
.org 0x1661e
	adds r0, #1	@ 0001661e 0130
.org 0x16620
	strb r0, [r7, #14]	@ 00016620 b873
.org 0x16622
	add sp, #8	@ 00016622 02b0
.org 0x16624
	pop {r4, r5, r6, r7}	@ 00016624 f0bc
.org 0x16626
	pop {r0}	@ 00016626 01bc
.org 0x16628
	bx r0	@ 00016628 0047
