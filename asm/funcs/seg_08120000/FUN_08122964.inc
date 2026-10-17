@ FUN_08122964  entry 0x08122964  size 184
.thumb
.org 0x122964
FUN_08122964:
	push {r4, r5, r6, r7, lr}	@ 00122964 f0b5
.org 0x122966
	sub sp, #8	@ 00122966 82b0
.org 0x122968
	adds r5, r0, #0	@ 00122968 051c
.org 0x12296a
	lsls r1, r1, #24	@ 0012296a 0906
.org 0x12296c
	lsrs r4, r1, #24	@ 0012296c 0c0e
.org 0x12296e
	lsls r2, r2, #24	@ 0012296e 1206
.org 0x122970
	lsrs r7, r2, #24	@ 00122970 170e
.org 0x122972
	adds r0, #13	@ 00122972 0d30
.org 0x122974
	adds r0, r0, r4	@ 00122974 0019
.org 0x122976
	ldrb r0, [r0, #0]	@ 00122976 0078
.org 0x122978
	cmp r0, #1	@ 00122978 0128
.org 0x12297a
	beq.n 0x1229c0	@ 0012297a 21d0
.org 0x12297c
	cmp r0, #1	@ 0012297c 0128
.org 0x12297e
	bgt.n 0x122986	@ 0012297e 02dc
.org 0x122980
	cmp r0, #0	@ 00122980 0028
.org 0x122982
	beq.n 0x12298c	@ 00122982 03d0
.org 0x122984
	b.n 0x122a1e	@ 00122984 4be0
.org 0x122986
	cmp r0, #2	@ 00122986 0228
.org 0x122988
	beq.n 0x1229f2	@ 00122988 33d0
.org 0x12298a
	b.n 0x122a1e	@ 0012298a 48e0
.org 0x12298c
	ldr r6, [pc, #40]	@ 0012298c 0a4e
.org 0x12298e
	adds r0, r4, #0	@ 0012298e 201c
.org 0x122990
	adds r0, #31	@ 00122990 1f30
.org 0x122992
	lsls r0, r0, #1	@ 00122992 4000
.org 0x122994
	adds r0, r0, r6	@ 00122994 8019
.org 0x122996
	ldrh r0, [r0, #0]	@ 00122996 0088
.org 0x122998
	ldr r5, [pc, #32]	@ 00122998 084d
.org 0x12299a
	adds r0, r0, r5	@ 0012299a 4019
.org 0x12299c
	lsls r4, r7, #1	@ 0012299c 7c00
.org 0x12299e
	adds r4, #4	@ 0012299e 0434
.org 0x1229a0
	movs r1, #5	@ 001229a0 0521
.org 0x1229a2
	adds r2, r4, #0	@ 001229a2 221c
.org 0x1229a4
	bl 0x10d85c	@ 001229a4 eaf75aff
.org 0x1229a8
	ldrh r0, [r6, #2]	@ 001229a8 7088
.org 0x1229aa
	adds r0, r0, r5	@ 001229aa 4019
.org 0x1229ac
	movs r1, #8	@ 001229ac 0821
.org 0x1229ae
	adds r2, r4, #0	@ 001229ae 221c
.org 0x1229b0
	bl 0x10d85c	@ 001229b0 eaf754ff
.org 0x1229b4
	b.n 0x122a1e	@ 001229b4 33e0
.org 0x1229b6
	.byte 0x00	@ 001229b6 data
.org 0x1229b7
	.byte 0x00	@ 001229b7 data
.org 0x1229b8
	.byte 0xf8,0xcf,0x86,0x08	@ 001229b8 data
.org 0x1229bc
	.byte 0x5f,0x0e,0x01,0x09	@ 001229bc data
.org 0x1229c0
	lsls r2, r4, #2	@ 001229c0 a200
.org 0x1229c2
	adds r0, r5, #0	@ 001229c2 281c
.org 0x1229c4
	adds r0, #40	@ 001229c4 2830
.org 0x1229c6
	adds r0, r0, r2	@ 001229c6 8018
.org 0x1229c8
	ldrb r1, [r0, #0]	@ 001229c8 0178
.org 0x1229ca
	adds r0, r5, #0	@ 001229ca 281c
.org 0x1229cc
	adds r0, #20	@ 001229cc 1430
.org 0x1229ce
	adds r0, r0, r2	@ 001229ce 8018
.org 0x1229d0
	ldr r2, [r0, #0]	@ 001229d0 0268
.org 0x1229d2
	adds r0, r5, #0	@ 001229d2 281c
.org 0x1229d4
	adds r0, #60	@ 001229d4 3c30
.org 0x1229d6
	adds r0, r0, r4	@ 001229d6 0019
.org 0x1229d8
	ldrb r3, [r0, #0]	@ 001229d8 0378
.org 0x1229da
	adds r0, r5, #0	@ 001229da 281c
.org 0x1229dc
	adds r0, #65	@ 001229dc 4130
.org 0x1229de
	adds r0, r0, r4	@ 001229de 0019
.org 0x1229e0
	ldrb r0, [r0, #0]	@ 001229e0 0078
.org 0x1229e2
	str r0, [sp, #0]	@ 001229e2 0090
.org 0x1229e4
	lsls r0, r7, #25	@ 001229e4 7806
.org 0x1229e6
	lsrs r0, r0, #24	@ 001229e6 000e
.org 0x1229e8
	str r0, [sp, #4]	@ 001229e8 0190
.org 0x1229ea
	adds r0, r4, #0	@ 001229ea 201c
.org 0x1229ec
	bl 0x122a34	@ 001229ec 00f022f8
.org 0x1229f0
	b.n 0x122a1e	@ 001229f0 15e0
.org 0x1229f2
	ldr r5, [pc, #52]	@ 001229f2 0d4d
.org 0x1229f4
	adds r0, r4, #0	@ 001229f4 201c
.org 0x1229f6
	adds r0, #31	@ 001229f6 1f30
.org 0x1229f8
	lsls r0, r0, #1	@ 001229f8 4000
.org 0x1229fa
	adds r0, r0, r5	@ 001229fa 4019
.org 0x1229fc
	ldrh r0, [r0, #0]	@ 001229fc 0088
.org 0x1229fe
	ldr r6, [pc, #44]	@ 001229fe 0b4e
.org 0x122a00
	adds r0, r0, r6	@ 00122a00 8019
.org 0x122a02
	lsls r4, r7, #1	@ 00122a02 7c00
.org 0x122a04
	adds r4, #4	@ 00122a04 0434
.org 0x122a06
	movs r1, #5	@ 00122a06 0521
.org 0x122a08
	adds r2, r4, #0	@ 00122a08 221c
.org 0x122a0a
	bl 0x10d85c	@ 00122a0a eaf727ff
.org 0x122a0e
	ldr r0, [pc, #32]	@ 00122a0e 0848
.org 0x122a10
	adds r5, r5, r0	@ 00122a10 2d18
.org 0x122a12
	ldrh r0, [r5, #0]	@ 00122a12 2888
.org 0x122a14
	adds r0, r0, r6	@ 00122a14 8019
.org 0x122a16
	movs r1, #8	@ 00122a16 0821
.org 0x122a18
	adds r2, r4, #0	@ 00122a18 221c
.org 0x122a1a
	bl 0x10d85c	@ 00122a1a eaf71fff
