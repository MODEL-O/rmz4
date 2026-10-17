@ FUN_0806e3b8  entry 0x0806e3b8  size 74
.thumb
.org 0x6e3b8
FUN_0806e3b8:
	push {r4, lr}	@ 0006e3b8 10b5
.org 0x6e3ba
	adds r4, r0, #0	@ 0006e3ba 041c
.org 0x6e3bc
	ldrb r0, [r4, #15]	@ 0006e3bc e07b
.org 0x6e3be
	cmp r0, #0	@ 0006e3be 0028
.org 0x6e3c0
	bne.n 0x6e3e0	@ 0006e3c0 0ed1
.org 0x6e3c2
	adds r0, r4, #0	@ 0006e3c2 201c
.org 0x6e3c4
	adds r0, #116	@ 0006e3c4 7430
.org 0x6e3c6
	ldr r1, [pc, #60]	@ 0006e3c6 0f49
.org 0x6e3c8
	bl 0x5784	@ 0006e3c8 97f7dcf9
.org 0x6e3cc
	movs r1, #173	@ 0006e3cc ad21
.org 0x6e3ce
	lsls r1, r1, #8	@ 0006e3ce 0902
.org 0x6e3d0
	adds r0, r4, #0	@ 0006e3d0 201c
.org 0x6e3d2
	bl 0x1cf00	@ 0006e3d2 aef795fd
.org 0x6e3d6
	movs r0, #8	@ 0006e3d6 0820
.org 0x6e3d8
	strb r0, [r4, #18]	@ 0006e3d8 a074
.org 0x6e3da
	ldrb r0, [r4, #15]	@ 0006e3da e07b
.org 0x6e3dc
	adds r0, #1	@ 0006e3dc 0130
.org 0x6e3de
	strb r0, [r4, #15]	@ 0006e3de e073
.org 0x6e3e0
	adds r0, r4, #0	@ 0006e3e0 201c
.org 0x6e3e2
	bl 0x1cff0	@ 0006e3e2 aef705fe
.org 0x6e3e6
	ldrb r0, [r4, #18]	@ 0006e3e6 a07c
.org 0x6e3e8
	subs r0, #1	@ 0006e3e8 0138
.org 0x6e3ea
	strb r0, [r4, #18]	@ 0006e3ea a074
.org 0x6e3ec
	lsls r0, r0, #24	@ 0006e3ec 0006
.org 0x6e3ee
	lsrs r1, r0, #24	@ 0006e3ee 010e
.org 0x6e3f0
	cmp r1, #0	@ 0006e3f0 0029
.org 0x6e3f2
	bne.n 0x6e3fc	@ 0006e3f2 03d1
.org 0x6e3f4
	movs r0, #8	@ 0006e3f4 0820
.org 0x6e3f6
	strb r0, [r4, #13]	@ 0006e3f6 6073
.org 0x6e3f8
	strb r1, [r4, #14]	@ 0006e3f8 a173
.org 0x6e3fa
	strb r1, [r4, #15]	@ 0006e3fa e173
.org 0x6e3fc
	pop {r4}	@ 0006e3fc 10bc
.org 0x6e3fe
	pop {r0}	@ 0006e3fe 01bc
.org 0x6e400
	bx r0	@ 0006e400 0047
