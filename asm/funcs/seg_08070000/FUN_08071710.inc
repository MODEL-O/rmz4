@ FUN_08071710  entry 0x08071710  size 218
.thumb
.org 0x71710
FUN_08071710:
	push {r4, r5, r6, lr}	@ 00071710 70b5
.org 0x71712
	adds r6, r0, #0	@ 00071712 061c
.org 0x71714
	ldrb r0, [r6, #15]	@ 00071714 f07b
.org 0x71716
	cmp r0, #0	@ 00071716 0028
.org 0x71718
	bne.n 0x71730	@ 00071718 0ad1
.org 0x7171a
	adds r0, r6, #0	@ 0007171a 301c
.org 0x7171c
	movs r1, #8	@ 0007171c 0821
.org 0x7171e
	bl 0x736c4	@ 0007171e 01f0d1ff
.org 0x71722
	movs r0, #16	@ 00071722 1020
.org 0x71724
	strb r0, [r6, #18]	@ 00071724 b074
.org 0x71726
	movs r0, #1	@ 00071726 0120
.org 0x71728
	strb r0, [r6, #19]	@ 00071728 f074
.org 0x7172a
	ldrb r0, [r6, #15]	@ 0007172a f07b
.org 0x7172c
	adds r0, #1	@ 0007172c 0130
.org 0x7172e
	strb r0, [r6, #15]	@ 0007172e f073
.org 0x71730
	adds r0, r6, #0	@ 00071730 301c
.org 0x71732
	bl 0x1cff0	@ 00071732 abf75dfc
.org 0x71736
	adds r0, r6, #0	@ 00071736 301c
.org 0x71738
	adds r0, #116	@ 00071738 7430
.org 0x7173a
	ldr r4, [pc, #116]	@ 0007173a 1d4c
.org 0x7173c
	ldr r3, [pc, #116]	@ 0007173c 1d4b
.org 0x7173e
	adds r1, r6, #0	@ 0007173e 311c
.org 0x71740
	adds r1, #184	@ 00071740 b831
.org 0x71742
	ldrb r2, [r1, #0]	@ 00071742 0a78
.org 0x71744
	lsls r1, r2, #1	@ 00071744 5100
.org 0x71746
	adds r1, r1, r3	@ 00071746 c918
.org 0x71748
	ldrh r1, [r1, #0]	@ 00071748 0988
.org 0x7174a
	lsls r1, r1, #2	@ 0007174a 8900
.org 0x7174c
	adds r1, r1, r4	@ 0007174c 0919
.org 0x7174e
	adds r3, r6, #0	@ 0007174e 331c
.org 0x71750
	adds r3, #113	@ 00071750 7133
.org 0x71752
	movs r5, #0	@ 00071752 0025
.org 0x71754
	ldrsb r5, [r3, r5]	@ 00071754 5d57
.org 0x71756
	ldr r1, [r1, #0]	@ 00071756 0968
.org 0x71758
	lsls r3, r5, #2	@ 00071758 ab00
.org 0x7175a
	adds r3, r3, r1	@ 0007175a 5b18
.org 0x7175c
	ldr r4, [pc, #88]	@ 0007175c 164c
.org 0x7175e
	adds r1, r6, #0	@ 0007175e 311c
.org 0x71760
	adds r1, #185	@ 00071760 b931
.org 0x71762
	ldrb r1, [r1, #0]	@ 00071762 0978
.org 0x71764
	lsls r1, r1, #2	@ 00071764 8900
.org 0x71766
	adds r1, r1, r4	@ 00071766 0919
.org 0x71768
	ldr r1, [r1, #0]	@ 00071768 0968
.org 0x7176a
	lsls r2, r2, #2	@ 0007176a 9200
.org 0x7176c
	adds r2, r2, r1	@ 0007176c 5218
.org 0x7176e
	ldr r1, [r2, #0]	@ 0007176e 1168
.org 0x71770
	adds r1, r1, r5	@ 00071770 4919
.org 0x71772
	ldrb r1, [r1, #0]	@ 00071772 0978
.org 0x71774
	lsls r2, r1, #1	@ 00071774 4a00
.org 0x71776
	adds r2, r2, r1	@ 00071776 5218
.org 0x71778
	lsls r2, r2, #3	@ 00071778 d200
.org 0x7177a
	ldr r1, [r3, #0]	@ 0007177a 1968
.org 0x7177c
	adds r1, r1, r2	@ 0007177c 8918
.org 0x7177e
	bl 0x5784	@ 0007177e 94f701f8
.org 0x71782
	ldrb r0, [r6, #18]	@ 00071782 b07c
.org 0x71784
	cmp r0, #0	@ 00071784 0028
.org 0x71786
	beq.n 0x7178c	@ 00071786 01d0
.org 0x71788
	subs r0, #1	@ 00071788 0138
.org 0x7178a
	strb r0, [r6, #18]	@ 0007178a b074
.org 0x7178c
	ldrb r0, [r6, #19]	@ 0007178c f07c
.org 0x7178e
	cmp r0, #0	@ 0007178e 0028
.org 0x71790
	beq.n 0x717d8	@ 00071790 22d0
.org 0x71792
	ldr r0, [r6, #88]	@ 00071792 b06d
.org 0x71794
	ldr r1, [r6, #96]	@ 00071794 316e
.org 0x71796
	adds r0, r0, r1	@ 00071796 4018
.org 0x71798
	str r0, [r6, #88]	@ 00071798 b065
.org 0x7179a
	adds r0, r6, #0	@ 0007179a 301c
.org 0x7179c
	bl 0x737e8	@ 0007179c 02f024f8
.org 0x717a0
	cmp r0, #0	@ 000717a0 0028
.org 0x717a2
	beq.n 0x717bc	@ 000717a2 0bd0
.org 0x717a4
	adds r0, r6, #0	@ 000717a4 301c
.org 0x717a6
	bl 0x739cc	@ 000717a6 02f011f9
.org 0x717aa
	movs r0, #0	@ 000717aa 0020
.org 0x717ac
	str r0, [r6, #96]	@ 000717ac 3066
.org 0x717ae
	b.n 0x717ce	@ 000717ae 0ee0
.org 0x717b0
	.byte 0x08,0xcb,0x85,0x08	@ 000717b0 data
.org 0x717b4
	.byte 0x04,0xcc,0x85,0x08	@ 000717b4 data
.org 0x717b8
	.byte 0xfc,0xcb,0x85,0x08	@ 000717b8 data
.org 0x717bc
	ldr r0, [r6, #96]	@ 000717bc 306e
.org 0x717be
	ldr r1, [r6, #104]	@ 000717be b16e
.org 0x717c0
	adds r0, r0, r1	@ 000717c0 4018
.org 0x717c2
	str r0, [r6, #96]	@ 000717c2 3066
.org 0x717c4
	movs r1, #224	@ 000717c4 e021
.org 0x717c6
	lsls r1, r1, #3	@ 000717c6 c900
.org 0x717c8
	cmp r0, r1	@ 000717c8 8842
.org 0x717ca
	ble.n 0x717ce	@ 000717ca 00dd
.org 0x717cc
	str r1, [r6, #96]	@ 000717cc 3166
.org 0x717ce
	ldr r0, [r6, #96]	@ 000717ce 306e
.org 0x717d0
	cmp r0, #0	@ 000717d0 0028
.org 0x717d2
	blt.n 0x717d8	@ 000717d2 01db
.org 0x717d4
	movs r0, #0	@ 000717d4 0020
.org 0x717d6
	strb r0, [r6, #19]	@ 000717d6 f074
.org 0x717d8
	adds r0, r6, #0	@ 000717d8 301c
.org 0x717da
	adds r0, #115	@ 000717da 7330
.org 0x717dc
	ldrb r0, [r0, #0]	@ 000717dc 0078
.org 0x717de
	cmp r0, #3	@ 000717de 0328
.org 0x717e0
	bne.n 0x717f0	@ 000717e0 06d1
.org 0x717e2
	ldrh r1, [r6, #18]	@ 000717e2 718a
.org 0x717e4
	cmp r1, #0	@ 000717e4 0029
.org 0x717e6
	bne.n 0x717f0	@ 000717e6 03d1
.org 0x717e8
	ldrb r0, [r6, #14]	@ 000717e8 b07b
