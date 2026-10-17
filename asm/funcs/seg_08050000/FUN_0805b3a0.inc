@ FUN_0805b3a0  entry 0x0805b3a0  size 78
.thumb
.org 0x5b3a0
FUN_0805b3a0:
	push {r4, lr}	@ 0005b3a0 10b5
.org 0x5b3a2
	adds r4, r0, #0	@ 0005b3a2 041c
.org 0x5b3a4
	ldrb r0, [r4, #15]	@ 0005b3a4 e07b
.org 0x5b3a6
	cmp r0, #0	@ 0005b3a6 0028
.org 0x5b3a8
	bne.n 0x5b3ce	@ 0005b3a8 11d1
.org 0x5b3aa
	adds r0, r4, #0	@ 0005b3aa 201c
.org 0x5b3ac
	adds r0, #116	@ 0005b3ac 7430
.org 0x5b3ae
	ldr r1, [pc, #64]	@ 0005b3ae 1049
.org 0x5b3b0
	bl 0x5784	@ 0005b3b0 aaf7e8f9
.org 0x5b3b4
	ldr r1, [pc, #60]	@ 0005b3b4 0f49
.org 0x5b3b6
	adds r0, r4, #0	@ 0005b3b6 201c
.org 0x5b3b8
	bl 0x1cf00	@ 0005b3b8 c1f7a2fd
.org 0x5b3bc
	adds r1, r4, #0	@ 0005b3bc 211c
.org 0x5b3be
	adds r1, #189	@ 0005b3be bd31
.org 0x5b3c0
	movs r0, #1	@ 0005b3c0 0120
.org 0x5b3c2
	strb r0, [r1, #0]	@ 0005b3c2 0870
.org 0x5b3c4
	movs r0, #48	@ 0005b3c4 3020
.org 0x5b3c6
	strb r0, [r4, #18]	@ 0005b3c6 a074
.org 0x5b3c8
	ldrb r0, [r4, #15]	@ 0005b3c8 e07b
.org 0x5b3ca
	adds r0, #1	@ 0005b3ca 0130
.org 0x5b3cc
	strb r0, [r4, #15]	@ 0005b3cc e073
.org 0x5b3ce
	adds r0, r4, #0	@ 0005b3ce 201c
.org 0x5b3d0
	bl 0x1cff0	@ 0005b3d0 c1f70efe
.org 0x5b3d4
	ldrb r0, [r4, #18]	@ 0005b3d4 a07c
.org 0x5b3d6
	subs r0, #1	@ 0005b3d6 0138
.org 0x5b3d8
	strb r0, [r4, #18]	@ 0005b3d8 a074
.org 0x5b3da
	lsls r0, r0, #24	@ 0005b3da 0006
.org 0x5b3dc
	lsrs r1, r0, #24	@ 0005b3dc 010e
.org 0x5b3de
	cmp r1, #0	@ 0005b3de 0029
.org 0x5b3e0
	bne.n 0x5b3e8	@ 0005b3e0 02d1
.org 0x5b3e2
	movs r0, #2	@ 0005b3e2 0220
.org 0x5b3e4
	strb r0, [r4, #14]	@ 0005b3e4 a073
.org 0x5b3e6
	strb r1, [r4, #15]	@ 0005b3e6 e173
.org 0x5b3e8
	pop {r4}	@ 0005b3e8 10bc
.org 0x5b3ea
	pop {r0}	@ 0005b3ea 01bc
.org 0x5b3ec
	bx r0	@ 0005b3ec 0047
