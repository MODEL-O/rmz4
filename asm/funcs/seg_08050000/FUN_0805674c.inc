@ FUN_0805674c  entry 0x0805674c  size 182
.thumb
.org 0x5674c
FUN_0805674c:
	push {r4, lr}	@ 0005674c 10b5
.org 0x5674e
	adds r4, r0, #0	@ 0005674e 041c
.org 0x56750
	ldrb r0, [r4, #15]	@ 00056750 e07b
.org 0x56752
	cmp r0, #0	@ 00056752 0028
.org 0x56754
	bne.n 0x567a4	@ 00056754 26d1
.org 0x56756
	ldrb r1, [r4, #10]	@ 00056756 a17a
.org 0x56758
	lsrs r1, r1, #4	@ 00056758 0909
.org 0x5675a
	movs r0, #1	@ 0005675a 0120
.org 0x5675c
	ands r1, r0	@ 0005675c 0140
.org 0x5675e
	adds r1, #1	@ 0005675e 0131
.org 0x56760
	ands r1, r0	@ 00056760 0140
.org 0x56762
	adds r0, r4, #0	@ 00056762 201c
.org 0x56764
	adds r0, #76	@ 00056764 4c30
.org 0x56766
	strb r1, [r0, #0]	@ 00056766 0170
.org 0x56768
	movs r0, #74	@ 00056768 4a20
.org 0x5676a
	adds r0, r0, r4	@ 0005676a 0019
.org 0x5676c
	mov ip, r0	@ 0005676c 8446
.org 0x5676e
	lsls r3, r1, #4	@ 0005676e 0b01
.org 0x56770
	ldrb r2, [r0, #0]	@ 00056770 0278
.org 0x56772
	movs r0, #17	@ 00056772 1120
.org 0x56774
	negs r0, r0	@ 00056774 4042
.org 0x56776
	ands r0, r2	@ 00056776 1040
.org 0x56778
	orrs r0, r3	@ 00056778 1843
.org 0x5677a
	mov r2, ip	@ 0005677a 6246
.org 0x5677c
	strb r0, [r2, #0]	@ 0005677c 1070
.org 0x5677e
	cmp r1, #0	@ 0005677e 0029
.org 0x56780
	beq.n 0x5678a	@ 00056780 03d0
.org 0x56782
	ldrb r0, [r4, #10]	@ 00056782 a07a
.org 0x56784
	movs r1, #16	@ 00056784 1021
.org 0x56786
	orrs r0, r1	@ 00056786 0843
.org 0x56788
	b.n 0x56790	@ 00056788 02e0
.org 0x5678a
	ldrb r1, [r4, #10]	@ 0005678a a17a
.org 0x5678c
	movs r0, #239	@ 0005678c ef20
.org 0x5678e
	ands r0, r1	@ 0005678e 0840
.org 0x56790
	strb r0, [r4, #10]	@ 00056790 a072
.org 0x56792
	ldr r1, [pc, #112]	@ 00056792 1c49
.org 0x56794
	adds r0, r4, #0	@ 00056794 201c
.org 0x56796
	bl 0x1cf00	@ 00056796 c6f7b3fb
.org 0x5679a
	movs r0, #4	@ 0005679a 0420
.org 0x5679c
	strb r0, [r4, #18]	@ 0005679c a074
.org 0x5679e
	ldrb r0, [r4, #15]	@ 0005679e e07b
.org 0x567a0
	adds r0, #1	@ 000567a0 0130
.org 0x567a2
	strb r0, [r4, #15]	@ 000567a2 e073
.org 0x567a4
	adds r0, r4, #0	@ 000567a4 201c
.org 0x567a6
	bl 0x1cff0	@ 000567a6 c6f723fc
.org 0x567aa
	adds r0, r4, #0	@ 000567aa 201c
.org 0x567ac
	adds r0, #116	@ 000567ac 7430
.org 0x567ae
	ldr r3, [pc, #88]	@ 000567ae 164b
.org 0x567b0
	ldrb r1, [r4, #30]	@ 000567b0 a17f
.org 0x567b2
	lsls r1, r1, #8	@ 000567b2 0902
.org 0x567b4
	adds r2, r4, #0	@ 000567b4 221c
.org 0x567b6
	adds r2, #112	@ 000567b6 7032
.org 0x567b8
	ldrb r2, [r2, #0]	@ 000567b8 1278
.org 0x567ba
	orrs r1, r2	@ 000567ba 1143
.org 0x567bc
	ldr r2, [pc, #76]	@ 000567bc 134a
.org 0x567be
	adds r1, r1, r2	@ 000567be 8918
.org 0x567c0
	lsls r1, r1, #2	@ 000567c0 8900
.org 0x567c2
	adds r1, r1, r3	@ 000567c2 c918
.org 0x567c4
	adds r2, r4, #0	@ 000567c4 221c
.org 0x567c6
	adds r2, #113	@ 000567c6 7132
.org 0x567c8
	ldrb r2, [r2, #0]	@ 000567c8 1278
.org 0x567ca
	lsls r2, r2, #24	@ 000567ca 1206
.org 0x567cc
	asrs r2, r2, #24	@ 000567cc 1216
.org 0x567ce
	ldr r1, [r1, #0]	@ 000567ce 0968
.org 0x567d0
	lsls r2, r2, #2	@ 000567d0 9200
.org 0x567d2
	adds r2, r2, r1	@ 000567d2 5218
.org 0x567d4
	ldr r1, [r2, #0]	@ 000567d4 1168
.org 0x567d6
	ldrb r2, [r1, #0]	@ 000567d6 0a78
.org 0x567d8
	lsls r1, r2, #1	@ 000567d8 5100
.org 0x567da
	adds r1, r1, r2	@ 000567da 8918
.org 0x567dc
	lsls r1, r1, #3	@ 000567dc c900
.org 0x567de
	ldr r2, [pc, #48]	@ 000567de 0c4a
.org 0x567e0
	adds r1, r1, r2	@ 000567e0 8918
.org 0x567e2
	bl 0x5784	@ 000567e2 aef7cfff
.org 0x567e6
	ldrb r0, [r4, #18]	@ 000567e6 a07c
.org 0x567e8
	subs r0, #1	@ 000567e8 0138
.org 0x567ea
	strb r0, [r4, #18]	@ 000567ea a074
.org 0x567ec
	lsls r0, r0, #24	@ 000567ec 0006
.org 0x567ee
	lsrs r1, r0, #24	@ 000567ee 010e
.org 0x567f0
	cmp r1, #0	@ 000567f0 0029
.org 0x567f2
	bne.n 0x567fc	@ 000567f2 03d1
.org 0x567f4
	movs r0, #3	@ 000567f4 0320
.org 0x567f6
	strb r0, [r4, #13]	@ 000567f6 6073
.org 0x567f8
	strb r1, [r4, #14]	@ 000567f8 a173
.org 0x567fa
	strb r1, [r4, #15]	@ 000567fa e173
.org 0x567fc
	pop {r4}	@ 000567fc 10bc
.org 0x567fe
	pop {r0}	@ 000567fe 01bc
.org 0x56800
	bx r0	@ 00056800 0047
