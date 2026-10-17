@ FUN_0806fcbc  entry 0x0806fcbc  size 62
.thumb
.org 0x6fcbc
FUN_0806fcbc:
	push {r4, lr}	@ 0006fcbc 10b5
.org 0x6fcbe
	adds r4, r0, #0	@ 0006fcbe 041c
.org 0x6fcc0
	ldrb r0, [r4, #14]	@ 0006fcc0 a07b
.org 0x6fcc2
	cmp r0, #0	@ 0006fcc2 0028
.org 0x6fcc4
	bne.n 0x6fcd8	@ 0006fcc4 08d1
.org 0x6fcc6
	ldr r1, [pc, #52]	@ 0006fcc6 0d49
.org 0x6fcc8
	adds r0, r4, #0	@ 0006fcc8 201c
.org 0x6fcca
	bl 0x1cf00	@ 0006fcca adf719f9
.org 0x6fcce
	ldrb r0, [r4, #14]	@ 0006fcce a07b
.org 0x6fcd0
	adds r0, #1	@ 0006fcd0 0130
.org 0x6fcd2
	strb r0, [r4, #14]	@ 0006fcd2 a073
.org 0x6fcd4
	movs r0, #16	@ 0006fcd4 1020
.org 0x6fcd6
	strb r0, [r4, #18]	@ 0006fcd6 a074
.org 0x6fcd8
	adds r0, r4, #0	@ 0006fcd8 201c
.org 0x6fcda
	bl 0x1cff0	@ 0006fcda adf789f9
.org 0x6fcde
	ldrb r0, [r4, #18]	@ 0006fcde a07c
.org 0x6fce0
	subs r0, #1	@ 0006fce0 0138
.org 0x6fce2
	strb r0, [r4, #18]	@ 0006fce2 a074
.org 0x6fce4
	lsls r0, r0, #24	@ 0006fce4 0006
.org 0x6fce6
	lsrs r0, r0, #24	@ 0006fce6 000e
.org 0x6fce8
	cmp r0, #255	@ 0006fce8 ff28
.org 0x6fcea
	bne.n 0x6fcf4	@ 0006fcea 03d1
.org 0x6fcec
	movs r0, #2	@ 0006fcec 0220
.org 0x6fcee
	strb r0, [r4, #13]	@ 0006fcee 6073
.org 0x6fcf0
	movs r0, #0	@ 0006fcf0 0020
.org 0x6fcf2
	strb r0, [r4, #14]	@ 0006fcf2 a073
.org 0x6fcf4
	pop {r4}	@ 0006fcf4 10bc
.org 0x6fcf6
	pop {r0}	@ 0006fcf6 01bc
.org 0x6fcf8
	bx r0	@ 0006fcf8 0047
