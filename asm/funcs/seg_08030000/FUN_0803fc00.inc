@ FUN_0803fc00  entry 0x0803fc00  size 222
.thumb
.org 0x3fc00
FUN_0803fc00:
	push {r4, r5, r6, lr}	@ 0003fc00 70b5
.org 0x3fc02
	adds r5, r0, #0	@ 0003fc02 051c
.org 0x3fc04
	ldr r1, [pc, #104]	@ 0003fc04 1a49
.org 0x3fc06
	ldrb r0, [r5, #9]	@ 0003fc06 687a
.org 0x3fc08
	lsls r0, r0, #2	@ 0003fc08 8000
.org 0x3fc0a
	adds r0, r0, r1	@ 0003fc0a 4018
.org 0x3fc0c
	movs r1, #1	@ 0003fc0c 0121
.org 0x3fc0e
	str r1, [r5, #12]	@ 0003fc0e e960
.org 0x3fc10
	ldr r0, [r0, #0]	@ 0003fc10 0068
.org 0x3fc12
	ldr r0, [r0, #4]	@ 0003fc12 4068
.org 0x3fc14
	str r0, [r5, #20]	@ 0003fc14 6861
.org 0x3fc16
	adds r0, r5, #0	@ 0003fc16 281c
.org 0x3fc18
	bl 0x1cc9c	@ 0003fc18 ddf740f8
.org 0x3fc1c
	adds r0, r5, #0	@ 0003fc1c 281c
.org 0x3fc1e
	bl 0x1ceec	@ 0003fc1e ddf765f9
.org 0x3fc22
	ldrb r1, [r5, #10]	@ 0003fc22 a97a
.org 0x3fc24
	movs r0, #1	@ 0003fc24 0120
.org 0x3fc26
	movs r4, #0	@ 0003fc26 0024
.org 0x3fc28
	movs r6, #0	@ 0003fc28 0026
.org 0x3fc2a
	orrs r0, r1	@ 0003fc2a 0843
.org 0x3fc2c
	movs r1, #2	@ 0003fc2c 0221
.org 0x3fc2e
	orrs r0, r1	@ 0003fc2e 0843
.org 0x3fc30
	strb r0, [r5, #10]	@ 0003fc30 a872
.org 0x3fc32
	ldrb r0, [r5, #16]	@ 0003fc32 287c
.org 0x3fc34
	cmp r0, #0	@ 0003fc34 0028
.org 0x3fc36
	bne.n 0x3fc88	@ 0003fc36 27d1
.org 0x3fc38
	ldr r1, [pc, #56]	@ 0003fc38 0e49
.org 0x3fc3a
	adds r0, r5, #0	@ 0003fc3a 281c
.org 0x3fc3c
	bl 0x1cf00	@ 0003fc3c ddf760f9
.org 0x3fc40
	ldrb r0, [r5, #10]	@ 0003fc40 a87a
.org 0x3fc42
	movs r1, #4	@ 0003fc42 0421
.org 0x3fc44
	orrs r0, r1	@ 0003fc44 0843
.org 0x3fc46
	strb r0, [r5, #10]	@ 0003fc46 a872
.org 0x3fc48
	adds r4, r5, #0	@ 0003fc48 2c1c
.org 0x3fc4a
	adds r4, #116	@ 0003fc4a 7434
.org 0x3fc4c
	ldr r1, [pc, #40]	@ 0003fc4c 0a49
.org 0x3fc4e
	adds r2, r5, #0	@ 0003fc4e 2a1c
.org 0x3fc50
	adds r2, #84	@ 0003fc50 5432
.org 0x3fc52
	adds r0, r4, #0	@ 0003fc52 201c
.org 0x3fc54
	movs r3, #8	@ 0003fc54 0823
.org 0x3fc56
	bl 0x5760	@ 0003fc56 c5f783fd
.org 0x3fc5a
	str r5, [r4, #44]	@ 0003fc5a e562
.org 0x3fc5c
	str r6, [r4, #36]	@ 0003fc5c 6662
.org 0x3fc5e
	ldrb r1, [r5, #10]	@ 0003fc5e a97a
.org 0x3fc60
	movs r0, #16	@ 0003fc60 1020
.org 0x3fc62
	ands r0, r1	@ 0003fc62 0840
.org 0x3fc64
	cmp r0, #0	@ 0003fc64 0028
.org 0x3fc66
	beq.n 0x3fc7c	@ 0003fc66 09d0
.org 0x3fc68
	movs r0, #176	@ 0003fc68 b020
.org 0x3fc6a
	lsls r0, r0, #2	@ 0003fc6a 8000
.org 0x3fc6c
	b.n 0x3fc7e	@ 0003fc6c 07e0
.org 0x3fc6e
	.byte 0x00	@ 0003fc6e data
.org 0x3fc6f
	.byte 0x00	@ 0003fc6f data
.org 0x3fc70
	.byte 0xf8,0x39,0x85,0x08	@ 0003fc70 data
.org 0x3fc74
	.byte 0x09,0x80,0x00,0x00	@ 0003fc74 data
.org 0x3fc78
	.byte 0x4c,0x54,0x85,0x08	@ 0003fc78 data
.org 0x3fc7c
	ldr r0, [pc, #4]	@ 0003fc7c 0148
.org 0x3fc7e
	str r0, [r5, #92]	@ 0003fc7e e865
.org 0x3fc80
	movs r0, #32	@ 0003fc80 2020
.org 0x3fc82
	b.n 0x3fce6	@ 0003fc82 30e0
.org 0x3fc84
	.byte 0x40,0xfd,0xff,0xff	@ 0003fc84 data
.org 0x3fc88
	ldr r1, [pc, #52]	@ 0003fc88 0d49
.org 0x3fc8a
	adds r0, r5, #0	@ 0003fc8a 281c
.org 0x3fc8c
	bl 0x1cf00	@ 0003fc8c ddf738f9
.org 0x3fc90
	ldrb r0, [r5, #10]	@ 0003fc90 a87a
.org 0x3fc92
	movs r1, #4	@ 0003fc92 0421
.org 0x3fc94
	orrs r0, r1	@ 0003fc94 0843
.org 0x3fc96
	strb r0, [r5, #10]	@ 0003fc96 a872
.org 0x3fc98
	adds r4, r5, #0	@ 0003fc98 2c1c
.org 0x3fc9a
	adds r4, #116	@ 0003fc9a 7434
.org 0x3fc9c
	ldr r1, [pc, #36]	@ 0003fc9c 0949
.org 0x3fc9e
	adds r2, r5, #0	@ 0003fc9e 2a1c
.org 0x3fca0
	adds r2, #84	@ 0003fca0 5432
.org 0x3fca2
	adds r0, r4, #0	@ 0003fca2 201c
.org 0x3fca4
	movs r3, #8	@ 0003fca4 0823
.org 0x3fca6
	bl 0x5760	@ 0003fca6 c5f75bfd
.org 0x3fcaa
	str r5, [r4, #44]	@ 0003fcaa e562
.org 0x3fcac
	str r6, [r4, #36]	@ 0003fcac 6662
.org 0x3fcae
	ldrb r1, [r5, #10]	@ 0003fcae a97a
.org 0x3fcb0
	movs r0, #16	@ 0003fcb0 1020
.org 0x3fcb2
	ands r0, r1	@ 0003fcb2 0840
.org 0x3fcb4
	cmp r0, #0	@ 0003fcb4 0028
.org 0x3fcb6
	beq.n 0x3fcc8	@ 0003fcb6 07d0
.org 0x3fcb8
	movs r0, #128	@ 0003fcb8 8020
.org 0x3fcba
	lsls r0, r0, #2	@ 0003fcba 8000
.org 0x3fcbc
	b.n 0x3fcca	@ 0003fcbc 05e0
.org 0x3fcbe
	.byte 0x00	@ 0003fcbe data
.org 0x3fcbf
	.byte 0x00	@ 0003fcbf data
.org 0x3fcc0
	.byte 0x0a,0x80,0x00,0x00	@ 0003fcc0 data
.org 0x3fcc4
	.byte 0x7c,0x54,0x85,0x08	@ 0003fcc4 data
.org 0x3fcc8
	ldr r0, [pc, #16]	@ 0003fcc8 0448
.org 0x3fcca
	str r0, [r5, #92]	@ 0003fcca e865
.org 0x3fccc
	ldrb r1, [r5, #10]	@ 0003fccc a97a
.org 0x3fcce
	movs r0, #32	@ 0003fcce 2020
.org 0x3fcd0
	ands r0, r1	@ 0003fcd0 0840
.org 0x3fcd2
	cmp r0, #0	@ 0003fcd2 0028
.org 0x3fcd4
	beq.n 0x3fce0	@ 0003fcd4 04d0
.org 0x3fcd6
	movs r0, #128	@ 0003fcd6 8020
.org 0x3fcd8
	lsls r0, r0, #2	@ 0003fcd8 8000
.org 0x3fcda
	b.n 0x3fce2	@ 0003fcda 02e0
.org 0x3fcdc
	.byte 0x00,0xfe,0xff,0xff	@ 0003fcdc data
