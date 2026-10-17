@ FUN_080bf284  entry 0x080bf284  size 90
.thumb
.org 0xbf284
FUN_080bf284:
	push {r4, lr}	@ 000bf284 10b5
.org 0xbf286
	adds r4, r0, #0	@ 000bf286 041c
.org 0xbf288
	ldrb r0, [r4, #14]	@ 000bf288 a07b
.org 0xbf28a
	cmp r0, #0	@ 000bf28a 0028
.org 0xbf28c
	beq.n 0xbf294	@ 000bf28c 02d0
.org 0xbf28e
	cmp r0, #1	@ 000bf28e 0128
.org 0xbf290
	beq.n 0xbf2ae	@ 000bf290 0dd0
.org 0xbf292
	b.n 0xbf2d8	@ 000bf292 21e0
.org 0xbf294
	movs r0, #16	@ 000bf294 1020
.org 0xbf296
	strb r0, [r4, #18]	@ 000bf296 a074
.org 0xbf298
	ldr r0, [r4, #88]	@ 000bf298 a06d
.org 0xbf29a
	ldr r1, [pc, #68]	@ 000bf29a 1149
.org 0xbf29c
	adds r0, r0, r1	@ 000bf29c 4018
.org 0xbf29e
	str r0, [r4, #88]	@ 000bf29e a065
.org 0xbf2a0
	ldr r1, [pc, #64]	@ 000bf2a0 1049
.org 0xbf2a2
	adds r0, r4, #0	@ 000bf2a2 201c
.org 0xbf2a4
	bl 0x1cf00	@ 000bf2a4 5df72cfe
.org 0xbf2a8
	ldrb r0, [r4, #14]	@ 000bf2a8 a07b
.org 0xbf2aa
	adds r0, #1	@ 000bf2aa 0130
.org 0xbf2ac
	strb r0, [r4, #14]	@ 000bf2ac a073
.org 0xbf2ae
	adds r0, r4, #0	@ 000bf2ae 201c
.org 0xbf2b0
	bl 0x1cff0	@ 000bf2b0 5df79efe
.org 0xbf2b4
	ldrb r0, [r4, #18]	@ 000bf2b4 a07c
.org 0xbf2b6
	subs r0, #1	@ 000bf2b6 0138
.org 0xbf2b8
	strb r0, [r4, #18]	@ 000bf2b8 a074
.org 0xbf2ba
	lsls r0, r0, #24	@ 000bf2ba 0006
.org 0xbf2bc
	cmp r0, #0	@ 000bf2bc 0028
.org 0xbf2be
	bne.n 0xbf2d8	@ 000bf2be 0bd1
.org 0xbf2c0
	ldr r1, [pc, #36]	@ 000bf2c0 0949
.org 0xbf2c2
	ldrb r0, [r4, #9]	@ 000bf2c2 607a
.org 0xbf2c4
	lsls r0, r0, #2	@ 000bf2c4 8000
.org 0xbf2c6
	adds r0, r0, r1	@ 000bf2c6 4018
.org 0xbf2c8
	movs r1, #2	@ 000bf2c8 0221
.org 0xbf2ca
	str r1, [r4, #12]	@ 000bf2ca e160
.org 0xbf2cc
	ldr r0, [r0, #0]	@ 000bf2cc 0068
.org 0xbf2ce
	ldr r0, [r0, #8]	@ 000bf2ce 8068
.org 0xbf2d0
	str r0, [r4, #20]	@ 000bf2d0 6061
.org 0xbf2d2
	adds r0, r4, #0	@ 000bf2d2 201c
.org 0xbf2d4
	bl 0xbefc0	@ 000bf2d4 fff774fe
.org 0xbf2d8
	pop {r4}	@ 000bf2d8 10bc
.org 0xbf2da
	pop {r0}	@ 000bf2da 01bc
.org 0xbf2dc
	bx r0	@ 000bf2dc 0047
