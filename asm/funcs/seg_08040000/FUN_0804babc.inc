@ FUN_0804babc  entry 0x0804babc  size 218
.thumb
.org 0x4babc
FUN_0804babc:
	push {r4, r5, lr}	@ 0004babc 30b5
.org 0x4babe
	adds r5, r0, #0	@ 0004babe 051c
.org 0x4bac0
	ldrb r0, [r5, #13]	@ 0004bac0 687b
.org 0x4bac2
	cmp r0, #0	@ 0004bac2 0028
.org 0x4bac4
	bne.n 0x4bafe	@ 0004bac4 1bd1
.org 0x4bac6
	ldrb r0, [r5, #18]	@ 0004bac6 a87c
.org 0x4bac8
	subs r0, #1	@ 0004bac8 0138
.org 0x4baca
	strb r0, [r5, #18]	@ 0004baca a874
.org 0x4bacc
	lsls r0, r0, #24	@ 0004bacc 0006
.org 0x4bace
	lsrs r0, r0, #24	@ 0004bace 000e
.org 0x4bad0
	cmp r0, #255	@ 0004bad0 ff28
.org 0x4bad2
	bne.n 0x4bafe	@ 0004bad2 14d1
.org 0x4bad4
	ldrb r0, [r5, #10]	@ 0004bad4 a87a
.org 0x4bad6
	movs r1, #1	@ 0004bad6 0121
.org 0x4bad8
	orrs r0, r1	@ 0004bad8 0843
.org 0x4bada
	movs r1, #4	@ 0004bada 0421
.org 0x4badc
	orrs r0, r1	@ 0004badc 0843
.org 0x4bade
	strb r0, [r5, #10]	@ 0004bade a872
.org 0x4bae0
	adds r4, r5, #0	@ 0004bae0 2c1c
.org 0x4bae2
	adds r4, #116	@ 0004bae2 7434
.org 0x4bae4
	ldr r1, [pc, #56]	@ 0004bae4 0e49
.org 0x4bae6
	adds r2, r5, #0	@ 0004bae6 2a1c
.org 0x4bae8
	adds r2, #84	@ 0004bae8 5432
.org 0x4baea
	adds r0, r4, #0	@ 0004baea 201c
.org 0x4baec
	movs r3, #8	@ 0004baec 0823
.org 0x4baee
	bl 0x5760	@ 0004baee b9f737fe
.org 0x4baf2
	str r5, [r4, #44]	@ 0004baf2 e562
.org 0x4baf4
	ldr r0, [pc, #44]	@ 0004baf4 0b48
.org 0x4baf6
	str r0, [r4, #36]	@ 0004baf6 6062
.org 0x4baf8
	ldrb r0, [r5, #13]	@ 0004baf8 687b
.org 0x4bafa
	adds r0, #1	@ 0004bafa 0130
.org 0x4bafc
	strb r0, [r5, #13]	@ 0004bafc 6873
.org 0x4bafe
	ldr r0, [r5, #84]	@ 0004bafe 686d
.org 0x4bb00
	ldr r1, [r5, #92]	@ 0004bb00 e96d
.org 0x4bb02
	adds r0, r0, r1	@ 0004bb02 4018
.org 0x4bb04
	str r0, [r5, #84]	@ 0004bb04 6865
.org 0x4bb06
	ldr r1, [r5, #88]	@ 0004bb06 a96d
.org 0x4bb08
	bl 0x8534	@ 0004bb08 bcf714fd
.org 0x4bb0c
	adds r2, r0, #0	@ 0004bb0c 021c
.org 0x4bb0e
	ldr r0, [r5, #88]	@ 0004bb0e a86d
.org 0x4bb10
	subs r1, r0, r2	@ 0004bb10 811a
.org 0x4bb12
	cmp r1, #0	@ 0004bb12 0029
.org 0x4bb14
	blt.n 0x4bb2c	@ 0004bb14 0adb
.org 0x4bb16
	ldr r0, [pc, #16]	@ 0004bb16 0448
.org 0x4bb18
	cmp r1, r0	@ 0004bb18 8142
.org 0x4bb1a
	ble.n 0x4bb34	@ 0004bb1a 0bdd
.org 0x4bb1c
	b.n 0x4bb64	@ 0004bb1c 22e0
.org 0x4bb1e
	.byte 0x00	@ 0004bb1e data
.org 0x4bb1f
	.byte 0x00	@ 0004bb1f data
.org 0x4bb20
	.byte 0x54,0x76,0x85,0x08	@ 0004bb20 data
.org 0x4bb24
	.byte 0xed,0xbb,0x04,0x08	@ 0004bb24 data
.org 0x4bb28
	.byte 0xff,0x0b,0x00,0x00	@ 0004bb28 data
.org 0x4bb2c
	subs r1, r2, r0	@ 0004bb2c 111a
.org 0x4bb2e
	ldr r0, [pc, #44]	@ 0004bb2e 0b48
.org 0x4bb30
	cmp r1, r0	@ 0004bb30 8142
.org 0x4bb32
	bgt.n 0x4bb64	@ 0004bb32 17dc
.org 0x4bb34
	str r2, [r5, #88]	@ 0004bb34 aa65
.org 0x4bb36
	ldr r0, [pc, #40]	@ 0004bb36 0a48
.org 0x4bb38
	adds r1, r5, #0	@ 0004bb38 291c
.org 0x4bb3a
	adds r1, #84	@ 0004bb3a 5431
.org 0x4bb3c
	bl 0x1fb14	@ 0004bb3c d3f7eaff
.org 0x4bb40
	movs r1, #128	@ 0004bb40 8021
.org 0x4bb42
	lsls r1, r1, #7	@ 0004bb42 c901
.org 0x4bb44
	adds r2, r5, #0	@ 0004bb44 2a1c
.org 0x4bb46
	adds r2, #140	@ 0004bb46 8c32
.org 0x4bb48
	cmp r0, r1	@ 0004bb48 8842
.org 0x4bb4a
	bhi.n 0x4bb84	@ 0004bb4a 1bd8
.org 0x4bb4c
	ldr r0, [r2, #0]	@ 0004bb4c 1068
.org 0x4bb4e
	movs r1, #128	@ 0004bb4e 8021
.org 0x4bb50
	lsls r1, r1, #5	@ 0004bb50 4901
.org 0x4bb52
	ands r0, r1	@ 0004bb52 0840
.org 0x4bb54
	cmp r0, #0	@ 0004bb54 0028
.org 0x4bb56
	beq.n 0x4bbae	@ 0004bb56 2ad0
.org 0x4bb58
	b.n 0x4bb84	@ 0004bb58 14e0
.org 0x4bb5a
	.byte 0x00	@ 0004bb5a data
.org 0x4bb5b
	.byte 0x00	@ 0004bb5b data
.org 0x4bb5c
	.byte 0xff,0x0b,0x00,0x00	@ 0004bb5c data
.org 0x4bb60
	.byte 0xf8,0xe9,0x02,0x02	@ 0004bb60 data
.org 0x4bb64
	ldr r1, [pc, #24]	@ 0004bb64 0649
.org 0x4bb66
	ldrb r0, [r5, #9]	@ 0004bb66 687a
.org 0x4bb68
	lsls r0, r0, #2	@ 0004bb68 8000
.org 0x4bb6a
	adds r0, r0, r1	@ 0004bb6a 4018
.org 0x4bb6c
	movs r1, #2	@ 0004bb6c 0221
.org 0x4bb6e
	str r1, [r5, #12]	@ 0004bb6e e960
.org 0x4bb70
	ldr r0, [r0, #0]	@ 0004bb70 0068
.org 0x4bb72
	ldr r0, [r0, #8]	@ 0004bb72 8068
.org 0x4bb74
	str r0, [r5, #20]	@ 0004bb74 6861
.org 0x4bb76
	adds r0, r5, #0	@ 0004bb76 281c
.org 0x4bb78
	bl 0x4bbb8	@ 0004bb78 00f01ef8
.org 0x4bb7c
	b.n 0x4bbae	@ 0004bb7c 17e0
.org 0x4bb7e
	.byte 0x00	@ 0004bb7e data
.org 0x4bb7f
	.byte 0x00	@ 0004bb7f data
.org 0x4bb80
	.byte 0xf8,0x39,0x85,0x08	@ 0004bb80 data
.org 0x4bb84
	ldr r0, [r2, #0]	@ 0004bb84 1068
.org 0x4bb86
	movs r1, #128	@ 0004bb86 8021
.org 0x4bb88
	lsls r1, r1, #5	@ 0004bb88 4901
.org 0x4bb8a
	ands r0, r1	@ 0004bb8a 0840
.org 0x4bb8c
	cmp r0, #0	@ 0004bb8c 0028
.org 0x4bb8e
	beq.n 0x4bb96	@ 0004bb8e 02d0
.org 0x4bb90
	movs r0, #43	@ 0004bb90 2b20
.org 0x4bb92
	bl 0x2b10	@ 0004bb92 b6f7bdff
