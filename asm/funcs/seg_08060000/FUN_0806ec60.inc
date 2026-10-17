@ FUN_0806ec60  entry 0x0806ec60  size 78
.thumb
.org 0x6ec60
FUN_0806ec60:
	push {r4, lr}	@ 0006ec60 10b5
.org 0x6ec62
	adds r4, r0, #0	@ 0006ec62 041c
.org 0x6ec64
	ldrb r0, [r4, #15]	@ 0006ec64 e07b
.org 0x6ec66
	cmp r0, #0	@ 0006ec66 0028
.org 0x6ec68
	bne.n 0x6ec8e	@ 0006ec68 11d1
.org 0x6ec6a
	movs r0, #181	@ 0006ec6a b520
.org 0x6ec6c
	lsls r0, r0, #1	@ 0006ec6c 4000
.org 0x6ec6e
	bl 0x2b10	@ 0006ec6e 93f74fff
.org 0x6ec72
	adds r0, r4, #0	@ 0006ec72 201c
.org 0x6ec74
	adds r0, #116	@ 0006ec74 7430
.org 0x6ec76
	ldr r1, [pc, #56]	@ 0006ec76 0e49
.org 0x6ec78
	bl 0x5784	@ 0006ec78 96f784fd
.org 0x6ec7c
	ldr r1, [pc, #52]	@ 0006ec7c 0d49
.org 0x6ec7e
	adds r0, r4, #0	@ 0006ec7e 201c
.org 0x6ec80
	bl 0x1cf00	@ 0006ec80 aef73ef9
.org 0x6ec84
	movs r0, #96	@ 0006ec84 6020
.org 0x6ec86
	strb r0, [r4, #18]	@ 0006ec86 a074
.org 0x6ec88
	ldrb r0, [r4, #15]	@ 0006ec88 e07b
.org 0x6ec8a
	adds r0, #1	@ 0006ec8a 0130
.org 0x6ec8c
	strb r0, [r4, #15]	@ 0006ec8c e073
.org 0x6ec8e
	adds r0, r4, #0	@ 0006ec8e 201c
.org 0x6ec90
	bl 0x1cff0	@ 0006ec90 aef7aef9
.org 0x6ec94
	ldrb r0, [r4, #18]	@ 0006ec94 a07c
.org 0x6ec96
	subs r0, #1	@ 0006ec96 0138
.org 0x6ec98
	strb r0, [r4, #18]	@ 0006ec98 a074
.org 0x6ec9a
	lsls r0, r0, #24	@ 0006ec9a 0006
.org 0x6ec9c
	lsrs r1, r0, #24	@ 0006ec9c 010e
.org 0x6ec9e
	cmp r1, #0	@ 0006ec9e 0029
.org 0x6eca0
	bne.n 0x6eca8	@ 0006eca0 02d1
.org 0x6eca2
	movs r0, #1	@ 0006eca2 0120
.org 0x6eca4
	strb r0, [r4, #14]	@ 0006eca4 a073
.org 0x6eca6
	strb r1, [r4, #15]	@ 0006eca6 e173
.org 0x6eca8
	pop {r4}	@ 0006eca8 10bc
.org 0x6ecaa
	pop {r0}	@ 0006ecaa 01bc
.org 0x6ecac
	bx r0	@ 0006ecac 0047
