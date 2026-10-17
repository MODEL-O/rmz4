@ FUN_0803be70  entry 0x0803be70  size 194
.thumb
.org 0x3be70
FUN_0803be70:
	push {r4, r5, lr}	@ 0003be70 30b5
.org 0x3be72
	adds r5, r0, #0	@ 0003be72 051c
.org 0x3be74
	ldr r0, [r5, #84]	@ 0003be74 686d
.org 0x3be76
	ldr r1, [r5, #92]	@ 0003be76 e96d
.org 0x3be78
	adds r0, r0, r1	@ 0003be78 4018
.org 0x3be7a
	str r0, [r5, #84]	@ 0003be7a 6865
.org 0x3be7c
	adds r0, r5, #0	@ 0003be7c 281c
.org 0x3be7e
	bl 0x3c1e4	@ 0003be7e 00f0b1f9
.org 0x3be82
	lsls r0, r0, #24	@ 0003be82 0006
.org 0x3be84
	lsrs r4, r0, #24	@ 0003be84 040e
.org 0x3be86
	cmp r4, #2	@ 0003be86 022c
.org 0x3be88
	bne.n 0x3be9c	@ 0003be88 08d1
.org 0x3be8a
	ldr r1, [pc, #12]	@ 0003be8a 0349
.org 0x3be8c
	ldrb r0, [r5, #9]	@ 0003be8c 687a
.org 0x3be8e
	lsls r0, r0, #2	@ 0003be8e 8000
.org 0x3be90
	adds r0, r0, r1	@ 0003be90 4018
.org 0x3be92
	str r4, [r5, #12]	@ 0003be92 ec60
.org 0x3be94
	b.n 0x3bf2c	@ 0003be94 4ae0
.org 0x3be96
	.byte 0x00	@ 0003be96 data
.org 0x3be97
	.byte 0x00	@ 0003be97 data
.org 0x3be98
	.byte 0xf8,0x39,0x85,0x08	@ 0003be98 data
.org 0x3be9c
	adds r0, r5, #0	@ 0003be9c 281c
.org 0x3be9e
	bl 0x3c400	@ 0003be9e 00f0affa
.org 0x3bea2
	lsls r0, r0, #24	@ 0003bea2 0006
.org 0x3bea4
	cmp r0, #0	@ 0003bea4 0028
.org 0x3bea6
	beq.n 0x3bec2	@ 0003bea6 0cd0
.org 0x3bea8
	adds r0, r5, #0	@ 0003bea8 281c
.org 0x3beaa
	adds r0, #84	@ 0003beaa 5430
.org 0x3beac
	ldrb r2, [r5, #10]	@ 0003beac aa7a
.org 0x3beae
	lsrs r2, r2, #4	@ 0003beae 1209
.org 0x3beb0
	movs r1, #1	@ 0003beb0 0121
.org 0x3beb2
	ands r2, r1	@ 0003beb2 0a40
.org 0x3beb4
	movs r1, #6	@ 0003beb4 0621
.org 0x3beb6
	bl 0xd1bcc	@ 0003beb6 95f089fe
.org 0x3beba
	movs r0, #43	@ 0003beba 2b20
.org 0x3bebc
	bl 0x2b10	@ 0003bebc c6f728fe
.org 0x3bec0
	movs r4, #1	@ 0003bec0 0124
.org 0x3bec2
	cmp r4, #0	@ 0003bec2 002c
.org 0x3bec4
	bne.n 0x3bed4	@ 0003bec4 06d1
.org 0x3bec6
	adds r0, r5, #0	@ 0003bec6 281c
.org 0x3bec8
	adds r0, #140	@ 0003bec8 8c30
.org 0x3beca
	ldr r0, [r0, #0]	@ 0003beca 0068
.org 0x3becc
	movs r1, #4	@ 0003becc 0421
.org 0x3bece
	ands r0, r1	@ 0003bece 0840
.org 0x3bed0
	cmp r0, #0	@ 0003bed0 0028
.org 0x3bed2
	beq.n 0x3bf32	@ 0003bed2 2ed0
.org 0x3bed4
	adds r4, r5, #0	@ 0003bed4 2c1c
.org 0x3bed6
	adds r4, #180	@ 0003bed6 b434
.org 0x3bed8
	ldr r0, [r4, #0]	@ 0003bed8 2068
.org 0x3beda
	adds r1, r5, #0	@ 0003beda 291c
.org 0x3bedc
	movs r2, #0	@ 0003bedc 0022
.org 0x3bede
	movs r3, #0	@ 0003bede 0023
.org 0x3bee0
	bl 0x4bc88	@ 0003bee0 0ff0d2fe
.org 0x3bee4
	ldr r0, [r4, #0]	@ 0003bee4 2068
.org 0x3bee6
	adds r1, r5, #0	@ 0003bee6 291c
.org 0x3bee8
	movs r2, #0	@ 0003bee8 0022
.org 0x3beea
	movs r3, #42	@ 0003beea 2a23
.org 0x3beec
	bl 0x4bc88	@ 0003beec 0ff0ccfe
.org 0x3bef0
	ldr r0, [r4, #0]	@ 0003bef0 2068
.org 0x3bef2
	adds r1, r5, #0	@ 0003bef2 291c
.org 0x3bef4
	movs r2, #0	@ 0003bef4 0022
.org 0x3bef6
	movs r3, #85	@ 0003bef6 5523
.org 0x3bef8
	bl 0x4bc88	@ 0003bef8 0ff0c6fe
.org 0x3befc
	ldr r0, [r4, #0]	@ 0003befc 2068
.org 0x3befe
	adds r1, r5, #0	@ 0003befe 291c
.org 0x3bf00
	movs r2, #0	@ 0003bf00 0022
.org 0x3bf02
	movs r3, #128	@ 0003bf02 8023
.org 0x3bf04
	bl 0x4bc88	@ 0003bf04 0ff0c0fe
.org 0x3bf08
	ldr r0, [r4, #0]	@ 0003bf08 2068
.org 0x3bf0a
	adds r1, r5, #0	@ 0003bf0a 291c
.org 0x3bf0c
	movs r2, #0	@ 0003bf0c 0022
.org 0x3bf0e
	movs r3, #170	@ 0003bf0e aa23
.org 0x3bf10
	bl 0x4bc88	@ 0003bf10 0ff0bafe
.org 0x3bf14
	ldr r0, [r4, #0]	@ 0003bf14 2068
.org 0x3bf16
	adds r1, r5, #0	@ 0003bf16 291c
.org 0x3bf18
	movs r2, #0	@ 0003bf18 0022
.org 0x3bf1a
	movs r3, #213	@ 0003bf1a d523
.org 0x3bf1c
	bl 0x4bc88	@ 0003bf1c 0ff0b4fe
.org 0x3bf20
	ldr r1, [pc, #20]	@ 0003bf20 0549
.org 0x3bf22
	ldrb r0, [r5, #9]	@ 0003bf22 687a
.org 0x3bf24
	lsls r0, r0, #2	@ 0003bf24 8000
.org 0x3bf26
	adds r0, r0, r1	@ 0003bf26 4018
.org 0x3bf28
	movs r1, #2	@ 0003bf28 0221
.org 0x3bf2a
	str r1, [r5, #12]	@ 0003bf2a e960
.org 0x3bf2c
	ldr r0, [r0, #0]	@ 0003bf2c 0068
.org 0x3bf2e
	ldr r0, [r0, #8]	@ 0003bf2e 8068
.org 0x3bf30
	str r0, [r5, #20]	@ 0003bf30 6861
