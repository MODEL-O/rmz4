@ FUN_0801c874  entry 0x0801c874  size 158
.thumb
.org 0x1c874
FUN_0801c874:
	push {r4, r5, r6, r7, lr}	@ 0001c874 f0b5
.org 0x1c876
	adds r4, r0, #0	@ 0001c876 041c
.org 0x1c878
	bl 0x54b4	@ 0001c878 e8f71cfe
.org 0x1c87c
	ldr r0, [r4, #12]	@ 0001c87c e068
.org 0x1c87e
	ldr r0, [r0, #4]	@ 0001c87e 4068
.org 0x1c880
	str r0, [r4, #12]	@ 0001c880 e060
.org 0x1c882
	adds r3, r0, #0	@ 0001c882 031c
.org 0x1c884
	adds r0, r4, #0	@ 0001c884 201c
.org 0x1c886
	adds r0, #20	@ 0001c886 1430
.org 0x1c888
	cmp r3, r0	@ 0001c888 8342
.org 0x1c88a
	beq.n 0x1c90c	@ 0001c88a 3fd0
.org 0x1c88c
	ldr r5, [pc, #132]	@ 0001c88c 214d
.org 0x1c88e
	ldr r0, [pc, #136]	@ 0001c88e 2248
.org 0x1c890
	mov ip, r0	@ 0001c890 8446
.org 0x1c892
	ldr r7, [pc, #136]	@ 0001c892 224f
.org 0x1c894
	ldr r6, [pc, #136]	@ 0001c894 224e
.org 0x1c896
	ldrh r1, [r3, #10]	@ 0001c896 5989
.org 0x1c898
	adds r0, r5, #0	@ 0001c898 281c
.org 0x1c89a
	ands r0, r1	@ 0001c89a 0840
.org 0x1c89c
	cmp r0, r5	@ 0001c89c a842
.org 0x1c89e
	bne.n 0x1c8fc	@ 0001c89e 2dd1
.org 0x1c8a0
	adds r0, r3, #0	@ 0001c8a0 181c
.org 0x1c8a2
	adds r0, #140	@ 0001c8a2 8c30
.org 0x1c8a4
	ldr r0, [r0, #0]	@ 0001c8a4 0068
.org 0x1c8a6
	movs r1, #1	@ 0001c8a6 0121
.org 0x1c8a8
	ands r0, r1	@ 0001c8a8 0840
.org 0x1c8aa
	cmp r0, #0	@ 0001c8aa 0028
.org 0x1c8ac
	bne.n 0x1c8c8	@ 0001c8ac 0cd1
.org 0x1c8ae
	adds r0, r3, #0	@ 0001c8ae 181c
.org 0x1c8b0
	adds r0, #144	@ 0001c8b0 9030
.org 0x1c8b2
	ldr r0, [r0, #0]	@ 0001c8b2 0068
.org 0x1c8b4
	ands r0, r1	@ 0001c8b4 0840
.org 0x1c8b6
	cmp r0, #0	@ 0001c8b6 0028
.org 0x1c8b8
	bne.n 0x1c8c8	@ 0001c8b8 06d1
.org 0x1c8ba
	adds r0, r3, #0	@ 0001c8ba 181c
.org 0x1c8bc
	adds r0, #148	@ 0001c8bc 9430
.org 0x1c8be
	ldrb r1, [r0, #0]	@ 0001c8be 0178
.org 0x1c8c0
	movs r0, #2	@ 0001c8c0 0220
.org 0x1c8c2
	ands r0, r1	@ 0001c8c2 0840
.org 0x1c8c4
	cmp r0, #0	@ 0001c8c4 0028
.org 0x1c8c6
	beq.n 0x1c8de	@ 0001c8c6 0ad0
.org 0x1c8c8
	ldrb r1, [r3, #29]	@ 0001c8c8 597f
.org 0x1c8ca
	lsrs r2, r1, #5	@ 0001c8ca 4a09
.org 0x1c8cc
	lsls r2, r2, #2	@ 0001c8cc 9200
.org 0x1c8ce
	add r2, ip	@ 0001c8ce 6244
.org 0x1c8d0
	movs r0, #31	@ 0001c8d0 1f20
.org 0x1c8d2
	ands r0, r1	@ 0001c8d2 0840
.org 0x1c8d4
	movs r1, #1	@ 0001c8d4 0121
.org 0x1c8d6
	lsls r1, r0	@ 0001c8d6 8140
.org 0x1c8d8
	ldr r0, [r2, #0]	@ 0001c8d8 1068
.org 0x1c8da
	orrs r0, r1	@ 0001c8da 0843
.org 0x1c8dc
	str r0, [r2, #0]	@ 0001c8dc 1060
.org 0x1c8de
	ldrb r0, [r7, #0]	@ 0001c8de 3878
.org 0x1c8e0
	cmp r0, #0	@ 0001c8e0 0028
.org 0x1c8e2
	bne.n 0x1c8fc	@ 0001c8e2 0bd1
.org 0x1c8e4
	adds r0, r3, #0	@ 0001c8e4 181c
.org 0x1c8e6
	adds r0, #140	@ 0001c8e6 8c30
.org 0x1c8e8
	ldr r0, [r0, #0]	@ 0001c8e8 0068
.org 0x1c8ea
	movs r1, #1	@ 0001c8ea 0121
.org 0x1c8ec
	ands r0, r1	@ 0001c8ec 0840
.org 0x1c8ee
	cmp r0, #0	@ 0001c8ee 0028
.org 0x1c8f0
	beq.n 0x1c8fc	@ 0001c8f0 04d0
.org 0x1c8f2
	ldr r0, [r3, #116]	@ 0001c8f2 586f
.org 0x1c8f4
	ldrb r0, [r0, #1]	@ 0001c8f4 4078
.org 0x1c8f6
	cmp r0, #0	@ 0001c8f6 0028
.org 0x1c8f8
	beq.n 0x1c8fc	@ 0001c8f8 00d0
.org 0x1c8fa
	strb r1, [r6, #0]	@ 0001c8fa 3170
.org 0x1c8fc
	ldr r0, [r4, #12]	@ 0001c8fc e068
.org 0x1c8fe
	ldr r0, [r0, #4]	@ 0001c8fe 4068
.org 0x1c900
	str r0, [r4, #12]	@ 0001c900 e060
.org 0x1c902
	adds r3, r0, #0	@ 0001c902 031c
.org 0x1c904
	adds r0, r4, #0	@ 0001c904 201c
.org 0x1c906
	adds r0, #20	@ 0001c906 1430
.org 0x1c908
	cmp r3, r0	@ 0001c908 8342
.org 0x1c90a
	bne.n 0x1c896	@ 0001c90a c4d1
.org 0x1c90c
	pop {r4, r5, r6, r7}	@ 0001c90c f0bc
.org 0x1c90e
	pop {r0}	@ 0001c90e 01bc
.org 0x1c910
	bx r0	@ 0001c910 0047
