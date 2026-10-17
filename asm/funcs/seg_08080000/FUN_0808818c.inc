@ FUN_0808818c  entry 0x0808818c  size 88
.thumb
.org 0x8818c
FUN_0808818c:
	push {r4, r5, r6, lr}	@ 0008818c 70b5
.org 0x8818e
	adds r6, r0, #0	@ 0008818e 061c
.org 0x88190
	ldrb r0, [r6, #15]	@ 00088190 f07b
.org 0x88192
	cmp r0, #0	@ 00088192 0028
.org 0x88194
	bne.n 0x881c6	@ 00088194 17d1
.org 0x88196
	ldrb r4, [r6, #10]	@ 00088196 b47a
.org 0x88198
	lsrs r4, r4, #4	@ 00088198 2409
.org 0x8819a
	movs r5, #1	@ 0008819a 0125
.org 0x8819c
	ands r4, r5	@ 0008819c 2c40
.org 0x8819e
	adds r0, r6, #0	@ 0008819e 301c
.org 0x881a0
	adds r0, #116	@ 000881a0 7430
.org 0x881a2
	ldr r1, [pc, #64]	@ 000881a2 1049
.org 0x881a4
	bl 0x5784	@ 000881a4 7df7eefa
.org 0x881a8
	ldr r1, [pc, #60]	@ 000881a8 0f49
.org 0x881aa
	adds r0, r6, #0	@ 000881aa 301c
.org 0x881ac
	bl 0x1cf00	@ 000881ac 94f7a8fe
.org 0x881b0
	lsls r4, r4, #1	@ 000881b0 6400
.org 0x881b2
	subs r5, r5, r4	@ 000881b2 2d1b
.org 0x881b4
	lsls r0, r5, #3	@ 000881b4 e800
.org 0x881b6
	adds r0, r0, r5	@ 000881b6 4019
.org 0x881b8
	lsls r0, r0, #6	@ 000881b8 8001
.org 0x881ba
	str r0, [r6, #92]	@ 000881ba f065
.org 0x881bc
	ldr r0, [pc, #44]	@ 000881bc 0b48
.org 0x881be
	str r0, [r6, #96]	@ 000881be 3066
.org 0x881c0
	ldrb r0, [r6, #15]	@ 000881c0 f07b
.org 0x881c2
	adds r0, #1	@ 000881c2 0130
.org 0x881c4
	strb r0, [r6, #15]	@ 000881c4 f073
.org 0x881c6
	adds r0, r6, #0	@ 000881c6 301c
.org 0x881c8
	bl 0x1cff0	@ 000881c8 94f712ff
.org 0x881cc
	adds r0, r6, #0	@ 000881cc 301c
.org 0x881ce
	bl 0x88c9c	@ 000881ce 00f065fd
.org 0x881d2
	cmp r0, #0	@ 000881d2 0028
.org 0x881d4
	beq.n 0x881de	@ 000881d4 03d0
.org 0x881d6
	movs r1, #0	@ 000881d6 0021
.org 0x881d8
	movs r0, #3	@ 000881d8 0320
.org 0x881da
	strb r0, [r6, #14]	@ 000881da b073
.org 0x881dc
	strb r1, [r6, #15]	@ 000881dc f173
.org 0x881de
	pop {r4, r5, r6}	@ 000881de 70bc
.org 0x881e0
	pop {r0}	@ 000881e0 01bc
.org 0x881e2
	bx r0	@ 000881e2 0047
