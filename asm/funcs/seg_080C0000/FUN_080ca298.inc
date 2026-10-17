@ FUN_080ca298  entry 0x080ca298  size 82
.thumb
.org 0xca298
FUN_080ca298:
	push {lr}	@ 000ca298 00b5
.org 0xca29a
	adds r1, r0, #0	@ 000ca29a 011c
.org 0xca29c
	adds r0, #180	@ 000ca29c b430
.org 0xca29e
	ldrb r0, [r0, #0]	@ 000ca29e 0078
.org 0xca2a0
	cmp r0, #0	@ 000ca2a0 0028
.org 0xca2a2
	bne.n 0xca2be	@ 000ca2a2 0cd1
.org 0xca2a4
	adds r0, r1, #0	@ 000ca2a4 081c
.org 0xca2a6
	adds r0, #183	@ 000ca2a6 b730
.org 0xca2a8
	ldrb r0, [r0, #0]	@ 000ca2a8 0078
.org 0xca2aa
	cmp r0, #0	@ 000ca2aa 0028
.org 0xca2ac
	beq.n 0xca2b6	@ 000ca2ac 03d0
.org 0xca2ae
	adds r0, r1, #0	@ 000ca2ae 081c
.org 0xca2b0
	adds r0, #184	@ 000ca2b0 b830
.org 0xca2b2
	ldr r1, [r1, #84]	@ 000ca2b2 496d
.org 0xca2b4
	b.n 0xca2ce	@ 000ca2b4 0be0
.org 0xca2b6
	adds r0, r1, #0	@ 000ca2b6 081c
.org 0xca2b8
	adds r0, #184	@ 000ca2b8 b830
.org 0xca2ba
	ldr r1, [r1, #84]	@ 000ca2ba 496d
.org 0xca2bc
	b.n 0xca2de	@ 000ca2bc 0fe0
.org 0xca2be
	adds r0, r1, #0	@ 000ca2be 081c
.org 0xca2c0
	adds r0, #182	@ 000ca2c0 b630
.org 0xca2c2
	ldrb r0, [r0, #0]	@ 000ca2c2 0078
.org 0xca2c4
	cmp r0, #0	@ 000ca2c4 0028
.org 0xca2c6
	beq.n 0xca2d8	@ 000ca2c6 07d0
.org 0xca2c8
	adds r0, r1, #0	@ 000ca2c8 081c
.org 0xca2ca
	adds r0, #188	@ 000ca2ca bc30
.org 0xca2cc
	ldr r1, [r1, #88]	@ 000ca2cc 896d
.org 0xca2ce
	ldr r0, [r0, #0]	@ 000ca2ce 0068
.org 0xca2d0
	cmp r1, r0	@ 000ca2d0 8142
.org 0xca2d2
	bcc.n 0xca2e4	@ 000ca2d2 07d3
.org 0xca2d4
	movs r0, #1	@ 000ca2d4 0120
.org 0xca2d6
	b.n 0xca2e6	@ 000ca2d6 06e0
.org 0xca2d8
	adds r0, r1, #0	@ 000ca2d8 081c
.org 0xca2da
	adds r0, #188	@ 000ca2da bc30
.org 0xca2dc
	ldr r1, [r1, #88]	@ 000ca2dc 896d
.org 0xca2de
	ldr r0, [r0, #0]	@ 000ca2de 0068
.org 0xca2e0
	cmp r1, r0	@ 000ca2e0 8142
.org 0xca2e2
	bls.n 0xca2d4	@ 000ca2e2 f7d9
.org 0xca2e4
	movs r0, #0	@ 000ca2e4 0020
.org 0xca2e6
	pop {r1}	@ 000ca2e6 02bc
.org 0xca2e8
	bx r1	@ 000ca2e8 0847
