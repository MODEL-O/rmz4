@ FUN_080b9658  entry 0x080b9658  size 142
.thumb
.org 0xb9658
FUN_080b9658:
	push {r4, r5, r6, lr}	@ 000b9658 70b5
.org 0xb965a
	adds r4, r0, #0	@ 000b965a 041c
.org 0xb965c
	adds r6, r4, #0	@ 000b965c 261c
.org 0xb965e
	adds r6, #140	@ 000b965e 8c36
.org 0xb9660
	ldr r5, [r6, #0]	@ 000b9660 3568
.org 0xb9662
	movs r0, #128	@ 000b9662 8020
.org 0xb9664
	lsls r0, r0, #2	@ 000b9664 8000
.org 0xb9666
	ands r5, r0	@ 000b9666 0540
.org 0xb9668
	cmp r5, #0	@ 000b9668 002d
.org 0xb966a
	beq.n 0xb968c	@ 000b966a 0fd0
.org 0xb966c
	ldr r1, [pc, #24]	@ 000b966c 0649
.org 0xb966e
	ldrb r0, [r4, #9]	@ 000b966e 607a
.org 0xb9670
	lsls r0, r0, #2	@ 000b9670 8000
.org 0xb9672
	adds r0, r0, r1	@ 000b9672 4018
.org 0xb9674
	movs r1, #2	@ 000b9674 0221
.org 0xb9676
	str r1, [r4, #12]	@ 000b9676 e160
.org 0xb9678
	ldr r0, [r0, #0]	@ 000b9678 0068
.org 0xb967a
	ldr r0, [r0, #8]	@ 000b967a 8068
.org 0xb967c
	str r0, [r4, #20]	@ 000b967c 6061
.org 0xb967e
	adds r0, r4, #0	@ 000b967e 201c
.org 0xb9680
	bl 0xb96f4	@ 000b9680 00f038f8
.org 0xb9684
	b.n 0xb96e6	@ 000b9684 2fe0
.org 0xb9686
	.byte 0x00	@ 000b9686 data
.org 0xb9687
	.byte 0x00	@ 000b9687 data
.org 0xb9688
	.byte 0x40,0xdb,0x85,0x08	@ 000b9688 data
.org 0xb968c
	adds r0, r4, #0	@ 000b968c 201c
.org 0xb968e
	bl 0x1cff0	@ 000b968e 63f7affc
.org 0xb9692
	ldr r0, [r4, #84]	@ 000b9692 606d
.org 0xb9694
	ldr r1, [r4, #92]	@ 000b9694 e16d
.org 0xb9696
	adds r0, r0, r1	@ 000b9696 4018
.org 0xb9698
	str r0, [r4, #84]	@ 000b9698 6065
.org 0xb969a
	ldr r0, [r4, #88]	@ 000b969a a06d
.org 0xb969c
	ldr r1, [r4, #96]	@ 000b969c 216e
.org 0xb969e
	adds r0, r0, r1	@ 000b969e 4018
.org 0xb96a0
	str r0, [r4, #88]	@ 000b96a0 a065
.org 0xb96a2
	ldr r0, [pc, #72]	@ 000b96a2 1248
.org 0xb96a4
	adds r1, r4, #0	@ 000b96a4 211c
.org 0xb96a6
	adds r1, #84	@ 000b96a6 5431
.org 0xb96a8
	bl 0x1fb14	@ 000b96a8 66f734fa
.org 0xb96ac
	movs r1, #160	@ 000b96ac a021
.org 0xb96ae
	lsls r1, r1, #5	@ 000b96ae 4901
.org 0xb96b0
	cmp r0, r1	@ 000b96b0 8842
.org 0xb96b2
	bls.n 0xb96e6	@ 000b96b2 18d9
.org 0xb96b4
	ldrb r1, [r4, #10]	@ 000b96b4 a17a
.org 0xb96b6
	movs r0, #254	@ 000b96b6 fe20
.org 0xb96b8
	ands r0, r1	@ 000b96b8 0840
.org 0xb96ba
	movs r1, #253	@ 000b96ba fd21
.org 0xb96bc
	ands r0, r1	@ 000b96bc 0840
.org 0xb96be
	strb r0, [r4, #10]	@ 000b96be a072
.org 0xb96c0
	str r5, [r6, #0]	@ 000b96c0 3560
.org 0xb96c2
	adds r0, r4, #0	@ 000b96c2 201c
.org 0xb96c4
	adds r0, #144	@ 000b96c4 9030
.org 0xb96c6
	str r5, [r0, #0]	@ 000b96c6 0560
.org 0xb96c8
	adds r0, #4	@ 000b96c8 0430
.org 0xb96ca
	strb r5, [r0, #0]	@ 000b96ca 0570
.org 0xb96cc
	ldrb r1, [r4, #10]	@ 000b96cc a17a
.org 0xb96ce
	movs r0, #251	@ 000b96ce fb20
.org 0xb96d0
	ands r0, r1	@ 000b96d0 0840
.org 0xb96d2
	strb r0, [r4, #10]	@ 000b96d2 a072
.org 0xb96d4
	ldr r1, [pc, #24]	@ 000b96d4 0649
.org 0xb96d6
	ldrb r0, [r4, #9]	@ 000b96d6 607a
.org 0xb96d8
	lsls r0, r0, #2	@ 000b96d8 8000
.org 0xb96da
	adds r0, r0, r1	@ 000b96da 4018
.org 0xb96dc
	movs r1, #3	@ 000b96dc 0321
.org 0xb96de
	str r1, [r4, #12]	@ 000b96de e160
.org 0xb96e0
	ldr r0, [r0, #0]	@ 000b96e0 0068
.org 0xb96e2
	ldr r0, [r0, #12]	@ 000b96e2 c068
.org 0xb96e4
	str r0, [r4, #20]	@ 000b96e4 6061
