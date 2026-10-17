@ FUN_0806ecb8  entry 0x0806ecb8  size 66
.thumb
.org 0x6ecb8
FUN_0806ecb8:
	push {r4, lr}	@ 0006ecb8 10b5
.org 0x6ecba
	adds r4, r0, #0	@ 0006ecba 041c
.org 0x6ecbc
	ldrb r0, [r4, #15]	@ 0006ecbc e07b
.org 0x6ecbe
	cmp r0, #0	@ 0006ecbe 0028
.org 0x6ecc0
	bne.n 0x6ecda	@ 0006ecc0 0bd1
.org 0x6ecc2
	adds r0, r4, #0	@ 0006ecc2 201c
.org 0x6ecc4
	adds r0, #116	@ 0006ecc4 7430
.org 0x6ecc6
	ldr r1, [pc, #52]	@ 0006ecc6 0d49
.org 0x6ecc8
	bl 0x5784	@ 0006ecc8 96f75cfd
.org 0x6eccc
	ldr r1, [pc, #48]	@ 0006eccc 0c49
.org 0x6ecce
	adds r0, r4, #0	@ 0006ecce 201c
.org 0x6ecd0
	bl 0x1cf00	@ 0006ecd0 aef716f9
.org 0x6ecd4
	ldrb r0, [r4, #15]	@ 0006ecd4 e07b
.org 0x6ecd6
	adds r0, #1	@ 0006ecd6 0130
.org 0x6ecd8
	strb r0, [r4, #15]	@ 0006ecd8 e073
.org 0x6ecda
	adds r0, r4, #0	@ 0006ecda 201c
.org 0x6ecdc
	bl 0x1cff0	@ 0006ecdc aef788f9
.org 0x6ece0
	adds r0, r4, #0	@ 0006ece0 201c
.org 0x6ece2
	adds r0, #115	@ 0006ece2 7330
.org 0x6ece4
	ldrb r0, [r0, #0]	@ 0006ece4 0078
.org 0x6ece6
	cmp r0, #3	@ 0006ece6 0328
.org 0x6ece8
	bne.n 0x6ecf4	@ 0006ece8 04d1
.org 0x6ecea
	movs r1, #0	@ 0006ecea 0021
.org 0x6ecec
	movs r0, #2	@ 0006ecec 0220
.org 0x6ecee
	strb r0, [r4, #13]	@ 0006ecee 6073
.org 0x6ecf0
	strb r1, [r4, #14]	@ 0006ecf0 a173
.org 0x6ecf2
	strb r1, [r4, #15]	@ 0006ecf2 e173
.org 0x6ecf4
	pop {r4}	@ 0006ecf4 10bc
.org 0x6ecf6
	pop {r0}	@ 0006ecf6 01bc
.org 0x6ecf8
	bx r0	@ 0006ecf8 0047
