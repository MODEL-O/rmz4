@ FUN_0810d5dc  entry 0x0810d5dc  size 126
.thumb
.org 0x10d5dc
FUN_0810d5dc:
	push {r4, r5, r6, r7, lr}	@ 0010d5dc f0b5
.org 0x10d5de
	ldr r1, [pc, #124]	@ 0010d5de 1f49
.org 0x10d5e0
	movs r2, #177	@ 0010d5e0 b122
.org 0x10d5e2
	lsls r2, r2, #3	@ 0010d5e2 d200
.org 0x10d5e4
	adds r0, r1, r2	@ 0010d5e4 8818
.org 0x10d5e6
	ldr r2, [r0, #0]	@ 0010d5e6 0268
.org 0x10d5e8
	ldr r7, [pc, #116]	@ 0010d5e8 1d4f
.org 0x10d5ea
	adds r1, r1, r7	@ 0010d5ea c919
.org 0x10d5ec
	cmp r2, #0	@ 0010d5ec 002a
.org 0x10d5ee
	beq.n 0x10d600	@ 0010d5ee 07d0
.org 0x10d5f0
	ldr r3, [r1, #0]	@ 0010d5f0 0b68
.org 0x10d5f2
	ldr r0, [r2, #0]	@ 0010d5f2 1068
.org 0x10d5f4
	str r3, [r2, #0]	@ 0010d5f4 1360
.org 0x10d5f6
	adds r3, r2, #0	@ 0010d5f6 131c
.org 0x10d5f8
	adds r2, r0, #0	@ 0010d5f8 021c
.org 0x10d5fa
	cmp r2, #0	@ 0010d5fa 002a
.org 0x10d5fc
	bne.n 0x10d5f2	@ 0010d5fc f9d1
.org 0x10d5fe
	str r3, [r1, #0]	@ 0010d5fe 0b60
.org 0x10d600
	ldr r3, [pc, #88]	@ 0010d600 164b
.org 0x10d602
	movs r1, #177	@ 0010d602 b121
.org 0x10d604
	lsls r1, r1, #3	@ 0010d604 c900
.org 0x10d606
	adds r0, r3, r1	@ 0010d606 5818
.org 0x10d608
	movs r1, #0	@ 0010d608 0021
.org 0x10d60a
	str r1, [r0, #0]	@ 0010d60a 0160
.org 0x10d60c
	movs r5, #0	@ 0010d60c 0025
.org 0x10d60e
	movs r2, #4	@ 0010d60e 0422
.org 0x10d610
	ldrsh r0, [r3, r2]	@ 0010d610 985e
.org 0x10d612
	cmp r5, r0	@ 0010d612 8542
.org 0x10d614
	bge.n 0x10d64e	@ 0010d614 1bda
.org 0x10d616
	adds r6, r3, #0	@ 0010d616 1e1c
.org 0x10d618
	movs r7, #196	@ 0010d618 c427
.org 0x10d61a
	lsls r7, r7, #1	@ 0010d61a 7f00
.org 0x10d61c
	adds r0, r6, r7	@ 0010d61c f019
.org 0x10d61e
	adds r0, r5, r0	@ 0010d61e 2818
.org 0x10d620
	ldrb r0, [r0, #0]	@ 0010d620 0078
.org 0x10d622
	movs r2, #244	@ 0010d622 f422
.org 0x10d624
	lsls r2, r2, #1	@ 0010d624 5200
.org 0x10d626
	adds r1, r6, r2	@ 0010d626 b118
.org 0x10d628
	adds r1, r5, r1	@ 0010d628 6918
.org 0x10d62a
	ldrb r1, [r1, #0]	@ 0010d62a 0978
.org 0x10d62c
	lsls r2, r5, #2	@ 0010d62c aa00
.org 0x10d62e
	adds r3, r6, #0	@ 0010d62e 331c
.org 0x10d630
	adds r3, #8	@ 0010d630 0833
.org 0x10d632
	adds r2, r2, r3	@ 0010d632 d218
.org 0x10d634
	ldr r2, [r2, #0]	@ 0010d634 1268
.org 0x10d636
	lsls r3, r5, #1	@ 0010d636 6b00
.org 0x10d638
	adds r7, #192	@ 0010d638 c037
.org 0x10d63a
	adds r4, r6, r7	@ 0010d63a f419
.org 0x10d63c
	adds r3, r3, r4	@ 0010d63c 1b19
.org 0x10d63e
	ldrh r3, [r3, #0]	@ 0010d63e 1b88
.org 0x10d640
	bl 0x10dbdc	@ 0010d640 00f0ccfa
.org 0x10d644
	adds r5, #1	@ 0010d644 0135
.org 0x10d646
	movs r1, #4	@ 0010d646 0421
.org 0x10d648
	ldrsh r0, [r6, r1]	@ 0010d648 705e
.org 0x10d64a
	cmp r5, r0	@ 0010d64a 8542
.org 0x10d64c
	blt.n 0x10d618	@ 0010d64c e4db
.org 0x10d64e
	ldr r1, [pc, #12]	@ 0010d64e 0349
.org 0x10d650
	movs r0, #0	@ 0010d650 0020
.org 0x10d652
	strh r0, [r1, #4]	@ 0010d652 8880
.org 0x10d654
	pop {r4, r5, r6, r7}	@ 0010d654 f0bc
.org 0x10d656
	pop {r0}	@ 0010d656 01bc
.org 0x10d658
	bx r0	@ 0010d658 0047
