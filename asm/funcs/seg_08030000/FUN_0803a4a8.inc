@ FUN_0803a4a8  entry 0x0803a4a8  size 62
.thumb
.org 0x3a4a8
FUN_0803a4a8:
	push {lr}	@ 0003a4a8 00b5
.org 0x3a4aa
	adds r1, r0, #0	@ 0003a4aa 011c
.org 0x3a4ac
	adds r0, #180	@ 0003a4ac b430
.org 0x3a4ae
	ldrb r0, [r0, #19]	@ 0003a4ae c07c
.org 0x3a4b0
	cmp r0, #2	@ 0003a4b0 0228
.org 0x3a4b2
	bne.n 0x3a4c2	@ 0003a4b2 06d1
.org 0x3a4b4
	adds r0, r1, #0	@ 0003a4b4 081c
.org 0x3a4b6
	adds r0, #243	@ 0003a4b6 f330
.org 0x3a4b8
	ldrb r0, [r0, #0]	@ 0003a4b8 0078
.org 0x3a4ba
	movs r2, #0	@ 0003a4ba 0022
.org 0x3a4bc
	cmp r0, #2	@ 0003a4bc 0228
.org 0x3a4be
	bls.n 0x3a4d0	@ 0003a4be 07d9
.org 0x3a4c0
	b.n 0x3a4ce	@ 0003a4c0 05e0
.org 0x3a4c2
	adds r0, r1, #0	@ 0003a4c2 081c
.org 0x3a4c4
	adds r0, #243	@ 0003a4c4 f330
.org 0x3a4c6
	ldrb r0, [r0, #0]	@ 0003a4c6 0078
.org 0x3a4c8
	movs r2, #0	@ 0003a4c8 0022
.org 0x3a4ca
	cmp r0, #3	@ 0003a4ca 0328
.org 0x3a4cc
	bne.n 0x3a4d0	@ 0003a4cc 00d1
.org 0x3a4ce
	movs r2, #1	@ 0003a4ce 0122
.org 0x3a4d0
	adds r0, r1, #0	@ 0003a4d0 081c
.org 0x3a4d2
	adds r0, #180	@ 0003a4d2 b430
.org 0x3a4d4
	ldrb r0, [r0, #19]	@ 0003a4d4 c07c
.org 0x3a4d6
	cmp r0, #3	@ 0003a4d6 0328
.org 0x3a4d8
	bne.n 0x3a4e0	@ 0003a4d8 02d1
.org 0x3a4da
	adds r0, r2, #3	@ 0003a4da d01c
.org 0x3a4dc
	lsls r0, r0, #24	@ 0003a4dc 0006
.org 0x3a4de
	lsrs r2, r0, #24	@ 0003a4de 020e
.org 0x3a4e0
	adds r0, r2, #0	@ 0003a4e0 101c
.org 0x3a4e2
	pop {r1}	@ 0003a4e2 02bc
.org 0x3a4e4
	bx r1	@ 0003a4e4 0847
