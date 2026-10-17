@ FUN_080b66c0  entry 0x080b66c0  size 164
.thumb
.org 0xb66c0
FUN_080b66c0:
	push {r4, r5, r6, r7, lr}	@ 000b66c0 f0b5
.org 0xb66c2
	mov r7, r8	@ 000b66c2 4746
.org 0xb66c4
	push {r7}	@ 000b66c4 80b4
.org 0xb66c6
	sub sp, #12	@ 000b66c6 83b0
.org 0xb66c8
	adds r4, r0, #0	@ 000b66c8 041c
.org 0xb66ca
	ldr r0, [pc, #152]	@ 000b66ca 2648
.org 0xb66cc
	ldr r1, [r0, #4]	@ 000b66cc 4168
.org 0xb66ce
	ldr r0, [r0, #0]	@ 000b66ce 0068
.org 0xb66d0
	str r0, [sp, #4]	@ 000b66d0 0190
.org 0xb66d2
	str r1, [sp, #8]	@ 000b66d2 0291
.org 0xb66d4
	ldr r1, [pc, #144]	@ 000b66d4 2449
.org 0xb66d6
	mov r0, sp	@ 000b66d6 6846
.org 0xb66d8
	movs r2, #2	@ 000b66d8 0222
.org 0xb66da
	bl 0x129258	@ 000b66da 72f0bdfd
.org 0xb66de
	ldrb r5, [r4, #16]	@ 000b66de 257c
.org 0xb66e0
	mov r8, r5	@ 000b66e0 a846
.org 0xb66e2
	ldrb r7, [r4, #17]	@ 000b66e2 677c
.org 0xb66e4
	ldrb r6, [r4, #15]	@ 000b66e4 e67b
.org 0xb66e6
	cmp r6, #0	@ 000b66e6 002e
.org 0xb66e8
	bne.n 0xb6710	@ 000b66e8 12d1
.org 0xb66ea
	adds r0, r4, #0	@ 000b66ea 201c
.org 0xb66ec
	adds r0, #116	@ 000b66ec 7430
.org 0xb66ee
	ldr r1, [pc, #124]	@ 000b66ee 1f49
.org 0xb66f0
	bl 0x5784	@ 000b66f0 4ff748f8
.org 0xb66f4
	lsls r0, r5, #2	@ 000b66f4 a800
.org 0xb66f6
	add r1, sp, #4	@ 000b66f6 01a9
.org 0xb66f8
	adds r0, r0, r1	@ 000b66f8 4018
.org 0xb66fa
	ldrh r1, [r0, #0]	@ 000b66fa 0188
.org 0xb66fc
	adds r0, r4, #0	@ 000b66fc 201c
.org 0xb66fe
	bl 0x1cf00	@ 000b66fe 66f7fffb
.org 0xb6702
	lsls r0, r7, #4	@ 000b6702 3801
.org 0xb6704
	adds r0, #64	@ 000b6704 4030
.org 0xb6706
	str r0, [r4, #100]	@ 000b6706 6066
.org 0xb6708
	strb r6, [r4, #18]	@ 000b6708 a674
.org 0xb670a
	ldrb r0, [r4, #15]	@ 000b670a e07b
.org 0xb670c
	adds r0, #1	@ 000b670c 0130
.org 0xb670e
	strb r0, [r4, #15]	@ 000b670e e073
.org 0xb6710
	adds r0, r4, #0	@ 000b6710 201c
.org 0xb6712
	bl 0x1cff0	@ 000b6712 66f76dfc
.org 0xb6716
	ldrb r0, [r4, #18]	@ 000b6716 a07c
.org 0xb6718
	cmp r0, #0	@ 000b6718 0028
.org 0xb671a
	bne.n 0xb6746	@ 000b671a 14d1
.org 0xb671c
	adds r0, r4, #0	@ 000b671c 201c
.org 0xb671e
	adds r0, #113	@ 000b671e 7130
.org 0xb6720
	ldrb r0, [r0, #0]	@ 000b6720 0078
.org 0xb6722
	lsls r0, r0, #24	@ 000b6722 0006
.org 0xb6724
	asrs r0, r0, #24	@ 000b6724 0016
.org 0xb6726
	cmp r0, #2	@ 000b6726 0228
.org 0xb6728
	ble.n 0xb6746	@ 000b6728 0ddd
.org 0xb672a
	adds r0, r4, #0	@ 000b672a 201c
.org 0xb672c
	adds r0, #116	@ 000b672c 7430
.org 0xb672e
	mov r1, sp	@ 000b672e 6946
.org 0xb6730
	add r1, r8	@ 000b6730 4144
.org 0xb6732
	ldrb r2, [r1, #0]	@ 000b6732 0a78
.org 0xb6734
	lsls r1, r2, #1	@ 000b6734 5100
.org 0xb6736
	adds r1, r1, r2	@ 000b6736 8918
.org 0xb6738
	lsls r1, r1, #3	@ 000b6738 c900
.org 0xb673a
	ldr r2, [pc, #48]	@ 000b673a 0c4a
.org 0xb673c
	adds r1, r1, r2	@ 000b673c 8918
.org 0xb673e
	bl 0x5784	@ 000b673e 4ff721f8
.org 0xb6742
	movs r0, #1	@ 000b6742 0120
.org 0xb6744
	strb r0, [r4, #18]	@ 000b6744 a074
.org 0xb6746
	ldr r0, [r4, #100]	@ 000b6746 606e
.org 0xb6748
	subs r1, r0, #1	@ 000b6748 411e
.org 0xb674a
	str r1, [r4, #100]	@ 000b674a 6166
.org 0xb674c
	cmp r1, #0	@ 000b674c 0029
.org 0xb674e
	bne.n 0xb6758	@ 000b674e 03d1
.org 0xb6750
	movs r0, #1	@ 000b6750 0120
.org 0xb6752
	strb r0, [r4, #13]	@ 000b6752 6073
.org 0xb6754
	strb r1, [r4, #14]	@ 000b6754 a173
.org 0xb6756
	strb r1, [r4, #15]	@ 000b6756 e173
.org 0xb6758
	add sp, #12	@ 000b6758 03b0
.org 0xb675a
	pop {r3}	@ 000b675a 08bc
.org 0xb675c
	mov r8, r3	@ 000b675c 9846
.org 0xb675e
	pop {r4, r5, r6, r7}	@ 000b675e f0bc
.org 0xb6760
	pop {r0}	@ 000b6760 01bc
.org 0xb6762
	bx r0	@ 000b6762 0047
