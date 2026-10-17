@ FUN_080f56c4  entry 0x080f56c4  size 170
.thumb
.org 0xf56c4
FUN_080f56c4:
	push {r4, r5, r6, r7, lr}	@ 000f56c4 f0b5
.org 0xf56c6
	adds r4, r0, #0	@ 000f56c6 041c
.org 0xf56c8
	movs r7, #0	@ 000f56c8 0027
.org 0xf56ca
	bl 0x1cff0	@ 000f56ca 27f791fc
.org 0xf56ce
	adds r0, r4, #0	@ 000f56ce 201c
.org 0xf56d0
	adds r0, #184	@ 000f56d0 b830
.org 0xf56d2
	ldrb r0, [r0, #0]	@ 000f56d2 0078
.org 0xf56d4
	adds r1, r4, #0	@ 000f56d4 211c
.org 0xf56d6
	adds r1, #180	@ 000f56d6 b431
.org 0xf56d8
	ldr r1, [r1, #0]	@ 000f56d8 0968
.org 0xf56da
	lsls r0, r0, #3	@ 000f56da c000
.org 0xf56dc
	adds r0, r0, r1	@ 000f56dc 4018
.org 0xf56de
	ldr r3, [r0, #0]	@ 000f56de 0368
.org 0xf56e0
	ldr r1, [r4, #84]	@ 000f56e0 616d
.org 0xf56e2
	subs r0, r3, r1	@ 000f56e2 581a
.org 0xf56e4
	adds r2, r0, #0	@ 000f56e4 021c
.org 0xf56e6
	cmp r0, #0	@ 000f56e6 0028
.org 0xf56e8
	bge.n 0xf56ec	@ 000f56e8 00da
.org 0xf56ea
	negs r2, r0	@ 000f56ea 4242
.org 0xf56ec
	movs r5, #128	@ 000f56ec 8025
.org 0xf56ee
	lsls r5, r5, #1	@ 000f56ee 6d00
.org 0xf56f0
	cmp r2, r5	@ 000f56f0 aa42
.org 0xf56f2
	ble.n 0xf570a	@ 000f56f2 0add
.org 0xf56f4
	cmp r0, #0	@ 000f56f4 0028
.org 0xf56f6
	bge.n 0xf5704	@ 000f56f6 05da
.org 0xf56f8
	ldr r2, [pc, #4]	@ 000f56f8 014a
.org 0xf56fa
	adds r0, r1, r2	@ 000f56fa 8818
.org 0xf56fc
	str r0, [r4, #84]	@ 000f56fc 6065
.org 0xf56fe
	b.n 0xf570e	@ 000f56fe 06e0
.org 0xf5700
	.byte 0x00,0xff,0xff,0xff	@ 000f5700 data
.org 0xf5704
	adds r0, r1, r5	@ 000f5704 4819
.org 0xf5706
	str r0, [r4, #84]	@ 000f5706 6065
.org 0xf5708
	b.n 0xf570e	@ 000f5708 01e0
.org 0xf570a
	str r3, [r4, #84]	@ 000f570a 6365
.org 0xf570c
	movs r7, #1	@ 000f570c 0127
.org 0xf570e
	adds r3, r4, #0	@ 000f570e 231c
.org 0xf5710
	adds r3, #184	@ 000f5710 b833
.org 0xf5712
	ldrb r0, [r3, #0]	@ 000f5712 1878
.org 0xf5714
	adds r2, r4, #0	@ 000f5714 221c
.org 0xf5716
	adds r2, #180	@ 000f5716 b432
.org 0xf5718
	ldr r1, [r2, #0]	@ 000f5718 1168
.org 0xf571a
	lsls r0, r0, #3	@ 000f571a c000
.org 0xf571c
	adds r0, r0, r1	@ 000f571c 4018
.org 0xf571e
	ldr r6, [r0, #4]	@ 000f571e 4668
.org 0xf5720
	ldr r1, [r4, #88]	@ 000f5720 a16d
.org 0xf5722
	subs r0, r6, r1	@ 000f5722 701a
.org 0xf5724
	adds r5, r0, #0	@ 000f5724 051c
.org 0xf5726
	mov ip, r2	@ 000f5726 9446
.org 0xf5728
	cmp r0, #0	@ 000f5728 0028
.org 0xf572a
	bge.n 0xf572e	@ 000f572a 00da
.org 0xf572c
	negs r5, r0	@ 000f572c 4542
.org 0xf572e
	movs r2, #128	@ 000f572e 8022
.org 0xf5730
	lsls r2, r2, #1	@ 000f5730 5200
.org 0xf5732
	cmp r5, r2	@ 000f5732 9542
.org 0xf5734
	ble.n 0xf5748	@ 000f5734 08dd
.org 0xf5736
	cmp r0, #0	@ 000f5736 0028
.org 0xf5738
	bge.n 0xf573c	@ 000f5738 00da
.org 0xf573a
	ldr r2, [pc, #8]	@ 000f573a 024a
.org 0xf573c
	adds r0, r1, r2	@ 000f573c 8818
.org 0xf573e
	str r0, [r4, #88]	@ 000f573e a065
.org 0xf5740
	b.n 0xf5750	@ 000f5740 06e0
.org 0xf5742
	.byte 0x00	@ 000f5742 data
.org 0xf5743
	.byte 0x00	@ 000f5743 data
.org 0xf5744
	.byte 0x00,0xff,0xff,0xff	@ 000f5744 data
.org 0xf5748
	str r6, [r4, #88]	@ 000f5748 a665
.org 0xf574a
	adds r0, r7, #1	@ 000f574a 781c
.org 0xf574c
	lsls r0, r0, #24	@ 000f574c 0006
.org 0xf574e
	lsrs r7, r0, #24	@ 000f574e 070e
.org 0xf5750
	cmp r7, #2	@ 000f5750 022f
.org 0xf5752
	bne.n 0xf5772	@ 000f5752 0ed1
.org 0xf5754
	ldrb r0, [r3, #0]	@ 000f5754 1878
.org 0xf5756
	adds r0, #1	@ 000f5756 0130
.org 0xf5758
	strb r0, [r3, #0]	@ 000f5758 1870
.org 0xf575a
	ldrb r0, [r3, #0]	@ 000f575a 1878
.org 0xf575c
	mov r2, ip	@ 000f575c 6246
.org 0xf575e
	ldr r1, [r2, #0]	@ 000f575e 1168
.org 0xf5760
	lsls r0, r0, #3	@ 000f5760 c000
.org 0xf5762
	adds r1, r0, r1	@ 000f5762 4118
.org 0xf5764
	ldr r0, [r1, #0]	@ 000f5764 0868
.org 0xf5766
	cmp r0, #0	@ 000f5766 0028
.org 0xf5768
	bne.n 0xf5772	@ 000f5768 03d1
.org 0xf576a
	ldr r0, [r1, #4]	@ 000f576a 4868
.org 0xf576c
	cmp r0, #0	@ 000f576c 0028
