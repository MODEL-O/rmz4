@ FUN_0806eae4  entry 0x0806eae4  size 72
.thumb
.org 0x6eae4
FUN_0806eae4:
	push {r4, lr}	@ 0006eae4 10b5
.org 0x6eae6
	adds r4, r0, #0	@ 0006eae6 041c
.org 0x6eae8
	ldrb r0, [r4, #15]	@ 0006eae8 e07b
.org 0x6eaea
	cmp r0, #0	@ 0006eaea 0028
.org 0x6eaec
	bne.n 0x6eb0c	@ 0006eaec 0ed1
.org 0x6eaee
	adds r0, r4, #0	@ 0006eaee 201c
.org 0x6eaf0
	adds r0, #116	@ 0006eaf0 7430
.org 0x6eaf2
	ldr r1, [pc, #56]	@ 0006eaf2 0e49
.org 0x6eaf4
	bl 0x5784	@ 0006eaf4 96f746fe
.org 0x6eaf8
	movs r1, #173	@ 0006eaf8 ad21
.org 0x6eafa
	lsls r1, r1, #8	@ 0006eafa 0902
.org 0x6eafc
	adds r0, r4, #0	@ 0006eafc 201c
.org 0x6eafe
	bl 0x1cf00	@ 0006eafe aef7fff9
.org 0x6eb02
	movs r0, #16	@ 0006eb02 1020
.org 0x6eb04
	strb r0, [r4, #18]	@ 0006eb04 a074
.org 0x6eb06
	ldrb r0, [r4, #15]	@ 0006eb06 e07b
.org 0x6eb08
	adds r0, #1	@ 0006eb08 0130
.org 0x6eb0a
	strb r0, [r4, #15]	@ 0006eb0a e073
.org 0x6eb0c
	adds r0, r4, #0	@ 0006eb0c 201c
.org 0x6eb0e
	bl 0x1cff0	@ 0006eb0e aef76ffa
.org 0x6eb12
	ldrb r0, [r4, #18]	@ 0006eb12 a07c
.org 0x6eb14
	subs r0, #1	@ 0006eb14 0138
.org 0x6eb16
	strb r0, [r4, #18]	@ 0006eb16 a074
.org 0x6eb18
	lsls r0, r0, #24	@ 0006eb18 0006
.org 0x6eb1a
	lsrs r1, r0, #24	@ 0006eb1a 010e
.org 0x6eb1c
	cmp r1, #0	@ 0006eb1c 0029
.org 0x6eb1e
	bne.n 0x6eb26	@ 0006eb1e 02d1
.org 0x6eb20
	movs r0, #1	@ 0006eb20 0120
.org 0x6eb22
	strb r0, [r4, #14]	@ 0006eb22 a073
.org 0x6eb24
	strb r1, [r4, #15]	@ 0006eb24 e173
.org 0x6eb26
	pop {r4}	@ 0006eb26 10bc
.org 0x6eb28
	pop {r0}	@ 0006eb28 01bc
.org 0x6eb2a
	bx r0	@ 0006eb2a 0047
