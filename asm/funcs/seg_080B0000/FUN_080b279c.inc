@ FUN_080b279c  entry 0x080b279c  size 54
.thumb
.org 0xb279c
FUN_080b279c:
	push {r4, lr}	@ 000b279c 10b5
.org 0xb279e
	adds r4, r0, #0	@ 000b279e 041c
.org 0xb27a0
	ldrb r0, [r4, #14]	@ 000b27a0 a07b
.org 0xb27a2
	cmp r0, #0	@ 000b27a2 0028
.org 0xb27a4
	bne.n 0xb27b4	@ 000b27a4 06d1
.org 0xb27a6
	ldr r1, [pc, #44]	@ 000b27a6 0b49
.org 0xb27a8
	adds r0, r4, #0	@ 000b27a8 201c
.org 0xb27aa
	bl 0x1cf00	@ 000b27aa 6af7a9fb
.org 0xb27ae
	ldrb r0, [r4, #14]	@ 000b27ae a07b
.org 0xb27b0
	adds r0, #1	@ 000b27b0 0130
.org 0xb27b2
	strb r0, [r4, #14]	@ 000b27b2 a073
.org 0xb27b4
	adds r0, r4, #0	@ 000b27b4 201c
.org 0xb27b6
	adds r0, #115	@ 000b27b6 7330
.org 0xb27b8
	ldrb r0, [r0, #0]	@ 000b27b8 0078
.org 0xb27ba
	cmp r0, #3	@ 000b27ba 0328
.org 0xb27bc
	bne.n 0xb27cc	@ 000b27bc 06d1
.org 0xb27be
	movs r0, #0	@ 000b27be 0020
.org 0xb27c0
	strb r0, [r4, #13]	@ 000b27c0 6073
.org 0xb27c2
	movs r1, #1	@ 000b27c2 0121
.org 0xb27c4
	strb r1, [r4, #15]	@ 000b27c4 e173
.org 0xb27c6
	strb r0, [r4, #14]	@ 000b27c6 a073
.org 0xb27c8
	movs r0, #30	@ 000b27c8 1e20
.org 0xb27ca
	strb r0, [r4, #18]	@ 000b27ca a074
.org 0xb27cc
	pop {r4}	@ 000b27cc 10bc
.org 0xb27ce
	pop {r0}	@ 000b27ce 01bc
.org 0xb27d0
	bx r0	@ 000b27d0 0047
