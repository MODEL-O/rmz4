@ FUN_0810d664  entry 0x0810d664  size 132
.thumb
.org 0x10d664
FUN_0810d664:
	push {r4, r5, r6, r7, lr}	@ 0010d664 f0b5
.org 0x10d666
	mov r7, sl	@ 0010d666 5746
.org 0x10d668
	mov r6, r9	@ 0010d668 4e46
.org 0x10d66a
	mov r5, r8	@ 0010d66a 4546
.org 0x10d66c
	push {r5, r6, r7}	@ 0010d66c e0b4
.org 0x10d66e
	ldr r0, [pc, #116]	@ 0010d66e 1d48
.org 0x10d670
	movs r1, #177	@ 0010d670 b121
.org 0x10d672
	lsls r1, r1, #3	@ 0010d672 c900
.org 0x10d674
	adds r0, r0, r1	@ 0010d674 4018
.org 0x10d676
	ldr r6, [r0, #0]	@ 0010d676 0668
.org 0x10d678
	cmp r6, #0	@ 0010d678 002e
.org 0x10d67a
	bne.n 0x10d67e	@ 0010d67a 00d1
.org 0x10d67c
	b.n 0x10d7d8	@ 0010d67c ace0
.org 0x10d67e
	movs r2, #15	@ 0010d67e 0f22
.org 0x10d680
	mov r8, r2	@ 0010d680 9046
.org 0x10d682
	ldr r0, [pc, #100]	@ 0010d682 1948
.org 0x10d684
	mov sl, r0	@ 0010d684 8246
.org 0x10d686
	movs r1, #248	@ 0010d686 f821
.org 0x10d688
	lsls r1, r1, #1	@ 0010d688 4900
.org 0x10d68a
	mov r9, r1	@ 0010d68a 8946
.org 0x10d68c
	ldrh r1, [r6, #6]	@ 0010d68c f188
.org 0x10d68e
	movs r2, #128	@ 0010d68e 8022
.org 0x10d690
	lsls r2, r2, #8	@ 0010d690 1202
.org 0x10d692
	adds r0, r2, #0	@ 0010d692 101c
.org 0x10d694
	ands r0, r1	@ 0010d694 0840
.org 0x10d696
	cmp r0, #0	@ 0010d696 0028
.org 0x10d698
	bne.n 0x10d69c	@ 0010d698 00d1
.org 0x10d69a
	b.n 0x10d7d0	@ 0010d69a 99e0
.org 0x10d69c
	subs r2, #1	@ 0010d69c 013a
.org 0x10d69e
	adds r0, r2, #0	@ 0010d69e 101c
.org 0x10d6a0
	ands r0, r1	@ 0010d6a0 0840
.org 0x10d6a2
	strh r0, [r6, #6]	@ 0010d6a2 f080
.org 0x10d6a4
	ldrh r2, [r6, #4]	@ 0010d6a4 b288
.org 0x10d6a6
	ldr r0, [pc, #68]	@ 0010d6a6 1148
.org 0x10d6a8
	ldrh r1, [r0, #0]	@ 0010d6a8 0188
.org 0x10d6aa
	movs r0, #12	@ 0010d6aa 0c20
.org 0x10d6ac
	ands r0, r1	@ 0010d6ac 0840
.org 0x10d6ae
	lsls r0, r0, #12	@ 0010d6ae 0003
.org 0x10d6b0
	movs r1, #192	@ 0010d6b0 c021
.org 0x10d6b2
	lsls r1, r1, #19	@ 0010d6b2 c904
.org 0x10d6b4
	adds r7, r0, r1	@ 0010d6b4 4718
.org 0x10d6b6
	lsls r4, r2, #20	@ 0010d6b6 1405
.org 0x10d6b8
	ldr r2, [pc, #4]	@ 0010d6b8 014a
.org 0x10d6ba
	ldr r3, [pc, #8]	@ 0010d6ba 024b
.org 0x10d6bc
	lsrs r4, r4, #14	@ 0010d6bc a40b
.org 0x10d6be
	b.n 0x10d6ce	@ 0010d6be 06e0
.org 0x10d6c0
	.byte 0xd4,0x00,0x00,0x04	@ 0010d6c0 data
.org 0x10d6c4
	.byte 0x20,0x00,0x00,0x80	@ 0010d6c4 data
.org 0x10d6c8
	.byte 0xc0	@ 0010d6c8 data
.org 0x10d6c9
	.byte 0x46	@ 0010d6c9 data
.org 0x10d6ca
	.byte 0xc0	@ 0010d6ca data
.org 0x10d6cb
	.byte 0x46	@ 0010d6cb data
.org 0x10d6cc
	.byte 0xc0	@ 0010d6cc data
.org 0x10d6cd
	.byte 0x46	@ 0010d6cd data
.org 0x10d6ce
	mov r1, sl	@ 0010d6ce 5146
.org 0x10d6d0
	adds r0, r4, r1	@ 0010d6d0 6018
.org 0x10d6d2
	ldrh r1, [r6, #6]	@ 0010d6d2 f188
.org 0x10d6d4
	lsls r1, r1, #5	@ 0010d6d4 4901
.org 0x10d6d6
	adds r1, r7, r1	@ 0010d6d6 7918
.org 0x10d6d8
	str r0, [r2, #0]	@ 0010d6d8 1060
.org 0x10d6da
	str r1, [r2, #4]	@ 0010d6da 5160
.org 0x10d6dc
	str r3, [r2, #8]	@ 0010d6dc 9360
.org 0x10d6de
	b.n 0x10d7d0	@ 0010d6de 77e0
.org 0x10d6e0
	.byte 0x4c	@ 0010d6e0 data
.org 0x10d6e1
	.byte 0xe0	@ 0010d6e1 data
.org 0x10d6e2
	.byte 0x00	@ 0010d6e2 data
.org 0x10d6e3
	.byte 0x00	@ 0010d6e3 data
.org 0x10d6e4
	.byte 0xc0,0xed,0x02,0x02	@ 0010d6e4 data
