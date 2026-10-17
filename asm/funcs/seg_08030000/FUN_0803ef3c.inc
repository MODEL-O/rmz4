@ FUN_0803ef3c  entry 0x0803ef3c  size 186
.thumb
.org 0x3ef3c
FUN_0803ef3c:
	push {r4, r5, lr}	@ 0003ef3c 30b5
.org 0x3ef3e
	adds r4, r0, #0	@ 0003ef3e 041c
.org 0x3ef40
	adds r0, #180	@ 0003ef40 b430
.org 0x3ef42
	ldr r5, [r0, #0]	@ 0003ef42 0568
.org 0x3ef44
	ldrb r0, [r4, #13]	@ 0003ef44 607b
.org 0x3ef46
	cmp r0, #1	@ 0003ef46 0128
.org 0x3ef48
	beq.n 0x3ef9c	@ 0003ef48 28d0
.org 0x3ef4a
	cmp r0, #1	@ 0003ef4a 0128
.org 0x3ef4c
	bgt.n 0x3ef54	@ 0003ef4c 02dc
.org 0x3ef4e
	cmp r0, #0	@ 0003ef4e 0028
.org 0x3ef50
	beq.n 0x3ef5e	@ 0003ef50 05d0
.org 0x3ef52
	b.n 0x3eff8	@ 0003ef52 51e0
.org 0x3ef54
	cmp r0, #2	@ 0003ef54 0228
.org 0x3ef56
	beq.n 0x3efc0	@ 0003ef56 33d0
.org 0x3ef58
	cmp r0, #3	@ 0003ef58 0328
.org 0x3ef5a
	beq.n 0x3efdc	@ 0003ef5a 3fd0
.org 0x3ef5c
	b.n 0x3eff8	@ 0003ef5c 4ce0
.org 0x3ef5e
	ldr r1, [pc, #88]	@ 0003ef5e 1649
.org 0x3ef60
	adds r0, r4, #0	@ 0003ef60 201c
.org 0x3ef62
	bl 0x1cf00	@ 0003ef62 ddf7cdff
.org 0x3ef66
	adds r2, r5, #0	@ 0003ef66 2a1c
.org 0x3ef68
	adds r2, #230	@ 0003ef68 e632
.org 0x3ef6a
	ldrb r0, [r2, #0]	@ 0003ef6a 1078
.org 0x3ef6c
	adds r1, r0, #0	@ 0003ef6c 011c
.org 0x3ef6e
	cmp r1, #0	@ 0003ef6e 0029
.org 0x3ef70
	beq.n 0x3ef88	@ 0003ef70 0ad0
.org 0x3ef72
	cmp r1, #255	@ 0003ef72 ff29
.org 0x3ef74
	beq.n 0x3ef7a	@ 0003ef74 01d0
.org 0x3ef76
	subs r0, #1	@ 0003ef76 0138
.org 0x3ef78
	strb r0, [r2, #0]	@ 0003ef78 1070
.org 0x3ef7a
	adds r0, r5, #0	@ 0003ef7a 281c
.org 0x3ef7c
	adds r1, r4, #0	@ 0003ef7c 211c
.org 0x3ef7e
	bl 0x4d08c	@ 0003ef7e 0ef085f8
.org 0x3ef82
	ldr r0, [pc, #56]	@ 0003ef82 0e48
.org 0x3ef84
	bl 0x2b10	@ 0003ef84 c3f7c4fd
.org 0x3ef88
	movs r0, #170	@ 0003ef88 aa20
.org 0x3ef8a
	lsls r0, r0, #1	@ 0003ef8a 4000
.org 0x3ef8c
	adds r1, r5, r0	@ 0003ef8c 2918
.org 0x3ef8e
	movs r0, #0	@ 0003ef8e 0020
.org 0x3ef90
	strb r0, [r1, #0]	@ 0003ef90 0870
.org 0x3ef92
	movs r0, #60	@ 0003ef92 3c20
.org 0x3ef94
	strb r0, [r4, #18]	@ 0003ef94 a074
.org 0x3ef96
	ldrb r0, [r4, #13]	@ 0003ef96 607b
.org 0x3ef98
	adds r0, #1	@ 0003ef98 0130
.org 0x3ef9a
	strb r0, [r4, #13]	@ 0003ef9a 6073
.org 0x3ef9c
	ldrb r0, [r4, #18]	@ 0003ef9c a07c
.org 0x3ef9e
	subs r0, #1	@ 0003ef9e 0138
.org 0x3efa0
	strb r0, [r4, #18]	@ 0003efa0 a074
.org 0x3efa2
	lsls r0, r0, #24	@ 0003efa2 0006
.org 0x3efa4
	cmp r0, #0	@ 0003efa4 0028
.org 0x3efa6
	bne.n 0x3eff8	@ 0003efa6 27d1
.org 0x3efa8
	movs r0, #170	@ 0003efa8 aa20
.org 0x3efaa
	lsls r0, r0, #1	@ 0003efaa 4000
.org 0x3efac
	adds r1, r5, r0	@ 0003efac 2918
.org 0x3efae
	movs r0, #1	@ 0003efae 0120
.org 0x3efb0
	strb r0, [r1, #0]	@ 0003efb0 0870
.org 0x3efb2
	movs r0, #2	@ 0003efb2 0220
.org 0x3efb4
	strb r0, [r4, #18]	@ 0003efb4 a074
.org 0x3efb6
	b.n 0x3eff2	@ 0003efb6 1ce0
.org 0x3efb8
	.byte 0x23,0x82,0x00,0x00	@ 0003efb8 data
.org 0x3efbc
	.byte 0xa1,0x01,0x00,0x00	@ 0003efbc data
.org 0x3efc0
	ldrb r0, [r4, #18]	@ 0003efc0 a07c
.org 0x3efc2
	subs r0, #1	@ 0003efc2 0138
.org 0x3efc4
	strb r0, [r4, #18]	@ 0003efc4 a074
.org 0x3efc6
	lsls r0, r0, #24	@ 0003efc6 0006
.org 0x3efc8
	cmp r0, #0	@ 0003efc8 0028
.org 0x3efca
	bne.n 0x3eff8	@ 0003efca 15d1
.org 0x3efcc
	movs r0, #170	@ 0003efcc aa20
.org 0x3efce
	lsls r0, r0, #1	@ 0003efce 4000
.org 0x3efd0
	adds r1, r5, r0	@ 0003efd0 2918
.org 0x3efd2
	movs r0, #3	@ 0003efd2 0320
.org 0x3efd4
	strb r0, [r1, #0]	@ 0003efd4 0870
.org 0x3efd6
	movs r0, #4	@ 0003efd6 0420
.org 0x3efd8
	strb r0, [r4, #18]	@ 0003efd8 a074
.org 0x3efda
	b.n 0x3eff2	@ 0003efda 0ae0
.org 0x3efdc
	ldrb r0, [r4, #18]	@ 0003efdc a07c
.org 0x3efde
	subs r0, #1	@ 0003efde 0138
.org 0x3efe0
	strb r0, [r4, #18]	@ 0003efe0 a074
.org 0x3efe2
	lsls r0, r0, #24	@ 0003efe2 0006
.org 0x3efe4
	cmp r0, #0	@ 0003efe4 0028
.org 0x3efe6
	bne.n 0x3eff8	@ 0003efe6 07d1
.org 0x3efe8
	movs r0, #170	@ 0003efe8 aa20
.org 0x3efea
	lsls r0, r0, #1	@ 0003efea 4000
.org 0x3efec
	adds r1, r5, r0	@ 0003efec 2918
.org 0x3efee
	movs r0, #4	@ 0003efee 0420
.org 0x3eff0
	strb r0, [r1, #0]	@ 0003eff0 0870
.org 0x3eff2
	ldrb r0, [r4, #13]	@ 0003eff2 607b
.org 0x3eff4
	adds r0, #1	@ 0003eff4 0130
