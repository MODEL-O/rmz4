@ FUN_0804ec94  entry 0x0804ec94  size 38
.thumb
.org 0x4ec94
FUN_0804ec94:
	push {lr}	@ 0004ec94 00b5
.org 0x4ec96
	bl 0x7c7c	@ 0004ec96 b8f7f1ff
.org 0x4ec9a
	lsls r0, r0, #16	@ 0004ec9a 0004
.org 0x4ec9c
	lsrs r2, r0, #16	@ 0004ec9c 020c
.org 0x4ec9e
	movs r1, #15	@ 0004ec9e 0f21
.org 0x4eca0
	ands r1, r2	@ 0004eca0 1140
.org 0x4eca2
	cmp r1, #15	@ 0004eca2 0f29
.org 0x4eca4
	beq.n 0x4ecb4	@ 0004eca4 06d0
.org 0x4eca6
	movs r0, #128	@ 0004eca6 8020
.org 0x4eca8
	lsls r0, r0, #8	@ 0004eca8 0002
.org 0x4ecaa
	ands r0, r2	@ 0004ecaa 1040
.org 0x4ecac
	cmp r0, #0	@ 0004ecac 0028
.org 0x4ecae
	bne.n 0x4ecb4	@ 0004ecae 01d1
.org 0x4ecb0
	adds r0, r1, #0	@ 0004ecb0 081c
.org 0x4ecb2
	b.n 0x4ecb6	@ 0004ecb2 00e0
.org 0x4ecb4
	movs r0, #0	@ 0004ecb4 0020
.org 0x4ecb6
	pop {r1}	@ 0004ecb6 02bc
.org 0x4ecb8
	bx r1	@ 0004ecb8 0847
