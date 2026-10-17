@ FUN_08088668  entry 0x08088668  size 238
.thumb
.org 0x88668
FUN_08088668:
	push {r4, r5, r6, r7, lr}	@ 00088668 f0b5
.org 0x8866a
	mov r7, r8	@ 0008866a 4746
.org 0x8866c
	push {r7}	@ 0008866c 80b4
.org 0x8866e
	sub sp, #16	@ 0008866e 84b0
.org 0x88670
	adds r7, r0, #0	@ 00088670 071c
.org 0x88672
	ldrb r1, [r7, #10]	@ 00088672 b97a
.org 0x88674
	movs r0, #254	@ 00088674 fe20
.org 0x88676
	ands r0, r1	@ 00088676 0840
.org 0x88678
	movs r1, #0	@ 00088678 0021
.org 0x8867a
	mov r8, r1	@ 0008867a 8846
.org 0x8867c
	strb r0, [r7, #10]	@ 0008867c b872
.org 0x8867e
	adds r0, r7, #0	@ 0008867e 381c
.org 0x88680
	adds r0, #140	@ 00088680 8c30
.org 0x88682
	str r1, [r0, #0]	@ 00088682 0160
.org 0x88684
	adds r0, #4	@ 00088684 0430
.org 0x88686
	str r1, [r0, #0]	@ 00088686 0160
.org 0x88688
	adds r0, #4	@ 00088688 0430
.org 0x8868a
	mov r1, r8	@ 0008868a 4146
.org 0x8868c
	strb r1, [r0, #0]	@ 0008868c 0170
.org 0x8868e
	ldrb r1, [r7, #10]	@ 0008868e b97a
.org 0x88690
	movs r0, #251	@ 00088690 fb20
.org 0x88692
	ands r0, r1	@ 00088692 0840
.org 0x88694
	strb r0, [r7, #10]	@ 00088694 b872
.org 0x88696
	ldr r6, [pc, #120]	@ 00088696 1e4e
.org 0x88698
	ldr r0, [r6, #0]	@ 00088698 3068
.org 0x8869a
	ldr r5, [pc, #120]	@ 0008869a 1e4d
.org 0x8869c
	muls r0, r5	@ 0008869c 6843
.org 0x8869e
	ldr r2, [pc, #120]	@ 0008869e 1e4a
.org 0x886a0
	adds r0, r0, r2	@ 000886a0 8018
.org 0x886a2
	lsls r0, r0, #1	@ 000886a2 4000
.org 0x886a4
	lsrs r4, r0, #1	@ 000886a4 4408
.org 0x886a6
	lsrs r0, r0, #17	@ 000886a6 400c
.org 0x886a8
	movs r3, #7	@ 000886a8 0723
.org 0x886aa
	ands r0, r3	@ 000886aa 1840
.org 0x886ac
	subs r0, #3	@ 000886ac 0338
.org 0x886ae
	lsls r0, r0, #8	@ 000886ae 0002
.org 0x886b0
	ldr r1, [r7, #84]	@ 000886b0 796d
.org 0x886b2
	adds r1, r1, r0	@ 000886b2 0918
.org 0x886b4
	str r1, [sp, #0]	@ 000886b4 0091
.org 0x886b6
	adds r0, r4, #0	@ 000886b6 201c
.org 0x886b8
	muls r0, r5	@ 000886b8 6843
.org 0x886ba
	adds r0, r0, r2	@ 000886ba 8018
.org 0x886bc
	lsls r0, r0, #1	@ 000886bc 4000
.org 0x886be
	lsrs r1, r0, #1	@ 000886be 4108
.org 0x886c0
	str r1, [r6, #0]	@ 000886c0 3160
.org 0x886c2
	lsrs r0, r0, #17	@ 000886c2 400c
.org 0x886c4
	ands r0, r3	@ 000886c4 1840
.org 0x886c6
	subs r0, #3	@ 000886c6 0338
.org 0x886c8
	lsls r0, r0, #8	@ 000886c8 0002
.org 0x886ca
	ldr r1, [r7, #88]	@ 000886ca b96d
.org 0x886cc
	adds r1, r1, r0	@ 000886cc 0918
.org 0x886ce
	str r1, [sp, #4]	@ 000886ce 0191
.org 0x886d0
	movs r0, #1	@ 000886d0 0120
.org 0x886d2
	mov r1, sp	@ 000886d2 6946
.org 0x886d4
	bl 0xd0c88	@ 000886d4 48f0d8fa
.org 0x886d8
	adds r0, r7, #0	@ 000886d8 381c
.org 0x886da
	bl 0x88cd8	@ 000886da 00f0fdfa
.org 0x886de
	ldr r0, [pc, #60]	@ 000886de 0f48
.org 0x886e0
	ldr r1, [pc, #60]	@ 000886e0 0f49
.org 0x886e2
	adds r0, r0, r1	@ 000886e2 4018
.org 0x886e4
	ldr r1, [r7, #88]	@ 000886e4 b96d
.org 0x886e6
	ldr r0, [r0, #0]	@ 000886e6 0068
.org 0x886e8
	cmp r1, r0	@ 000886e8 8142
.org 0x886ea
	ble.n 0x88724	@ 000886ea 1bdd
.org 0x886ec
	movs r0, #49	@ 000886ec 3120
.org 0x886ee
	bl 0x2b10	@ 000886ee 7af70ffa
.org 0x886f2
	movs r0, #128	@ 000886f2 8020
.org 0x886f4
	lsls r0, r0, #4	@ 000886f4 0001
.org 0x886f6
	str r0, [sp, #8]	@ 000886f6 0290
.org 0x886f8
	add r1, sp, #8	@ 000886f8 02a9
.org 0x886fa
	mov r0, r8	@ 000886fa 4046
.org 0x886fc
	str r0, [r1, #4]	@ 000886fc 4860
.org 0x886fe
	adds r4, r7, #0	@ 000886fe 3c1c
.org 0x88700
	adds r4, #84	@ 00088700 5434
.org 0x88702
	adds r0, r4, #0	@ 00088702 201c
.org 0x88704
	movs r2, #3	@ 00088704 0322
.org 0x88706
	movs r3, #4	@ 00088706 0423
.org 0x88708
	bl 0x88ff0	@ 00088708 00f072fc
.org 0x8870c
	b.n 0x8872e	@ 0008870c 0fe0
.org 0x8870e
	.byte 0x00	@ 0008870e data
.org 0x8870f
	.byte 0x00	@ 0008870f data
.org 0x88710
	.byte 0x38,0xdc,0x02,0x02	@ 00088710 data
.org 0x88714
	.byte 0xfd,0x43,0x03,0x00	@ 00088714 data
.org 0x88718
	.byte 0xc3,0x9e,0x26,0x00	@ 00088718 data
.org 0x8871c
	.byte 0xb0,0x0a,0x00,0x02	@ 0008871c data
.org 0x88720
	.byte 0x0c,0xc0,0x02,0x00	@ 00088720 data
.org 0x88724
	movs r0, #42	@ 00088724 2a20
.org 0x88726
	bl 0x2b10	@ 00088726 7af7f3f9
.org 0x8872a
	adds r4, r7, #0	@ 0008872a 3c1c
.org 0x8872c
	adds r4, #84	@ 0008872c 5434
.org 0x8872e
	adds r2, r4, #0	@ 0008872e 221c
.org 0x88730
	movs r0, #4	@ 00088730 0420
.org 0x88732
	movs r1, #47	@ 00088732 2f21
.org 0x88734
	bl 0x2ab88	@ 00088734 a2f728fa
.org 0x88738
	ldr r2, [pc, #48]	@ 00088738 0c4a
.org 0x8873a
	ldrh r1, [r2, #12]	@ 0008873a 9189
.org 0x8873c
	ldr r0, [pc, #48]	@ 0008873c 0c48
.org 0x8873e
	cmp r1, r0	@ 0008873e 8142
.org 0x88740
	bhi.n 0x88746	@ 00088740 01d8
.org 0x88742
	adds r0, r1, #1	@ 00088742 481c
.org 0x88744
	strh r0, [r2, #12]	@ 00088744 9081
.org 0x88746
	adds r0, r7, #0	@ 00088746 381c
.org 0x88748
	adds r1, r4, #0	@ 00088748 211c
.org 0x8874a
	bl 0x2abe0	@ 0008874a a2f749fa
.org 0x8874e
	ldr r1, [pc, #36]	@ 0008874e 0949
.org 0x88750
	ldrb r0, [r7, #9]	@ 00088750 787a
.org 0x88752
	lsls r0, r0, #2	@ 00088752 8000
.org 0x88754
	adds r0, r0, r1	@ 00088754 4018
