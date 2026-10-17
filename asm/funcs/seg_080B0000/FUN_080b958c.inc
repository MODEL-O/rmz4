@ FUN_080b958c  entry 0x080b958c  size 192
.thumb
.org 0xb958c
FUN_080b958c:
	push {r4, r5, r6, lr}	@ 000b958c 70b5
.org 0xb958e
	adds r6, r0, #0	@ 000b958e 061c
.org 0xb9590
	ldrb r4, [r6, #17]	@ 000b9590 747c
.org 0xb9592
	ldr r1, [pc, #184]	@ 000b9592 2e49
.org 0xb9594
	ldrb r0, [r6, #9]	@ 000b9594 707a
.org 0xb9596
	lsls r0, r0, #2	@ 000b9596 8000
.org 0xb9598
	adds r0, r0, r1	@ 000b9598 4018
.org 0xb959a
	movs r1, #1	@ 000b959a 0121
.org 0xb959c
	str r1, [r6, #12]	@ 000b959c f160
.org 0xb959e
	ldr r0, [r0, #0]	@ 000b959e 0068
.org 0xb95a0
	ldr r0, [r0, #4]	@ 000b95a0 4068
.org 0xb95a2
	str r0, [r6, #20]	@ 000b95a2 7061
.org 0xb95a4
	ldrb r1, [r6, #10]	@ 000b95a4 b17a
.org 0xb95a6
	movs r0, #1	@ 000b95a6 0120
.org 0xb95a8
	movs r5, #0	@ 000b95a8 0025
.org 0xb95aa
	orrs r0, r1	@ 000b95aa 0843
.org 0xb95ac
	movs r1, #2	@ 000b95ac 0221
.org 0xb95ae
	orrs r0, r1	@ 000b95ae 0843
.org 0xb95b0
	strb r0, [r6, #10]	@ 000b95b0 b072
.org 0xb95b2
	ldr r2, [pc, #156]	@ 000b95b2 274a
.org 0xb95b4
	adds r0, r4, #0	@ 000b95b4 201c
.org 0xb95b6
	adds r0, #64	@ 000b95b6 4030
.org 0xb95b8
	lsls r0, r0, #24	@ 000b95b8 0006
.org 0xb95ba
	lsrs r0, r0, #23	@ 000b95ba c00d
.org 0xb95bc
	adds r0, r0, r2	@ 000b95bc 8018
.org 0xb95be
	movs r3, #0	@ 000b95be 0023
.org 0xb95c0
	ldrsh r1, [r0, r3]	@ 000b95c0 c15e
.org 0xb95c2
	lsls r0, r1, #2	@ 000b95c2 8800
.org 0xb95c4
	adds r0, r0, r1	@ 000b95c4 4018
.org 0xb95c6
	lsls r0, r0, #7	@ 000b95c6 c001
.org 0xb95c8
	cmp r0, #0	@ 000b95c8 0028
.org 0xb95ca
	bge.n 0xb95ce	@ 000b95ca 00da
.org 0xb95cc
	adds r0, #255	@ 000b95cc ff30
.org 0xb95ce
	asrs r0, r0, #8	@ 000b95ce 0012
.org 0xb95d0
	str r0, [r6, #92]	@ 000b95d0 f065
.org 0xb95d2
	lsls r0, r4, #1	@ 000b95d2 6000
.org 0xb95d4
	adds r0, r0, r2	@ 000b95d4 8018
.org 0xb95d6
	movs r2, #0	@ 000b95d6 0022
.org 0xb95d8
	ldrsh r1, [r0, r2]	@ 000b95d8 815e
.org 0xb95da
	lsls r0, r1, #2	@ 000b95da 8800
.org 0xb95dc
	adds r0, r0, r1	@ 000b95dc 4018
.org 0xb95de
	lsls r0, r0, #7	@ 000b95de c001
.org 0xb95e0
	cmp r0, #0	@ 000b95e0 0028
.org 0xb95e2
	bge.n 0xb95e6	@ 000b95e2 00da
.org 0xb95e4
	adds r0, #255	@ 000b95e4 ff30
.org 0xb95e6
	asrs r0, r0, #8	@ 000b95e6 0012
.org 0xb95e8
	str r0, [r6, #96]	@ 000b95e8 3066
.org 0xb95ea
	adds r0, r6, #0	@ 000b95ea 301c
.org 0xb95ec
	bl 0x1ce54	@ 000b95ec 63f732fc
.org 0xb95f0
	movs r5, #0	@ 000b95f0 0025
.org 0xb95f2
	ldrb r1, [r6, #10]	@ 000b95f2 b17a
.org 0xb95f4
	movs r0, #239	@ 000b95f4 ef20
.org 0xb95f6
	ands r0, r1	@ 000b95f6 0840
.org 0xb95f8
	strb r0, [r6, #10]	@ 000b95f8 b072
.org 0xb95fa
	adds r0, r6, #0	@ 000b95fa 301c
.org 0xb95fc
	adds r0, #76	@ 000b95fc 4c30
.org 0xb95fe
	strb r5, [r0, #0]	@ 000b95fe 0570
.org 0xb9600
	adds r2, r6, #0	@ 000b9600 321c
.org 0xb9602
	adds r2, #74	@ 000b9602 4a32
.org 0xb9604
	ldrb r1, [r2, #0]	@ 000b9604 1178
.org 0xb9606
	movs r0, #17	@ 000b9606 1120
.org 0xb9608
	negs r0, r0	@ 000b9608 4042
.org 0xb960a
	ands r0, r1	@ 000b960a 0840
.org 0xb960c
	strb r0, [r2, #0]	@ 000b960c 1070
.org 0xb960e
	adds r1, r4, #0	@ 000b960e 211c
.org 0xb9610
	adds r1, #128	@ 000b9610 8031
.org 0xb9612
	adds r0, r6, #0	@ 000b9612 301c
.org 0xb9614
	adds r0, #36	@ 000b9614 2430
.org 0xb9616
	strb r1, [r0, #0]	@ 000b9616 0170
.org 0xb9618
	movs r1, #228	@ 000b9618 e421
.org 0xb961a
	lsls r1, r1, #8	@ 000b961a 0902
.org 0xb961c
	adds r0, r6, #0	@ 000b961c 301c
.org 0xb961e
	bl 0x1cf00	@ 000b961e 63f76ffc
.org 0xb9622
	ldrb r0, [r6, #10]	@ 000b9622 b07a
.org 0xb9624
	movs r1, #4	@ 000b9624 0421
.org 0xb9626
	orrs r0, r1	@ 000b9626 0843
.org 0xb9628
	strb r0, [r6, #10]	@ 000b9628 b072
.org 0xb962a
	adds r4, r6, #0	@ 000b962a 341c
.org 0xb962c
	adds r4, #116	@ 000b962c 7434
.org 0xb962e
	ldr r1, [pc, #36]	@ 000b962e 0949
.org 0xb9630
	adds r2, r6, #0	@ 000b9630 321c
.org 0xb9632
	adds r2, #84	@ 000b9632 5432
.org 0xb9634
	adds r0, r4, #0	@ 000b9634 201c
.org 0xb9636
	movs r3, #7	@ 000b9636 0723
.org 0xb9638
	bl 0x5760	@ 000b9638 4cf792f8
.org 0xb963c
	str r6, [r4, #44]	@ 000b963c e662
.org 0xb963e
	str r5, [r4, #36]	@ 000b963e 6562
.org 0xb9640
	adds r0, r6, #0	@ 000b9640 301c
.org 0xb9642
	bl 0xb9658	@ 000b9642 00f009f8
.org 0xb9646
	pop {r4, r5, r6}	@ 000b9646 70bc
.org 0xb9648
	pop {r0}	@ 000b9648 01bc
.org 0xb964a
	bx r0	@ 000b964a 0047
