@ FUN_08088294  entry 0x08088294  size 94
.thumb
.org 0x88294
FUN_08088294:
	push {r4, r5, lr}	@ 00088294 30b5
.org 0x88296
	adds r4, r0, #0	@ 00088296 041c
.org 0x88298
	ldrb r0, [r4, #15]	@ 00088298 e07b
.org 0x8829a
	cmp r0, #0	@ 0008829a 0028
.org 0x8829c
	bne.n 0x882ba	@ 0008829c 0dd1
.org 0x8829e
	adds r0, r4, #0	@ 0008829e 201c
.org 0x882a0
	adds r0, #116	@ 000882a0 7430
.org 0x882a2
	ldr r1, [pc, #64]	@ 000882a2 1049
.org 0x882a4
	bl 0x5784	@ 000882a4 7df76efa
.org 0x882a8
	ldr r1, [pc, #60]	@ 000882a8 0f49
.org 0x882aa
	adds r0, r4, #0	@ 000882aa 201c
.org 0x882ac
	bl 0x1cf00	@ 000882ac 94f728fe
.org 0x882b0
	movs r0, #8	@ 000882b0 0820
.org 0x882b2
	strb r0, [r4, #18]	@ 000882b2 a074
.org 0x882b4
	ldrb r0, [r4, #15]	@ 000882b4 e07b
.org 0x882b6
	adds r0, #1	@ 000882b6 0130
.org 0x882b8
	strb r0, [r4, #15]	@ 000882b8 e073
.org 0x882ba
	adds r0, r4, #0	@ 000882ba 201c
.org 0x882bc
	bl 0x1cff0	@ 000882bc 94f798fe
.org 0x882c0
	ldrb r0, [r4, #18]	@ 000882c0 a07c
.org 0x882c2
	subs r0, #1	@ 000882c2 0138
.org 0x882c4
	strb r0, [r4, #18]	@ 000882c4 a074
.org 0x882c6
	lsls r0, r0, #24	@ 000882c6 0006
.org 0x882c8
	lsrs r5, r0, #24	@ 000882c8 050e
.org 0x882ca
	cmp r5, #0	@ 000882ca 002d
.org 0x882cc
	bne.n 0x882f8	@ 000882cc 14d1
.org 0x882ce
	ldr r0, [pc, #28]	@ 000882ce 0748
.org 0x882d0
	adds r1, r4, #0	@ 000882d0 211c
.org 0x882d2
	adds r1, #84	@ 000882d2 5431
.org 0x882d4
	bl 0x1fb14	@ 000882d4 97f71efc
.org 0x882d8
	movs r1, #128	@ 000882d8 8021
.org 0x882da
	lsls r1, r1, #7	@ 000882da c901
.org 0x882dc
	cmp r0, r1	@ 000882dc 8842
.org 0x882de
	bls.n 0x882f0	@ 000882de 07d9
.org 0x882e0
	movs r0, #8	@ 000882e0 0820
.org 0x882e2
	b.n 0x882f2	@ 000882e2 06e0
.org 0x882e4
	.byte 0x34,0xf0,0x85,0x08	@ 000882e4 data
.org 0x882e8
	.byte 0x0e,0x1d,0x00,0x00	@ 000882e8 data
.org 0x882ec
	.byte 0xf8,0xe9,0x02,0x02	@ 000882ec data
.org 0x882f0
	movs r0, #10	@ 000882f0 0a20
