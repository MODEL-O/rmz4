@ FUN_080f99cc  entry 0x080f99cc  size 144
.thumb
.org 0xf99cc
FUN_080f99cc:
	push {r4, r5, r6, r7, lr}	@ 000f99cc f0b5
.org 0xf99ce
	adds r7, r0, #0	@ 000f99ce 071c
.org 0xf99d0
	ldrb r0, [r7, #15]	@ 000f99d0 f87b
.org 0xf99d2
	cmp r0, #0	@ 000f99d2 0028
.org 0xf99d4
	bne.n 0xf99e6	@ 000f99d4 07d1
.org 0xf99d6
	movs r1, #129	@ 000f99d6 8121
.org 0xf99d8
	lsls r1, r1, #8	@ 000f99d8 0902
.org 0xf99da
	adds r0, r7, #0	@ 000f99da 381c
.org 0xf99dc
	bl 0x1cf00	@ 000f99dc 23f790fa
.org 0xf99e0
	ldrb r0, [r7, #15]	@ 000f99e0 f87b
.org 0xf99e2
	adds r0, #1	@ 000f99e2 0130
.org 0xf99e4
	strb r0, [r7, #15]	@ 000f99e4 f873
.org 0xf99e6
	adds r0, r7, #0	@ 000f99e6 381c
.org 0xf99e8
	bl 0x1cff0	@ 000f99e8 23f702fb
.org 0xf99ec
	adds r0, r7, #0	@ 000f99ec 381c
.org 0xf99ee
	adds r0, #116	@ 000f99ee 7430
.org 0xf99f0
	ldr r4, [pc, #104]	@ 000f99f0 1a4c
.org 0xf99f2
	ldr r2, [pc, #108]	@ 000f99f2 1b4a
.org 0xf99f4
	ldrb r3, [r7, #30]	@ 000f99f4 bb7f
.org 0xf99f6
	lsls r3, r3, #8	@ 000f99f6 1b02
.org 0xf99f8
	adds r1, r7, #0	@ 000f99f8 391c
.org 0xf99fa
	adds r1, #112	@ 000f99fa 7031
.org 0xf99fc
	ldrb r1, [r1, #0]	@ 000f99fc 0978
.org 0xf99fe
	orrs r3, r1	@ 000f99fe 0b43
.org 0xf9a00
	ldr r5, [pc, #96]	@ 000f9a00 184d
.org 0xf9a02
	adds r1, r3, r5	@ 000f9a02 5919
.org 0xf9a04
	lsls r1, r1, #1	@ 000f9a04 4900
.org 0xf9a06
	adds r1, r1, r2	@ 000f9a06 8918
.org 0xf9a08
	ldrh r1, [r1, #0]	@ 000f9a08 0988
.org 0xf9a0a
	lsls r1, r1, #2	@ 000f9a0a 8900
.org 0xf9a0c
	adds r1, r1, r4	@ 000f9a0c 0919
.org 0xf9a0e
	adds r2, r7, #0	@ 000f9a0e 3a1c
.org 0xf9a10
	adds r2, #113	@ 000f9a10 7132
.org 0xf9a12
	movs r6, #0	@ 000f9a12 0026
.org 0xf9a14
	ldrsb r6, [r2, r6]	@ 000f9a14 9657
.org 0xf9a16
	ldr r1, [r1, #0]	@ 000f9a16 0968
.org 0xf9a18
	lsls r4, r6, #2	@ 000f9a18 b400
.org 0xf9a1a
	adds r4, r4, r1	@ 000f9a1a 6418
.org 0xf9a1c
	ldr r5, [pc, #72]	@ 000f9a1c 124d
.org 0xf9a1e
	ldr r2, [r7, #44]	@ 000f9a1e fa6a
.org 0xf9a20
	negs r1, r2	@ 000f9a20 5142
.org 0xf9a22
	orrs r1, r2	@ 000f9a22 1143
.org 0xf9a24
	asrs r1, r1, #31	@ 000f9a24 c917
.org 0xf9a26
	movs r2, #4	@ 000f9a26 0422
.org 0xf9a28
	ands r1, r2	@ 000f9a28 1140
.org 0xf9a2a
	adds r1, r1, r5	@ 000f9a2a 4919
.org 0xf9a2c
	ldr r1, [r1, #0]	@ 000f9a2c 0968
.org 0xf9a2e
	lsls r3, r3, #2	@ 000f9a2e 9b00
.org 0xf9a30
	adds r3, r3, r1	@ 000f9a30 5b18
.org 0xf9a32
	ldr r1, [pc, #56]	@ 000f9a32 0e49
.org 0xf9a34
	adds r3, r3, r1	@ 000f9a34 5b18
.org 0xf9a36
	ldr r1, [r3, #0]	@ 000f9a36 1968
.org 0xf9a38
	adds r1, r1, r6	@ 000f9a38 8919
.org 0xf9a3a
	ldrb r1, [r1, #0]	@ 000f9a3a 0978
.org 0xf9a3c
	lsls r2, r1, #1	@ 000f9a3c 4a00
.org 0xf9a3e
	adds r2, r2, r1	@ 000f9a3e 5218
.org 0xf9a40
	lsls r2, r2, #3	@ 000f9a40 d200
.org 0xf9a42
	ldr r1, [r4, #0]	@ 000f9a42 2168
.org 0xf9a44
	adds r1, r1, r2	@ 000f9a44 8918
.org 0xf9a46
	bl 0x5784	@ 000f9a46 0bf79dfe
.org 0xf9a4a
	ldr r0, [r7, #44]	@ 000f9a4a f86a
.org 0xf9a4c
	cmp r0, #0	@ 000f9a4c 0028
.org 0xf9a4e
	bne.n 0xf9a56	@ 000f9a4e 02d1
.org 0xf9a50
	strb r0, [r7, #13]	@ 000f9a50 7873
.org 0xf9a52
	strb r0, [r7, #14]	@ 000f9a52 b873
.org 0xf9a54
	strb r0, [r7, #15]	@ 000f9a54 f873
.org 0xf9a56
	pop {r4, r5, r6, r7}	@ 000f9a56 f0bc
.org 0xf9a58
	pop {r0}	@ 000f9a58 01bc
.org 0xf9a5a
	bx r0	@ 000f9a5a 0047
