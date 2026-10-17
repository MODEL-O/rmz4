@ FUN_0801ebf4  entry 0x0801ebf4  size 740
.thumb
.org 0x1ebf4
FUN_0801ebf4:
	push {r4, r5, r6, r7, lr}	@ 0001ebf4 f0b5
.org 0x1ebf6
	mov r7, sl	@ 0001ebf6 5746
.org 0x1ebf8
	mov r6, r9	@ 0001ebf8 4e46
.org 0x1ebfa
	mov r5, r8	@ 0001ebfa 4546
.org 0x1ebfc
	push {r5, r6, r7}	@ 0001ebfc e0b4
.org 0x1ebfe
	sub sp, #16	@ 0001ebfe 84b0
.org 0x1ec00
	ldr r0, [pc, #16]	@ 0001ec00 0448
.org 0x1ec02
	ldr r1, [r0, #0]	@ 0001ec02 0168
.org 0x1ec04
	mov r8, r1	@ 0001ec04 8846
.org 0x1ec06
	ldrb r5, [r1, #1]	@ 0001ec06 4d78
.org 0x1ec08
	ldrb r1, [r0, #21]	@ 0001ec08 417d
.org 0x1ec0a
	cmp r1, #19	@ 0001ec0a 1329
.org 0x1ec0c
	bls.n 0x1ec18	@ 0001ec0c 04d9
.org 0x1ec0e
	movs r0, #4	@ 0001ec0e 0420
.org 0x1ec10
	b.n 0x1ec86	@ 0001ec10 39e0
.org 0x1ec12
	.byte 0x00	@ 0001ec12 data
.org 0x1ec13
	.byte 0x00	@ 0001ec13 data
.org 0x1ec14
	.byte 0xe0,0xe8,0x02,0x02	@ 0001ec14 data
.org 0x1ec18
	cmp r1, #17	@ 0001ec18 1129
.org 0x1ec1a
	bls.n 0x1ec20	@ 0001ec1a 01d9
.org 0x1ec1c
	movs r0, #3	@ 0001ec1c 0320
.org 0x1ec1e
	b.n 0x1ecc6	@ 0001ec1e 52e0
.org 0x1ec20
	cmp r1, #0	@ 0001ec20 0029
.org 0x1ec22
	bne.n 0x1ec28	@ 0001ec22 01d1
.org 0x1ec24
	movs r0, #5	@ 0001ec24 0520
.org 0x1ec26
	b.n 0x1ecd2	@ 0001ec26 54e0
.org 0x1ec28
	ldr r2, [pc, #48]	@ 0001ec28 0c4a
.org 0x1ec2a
	ldrb r0, [r2, #22]	@ 0001ec2a 907d
.org 0x1ec2c
	cmp r0, #15	@ 0001ec2c 0f28
.org 0x1ec2e
	bne.n 0x1ec64	@ 0001ec2e 19d1
.org 0x1ec30
	ldr r1, [pc, #44]	@ 0001ec30 0b49
.org 0x1ec32
	ldrb r0, [r2, #4]	@ 0001ec32 1079
.org 0x1ec34
	lsls r0, r0, #2	@ 0001ec34 8000
.org 0x1ec36
	adds r0, r0, r1	@ 0001ec36 4018
.org 0x1ec38
	ldr r0, [r0, #0]	@ 0001ec38 0068
.org 0x1ec3a
	lsls r4, r0, #2	@ 0001ec3a 8400
.org 0x1ec3c
	adds r4, r4, r0	@ 0001ec3c 2418
.org 0x1ec3e
	lsls r4, r4, #1	@ 0001ec3e 6400
.org 0x1ec40
	ldrh r0, [r2, #12]	@ 0001ec40 9089
.org 0x1ec42
	ldrh r1, [r2, #18]	@ 0001ec42 518a
.org 0x1ec44
	adds r1, #1	@ 0001ec44 0131
.org 0x1ec46
	bl 0x128fb8	@ 0001ec46 0af1b7f9
.org 0x1ec4a
	adds r1, r0, #0	@ 0001ec4a 011c
.org 0x1ec4c
	adds r0, r4, #0	@ 0001ec4c 201c
.org 0x1ec4e
	bl 0x128fb8	@ 0001ec4e 0af1b3f9
.org 0x1ec52
	cmp r0, #5	@ 0001ec52 0528
.org 0x1ec54
	bgt.n 0x1ec64	@ 0001ec54 06dc
.org 0x1ec56
	movs r0, #6	@ 0001ec56 0620
.org 0x1ec58
	b.n 0x1ecc6	@ 0001ec58 35e0
.org 0x1ec5a
	.byte 0x00	@ 0001ec5a data
.org 0x1ec5b
	.byte 0x00	@ 0001ec5b data
.org 0x1ec5c
	.byte 0xe0,0xe8,0x02,0x02	@ 0001ec5c data
.org 0x1ec60
	.byte 0x3c,0x28,0x84,0x08	@ 0001ec60 data
.org 0x1ec64
	ldr r1, [pc, #8]	@ 0001ec64 0249
.org 0x1ec66
	ldrb r0, [r1, #23]	@ 0001ec66 c87d
.org 0x1ec68
	cmp r0, #18	@ 0001ec68 1228
.org 0x1ec6a
	bls.n 0x1ec74	@ 0001ec6a 03d9
.org 0x1ec6c
	movs r0, #7	@ 0001ec6c 0720
.org 0x1ec6e
	b.n 0x1ec86	@ 0001ec6e 0ae0
.org 0x1ec70
	.byte 0xe0,0xe8,0x02,0x02	@ 0001ec70 data
.org 0x1ec74
	cmp r0, #5	@ 0001ec74 0528
.org 0x1ec76
	bhi.n 0x1ec7c	@ 0001ec76 01d8
.org 0x1ec78
	movs r0, #8	@ 0001ec78 0820
.org 0x1ec7a
	b.n 0x1ecc6	@ 0001ec7a 24e0
.org 0x1ec7c
	ldr r1, [pc, #12]	@ 0001ec7c 0349
.org 0x1ec7e
	ldrb r0, [r1, #24]	@ 0001ec7e 087e
.org 0x1ec80
	cmp r0, #15	@ 0001ec80 0f28
.org 0x1ec82
	bne.n 0x1ec90	@ 0001ec82 05d1
.org 0x1ec84
	movs r0, #9	@ 0001ec84 0920
.org 0x1ec86
	mov r2, r8	@ 0001ec86 4246
.org 0x1ec88
	strb r0, [r2, #4]	@ 0001ec88 1071
.org 0x1ec8a
	b.n 0x1ecd6	@ 0001ec8a 24e0
.org 0x1ec8c
	.byte 0xe0,0xe8,0x02,0x02	@ 0001ec8c data
.org 0x1ec90
	ldr r3, [pc, #12]	@ 0001ec90 034b
.org 0x1ec92
	movs r0, #26	@ 0001ec92 1a20
.org 0x1ec94
	ldrsb r0, [r3, r0]	@ 0001ec94 1856
.org 0x1ec96
	cmp r0, #0	@ 0001ec96 0028
.org 0x1ec98
	beq.n 0x1eca4	@ 0001ec98 04d0
.org 0x1ec9a
	movs r0, #10	@ 0001ec9a 0a20
.org 0x1ec9c
	b.n 0x1ecd2	@ 0001ec9c 19e0
.org 0x1ec9e
	.byte 0x00	@ 0001ec9e data
.org 0x1ec9f
	.byte 0x00	@ 0001ec9f data
.org 0x1eca0
	.byte 0xe0,0xe8,0x02,0x02	@ 0001eca0 data
.org 0x1eca4
	ldr r2, [pc, #8]	@ 0001eca4 024a
.org 0x1eca6
	ldrb r0, [r2, #20]	@ 0001eca6 107d
.org 0x1eca8
	cmp r0, #20	@ 0001eca8 1428
.org 0x1ecaa
	bne.n 0x1ecb4	@ 0001ecaa 03d1
.org 0x1ecac
	movs r0, #1	@ 0001ecac 0120
.org 0x1ecae
	b.n 0x1ecc6	@ 0001ecae 0ae0
.org 0x1ecb0
	.byte 0xe0,0xe8,0x02,0x02	@ 0001ecb0 data
.org 0x1ecb4
	cmp r0, #0	@ 0001ecb4 0028
.org 0x1ecb6
	bne.n 0x1ecbc	@ 0001ecb6 01d1
.org 0x1ecb8
	movs r0, #2	@ 0001ecb8 0220
.org 0x1ecba
	b.n 0x1ecd2	@ 0001ecba 0ae0
.org 0x1ecbc
	ldr r2, [pc, #12]	@ 0001ecbc 034a
.org 0x1ecbe
	ldrb r0, [r2, #25]	@ 0001ecbe 507e
.org 0x1ecc0
	cmp r0, #0	@ 0001ecc0 0028
.org 0x1ecc2
	beq.n 0x1ecd0	@ 0001ecc2 05d0
.org 0x1ecc4
	movs r0, #11	@ 0001ecc4 0b20
.org 0x1ecc6
	mov r3, r8	@ 0001ecc6 4346
.org 0x1ecc8
	strb r0, [r3, #4]	@ 0001ecc8 1871
.org 0x1ecca
	b.n 0x1ecd6	@ 0001ecca 04e0
.org 0x1eccc
	.byte 0xe0,0xe8,0x02,0x02	@ 0001eccc data
.org 0x1ecd0
	movs r0, #12	@ 0001ecd0 0c20
.org 0x1ecd2
	mov r1, r8	@ 0001ecd2 4146
.org 0x1ecd4
	strb r0, [r1, #4]	@ 0001ecd4 0871
.org 0x1ecd6
	cmp r5, #6	@ 0001ecd6 062d
.org 0x1ecd8
	bne.n 0x1ece2	@ 0001ecd8 03d1
.org 0x1ecda
	movs r4, #0	@ 0001ecda 0024
.org 0x1ecdc
	mov r2, r8	@ 0001ecdc 4246
.org 0x1ecde
	strb r4, [r2, #4]	@ 0001ecde 1471
.org 0x1ece0
	b.n 0x1ed14	@ 0001ece0 18e0
.org 0x1ece2
	ldr r3, [pc, #28]	@ 0001ece2 074b
.org 0x1ece4
	ldrh r4, [r3, #28]	@ 0001ece4 9c8b
.org 0x1ece6
	ldrh r5, [r3, #30]	@ 0001ece6 dd8b
.org 0x1ece8
	adds r1, r5, r4	@ 0001ece8 2919
.org 0x1ecea
	ldrh r6, [r3, #32]	@ 0001ecea 1e8c
.org 0x1ecec
	adds r1, r1, r6	@ 0001ecec 8919
.org 0x1ecee
	lsls r0, r1, #3	@ 0001ecee c800
.org 0x1ecf0
	subs r0, r0, r1	@ 0001ecf0 401a
.org 0x1ecf2
	movs r1, #10	@ 0001ecf2 0a21
.org 0x1ecf4
	bl 0x128fb8	@ 0001ecf4 0af160f9
.org 0x1ecf8
	cmp r4, r0	@ 0001ecf8 8442
.org 0x1ecfa
	ble.n 0x1ed04	@ 0001ecfa 03dd
.org 0x1ecfc
	movs r4, #1	@ 0001ecfc 0124
.org 0x1ecfe
	b.n 0x1ed14	@ 0001ecfe 09e0
.org 0x1ed00
	.byte 0xe0,0xe8,0x02,0x02	@ 0001ed00 data
.org 0x1ed04
	cmp r5, r0	@ 0001ed04 8542
.org 0x1ed06
	ble.n 0x1ed0c	@ 0001ed06 01dd
.org 0x1ed08
	movs r4, #2	@ 0001ed08 0224
.org 0x1ed0a
	b.n 0x1ed14	@ 0001ed0a 03e0
.org 0x1ed0c
	movs r4, #4	@ 0001ed0c 0424
.org 0x1ed0e
	cmp r6, r0	@ 0001ed0e 8642
.org 0x1ed10
	ble.n 0x1ed14	@ 0001ed10 00dd
.org 0x1ed12
	movs r4, #3	@ 0001ed12 0324
.org 0x1ed14
	mov r1, r8	@ 0001ed14 4146
.org 0x1ed16
	ldrb r0, [r1, #2]	@ 0001ed16 8878
.org 0x1ed18
	strb r0, [r1, #3]	@ 0001ed18 c870
.org 0x1ed1a
	movs r3, #0	@ 0001ed1a 0023
.org 0x1ed1c
	lsls r2, r4, #16	@ 0001ed1c 2204
.org 0x1ed1e
	mov sl, r2	@ 0001ed1e 9246
.org 0x1ed20
	adds r1, #42	@ 0001ed20 2a31
.org 0x1ed22
	mov r0, r8	@ 0001ed22 4046
.org 0x1ed24
	adds r0, #22	@ 0001ed24 1630
.org 0x1ed26
	str r0, [sp, #8]	@ 0001ed26 0290
.org 0x1ed28
	movs r2, #50	@ 0001ed28 3222
.org 0x1ed2a
	add r2, r8	@ 0001ed2a 4244
.org 0x1ed2c
	mov r9, r2	@ 0001ed2c 9146
.org 0x1ed2e
	movs r0, #32	@ 0001ed2e 2020
.org 0x1ed30
	add r0, r8	@ 0001ed30 4044
.org 0x1ed32
	mov ip, r0	@ 0001ed32 8446
.org 0x1ed34
	mov r2, sp	@ 0001ed34 6a46
.org 0x1ed36
	adds r2, #4	@ 0001ed36 0432
.org 0x1ed38
	str r2, [sp, #12]	@ 0001ed38 0392
.org 0x1ed3a
	mov r0, sl	@ 0001ed3a 5046
.org 0x1ed3c
	asrs r6, r0, #16	@ 0001ed3c 0614
.org 0x1ed3e
	adds r5, r1, #0	@ 0001ed3e 0d1c
.org 0x1ed40
	movs r7, #0	@ 0001ed40 0027
.org 0x1ed42
	lsls r0, r3, #16	@ 0001ed42 1804
.org 0x1ed44
	asrs r2, r0, #16	@ 0001ed44 0214
.org 0x1ed46
	adds r3, r0, #0	@ 0001ed46 031c
.org 0x1ed48
	cmp r2, r6	@ 0001ed48 b242
.org 0x1ed4a
	beq.n 0x1ed52	@ 0001ed4a 02d0
.org 0x1ed4c
	adds r0, r5, r2	@ 0001ed4c a818
.org 0x1ed4e
	strb r7, [r0, #0]	@ 0001ed4e 0770
.org 0x1ed50
	b.n 0x1ed5e	@ 0001ed50 05e0
.org 0x1ed52
	adds r2, r5, r2	@ 0001ed52 aa18
.org 0x1ed54
	ldrb r0, [r2, #0]	@ 0001ed54 1078
.org 0x1ed56
	cmp r0, #6	@ 0001ed56 0628
.org 0x1ed58
	bhi.n 0x1ed5e	@ 0001ed58 01d8
.org 0x1ed5a
	adds r0, #1	@ 0001ed5a 0130
.org 0x1ed5c
	strb r0, [r2, #0]	@ 0001ed5c 1070
.org 0x1ed5e
	movs r2, #128	@ 0001ed5e 8022
.org 0x1ed60
	lsls r2, r2, #9	@ 0001ed60 5202
.org 0x1ed62
	adds r0, r3, r2	@ 0001ed62 9818
.org 0x1ed64
	lsrs r3, r0, #16	@ 0001ed64 030c
.org 0x1ed66
	asrs r0, r0, #16	@ 0001ed66 0014
.org 0x1ed68
	cmp r0, #5	@ 0001ed68 0528
.org 0x1ed6a
	ble.n 0x1ed42	@ 0001ed6a eadd
.org 0x1ed6c
	lsls r0, r4, #16	@ 0001ed6c 2004
.org 0x1ed6e
	asrs r0, r0, #16	@ 0001ed6e 0014
.org 0x1ed70
	adds r1, r1, r0	@ 0001ed70 0918
.org 0x1ed72
	lsls r0, r0, #3	@ 0001ed72 c000
.org 0x1ed74
	ldrb r1, [r1, #0]	@ 0001ed74 0978
.org 0x1ed76
	adds r0, r0, r1	@ 0001ed76 4018
.org 0x1ed78
	ldr r3, [pc, #292]	@ 0001ed78 494b
.org 0x1ed7a
	adds r0, r0, r3	@ 0001ed7a c018
.org 0x1ed7c
	ldrb r0, [r0, #0]	@ 0001ed7c 0078
.org 0x1ed7e
	movs r2, #0	@ 0001ed7e 0022
.org 0x1ed80
	mov r1, r8	@ 0001ed80 4146
.org 0x1ed82
	strb r0, [r1, #2]	@ 0001ed82 8870
.org 0x1ed84
	ldrb r1, [r1, #2]	@ 0001ed84 8978
.org 0x1ed86
	ldr r3, [sp, #8]	@ 0001ed86 029b
.org 0x1ed88
	adds r1, r3, r1	@ 0001ed88 5918
.org 0x1ed8a
	ldrb r0, [r1, #0]	@ 0001ed8a 0878
.org 0x1ed8c
	adds r0, #1	@ 0001ed8c 0130
.org 0x1ed8e
	strb r0, [r1, #0]	@ 0001ed8e 0870
.org 0x1ed90
	mov r0, r8	@ 0001ed90 4046
.org 0x1ed92
	ldrb r1, [r0, #4]	@ 0001ed92 0179
.org 0x1ed94
	add r1, r9	@ 0001ed94 4944
.org 0x1ed96
	ldrb r0, [r1, #0]	@ 0001ed96 0878
.org 0x1ed98
	adds r0, #1	@ 0001ed98 0130
.org 0x1ed9a
	strb r0, [r1, #0]	@ 0001ed9a 0870
.org 0x1ed9c
	mov r1, r8	@ 0001ed9c 4146
.org 0x1ed9e
	strb r2, [r1, #7]	@ 0001ed9e ca71
.org 0x1eda0
	movs r4, #0	@ 0001eda0 0024
.org 0x1eda2
	mov r5, r9	@ 0001eda2 4d46
.org 0x1eda4
	mov r2, r8	@ 0001eda4 4246
.org 0x1eda6
	ldrb r1, [r2, #7]	@ 0001eda6 d179
.org 0x1eda8
	adds r1, r5, r1	@ 0001eda8 6918
.org 0x1edaa
	lsls r0, r4, #16	@ 0001edaa 2004
.org 0x1edac
	asrs r3, r0, #16	@ 0001edac 0314
.org 0x1edae
	adds r2, r5, r3	@ 0001edae ea18
.org 0x1edb0
	ldrb r0, [r1, #0]	@ 0001edb0 0878
.org 0x1edb2
	ldrb r2, [r2, #0]	@ 0001edb2 1278
.org 0x1edb4
	cmp r0, r2	@ 0001edb4 9042
.org 0x1edb6
	bcs.n 0x1edbc	@ 0001edb6 01d2
.org 0x1edb8
	mov r0, r8	@ 0001edb8 4046
.org 0x1edba
	strb r4, [r0, #7]	@ 0001edba c471
.org 0x1edbc
	adds r0, r3, #1	@ 0001edbc 581c
.org 0x1edbe
	lsls r0, r0, #16	@ 0001edbe 0004
.org 0x1edc0
	lsrs r4, r0, #16	@ 0001edc0 040c
.org 0x1edc2
	asrs r0, r0, #16	@ 0001edc2 0014
.org 0x1edc4
	cmp r0, #9	@ 0001edc4 0928
.org 0x1edc6
	ble.n 0x1eda4	@ 0001edc6 eddd
.org 0x1edc8
	mov r2, sp	@ 0001edc8 6a46
.org 0x1edca
	mov r3, r8	@ 0001edca 4346
.org 0x1edcc
	ldrb r1, [r3, #24]	@ 0001edcc 197e
.org 0x1edce
	ldrb r0, [r3, #23]	@ 0001edce d87d
.org 0x1edd0
	adds r1, r1, r0	@ 0001edd0 0918
.org 0x1edd2
	ldrb r0, [r3, #25]	@ 0001edd2 587e
.org 0x1edd4
	adds r0, r0, r1	@ 0001edd4 4018
.org 0x1edd6
	ldrb r1, [r3, #26]	@ 0001edd6 997e
.org 0x1edd8
	adds r0, r0, r1	@ 0001edd8 4018
.org 0x1edda
	strb r0, [r2, #0]	@ 0001edda 1070
.org 0x1eddc
	ldrb r1, [r3, #28]	@ 0001eddc 197f
.org 0x1edde
	ldrb r3, [r3, #27]	@ 0001edde db7e
.org 0x1ede0
	adds r1, r1, r3	@ 0001ede0 c918
.org 0x1ede2
	mov r3, r8	@ 0001ede2 4346
.org 0x1ede4
	ldrb r0, [r3, #29]	@ 0001ede4 587f
.org 0x1ede6
	adds r0, r0, r1	@ 0001ede6 4018
.org 0x1ede8
	strb r0, [r2, #1]	@ 0001ede8 5070
.org 0x1edea
	ldrb r1, [r3, #31]	@ 0001edea d97f
.org 0x1edec
	ldrb r0, [r3, #30]	@ 0001edec 987f
.org 0x1edee
	adds r1, r1, r0	@ 0001edee 0918
.org 0x1edf0
	mov r3, ip	@ 0001edf0 6346
.org 0x1edf2
	ldrb r0, [r3, #0]	@ 0001edf2 1878
.org 0x1edf4
	adds r0, r0, r1	@ 0001edf4 4018
.org 0x1edf6
	strb r0, [r2, #2]	@ 0001edf6 9070
.org 0x1edf8
	mov r1, sp	@ 0001edf8 6946
.org 0x1edfa
	mov r2, r8	@ 0001edfa 4246
.org 0x1edfc
	ldrb r0, [r2, #22]	@ 0001edfc 907d
.org 0x1edfe
	strb r0, [r1, #3]	@ 0001edfe c870
.org 0x1ee00
	movs r4, #0	@ 0001ee00 0024
.org 0x1ee02
	ldr r2, [sp, #12]	@ 0001ee02 039a
.org 0x1ee04
	lsls r0, r4, #16	@ 0001ee04 2004
.org 0x1ee06
	asrs r0, r0, #16	@ 0001ee06 0014
.org 0x1ee08
	adds r1, r2, r0	@ 0001ee08 1118
.org 0x1ee0a
	strb r4, [r1, #0]	@ 0001ee0a 0c70
.org 0x1ee0c
	adds r0, #1	@ 0001ee0c 0130
.org 0x1ee0e
	lsls r0, r0, #16	@ 0001ee0e 0004
.org 0x1ee10
	lsrs r4, r0, #16	@ 0001ee10 040c
.org 0x1ee12
	asrs r0, r0, #16	@ 0001ee12 0014
.org 0x1ee14
	cmp r0, #3	@ 0001ee14 0328
.org 0x1ee16
	ble.n 0x1ee04	@ 0001ee16 f5dd
.org 0x1ee18
	movs r4, #0	@ 0001ee18 0024
.org 0x1ee1a
	movs r3, #3	@ 0001ee1a 0323
.org 0x1ee1c
	lsls r0, r4, #16	@ 0001ee1c 2004
.org 0x1ee1e
	asrs r1, r0, #16	@ 0001ee1e 0114
.org 0x1ee20
	mov sl, r0	@ 0001ee20 8246
.org 0x1ee22
	cmp r3, r1	@ 0001ee22 8b42
.org 0x1ee24
	ble.n 0x1ee5a	@ 0001ee24 19dd
.org 0x1ee26
	ldr r0, [sp, #12]	@ 0001ee26 0398
.org 0x1ee28
	mov r9, r0	@ 0001ee28 8146
.org 0x1ee2a
	mov ip, r1	@ 0001ee2a 8c46
.org 0x1ee2c
	adds r7, r0, #0	@ 0001ee2c 071c
.org 0x1ee2e
	add r7, ip	@ 0001ee2e 6744
.org 0x1ee30
	ldrb r6, [r7, #0]	@ 0001ee30 3e78
.org 0x1ee32
	mov r1, sp	@ 0001ee32 6946
.org 0x1ee34
	adds r2, r1, r6	@ 0001ee34 8a19
.org 0x1ee36
	lsls r0, r3, #16	@ 0001ee36 1804
.org 0x1ee38
	asrs r5, r0, #16	@ 0001ee38 0514
.org 0x1ee3a
	mov r3, r9	@ 0001ee3a 4b46
.org 0x1ee3c
	adds r4, r3, r5	@ 0001ee3c 5c19
.org 0x1ee3e
	ldrb r3, [r4, #0]	@ 0001ee3e 2378
.org 0x1ee40
	adds r1, r1, r3	@ 0001ee40 c918
.org 0x1ee42
	ldrb r0, [r2, #0]	@ 0001ee42 1078
.org 0x1ee44
	ldrb r1, [r1, #0]	@ 0001ee44 0978
.org 0x1ee46
	cmp r0, r1	@ 0001ee46 8842
.org 0x1ee48
	bcs.n 0x1ee4e	@ 0001ee48 01d2
.org 0x1ee4a
	strb r3, [r7, #0]	@ 0001ee4a 3b70
.org 0x1ee4c
	strb r6, [r4, #0]	@ 0001ee4c 2670
.org 0x1ee4e
	subs r0, r5, #1	@ 0001ee4e 681e
.org 0x1ee50
	lsls r0, r0, #16	@ 0001ee50 0004
.org 0x1ee52
	lsrs r3, r0, #16	@ 0001ee52 030c
.org 0x1ee54
	asrs r0, r0, #16	@ 0001ee54 0014
.org 0x1ee56
	cmp r0, ip	@ 0001ee56 6045
.org 0x1ee58
	bgt.n 0x1ee30	@ 0001ee58 eadc
.org 0x1ee5a
	movs r0, #128	@ 0001ee5a 8020
.org 0x1ee5c
	lsls r0, r0, #9	@ 0001ee5c 4002
.org 0x1ee5e
	add r0, sl	@ 0001ee5e 5044
.org 0x1ee60
	lsrs r4, r0, #16	@ 0001ee60 040c
.org 0x1ee62
	asrs r0, r0, #16	@ 0001ee62 0014
.org 0x1ee64
	cmp r0, #2	@ 0001ee64 0228
.org 0x1ee66
	ble.n 0x1ee1a	@ 0001ee66 d8dd
.org 0x1ee68
	ldr r1, [sp, #12]	@ 0001ee68 0399
.org 0x1ee6a
	ldrb r0, [r1, #0]	@ 0001ee6a 0878
.org 0x1ee6c
	cmp r0, #0	@ 0001ee6c 0028
.org 0x1ee6e
	bne.n 0x1eea4	@ 0001ee6e 19d1
.org 0x1ee70
	mov r2, r8	@ 0001ee70 4246
.org 0x1ee72
	strb r0, [r2, #7]	@ 0001ee72 d071
.org 0x1ee74
	movs r0, #1	@ 0001ee74 0120
.org 0x1ee76
	strb r0, [r2, #6]	@ 0001ee76 9071
.org 0x1ee78
	movs r4, #0	@ 0001ee78 0024
.org 0x1ee7a
	ldr r5, [pc, #36]	@ 0001ee7a 094d
.org 0x1ee7c
	ldr r1, [sp, #8]	@ 0001ee7c 0299
.org 0x1ee7e
	lsls r0, r4, #16	@ 0001ee7e 2004
.org 0x1ee80
	asrs r3, r0, #16	@ 0001ee80 0314
.org 0x1ee82
	adds r0, r3, r5	@ 0001ee82 5819
.org 0x1ee84
	ldrb r2, [r0, #0]	@ 0001ee84 0278
.org 0x1ee86
	adds r0, r1, r2	@ 0001ee86 8818
.org 0x1ee88
	ldrb r0, [r0, #0]	@ 0001ee88 0078
.org 0x1ee8a
	cmp r0, #0	@ 0001ee8a 0028
.org 0x1ee8c
	beq.n 0x1ee92	@ 0001ee8c 01d0
.org 0x1ee8e
	mov r0, r8	@ 0001ee8e 4046
.org 0x1ee90
	strb r2, [r0, #6]	@ 0001ee90 8271
.org 0x1ee92
	adds r0, r3, #1	@ 0001ee92 581c
.org 0x1ee94
	lsls r0, r0, #16	@ 0001ee94 0004
.org 0x1ee96
	lsrs r4, r0, #16	@ 0001ee96 040c
.org 0x1ee98
	asrs r0, r0, #16	@ 0001ee98 0014
.org 0x1ee9a
	cmp r0, #7	@ 0001ee9a 0728
.org 0x1ee9c
	ble.n 0x1ee7e	@ 0001ee9c efdd
.org 0x1ee9e
	b.n 0x1eefe	@ 0001ee9e 2ee0
.org 0x1eea0
	.byte 0x9c,0x28,0x84,0x08	@ 0001eea0 data
.org 0x1eea4
	ldr r1, [sp, #12]	@ 0001eea4 0399
.org 0x1eea6
	ldrb r0, [r1, #0]	@ 0001eea6 0878
.org 0x1eea8
	lsls r0, r0, #3	@ 0001eea8 c000
.org 0x1eeaa
	ldr r2, [pc, #28]	@ 0001eeaa 074a
.org 0x1eeac
	adds r0, r0, r2	@ 0001eeac 8018
.org 0x1eeae
	ldrb r0, [r0, #0]	@ 0001eeae 0078
.org 0x1eeb0
	mov r3, r8	@ 0001eeb0 4346
.org 0x1eeb2
	strb r0, [r3, #6]	@ 0001eeb2 9871
.org 0x1eeb4
	ldr r1, [pc, #20]	@ 0001eeb4 0549
.org 0x1eeb6
	ldr r0, [r1, #0]	@ 0001eeb6 0868
.org 0x1eeb8
	ldrh r0, [r0, #14]	@ 0001eeb8 c089
.org 0x1eeba
	cmp r0, #0	@ 0001eeba 0028
.org 0x1eebc
	beq.n 0x1eed0	@ 0001eebc 08d0
.org 0x1eebe
	movs r0, #14	@ 0001eebe 0e20
.org 0x1eec0
	strb r0, [r3, #6]	@ 0001eec0 9871
.org 0x1eec2
	movs r0, #0	@ 0001eec2 0020
.org 0x1eec4
	strb r0, [r3, #7]	@ 0001eec4 d871
.org 0x1eec6
	b.n 0x1eefe	@ 0001eec6 1ae0
.org 0x1eec8
	.byte 0x9c,0x28,0x84,0x08	@ 0001eec8 data
.org 0x1eecc
	.byte 0xe0,0xe8,0x02,0x02	@ 0001eecc data
.org 0x1eed0
	movs r4, #0	@ 0001eed0 0024
.org 0x1eed2
	ldr r6, [pc, #60]	@ 0001eed2 0f4e
.org 0x1eed4
	ldr r5, [sp, #12]	@ 0001eed4 039d
.org 0x1eed6
	ldr r1, [sp, #8]	@ 0001eed6 0299
