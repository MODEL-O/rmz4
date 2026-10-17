@ FUN_080b8978  entry 0x080b8978  size 282
.thumb
.org 0xb8978
FUN_080b8978:
	push {r4, r5, r6, r7, lr}	@ 000b8978 f0b5
.org 0xb897a
	mov r7, sl	@ 000b897a 5746
.org 0xb897c
	mov r6, r9	@ 000b897c 4e46
.org 0xb897e
	mov r5, r8	@ 000b897e 4546
.org 0xb8980
	push {r5, r6, r7}	@ 000b8980 e0b4
.org 0xb8982
	adds r7, r0, #0	@ 000b8982 071c
.org 0xb8984
	ldrb r0, [r7, #15]	@ 000b8984 f87b
.org 0xb8986
	cmp r0, #0	@ 000b8986 0028
.org 0xb8988
	bne.n 0xb8a56	@ 000b8988 65d1
.org 0xb898a
	ldr r5, [pc, #264]	@ 000b898a 424d
.org 0xb898c
	ldr r0, [pc, #264]	@ 000b898c 4248
.org 0xb898e
	mov r9, r0	@ 000b898e 8146
.org 0xb8990
	adds r0, r5, r0	@ 000b8990 2818
.org 0xb8992
	ldr r1, [pc, #264]	@ 000b8992 4249
.org 0xb8994
	mov r8, r1	@ 000b8994 8846
.org 0xb8996
	movs r4, #182	@ 000b8996 b624
.org 0xb8998
	lsls r4, r4, #1	@ 000b8998 6400
.org 0xb899a
	adds r1, r1, r4	@ 000b899a 0919
.org 0xb899c
	ldrh r1, [r1, #0]	@ 000b899c 0988
.org 0xb899e
	ldrh r2, [r0, #6]	@ 000b899e c288
.org 0xb89a0
	lsrs r2, r2, #6	@ 000b89a0 9209
.org 0xb89a2
	subs r1, r1, r2	@ 000b89a2 891a
.org 0xb89a4
	lsls r1, r1, #5	@ 000b89a4 4901
.org 0xb89a6
	movs r2, #128	@ 000b89a6 8022
.org 0xb89a8
	lsls r2, r2, #9	@ 000b89a8 5202
.org 0xb89aa
	adds r1, r1, r2	@ 000b89aa 8918
.org 0xb89ac
	bl 0x1d30	@ 000b89ac 49f7c0f9
.org 0xb89b0
	ldr r0, [pc, #236]	@ 000b89b0 3b48
.org 0xb89b2
	adds r5, r5, r0	@ 000b89b2 2d18
.org 0xb89b4
	ldr r6, [pc, #236]	@ 000b89b4 3b4e
.org 0xb89b6
	adds r4, r6, r4	@ 000b89b6 3419
.org 0xb89b8
	ldrh r1, [r4, #0]	@ 000b89b8 2188
.org 0xb89ba
	ldrb r0, [r5, #7]	@ 000b89ba e879
.org 0xb89bc
	subs r1, r1, r0	@ 000b89bc 091a
.org 0xb89be
	lsls r1, r1, #5	@ 000b89be 4901
.org 0xb89c0
	movs r2, #128	@ 000b89c0 8022
.org 0xb89c2
	lsls r2, r2, #2	@ 000b89c2 9200
.org 0xb89c4
	mov sl, r2	@ 000b89c4 9246
.org 0xb89c6
	add r1, sl	@ 000b89c6 5144
.org 0xb89c8
	adds r0, r5, #0	@ 000b89c8 281c
.org 0xb89ca
	bl 0x2208	@ 000b89ca 49f71dfc
.org 0xb89ce
	ldr r4, [pc, #216]	@ 000b89ce 364c
.org 0xb89d0
	add r9, r4	@ 000b89d0 a144
.org 0xb89d2
	movs r5, #228	@ 000b89d2 e425
.org 0xb89d4
	lsls r5, r5, #1	@ 000b89d4 6d00
.org 0xb89d6
	add r8, r5	@ 000b89d6 a844
.org 0xb89d8
	mov r0, r8	@ 000b89d8 4046
.org 0xb89da
	ldrh r1, [r0, #0]	@ 000b89da 0188
.org 0xb89dc
	mov r2, r9	@ 000b89dc 4a46
.org 0xb89de
	ldrh r0, [r2, #6]	@ 000b89de d088
.org 0xb89e0
	lsrs r0, r0, #6	@ 000b89e0 8009
.org 0xb89e2
	subs r1, r1, r0	@ 000b89e2 091a
.org 0xb89e4
	lsls r1, r1, #5	@ 000b89e4 4901
.org 0xb89e6
	movs r0, #128	@ 000b89e6 8020
.org 0xb89e8
	lsls r0, r0, #9	@ 000b89e8 4002
.org 0xb89ea
	adds r1, r1, r0	@ 000b89ea 0918
.org 0xb89ec
	mov r0, r9	@ 000b89ec 4846
.org 0xb89ee
	bl 0x1d30	@ 000b89ee 49f79ff9
.org 0xb89f2
	ldr r1, [pc, #172]	@ 000b89f2 2b49
.org 0xb89f4
	adds r4, r4, r1	@ 000b89f4 6418
.org 0xb89f6
	adds r6, r6, r5	@ 000b89f6 7619
.org 0xb89f8
	ldrh r1, [r6, #0]	@ 000b89f8 3188
.org 0xb89fa
	ldrb r0, [r4, #7]	@ 000b89fa e079
.org 0xb89fc
	subs r1, r1, r0	@ 000b89fc 091a
.org 0xb89fe
	lsls r1, r1, #5	@ 000b89fe 4901
.org 0xb8a00
	add r1, sl	@ 000b8a00 5144
.org 0xb8a02
	adds r0, r4, #0	@ 000b8a02 201c
.org 0xb8a04
	bl 0x2208	@ 000b8a04 49f700fc
.org 0xb8a08
	adds r0, r7, #0	@ 000b8a08 381c
.org 0xb8a0a
	adds r0, #116	@ 000b8a0a 7430
.org 0xb8a0c
	ldr r1, [pc, #156]	@ 000b8a0c 2749
.org 0xb8a0e
	bl 0x5784	@ 000b8a0e 4cf7b9fe
.org 0xb8a12
	ldr r1, [pc, #156]	@ 000b8a12 2749
.org 0xb8a14
	ldr r0, [pc, #156]	@ 000b8a14 2748
.org 0xb8a16
	strh r0, [r1, #0]	@ 000b8a16 0880
.org 0xb8a18
	adds r2, r7, #0	@ 000b8a18 3a1c
.org 0xb8a1a
	adds r2, #69	@ 000b8a1a 4532
.org 0xb8a1c
	ldrb r1, [r2, #0]	@ 000b8a1c 1178
.org 0xb8a1e
	movs r0, #13	@ 000b8a1e 0d20
.org 0xb8a20
	negs r0, r0	@ 000b8a20 4042
.org 0xb8a22
	ands r0, r1	@ 000b8a22 0840
.org 0xb8a24
	movs r1, #4	@ 000b8a24 0421
.org 0xb8a26
	orrs r0, r1	@ 000b8a26 0843
.org 0xb8a28
	strb r0, [r2, #0]	@ 000b8a28 1070
.org 0xb8a2a
	adds r0, r7, #0	@ 000b8a2a 381c
.org 0xb8a2c
	bl 0x1ceec	@ 000b8a2c 64f75efa
.org 0xb8a30
	movs r1, #184	@ 000b8a30 b821
.org 0xb8a32
	lsls r1, r1, #8	@ 000b8a32 0902
.org 0xb8a34
	adds r0, r7, #0	@ 000b8a34 381c
.org 0xb8a36
	bl 0x1cf00	@ 000b8a36 64f763fa
.org 0xb8a3a
	adds r1, r7, #0	@ 000b8a3a 391c
.org 0xb8a3c
	adds r1, #37	@ 000b8a3c 2531
.org 0xb8a3e
	movs r0, #24	@ 000b8a3e 1820
.org 0xb8a40
	strb r0, [r1, #0]	@ 000b8a40 0870
.org 0xb8a42
	ldr r0, [r7, #88]	@ 000b8a42 b86d
.org 0xb8a44
	movs r2, #192	@ 000b8a44 c022
.org 0xb8a46
	lsls r2, r2, #5	@ 000b8a46 5201
.org 0xb8a48
	adds r0, r0, r2	@ 000b8a48 8018
.org 0xb8a4a
	str r0, [r7, #88]	@ 000b8a4a b865
.org 0xb8a4c
	movs r0, #16	@ 000b8a4c 1020
.org 0xb8a4e
	strb r0, [r7, #18]	@ 000b8a4e b874
.org 0xb8a50
	ldrb r0, [r7, #15]	@ 000b8a50 f87b
.org 0xb8a52
	adds r0, #1	@ 000b8a52 0130
.org 0xb8a54
	strb r0, [r7, #15]	@ 000b8a54 f873
.org 0xb8a56
	adds r0, r7, #0	@ 000b8a56 381c
.org 0xb8a58
	bl 0x1cff0	@ 000b8a58 64f7cafa
.org 0xb8a5c
	ldrb r3, [r7, #18]	@ 000b8a5c bb7c
.org 0xb8a5e
	subs r3, #1	@ 000b8a5e 013b
.org 0xb8a60
	strb r3, [r7, #18]	@ 000b8a60 bb74
.org 0xb8a62
	ldrb r2, [r7, #18]	@ 000b8a62 ba7c
.org 0xb8a64
	ldr r4, [pc, #72]	@ 000b8a64 124c
.org 0xb8a66
	movs r0, #16	@ 000b8a66 1020
.org 0xb8a68
	subs r0, r0, r2	@ 000b8a68 801a
.org 0xb8a6a
	movs r1, #31	@ 000b8a6a 1f21
.org 0xb8a6c
	ands r0, r1	@ 000b8a6c 0840
.org 0xb8a6e
	lsls r2, r2, #8	@ 000b8a6e 1202
.org 0xb8a70
	orrs r0, r2	@ 000b8a70 1043
.org 0xb8a72
	movs r1, #0	@ 000b8a72 0021
.org 0xb8a74
	strh r0, [r4, #2]	@ 000b8a74 6080
.org 0xb8a76
	lsls r3, r3, #24	@ 000b8a76 1b06
.org 0xb8a78
	cmp r3, #0	@ 000b8a78 002b
.org 0xb8a7a
	bne.n 0xb8a84	@ 000b8a7a 03d1
.org 0xb8a7c
	movs r0, #3	@ 000b8a7c 0320
.org 0xb8a7e
	strb r0, [r7, #13]	@ 000b8a7e 7873
.org 0xb8a80
	strb r1, [r7, #14]	@ 000b8a80 b973
.org 0xb8a82
	strb r1, [r7, #15]	@ 000b8a82 f973
.org 0xb8a84
	pop {r3, r4, r5}	@ 000b8a84 38bc
.org 0xb8a86
	mov r8, r3	@ 000b8a86 9846
.org 0xb8a88
	mov r9, r4	@ 000b8a88 a146
.org 0xb8a8a
	mov sl, r5	@ 000b8a8a aa46
.org 0xb8a8c
	pop {r4, r5, r6, r7}	@ 000b8a8c f0bc
.org 0xb8a8e
	pop {r0}	@ 000b8a8e 01bc
.org 0xb8a90
	bx r0	@ 000b8a90 0047
