@ FUN_0806e2ac  entry 0x0806e2ac  size 72
.thumb
.org 0x6e2ac
FUN_0806e2ac:
	push {r4, lr}	@ 0006e2ac 10b5
.org 0x6e2ae
	adds r4, r0, #0	@ 0006e2ae 041c
.org 0x6e2b0
	ldrb r0, [r4, #15]	@ 0006e2b0 e07b
.org 0x6e2b2
	cmp r0, #0	@ 0006e2b2 0028
.org 0x6e2b4
	bne.n 0x6e2d4	@ 0006e2b4 0ed1
.org 0x6e2b6
	adds r0, r4, #0	@ 0006e2b6 201c
.org 0x6e2b8
	adds r0, #116	@ 0006e2b8 7430
.org 0x6e2ba
	ldr r1, [pc, #56]	@ 0006e2ba 0e49
.org 0x6e2bc
	bl 0x5784	@ 0006e2bc 97f762fa
.org 0x6e2c0
	movs r1, #173	@ 0006e2c0 ad21
.org 0x6e2c2
	lsls r1, r1, #8	@ 0006e2c2 0902
.org 0x6e2c4
	adds r0, r4, #0	@ 0006e2c4 201c
.org 0x6e2c6
	bl 0x1cf00	@ 0006e2c6 aef71bfe
.org 0x6e2ca
	movs r0, #64	@ 0006e2ca 4020
.org 0x6e2cc
	strb r0, [r4, #18]	@ 0006e2cc a074
.org 0x6e2ce
	ldrb r0, [r4, #15]	@ 0006e2ce e07b
.org 0x6e2d0
	adds r0, #1	@ 0006e2d0 0130
.org 0x6e2d2
	strb r0, [r4, #15]	@ 0006e2d2 e073
.org 0x6e2d4
	adds r0, r4, #0	@ 0006e2d4 201c
.org 0x6e2d6
	bl 0x1cff0	@ 0006e2d6 aef78bfe
.org 0x6e2da
	ldrb r0, [r4, #18]	@ 0006e2da a07c
.org 0x6e2dc
	subs r0, #1	@ 0006e2dc 0138
.org 0x6e2de
	strb r0, [r4, #18]	@ 0006e2de a074
.org 0x6e2e0
	lsls r0, r0, #24	@ 0006e2e0 0006
.org 0x6e2e2
	lsrs r1, r0, #24	@ 0006e2e2 010e
.org 0x6e2e4
	cmp r1, #0	@ 0006e2e4 0029
.org 0x6e2e6
	bne.n 0x6e2ee	@ 0006e2e6 02d1
.org 0x6e2e8
	movs r0, #3	@ 0006e2e8 0320
.org 0x6e2ea
	strb r0, [r4, #14]	@ 0006e2ea a073
.org 0x6e2ec
	strb r1, [r4, #15]	@ 0006e2ec e173
.org 0x6e2ee
	pop {r4}	@ 0006e2ee 10bc
.org 0x6e2f0
	pop {r0}	@ 0006e2f0 01bc
.org 0x6e2f2
	bx r0	@ 0006e2f2 0047
