@ FUN_08066598  entry 0x08066598  size 304
.thumb
.org 0x66598
FUN_08066598:
	push {r4, r5, r6, r7, lr}	@ 00066598 f0b5
.org 0x6659a
	mov r7, sl	@ 0006659a 5746
.org 0x6659c
	mov r6, r9	@ 0006659c 4e46
.org 0x6659e
	mov r5, r8	@ 0006659e 4546
.org 0x665a0
	push {r5, r6, r7}	@ 000665a0 e0b4
.org 0x665a2
	mov r9, r0	@ 000665a2 8146
.org 0x665a4
	ldr r3, [pc, #288]	@ 000665a4 484b
.org 0x665a6
	ldr r0, [r3, #0]	@ 000665a6 1868
.org 0x665a8
	ldr r5, [pc, #288]	@ 000665a8 484d
.org 0x665aa
	muls r0, r5	@ 000665aa 6843
.org 0x665ac
	ldr r4, [pc, #288]	@ 000665ac 484c
.org 0x665ae
	adds r0, r0, r4	@ 000665ae 0019
.org 0x665b0
	lsls r0, r0, #1	@ 000665b0 4000
.org 0x665b2
	lsrs r1, r0, #1	@ 000665b2 4108
.org 0x665b4
	str r1, [r3, #0]	@ 000665b4 1960
.org 0x665b6
	lsrs r0, r0, #17	@ 000665b6 400c
.org 0x665b8
	movs r1, #1	@ 000665b8 0121
.org 0x665ba
	ands r0, r1	@ 000665ba 0840
.org 0x665bc
	movs r1, #5	@ 000665bc 0521
.org 0x665be
	subs r2, r1, r0	@ 000665be 0a1a
.org 0x665c0
	cmp r2, #0	@ 000665c0 002a
.org 0x665c2
	ble.n 0x6662e	@ 000665c2 34dd
.org 0x665c4
	movs r1, #192	@ 000665c4 c021
.org 0x665c6
	lsls r1, r1, #6	@ 000665c6 8901
.org 0x665c8
	negs r0, r1	@ 000665c8 4842
.org 0x665ca
	mov r8, r3	@ 000665ca 9846
.org 0x665cc
	adds r7, r2, #0	@ 000665cc 171c
.org 0x665ce
	adds r0, #1	@ 000665ce 0130
.org 0x665d0
	asrs r0, r0, #1	@ 000665d0 4010
.org 0x665d2
	mov sl, r0	@ 000665d2 8246
.org 0x665d4
	mov r2, r9	@ 000665d4 4a46
.org 0x665d6
	ldr r5, [r2, #84]	@ 000665d6 556d
.org 0x665d8
	add r5, sl	@ 000665d8 5544
.org 0x665da
	mov r1, r8	@ 000665da 4146
.org 0x665dc
	ldr r0, [r1, #0]	@ 000665dc 0868
.org 0x665de
	ldr r2, [pc, #236]	@ 000665de 3b4a
.org 0x665e0
	muls r0, r2	@ 000665e0 5043
.org 0x665e2
	ldr r1, [pc, #236]	@ 000665e2 3b49
.org 0x665e4
	adds r0, r0, r1	@ 000665e4 4018
.org 0x665e6
	lsls r0, r0, #1	@ 000665e6 4000
.org 0x665e8
	lsrs r6, r0, #1	@ 000665e8 4608
.org 0x665ea
	mov r2, r8	@ 000665ea 4246
.org 0x665ec
	str r6, [r2, #0]	@ 000665ec 1660
.org 0x665ee
	lsrs r0, r0, #17	@ 000665ee 400c
.org 0x665f0
	movs r1, #192	@ 000665f0 c021
.org 0x665f2
	lsls r1, r1, #6	@ 000665f2 8901
.org 0x665f4
	bl 0x129198	@ 000665f4 c2f0d0fd
.org 0x665f8
	adds r5, r5, r0	@ 000665f8 2d18
.org 0x665fa
	mov r0, r9	@ 000665fa 4846
.org 0x665fc
	ldr r4, [r0, #88]	@ 000665fc 846d
.org 0x665fe
	add r4, sl	@ 000665fe 5444
.org 0x66600
	ldr r1, [pc, #200]	@ 00066600 3249
.org 0x66602
	adds r0, r6, #0	@ 00066602 301c
.org 0x66604
	muls r0, r1	@ 00066604 4843
.org 0x66606
	ldr r2, [pc, #200]	@ 00066606 324a
.org 0x66608
	adds r0, r0, r2	@ 00066608 8018
.org 0x6660a
	lsls r0, r0, #1	@ 0006660a 4000
.org 0x6660c
	lsrs r1, r0, #1	@ 0006660c 4108
.org 0x6660e
	mov r2, r8	@ 0006660e 4246
.org 0x66610
	str r1, [r2, #0]	@ 00066610 1160
.org 0x66612
	lsrs r0, r0, #17	@ 00066612 400c
.org 0x66614
	movs r1, #192	@ 00066614 c021
.org 0x66616
	lsls r1, r1, #6	@ 00066616 8901
.org 0x66618
	bl 0x129198	@ 00066618 c2f0befd
.org 0x6661c
	adds r4, r4, r0	@ 0006661c 2418
.org 0x6661e
	adds r0, r5, #0	@ 0006661e 281c
.org 0x66620
	adds r1, r4, #0	@ 00066620 211c
.org 0x66622
	movs r2, #0	@ 00066622 0022
.org 0x66624
	bl 0xd0ff4	@ 00066624 6af0e6fc
.org 0x66628
	subs r7, #1	@ 00066628 013f
.org 0x6662a
	cmp r7, #0	@ 0006662a 002f
.org 0x6662c
	bne.n 0x665d4	@ 0006662c d2d1
.org 0x6662e
	ldr r3, [pc, #152]	@ 0006662e 264b
.org 0x66630
	ldr r0, [r3, #0]	@ 00066630 1868
.org 0x66632
	ldr r5, [pc, #152]	@ 00066632 264d
.org 0x66634
	muls r0, r5	@ 00066634 6843
.org 0x66636
	ldr r4, [pc, #152]	@ 00066636 264c
.org 0x66638
	adds r0, r0, r4	@ 00066638 0019
.org 0x6663a
	lsls r0, r0, #1	@ 0006663a 4000
.org 0x6663c
	lsrs r1, r0, #1	@ 0006663c 4108
.org 0x6663e
	str r1, [r3, #0]	@ 0006663e 1960
.org 0x66640
	lsrs r0, r0, #17	@ 00066640 400c
.org 0x66642
	movs r1, #1	@ 00066642 0121
.org 0x66644
	ands r0, r1	@ 00066644 0840
.org 0x66646
	movs r1, #4	@ 00066646 0421
.org 0x66648
	subs r2, r1, r0	@ 00066648 0a1a
.org 0x6664a
	cmp r2, #0	@ 0006664a 002a
.org 0x6664c
	ble.n 0x666ba	@ 0006664c 35dd
.org 0x6664e
	movs r0, #192	@ 0006664e c020
.org 0x66650
	lsls r0, r0, #6	@ 00066650 8001
.org 0x66652
	negs r1, r0	@ 00066652 4142
.org 0x66654
	mov sl, r3	@ 00066654 9a46
.org 0x66656
	adds r7, r2, #0	@ 00066656 171c
.org 0x66658
	lsrs r0, r1, #31	@ 00066658 c80f
.org 0x6665a
	adds r1, r1, r0	@ 0006665a 0918
.org 0x6665c
	asrs r1, r1, #1	@ 0006665c 4910
.org 0x6665e
	mov r8, r1	@ 0006665e 8846
.org 0x66660
	mov r1, r9	@ 00066660 4946
.org 0x66662
	ldr r5, [r1, #84]	@ 00066662 4d6d
.org 0x66664
	add r5, r8	@ 00066664 4544
.org 0x66666
	mov r2, sl	@ 00066666 5246
.org 0x66668
	ldr r0, [r2, #0]	@ 00066668 1068
.org 0x6666a
	ldr r1, [pc, #96]	@ 0006666a 1849
.org 0x6666c
	muls r0, r1	@ 0006666c 4843
.org 0x6666e
	ldr r2, [pc, #96]	@ 0006666e 184a
.org 0x66670
	adds r0, r0, r2	@ 00066670 8018
.org 0x66672
	lsls r0, r0, #1	@ 00066672 4000
.org 0x66674
	lsrs r6, r0, #1	@ 00066674 4608
.org 0x66676
	mov r1, sl	@ 00066676 5146
.org 0x66678
	str r6, [r1, #0]	@ 00066678 0e60
.org 0x6667a
	lsrs r0, r0, #17	@ 0006667a 400c
.org 0x6667c
	movs r1, #192	@ 0006667c c021
.org 0x6667e
	lsls r1, r1, #6	@ 0006667e 8901
.org 0x66680
	bl 0x129198	@ 00066680 c2f08afd
.org 0x66684
	adds r5, r5, r0	@ 00066684 2d18
.org 0x66686
	mov r2, r9	@ 00066686 4a46
.org 0x66688
	ldr r4, [r2, #88]	@ 00066688 946d
.org 0x6668a
	add r4, r8	@ 0006668a 4444
.org 0x6668c
	ldr r1, [pc, #60]	@ 0006668c 0f49
.org 0x6668e
	adds r0, r6, #0	@ 0006668e 301c
.org 0x66690
	muls r0, r1	@ 00066690 4843
.org 0x66692
	ldr r2, [pc, #60]	@ 00066692 0f4a
.org 0x66694
	adds r0, r0, r2	@ 00066694 8018
.org 0x66696
	lsls r0, r0, #1	@ 00066696 4000
.org 0x66698
	lsrs r1, r0, #1	@ 00066698 4108
.org 0x6669a
	mov r2, sl	@ 0006669a 5246
.org 0x6669c
	str r1, [r2, #0]	@ 0006669c 1160
.org 0x6669e
	lsrs r0, r0, #17	@ 0006669e 400c
.org 0x666a0
	movs r1, #192	@ 000666a0 c021
.org 0x666a2
	lsls r1, r1, #6	@ 000666a2 8901
.org 0x666a4
	bl 0x129198	@ 000666a4 c2f078fd
.org 0x666a8
	adds r4, r4, r0	@ 000666a8 2418
.org 0x666aa
	adds r0, r5, #0	@ 000666aa 281c
.org 0x666ac
	adds r1, r4, #0	@ 000666ac 211c
.org 0x666ae
	movs r2, #1	@ 000666ae 0122
.org 0x666b0
	bl 0xd0ff4	@ 000666b0 6af0a0fc
.org 0x666b4
	subs r7, #1	@ 000666b4 013f
.org 0x666b6
	cmp r7, #0	@ 000666b6 002f
.org 0x666b8
	bne.n 0x66660	@ 000666b8 d2d1
.org 0x666ba
	pop {r3, r4, r5}	@ 000666ba 38bc
.org 0x666bc
	mov r8, r3	@ 000666bc 9846
.org 0x666be
	mov r9, r4	@ 000666be a146
.org 0x666c0
	mov sl, r5	@ 000666c0 aa46
.org 0x666c2
	pop {r4, r5, r6, r7}	@ 000666c2 f0bc
.org 0x666c4
	pop {r0}	@ 000666c4 01bc
.org 0x666c6
	bx r0	@ 000666c6 0047
