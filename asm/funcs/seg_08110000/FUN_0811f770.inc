@ FUN_0811f770  entry 0x0811f770  size 112
.thumb
.org 0x11f770
FUN_0811f770:
	push {r4, r5, r6, lr}	@ 0011f770 70b5
.org 0x11f772
	adds r6, r0, #0	@ 0011f772 061c
.org 0x11f774
	ldr r1, [pc, #104]	@ 0011f774 1a49
.org 0x11f776
	adds r0, r6, r1	@ 0011f776 7018
.org 0x11f778
	ldr r5, [r0, #0]	@ 0011f778 0568
.org 0x11f77a
	ldrb r0, [r6, #3]	@ 0011f77a f078
.org 0x11f77c
	cmp r0, #0	@ 0011f77c 0028
.org 0x11f77e
	bne.n 0x11f796	@ 0011f77e 0ad1
.org 0x11f780
	adds r4, r5, #0	@ 0011f780 2c1c
.org 0x11f782
	adds r4, #246	@ 0011f782 f634
.org 0x11f784
	ldrb r0, [r4, #0]	@ 0011f784 2078
.org 0x11f786
	adds r0, #1	@ 0011f786 0130
.org 0x11f788
	movs r1, #3	@ 0011f788 0321
.org 0x11f78a
	bl 0x129050	@ 0011f78a 09f061fc
.org 0x11f78e
	strb r0, [r4, #0]	@ 0011f78e 2070
.org 0x11f790
	ldrb r0, [r6, #3]	@ 0011f790 f078
.org 0x11f792
	adds r0, #1	@ 0011f792 0130
.org 0x11f794
	strb r0, [r6, #3]	@ 0011f794 f070
.org 0x11f796
	ldr r2, [pc, #76]	@ 0011f796 134a
.org 0x11f798
	adds r0, r5, #0	@ 0011f798 281c
.org 0x11f79a
	adds r0, #240	@ 0011f79a f030
.org 0x11f79c
	ldrb r0, [r0, #0]	@ 0011f79c 0078
.org 0x11f79e
	lsls r1, r0, #1	@ 0011f79e 4100
.org 0x11f7a0
	adds r1, r1, r0	@ 0011f7a0 0918
.org 0x11f7a2
	adds r0, r5, #0	@ 0011f7a2 281c
.org 0x11f7a4
	adds r0, #246	@ 0011f7a4 f630
.org 0x11f7a6
	ldrb r0, [r0, #0]	@ 0011f7a6 0078
.org 0x11f7a8
	movs r3, #200	@ 0011f7a8 c823
.org 0x11f7aa
	lsls r3, r3, #2	@ 0011f7aa 9b00
.org 0x11f7ac
	adds r0, r0, r3	@ 0011f7ac c018
.org 0x11f7ae
	adds r1, r1, r0	@ 0011f7ae 0918
.org 0x11f7b0
	lsls r1, r1, #1	@ 0011f7b0 4900
.org 0x11f7b2
	adds r1, r1, r2	@ 0011f7b2 8918
.org 0x11f7b4
	ldrh r0, [r1, #0]	@ 0011f7b4 0888
.org 0x11f7b6
	ldr r1, [pc, #48]	@ 0011f7b6 0c49
.org 0x11f7b8
	adds r0, r0, r1	@ 0011f7b8 4018
.org 0x11f7ba
	movs r1, #17	@ 0011f7ba 1121
.org 0x11f7bc
	movs r2, #7	@ 0011f7bc 0722
.org 0x11f7be
	bl 0x10d85c	@ 0011f7be eef74df8
.org 0x11f7c2
	ldr r0, [pc, #40]	@ 0011f7c2 0a48
.org 0x11f7c4
	ldrh r1, [r0, #4]	@ 0011f7c4 8188
.org 0x11f7c6
	movs r0, #3	@ 0011f7c6 0320
.org 0x11f7c8
	ands r0, r1	@ 0011f7c8 0840
.org 0x11f7ca
	cmp r0, #0	@ 0011f7ca 0028
.org 0x11f7cc
	beq.n 0x11f7da	@ 0011f7cc 05d0
.org 0x11f7ce
	movs r0, #2	@ 0011f7ce 0220
.org 0x11f7d0
	bl 0x2b10	@ 0011f7d0 e3f69ef9
.org 0x11f7d4
	movs r0, #0	@ 0011f7d4 0020
.org 0x11f7d6
	strb r0, [r6, #2]	@ 0011f7d6 b070
.org 0x11f7d8
	strb r0, [r6, #3]	@ 0011f7d8 f070
.org 0x11f7da
	pop {r4, r5, r6}	@ 0011f7da 70bc
.org 0x11f7dc
	pop {r0}	@ 0011f7dc 01bc
.org 0x11f7de
	bx r0	@ 0011f7de 0047
