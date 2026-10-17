@ FUN_080ba73c  entry 0x080ba73c  size 214
.thumb
.org 0xba73c
FUN_080ba73c:
	push {r4, r5, r6, r7, lr}	@ 000ba73c f0b5
.org 0xba73e
	mov r7, r8	@ 000ba73e 4746
.org 0xba740
	push {r7}	@ 000ba740 80b4
.org 0xba742
	adds r4, r0, #0	@ 000ba742 041c
.org 0xba744
	ldr r0, [r4, #40]	@ 000ba744 a06a
.org 0xba746
	mov r8, r0	@ 000ba746 8046
.org 0xba748
	ldrb r0, [r4, #15]	@ 000ba748 e07b
.org 0xba74a
	cmp r0, #0	@ 000ba74a 0028
.org 0xba74c
	bne.n 0xba7b6	@ 000ba74c 33d1
.org 0xba74e
	movs r0, #202	@ 000ba74e ca20
.org 0xba750
	lsls r0, r0, #1	@ 000ba750 4000
.org 0xba752
	bl 0x2b10	@ 000ba752 48f7ddf9
.org 0xba756
	adds r0, r4, #0	@ 000ba756 201c
.org 0xba758
	adds r0, #116	@ 000ba758 7430
.org 0xba75a
	ldr r1, [pc, #184]	@ 000ba75a 2e49
.org 0xba75c
	bl 0x5784	@ 000ba75c 4bf712f8
.org 0xba760
	ldr r1, [pc, #180]	@ 000ba760 2d49
.org 0xba762
	adds r0, r4, #0	@ 000ba762 201c
.org 0xba764
	bl 0x1cf00	@ 000ba764 62f7ccfb
.org 0xba768
	mov r0, r8	@ 000ba768 4046
.org 0xba76a
	adds r0, #180	@ 000ba76a b430
.org 0xba76c
	ldr r3, [r0, #0]	@ 000ba76c 0368
.org 0xba76e
	movs r7, #240	@ 000ba76e f027
.org 0xba770
	lsls r7, r7, #7	@ 000ba770 ff01
.org 0xba772
	adds r1, r3, r7	@ 000ba772 d919
.org 0xba774
	ldr r0, [pc, #164]	@ 000ba774 2948
.org 0xba776
	ldr r0, [r0, #0]	@ 000ba776 0068
.org 0xba778
	ldr r0, [r0, #84]	@ 000ba778 406d
.org 0xba77a
	movs r2, #1	@ 000ba77a 0122
.org 0xba77c
	negs r2, r2	@ 000ba77c 5242
.org 0xba77e
	cmp r1, r0	@ 000ba77e 8142
.org 0xba780
	bge.n 0xba784	@ 000ba780 00da
.org 0xba782
	movs r2, #1	@ 000ba782 0122
.org 0xba784
	lsls r0, r2, #1	@ 000ba784 5000
.org 0xba786
	adds r0, r0, r2	@ 000ba786 8018
.org 0xba788
	lsls r0, r0, #2	@ 000ba788 8000
.org 0xba78a
	subs r0, r0, r2	@ 000ba78a 801a
.org 0xba78c
	lsls r0, r0, #11	@ 000ba78c c002
.org 0xba78e
	adds r0, r0, r7	@ 000ba78e c019
.org 0xba790
	adds r5, r3, r0	@ 000ba790 1d18
.org 0xba792
	mov r0, r8	@ 000ba792 4046
.org 0xba794
	adds r0, #184	@ 000ba794 b830
.org 0xba796
	ldr r0, [r0, #0]	@ 000ba796 0068
.org 0xba798
	ldr r1, [pc, #132]	@ 000ba798 2149
.org 0xba79a
	adds r6, r0, r1	@ 000ba79a 4618
.org 0xba79c
	ldr r0, [r4, #84]	@ 000ba79c 606d
.org 0xba79e
	str r0, [r4, #92]	@ 000ba79e e065
.org 0xba7a0
	subs r0, r5, r0	@ 000ba7a0 281a
.org 0xba7a2
	str r0, [r4, #100]	@ 000ba7a2 6066
.org 0xba7a4
	ldr r0, [r4, #88]	@ 000ba7a4 a06d
.org 0xba7a6
	str r0, [r4, #96]	@ 000ba7a6 2066
.org 0xba7a8
	subs r0, r6, r0	@ 000ba7a8 301a
.org 0xba7aa
	str r0, [r4, #104]	@ 000ba7aa a066
.org 0xba7ac
	movs r0, #16	@ 000ba7ac 1020
.org 0xba7ae
	strb r0, [r4, #18]	@ 000ba7ae a074
.org 0xba7b0
	ldrb r0, [r4, #15]	@ 000ba7b0 e07b
.org 0xba7b2
	adds r0, #1	@ 000ba7b2 0130
.org 0xba7b4
	strb r0, [r4, #15]	@ 000ba7b4 e073
.org 0xba7b6
	adds r0, r4, #0	@ 000ba7b6 201c
.org 0xba7b8
	bl 0x1cff0	@ 000ba7b8 62f71afc
.org 0xba7bc
	ldrb r0, [r4, #18]	@ 000ba7bc a07c
.org 0xba7be
	subs r3, r0, #1	@ 000ba7be 431e
.org 0xba7c0
	strb r3, [r4, #18]	@ 000ba7c0 a374
.org 0xba7c2
	ldrb r1, [r4, #18]	@ 000ba7c2 a17c
.org 0xba7c4
	movs r0, #16	@ 000ba7c4 1020
.org 0xba7c6
	subs r0, r0, r1	@ 000ba7c6 401a
.org 0xba7c8
	lsls r0, r0, #26	@ 000ba7c8 8006
.org 0xba7ca
	ldr r1, [pc, #88]	@ 000ba7ca 1649
.org 0xba7cc
	lsrs r0, r0, #23	@ 000ba7cc c00d
.org 0xba7ce
	adds r0, r0, r1	@ 000ba7ce 4018
.org 0xba7d0
	movs r1, #0	@ 000ba7d0 0021
.org 0xba7d2
	ldrsh r2, [r0, r1]	@ 000ba7d2 425e
.org 0xba7d4
	ldr r0, [r4, #100]	@ 000ba7d4 606e
.org 0xba7d6
	muls r0, r2	@ 000ba7d6 5043
.org 0xba7d8
	cmp r0, #0	@ 000ba7d8 0028
.org 0xba7da
	bge.n 0xba7de	@ 000ba7da 00da
.org 0xba7dc
	adds r0, #255	@ 000ba7dc ff30
.org 0xba7de
	asrs r0, r0, #8	@ 000ba7de 0012
.org 0xba7e0
	ldr r1, [r4, #92]	@ 000ba7e0 e16d
.org 0xba7e2
	adds r1, r1, r0	@ 000ba7e2 0918
.org 0xba7e4
	str r1, [r4, #84]	@ 000ba7e4 6165
.org 0xba7e6
	ldr r0, [r4, #104]	@ 000ba7e6 a06e
.org 0xba7e8
	muls r0, r2	@ 000ba7e8 5043
.org 0xba7ea
	cmp r0, #0	@ 000ba7ea 0028
.org 0xba7ec
	bge.n 0xba7f0	@ 000ba7ec 00da
.org 0xba7ee
	adds r0, #255	@ 000ba7ee ff30
.org 0xba7f0
	asrs r0, r0, #8	@ 000ba7f0 0012
.org 0xba7f2
	ldr r1, [r4, #96]	@ 000ba7f2 216e
.org 0xba7f4
	adds r1, r1, r0	@ 000ba7f4 0918
.org 0xba7f6
	str r1, [r4, #88]	@ 000ba7f6 a165
.org 0xba7f8
	lsls r0, r3, #24	@ 000ba7f8 1806
.org 0xba7fa
	lsrs r1, r0, #24	@ 000ba7fa 010e
.org 0xba7fc
	cmp r1, #0	@ 000ba7fc 0029
.org 0xba7fe
	bne.n 0xba808	@ 000ba7fe 03d1
.org 0xba800
	movs r0, #1	@ 000ba800 0120
.org 0xba802
	strb r0, [r4, #13]	@ 000ba802 6073
.org 0xba804
	strb r1, [r4, #14]	@ 000ba804 a173
.org 0xba806
	strb r1, [r4, #15]	@ 000ba806 e173
.org 0xba808
	pop {r3}	@ 000ba808 08bc
.org 0xba80a
	mov r8, r3	@ 000ba80a 9846
.org 0xba80c
	pop {r4, r5, r6, r7}	@ 000ba80c f0bc
.org 0xba80e
	pop {r0}	@ 000ba80e 01bc
.org 0xba810
	bx r0	@ 000ba810 0047
