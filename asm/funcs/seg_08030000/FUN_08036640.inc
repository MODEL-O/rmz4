@ FUN_08036640  entry 0x08036640  size 122
.thumb
.org 0x36640
FUN_08036640:
	push {r4, r5, lr}	@ 00036640 30b5
.org 0x36642
	adds r5, r0, #0	@ 00036642 051c
.org 0x36644
	movs r0, #129	@ 00036644 8120
.org 0x36646
	lsls r0, r0, #1	@ 00036646 4000
.org 0x36648
	adds r4, r5, r0	@ 00036648 2c18
.org 0x3664a
	ldrb r0, [r4, #0]	@ 0003664a 2078
.org 0x3664c
	cmp r0, #0	@ 0003664c 0028
.org 0x3664e
	bne.n 0x36666	@ 0003664e 0ad1
.org 0x36650
	ldr r1, [pc, #76]	@ 00036650 1349
.org 0x36652
	adds r0, r5, #0	@ 00036652 281c
.org 0x36654
	bl 0x1cf00	@ 00036654 e6f754fc
.org 0x36658
	ldr r0, [pc, #72]	@ 00036658 1248
.org 0x3665a
	adds r1, r5, r0	@ 0003665a 2918
.org 0x3665c
	movs r0, #4	@ 0003665c 0420
.org 0x3665e
	strb r0, [r1, #0]	@ 0003665e 0870
.org 0x36660
	ldrb r0, [r4, #0]	@ 00036660 2078
.org 0x36662
	adds r0, #1	@ 00036662 0130
.org 0x36664
	strb r0, [r4, #0]	@ 00036664 2070
.org 0x36666
	ldr r4, [pc, #56]	@ 00036666 0e4c
.org 0x36668
	adds r0, r5, #0	@ 00036668 281c
.org 0x3666a
	adds r1, r4, #0	@ 0003666a 211c
.org 0x3666c
	bl 0x3a3b0	@ 0003666c 03f0a0fe
.org 0x36670
	adds r0, r5, #0	@ 00036670 281c
.org 0x36672
	adds r1, r4, #0	@ 00036672 211c
.org 0x36674
	bl 0x3a3f0	@ 00036674 03f0bcfe
.org 0x36678
	ldr r0, [pc, #40]	@ 00036678 0a48
.org 0x3667a
	adds r1, r5, r0	@ 0003667a 2918
.org 0x3667c
	ldrb r0, [r1, #0]	@ 0003667c 0878
.org 0x3667e
	subs r0, #1	@ 0003667e 0138
.org 0x36680
	strb r0, [r1, #0]	@ 00036680 0870
.org 0x36682
	lsls r0, r0, #24	@ 00036682 0006
.org 0x36684
	lsrs r0, r0, #24	@ 00036684 000e
.org 0x36686
	cmp r0, #255	@ 00036686 ff28
.org 0x36688
	bne.n 0x366c2	@ 00036688 1bd1
.org 0x3668a
	ldrb r0, [r5, #14]	@ 0003668a a87b
.org 0x3668c
	cmp r0, #1	@ 0003668c 0128
.org 0x3668e
	bne.n 0x366ac	@ 0003668e 0dd1
.org 0x36690
	ldr r1, [pc, #20]	@ 00036690 0549
.org 0x36692
	adds r0, r5, #0	@ 00036692 281c
.org 0x36694
	movs r2, #2	@ 00036694 0222
.org 0x36696
	movs r3, #1	@ 00036696 0123
.org 0x36698
	bl 0x1cfc8	@ 00036698 e6f796fc
.org 0x3669c
	b.n 0x366b8	@ 0003669c 0ce0
.org 0x3669e
	.byte 0x00	@ 0003669e data
.org 0x3669f
	.byte 0x00	@ 0003669f data
.org 0x366a0
	.byte 0x0a,0x28,0x00,0x00	@ 000366a0 data
.org 0x366a4
	.byte 0x51,0x01,0x00,0x00	@ 000366a4 data
.org 0x366a8
	.byte 0x03,0x04,0x00,0x00	@ 000366a8 data
.org 0x366ac
	ldr r1, [pc, #24]	@ 000366ac 0649
.org 0x366ae
	adds r0, r5, #0	@ 000366ae 281c
.org 0x366b0
	movs r2, #2	@ 000366b0 0222
.org 0x366b2
	movs r3, #1	@ 000366b2 0123
.org 0x366b4
	bl 0x1cfc8	@ 000366b4 e6f788fc
.org 0x366b8
	movs r0, #128	@ 000366b8 8020
