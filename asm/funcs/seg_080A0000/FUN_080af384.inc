@ FUN_080af384  entry 0x080af384  size 128
.thumb
.org 0xaf384
FUN_080af384:
	push {r4, lr}	@ 000af384 10b5
.org 0xaf386
	adds r4, r0, #0	@ 000af386 041c
.org 0xaf388
	ldrb r0, [r4, #17]	@ 000af388 607c
.org 0xaf38a
	cmp r0, #0	@ 000af38a 0028
.org 0xaf38c
	bne.n 0xaf3bc	@ 000af38c 16d1
.org 0xaf38e
	adds r0, r4, #0	@ 000af38e 201c
.org 0xaf390
	adds r0, #140	@ 000af390 8c30
.org 0xaf392
	ldr r0, [r0, #0]	@ 000af392 0068
.org 0xaf394
	movs r1, #128	@ 000af394 8021
.org 0xaf396
	lsls r1, r1, #2	@ 000af396 8900
.org 0xaf398
	ands r0, r1	@ 000af398 0840
.org 0xaf39a
	cmp r0, #0	@ 000af39a 0028
.org 0xaf39c
	beq.n 0xaf3bc	@ 000af39c 0ed0
.org 0xaf39e
	ldr r1, [pc, #24]	@ 000af39e 0649
.org 0xaf3a0
	ldrb r0, [r4, #9]	@ 000af3a0 607a
.org 0xaf3a2
	lsls r0, r0, #2	@ 000af3a2 8000
.org 0xaf3a4
	adds r0, r0, r1	@ 000af3a4 4018
.org 0xaf3a6
	movs r1, #2	@ 000af3a6 0221
.org 0xaf3a8
	str r1, [r4, #12]	@ 000af3a8 e160
.org 0xaf3aa
	ldr r0, [r0, #0]	@ 000af3aa 0068
.org 0xaf3ac
	ldr r0, [r0, #8]	@ 000af3ac 8068
.org 0xaf3ae
	str r0, [r4, #20]	@ 000af3ae 6061
.org 0xaf3b0
	adds r0, r4, #0	@ 000af3b0 201c
.org 0xaf3b2
	bl 0xaf40c	@ 000af3b2 00f02bf8
.org 0xaf3b6
	b.n 0xaf406	@ 000af3b6 26e0
.org 0xaf3b8
	.byte 0x40,0xdb,0x85,0x08	@ 000af3b8 data
.org 0xaf3bc
	adds r0, r4, #0	@ 000af3bc 201c
.org 0xaf3be
	bl 0xaf7c0	@ 000af3be 00f0fff9
.org 0xaf3c2
	adds r0, r4, #0	@ 000af3c2 201c
.org 0xaf3c4
	adds r0, #192	@ 000af3c4 c030
.org 0xaf3c6
	ldr r0, [r0, #0]	@ 000af3c6 0068
.org 0xaf3c8
	cmp r0, #0	@ 000af3c8 0028
.org 0xaf3ca
	bne.n 0xaf3fa	@ 000af3ca 16d1
.org 0xaf3cc
	adds r0, r4, #0	@ 000af3cc 201c
.org 0xaf3ce
	adds r0, #182	@ 000af3ce b630
.org 0xaf3d0
	ldrb r0, [r0, #0]	@ 000af3d0 0078
.org 0xaf3d2
	cmp r0, #1	@ 000af3d2 0128
.org 0xaf3d4
	bne.n 0xaf3ec	@ 000af3d4 0ad1
.org 0xaf3d6
	ldr r0, [pc, #16]	@ 000af3d6 0448
.org 0xaf3d8
	ldrb r1, [r4, #13]	@ 000af3d8 617b
.org 0xaf3da
	lsls r1, r1, #2	@ 000af3da 8900
.org 0xaf3dc
	adds r1, r1, r0	@ 000af3dc 0918
.org 0xaf3de
	ldr r1, [r1, #0]	@ 000af3de 0968
.org 0xaf3e0
	adds r0, r4, #0	@ 000af3e0 201c
.org 0xaf3e2
	bl 0x128f80	@ 000af3e2 79f0cdfd
.org 0xaf3e6
	b.n 0xaf3f2	@ 000af3e6 04e0
.org 0xaf3e8
	.byte 0x40,0x31,0x86,0x08	@ 000af3e8 data
.org 0xaf3ec
	adds r0, r4, #0	@ 000af3ec 201c
.org 0xaf3ee
	bl 0xaf864	@ 000af3ee 00f039fa
.org 0xaf3f2
	adds r0, r4, #0	@ 000af3f2 201c
.org 0xaf3f4
	bl 0x1cff0	@ 000af3f4 6df7fcfd
.org 0xaf3f8
	b.n 0xaf406	@ 000af3f8 05e0
.org 0xaf3fa
	adds r0, r4, #0	@ 000af3fa 201c
.org 0xaf3fc
	bl 0xaf814	@ 000af3fc 00f00afa
.org 0xaf400
	adds r0, r4, #0	@ 000af400 201c
.org 0xaf402
	bl 0x1d1f4	@ 000af402 6df7f7fe
