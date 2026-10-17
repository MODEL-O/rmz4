@ FUN_080e662c  entry 0x080e662c  size 244
.thumb
.org 0xe662c
FUN_080e662c:
	push {r4, r5, lr}	@ 000e662c 30b5
.org 0xe662e
	sub sp, #8	@ 000e662e 82b0
.org 0xe6630
	adds r5, r0, #0	@ 000e6630 051c
.org 0xe6632
	ldrb r0, [r5, #17]	@ 000e6632 687c
.org 0xe6634
	cmp r0, #0	@ 000e6634 0028
.org 0xe6636
	bne.n 0xe6690	@ 000e6636 2bd1
.org 0xe6638
	ldrb r0, [r5, #18]	@ 000e6638 a87c
.org 0xe663a
	cmp r0, #0	@ 000e663a 0028
.org 0xe663c
	bne.n 0xe667e	@ 000e663c 1fd1
.org 0xe663e
	ldr r0, [r5, #84]	@ 000e663e 686d
.org 0xe6640
	str r0, [sp, #0]	@ 000e6640 0090
.org 0xe6642
	ldr r0, [r5, #88]	@ 000e6642 a86d
.org 0xe6644
	ldr r1, [pc, #64]	@ 000e6644 1049
.org 0xe6646
	adds r0, r0, r1	@ 000e6646 4018
.org 0xe6648
	str r0, [sp, #4]	@ 000e6648 0190
.org 0xe664a
	movs r0, #1	@ 000e664a 0120
.org 0xe664c
	mov r1, sp	@ 000e664c 6946
.org 0xe664e
	bl 0xd0c88	@ 000e664e eaf71bfb
.org 0xe6652
	movs r0, #42	@ 000e6652 2a20
.org 0xe6654
	bl 0x2b10	@ 000e6654 1cf75cfa
.org 0xe6658
	adds r0, r5, #0	@ 000e6658 281c
.org 0xe665a
	adds r0, #84	@ 000e665a 5430
.org 0xe665c
	movs r1, #129	@ 000e665c 8121
.org 0xe665e
	lsls r1, r1, #1	@ 000e665e 4900
.org 0xe6660
	ldrb r2, [r5, #10]	@ 000e6660 aa7a
.org 0xe6662
	lsrs r2, r2, #4	@ 000e6662 1209
.org 0xe6664
	movs r3, #1	@ 000e6664 0123
.org 0xe6666
	ands r2, r3	@ 000e6666 1a40
.org 0xe6668
	bl 0xe6270	@ 000e6668 fff702fe
.org 0xe666c
	ldr r1, [pc, #28]	@ 000e666c 0749
.org 0xe666e
	ldrb r0, [r5, #9]	@ 000e666e 687a
.org 0xe6670
	lsls r0, r0, #2	@ 000e6670 8000
.org 0xe6672
	adds r0, r0, r1	@ 000e6672 4018
.org 0xe6674
	movs r1, #2	@ 000e6674 0221
.org 0xe6676
	str r1, [r5, #12]	@ 000e6676 e960
.org 0xe6678
	ldr r0, [r0, #0]	@ 000e6678 0068
.org 0xe667a
	ldr r0, [r0, #8]	@ 000e667a 8068
.org 0xe667c
	str r0, [r5, #20]	@ 000e667c 6861
.org 0xe667e
	ldrb r0, [r5, #18]	@ 000e667e a87c
.org 0xe6680
	subs r0, #1	@ 000e6680 0138
.org 0xe6682
	strb r0, [r5, #18]	@ 000e6682 a874
.org 0xe6684
	b.n 0xe6722	@ 000e6684 4de0
.org 0xe6686
	.byte 0x00	@ 000e6686 data
.org 0xe6687
	.byte 0x00	@ 000e6687 data
.org 0xe6688
	.byte 0x00,0xf6,0xff,0xff	@ 000e6688 data
.org 0xe668c
	.byte 0x64,0x6f,0x86,0x08	@ 000e668c data
.org 0xe6690
	ldr r0, [r5, #84]	@ 000e6690 686d
.org 0xe6692
	ldr r3, [r5, #92]	@ 000e6692 eb6d
.org 0xe6694
	adds r0, r0, r3	@ 000e6694 c018
.org 0xe6696
	str r0, [r5, #84]	@ 000e6696 6865
.org 0xe6698
	ldr r0, [r5, #88]	@ 000e6698 a86d
.org 0xe669a
	ldr r1, [r5, #96]	@ 000e669a 296e
.org 0xe669c
	adds r0, r0, r1	@ 000e669c 4018
.org 0xe669e
	str r0, [r5, #88]	@ 000e669e a865
.org 0xe66a0
	ldr r2, [r5, #120]	@ 000e66a0 aa6f
.org 0xe66a2
	adds r4, r1, #0	@ 000e66a2 0c1c
.org 0xe66a4
	cmp r2, #255	@ 000e66a4 ff2a
.org 0xe66a6
	bgt.n 0xe66c0	@ 000e66a6 0bdc
.org 0xe66a8
	ldr r1, [r5, #100]	@ 000e66a8 696e
.org 0xe66aa
	adds r0, r3, r1	@ 000e66aa 5818
.org 0xe66ac
	str r0, [r5, #92]	@ 000e66ac e865
.org 0xe66ae
	cmp r1, #0	@ 000e66ae 0029
.org 0xe66b0
	bge.n 0xe66b4	@ 000e66b0 00da
.org 0xe66b2
	negs r1, r1	@ 000e66b2 4942
.org 0xe66b4
	adds r0, r2, r1	@ 000e66b4 5018
.org 0xe66b6
	str r0, [r5, #120]	@ 000e66b6 a867
.org 0xe66b8
	cmp r0, #255	@ 000e66b8 ff28
.org 0xe66ba
	ble.n 0xe66c0	@ 000e66ba 01dd
.org 0xe66bc
	movs r0, #64	@ 000e66bc 4020
.org 0xe66be
	str r0, [r5, #104]	@ 000e66be a866
.org 0xe66c0
	ldr r0, [r5, #104]	@ 000e66c0 a86e
.org 0xe66c2
	adds r0, r4, r0	@ 000e66c2 2018
.org 0xe66c4
	str r0, [r5, #96]	@ 000e66c4 2866
.org 0xe66c6
	ldr r0, [r5, #84]	@ 000e66c6 686d
.org 0xe66c8
	ldr r1, [r5, #88]	@ 000e66c8 a96d
.org 0xe66ca
	ldr r2, [pc, #96]	@ 000e66ca 184a
.org 0xe66cc
	adds r1, r1, r2	@ 000e66cc 8918
.org 0xe66ce
	bl 0x7c7c	@ 000e66ce 21f7d5fa
.org 0xe66d2
	lsls r0, r0, #16	@ 000e66d2 0004
.org 0xe66d4
	cmp r0, #0	@ 000e66d4 0028
.org 0xe66d6
	beq.n 0xe6722	@ 000e66d6 24d0
.org 0xe66d8
	ldr r0, [r5, #84]	@ 000e66d8 686d
.org 0xe66da
	str r0, [sp, #0]	@ 000e66da 0090
.org 0xe66dc
	ldr r0, [r5, #88]	@ 000e66dc a86d
.org 0xe66de
	ldr r1, [pc, #76]	@ 000e66de 1349
.org 0xe66e0
	adds r0, r0, r1	@ 000e66e0 4018
.org 0xe66e2
	str r0, [sp, #4]	@ 000e66e2 0190
.org 0xe66e4
	movs r0, #1	@ 000e66e4 0120
.org 0xe66e6
	mov r1, sp	@ 000e66e6 6946
.org 0xe66e8
	bl 0xd0c88	@ 000e66e8 eaf7cefa
.org 0xe66ec
	movs r0, #42	@ 000e66ec 2a20
.org 0xe66ee
	bl 0x2b10	@ 000e66ee 1cf70ffa
.org 0xe66f2
	ldr r1, [pc, #60]	@ 000e66f2 0f49
.org 0xe66f4
	ldrb r2, [r5, #10]	@ 000e66f4 aa7a
.org 0xe66f6
	lsrs r2, r2, #4	@ 000e66f6 1209
.org 0xe66f8
	movs r4, #1	@ 000e66f8 0124
.org 0xe66fa
	ands r2, r4	@ 000e66fa 2240
.org 0xe66fc
	mov r0, sp	@ 000e66fc 6846
.org 0xe66fe
	bl 0xe6270	@ 000e66fe fff7b7fd
.org 0xe6702
	ldr r1, [pc, #48]	@ 000e6702 0c49
.org 0xe6704
	ldrb r2, [r5, #10]	@ 000e6704 aa7a
.org 0xe6706
	lsrs r2, r2, #4	@ 000e6706 1209
.org 0xe6708
	ands r2, r4	@ 000e6708 2240
.org 0xe670a
	mov r0, sp	@ 000e670a 6846
.org 0xe670c
	bl 0xe6270	@ 000e670c fff7b0fd
.org 0xe6710
	ldr r1, [pc, #36]	@ 000e6710 0949
.org 0xe6712
	ldrb r0, [r5, #9]	@ 000e6712 687a
.org 0xe6714
	lsls r0, r0, #2	@ 000e6714 8000
.org 0xe6716
	adds r0, r0, r1	@ 000e6716 4018
.org 0xe6718
	movs r1, #2	@ 000e6718 0221
.org 0xe671a
	str r1, [r5, #12]	@ 000e671a e960
.org 0xe671c
	ldr r0, [r0, #0]	@ 000e671c 0068
.org 0xe671e
	ldr r0, [r0, #8]	@ 000e671e 8068
