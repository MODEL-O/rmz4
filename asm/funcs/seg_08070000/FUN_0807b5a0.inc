@ FUN_0807b5a0  entry 0x0807b5a0  size 158
.thumb
.org 0x7b5a0
FUN_0807b5a0:
	push {r4, r5, lr}	@ 0007b5a0 30b5
.org 0x7b5a2
	adds r4, r0, #0	@ 0007b5a2 041c
.org 0x7b5a4
	adds r5, r4, #0	@ 0007b5a4 251c
.org 0x7b5a6
	adds r5, #140	@ 0007b5a6 8c35
.org 0x7b5a8
	ldr r0, [r5, #0]	@ 0007b5a8 2868
.org 0x7b5aa
	movs r1, #1	@ 0007b5aa 0121
.org 0x7b5ac
	ands r0, r1	@ 0007b5ac 0840
.org 0x7b5ae
	cmp r0, #0	@ 0007b5ae 0028
.org 0x7b5b0
	beq.n 0x7b5b8	@ 0007b5b0 02d0
.org 0x7b5b2
	movs r0, #67	@ 0007b5b2 4320
.org 0x7b5b4
	bl 0x6984	@ 0007b5b4 8bf7e6f9
.org 0x7b5b8
	ldr r0, [r5, #0]	@ 0007b5b8 2868
.org 0x7b5ba
	movs r1, #128	@ 0007b5ba 8021
.org 0x7b5bc
	lsls r1, r1, #2	@ 0007b5bc 8900
.org 0x7b5be
	ands r0, r1	@ 0007b5be 0840
.org 0x7b5c0
	cmp r0, #0	@ 0007b5c0 0028
.org 0x7b5c2
	bne.n 0x7b5d0	@ 0007b5c2 05d1
.org 0x7b5c4
	adds r0, r4, #0	@ 0007b5c4 201c
.org 0x7b5c6
	adds r0, #164	@ 0007b5c6 a430
.org 0x7b5c8
	movs r1, #0	@ 0007b5c8 0021
.org 0x7b5ca
	ldrsh r0, [r0, r1]	@ 0007b5ca 405e
.org 0x7b5cc
	cmp r0, #0	@ 0007b5cc 0028
.org 0x7b5ce
	bne.n 0x7b600	@ 0007b5ce 17d1
.org 0x7b5d0
	ldr r0, [pc, #36]	@ 0007b5d0 0948
.org 0x7b5d2
	ldrh r1, [r0, #8]	@ 0007b5d2 0189
.org 0x7b5d4
	movs r0, #8	@ 0007b5d4 0820
.org 0x7b5d6
	ands r0, r1	@ 0007b5d6 0840
.org 0x7b5d8
	cmp r0, #0	@ 0007b5d8 0028
.org 0x7b5da
	bne.n 0x7b600	@ 0007b5da 11d1
.org 0x7b5dc
	ldr r1, [pc, #28]	@ 0007b5dc 0749
.org 0x7b5de
	ldrb r0, [r4, #9]	@ 0007b5de 607a
.org 0x7b5e0
	lsls r0, r0, #2	@ 0007b5e0 8000
.org 0x7b5e2
	adds r0, r0, r1	@ 0007b5e2 4018
.org 0x7b5e4
	movs r1, #2	@ 0007b5e4 0221
.org 0x7b5e6
	str r1, [r4, #12]	@ 0007b5e6 e160
.org 0x7b5e8
	ldr r0, [r0, #0]	@ 0007b5e8 0068
.org 0x7b5ea
	ldr r0, [r0, #8]	@ 0007b5ea 8068
.org 0x7b5ec
	str r0, [r4, #20]	@ 0007b5ec 6061
.org 0x7b5ee
	adds r0, r4, #0	@ 0007b5ee 201c
.org 0x7b5f0
	bl 0x7e744	@ 0007b5f0 03f0a8f8
.org 0x7b5f4
	b.n 0x7b642	@ 0007b5f4 25e0
.org 0x7b5f6
	.byte 0x00	@ 0007b5f6 data
.org 0x7b5f7
	.byte 0x00	@ 0007b5f7 data
.org 0x7b5f8
	.byte 0x10,0xe9,0x02,0x02	@ 0007b5f8 data
.org 0x7b5fc
	.byte 0x70,0x7d,0x85,0x08	@ 0007b5fc data
.org 0x7b600
	adds r0, r4, #0	@ 0007b600 201c
.org 0x7b602
	adds r0, #140	@ 0007b602 8c30
.org 0x7b604
	ldr r0, [r0, #0]	@ 0007b604 0068
.org 0x7b606
	movs r1, #1	@ 0007b606 0121
.org 0x7b608
	ands r0, r1	@ 0007b608 0840
.org 0x7b60a
	cmp r0, #0	@ 0007b60a 0028
.org 0x7b60c
	beq.n 0x7b620	@ 0007b60c 08d0
.org 0x7b60e
	ldr r0, [r4, #44]	@ 0007b60e e06a
.org 0x7b610
	cmp r0, #0	@ 0007b610 0028
.org 0x7b612
	bne.n 0x7b626	@ 0007b612 08d1
.org 0x7b614
	ldr r2, [pc, #48]	@ 0007b614 0c4a
.org 0x7b616
	movs r0, #28	@ 0007b616 1c20
.org 0x7b618
	adds r1, r4, #0	@ 0007b618 211c
.org 0x7b61a
	bl 0x2adac	@ 0007b61a aff7c7fb
.org 0x7b61e
	str r0, [r4, #44]	@ 0007b61e e062
.org 0x7b620
	ldr r0, [r4, #44]	@ 0007b620 e06a
.org 0x7b622
	cmp r0, #0	@ 0007b622 0028
.org 0x7b624
	beq.n 0x7b632	@ 0007b624 05d0
.org 0x7b626
	bl 0x2b3e4	@ 0007b626 aff7ddfe
.org 0x7b62a
	cmp r0, #0	@ 0007b62a 0028
.org 0x7b62c
	beq.n 0x7b632	@ 0007b62c 01d0
.org 0x7b62e
	movs r0, #0	@ 0007b62e 0020
.org 0x7b630
	str r0, [r4, #44]	@ 0007b630 e062
.org 0x7b632
	ldr r0, [pc, #24]	@ 0007b632 0648
.org 0x7b634
	ldrb r1, [r4, #13]	@ 0007b634 617b
.org 0x7b636
	lsls r1, r1, #2	@ 0007b636 8900
.org 0x7b638
	adds r1, r1, r0	@ 0007b638 0918
.org 0x7b63a
	ldr r1, [r1, #0]	@ 0007b63a 0968
.org 0x7b63c
	adds r0, r4, #0	@ 0007b63c 201c
