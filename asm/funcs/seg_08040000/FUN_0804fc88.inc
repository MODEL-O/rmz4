@ FUN_0804fc88  entry 0x0804fc88  size 134
.thumb
.org 0x4fc88
FUN_0804fc88:
	push {r4, r5, lr}	@ 0004fc88 30b5
.org 0x4fc8a
	adds r4, r0, #0	@ 0004fc8a 041c
.org 0x4fc8c
	lsls r1, r1, #24	@ 0004fc8c 0906
.org 0x4fc8e
	lsrs r5, r1, #24	@ 0004fc8e 0d0e
.org 0x4fc90
	ldr r0, [pc, #64]	@ 0004fc90 1048
.org 0x4fc92
	ldr r0, [r0, #0]	@ 0004fc92 0068
.org 0x4fc94
	bl 0x5500	@ 0004fc94 b5f734fc
.org 0x4fc98
	adds r2, r0, #0	@ 0004fc98 021c
.org 0x4fc9a
	cmp r2, #0	@ 0004fc9a 002a
.org 0x4fc9c
	beq.n 0x4fd18	@ 0004fc9c 3cd0
.org 0x4fc9e
	adds r0, r4, #0	@ 0004fc9e 201c
.org 0x4fca0
	adds r0, #248	@ 0004fca0 f830
.org 0x4fca2
	ldrb r0, [r0, #0]	@ 0004fca2 0078
.org 0x4fca4
	cmp r0, #2	@ 0004fca4 0228
.org 0x4fca6
	bne.n 0x4fce4	@ 0004fca6 1dd1
.org 0x4fca8
	ldr r0, [pc, #44]	@ 0004fca8 0b48
.org 0x4fcaa
	movs r1, #59	@ 0004fcaa 3b21
.org 0x4fcac
	strb r1, [r2, #9]	@ 0004fcac 5172
.org 0x4fcae
	adds r0, #236	@ 0004fcae ec30
.org 0x4fcb0
	ldr r0, [r0, #0]	@ 0004fcb0 0068
.org 0x4fcb2
	ldr r0, [r0, #0]	@ 0004fcb2 0068
.org 0x4fcb4
	str r0, [r2, #20]	@ 0004fcb4 5061
.org 0x4fcb6
	ldrb r1, [r2, #11]	@ 0004fcb6 d17a
.org 0x4fcb8
	movs r0, #191	@ 0004fcb8 bf20
.org 0x4fcba
	ands r0, r1	@ 0004fcba 0840
.org 0x4fcbc
	strb r0, [r2, #11]	@ 0004fcbc d072
.org 0x4fcbe
	adds r1, r2, #0	@ 0004fcbe 111c
.org 0x4fcc0
	adds r1, #37	@ 0004fcc0 2531
.org 0x4fcc2
	movs r0, #16	@ 0004fcc2 1020
.org 0x4fcc4
	strb r0, [r1, #0]	@ 0004fcc4 0870
.org 0x4fcc6
	ldr r0, [pc, #20]	@ 0004fcc6 0548
.org 0x4fcc8
	ldrh r0, [r0, #0]	@ 0004fcc8 0088
.org 0x4fcca
	strh r0, [r2, #32]	@ 0004fcca 1084
.org 0x4fccc
	ldr r0, [pc, #16]	@ 0004fccc 0448
.org 0x4fcce
	ldrb r0, [r0, #0]	@ 0004fcce 0078
.org 0x4fcd0
	b.n 0x4fd0c	@ 0004fcd0 1ce0
.org 0x4fcd2
	.byte 0x00	@ 0004fcd2 data
.org 0x4fcd3
	.byte 0x00	@ 0004fcd3 data
.org 0x4fcd4
	.byte 0x88,0xed,0x02,0x02	@ 0004fcd4 data
.org 0x4fcd8
	.byte 0xf8,0x39,0x85,0x08	@ 0004fcd8 data
.org 0x4fcdc
	.byte 0xfc,0x36,0x85,0x08	@ 0004fcdc data
.org 0x4fce0
	.byte 0x04,0x37,0x85,0x08	@ 0004fce0 data
.org 0x4fce4
	ldr r0, [pc, #56]	@ 0004fce4 0e48
.org 0x4fce6
	movs r1, #59	@ 0004fce6 3b21
.org 0x4fce8
	strb r1, [r2, #9]	@ 0004fce8 5172
.org 0x4fcea
	adds r0, #236	@ 0004fcea ec30
.org 0x4fcec
	ldr r0, [r0, #0]	@ 0004fcec 0068
.org 0x4fcee
	ldr r0, [r0, #0]	@ 0004fcee 0068
.org 0x4fcf0
	str r0, [r2, #20]	@ 0004fcf0 5061
.org 0x4fcf2
	ldrb r1, [r2, #11]	@ 0004fcf2 d17a
.org 0x4fcf4
	movs r0, #191	@ 0004fcf4 bf20
.org 0x4fcf6
	ands r0, r1	@ 0004fcf6 0840
.org 0x4fcf8
	strb r0, [r2, #11]	@ 0004fcf8 d072
.org 0x4fcfa
	adds r1, r2, #0	@ 0004fcfa 111c
.org 0x4fcfc
	adds r1, #37	@ 0004fcfc 2531
.org 0x4fcfe
	movs r0, #16	@ 0004fcfe 1020
.org 0x4fd00
	strb r0, [r1, #0]	@ 0004fd00 0870
.org 0x4fd02
	ldr r0, [pc, #32]	@ 0004fd02 0848
.org 0x4fd04
	ldrh r0, [r0, #2]	@ 0004fd04 4088
.org 0x4fd06
	strh r0, [r2, #32]	@ 0004fd06 1084
.org 0x4fd08
	ldr r0, [pc, #28]	@ 0004fd08 0748
.org 0x4fd0a
	ldrb r0, [r0, #1]	@ 0004fd0a 4078
.org 0x4fd0c
	subs r1, #3	@ 0004fd0c 0339
