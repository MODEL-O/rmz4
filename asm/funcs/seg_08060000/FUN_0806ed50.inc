@ FUN_0806ed50  entry 0x0806ed50  size 50
.thumb
.org 0x6ed50
FUN_0806ed50:
	push {r4, lr}	@ 0006ed50 10b5
.org 0x6ed52
	adds r4, r0, #0	@ 0006ed52 041c
.org 0x6ed54
	ldrb r0, [r4, #15]	@ 0006ed54 e07b
.org 0x6ed56
	cmp r0, #0	@ 0006ed56 0028
.org 0x6ed58
	bne.n 0x6ed6a	@ 0006ed58 07d1
.org 0x6ed5a
	adds r0, r4, #0	@ 0006ed5a 201c
.org 0x6ed5c
	adds r0, #116	@ 0006ed5c 7430
.org 0x6ed5e
	ldr r1, [pc, #36]	@ 0006ed5e 0949
.org 0x6ed60
	bl 0x5784	@ 0006ed60 96f710fd
.org 0x6ed64
	ldrb r0, [r4, #15]	@ 0006ed64 e07b
.org 0x6ed66
	adds r0, #1	@ 0006ed66 0130
.org 0x6ed68
	strb r0, [r4, #15]	@ 0006ed68 e073
.org 0x6ed6a
	ldr r0, [pc, #28]	@ 0006ed6a 0748
.org 0x6ed6c
	ldrh r1, [r0, #8]	@ 0006ed6c 0189
.org 0x6ed6e
	movs r0, #8	@ 0006ed6e 0820
.org 0x6ed70
	ands r0, r1	@ 0006ed70 0840
.org 0x6ed72
	cmp r0, #0	@ 0006ed72 0028
.org 0x6ed74
	bne.n 0x6ed7c	@ 0006ed74 02d1
.org 0x6ed76
	adds r0, r4, #0	@ 0006ed76 201c
.org 0x6ed78
	bl 0x6f1d8	@ 0006ed78 00f02efa
.org 0x6ed7c
	pop {r4}	@ 0006ed7c 10bc
.org 0x6ed7e
	pop {r0}	@ 0006ed7e 01bc
.org 0x6ed80
	bx r0	@ 0006ed80 0047
