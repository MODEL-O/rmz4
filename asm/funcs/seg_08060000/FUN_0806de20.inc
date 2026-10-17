@ FUN_0806de20  entry 0x0806de20  size 64
.thumb
.org 0x6de20
FUN_0806de20:
	push {r4, lr}	@ 0006de20 10b5
.org 0x6de22
	adds r4, r0, #0	@ 0006de22 041c
.org 0x6de24
	ldrb r0, [r4, #15]	@ 0006de24 e07b
.org 0x6de26
	cmp r0, #0	@ 0006de26 0028
.org 0x6de28
	bne.n 0x6de42	@ 0006de28 0bd1
.org 0x6de2a
	adds r0, r4, #0	@ 0006de2a 201c
.org 0x6de2c
	adds r0, #116	@ 0006de2c 7430
.org 0x6de2e
	ldr r1, [pc, #48]	@ 0006de2e 0c49
.org 0x6de30
	bl 0x5784	@ 0006de30 97f7a8fc
.org 0x6de34
	ldr r1, [pc, #44]	@ 0006de34 0b49
.org 0x6de36
	adds r0, r4, #0	@ 0006de36 201c
.org 0x6de38
	bl 0x1cf00	@ 0006de38 aff762f8
.org 0x6de3c
	ldrb r0, [r4, #15]	@ 0006de3c e07b
.org 0x6de3e
	adds r0, #1	@ 0006de3e 0130
.org 0x6de40
	strb r0, [r4, #15]	@ 0006de40 e073
.org 0x6de42
	adds r0, r4, #0	@ 0006de42 201c
.org 0x6de44
	bl 0x1cff0	@ 0006de44 aff7d4f8
.org 0x6de48
	adds r0, r4, #0	@ 0006de48 201c
.org 0x6de4a
	adds r0, #115	@ 0006de4a 7330
.org 0x6de4c
	ldrb r0, [r0, #0]	@ 0006de4c 0078
.org 0x6de4e
	cmp r0, #3	@ 0006de4e 0328
.org 0x6de50
	bne.n 0x6de5a	@ 0006de50 03d1
.org 0x6de52
	movs r1, #0	@ 0006de52 0021
.org 0x6de54
	movs r0, #4	@ 0006de54 0420
.org 0x6de56
	strb r0, [r4, #14]	@ 0006de56 a073
.org 0x6de58
	strb r1, [r4, #15]	@ 0006de58 e173
.org 0x6de5a
	pop {r4}	@ 0006de5a 10bc
.org 0x6de5c
	pop {r0}	@ 0006de5c 01bc
.org 0x6de5e
	bx r0	@ 0006de5e 0047
