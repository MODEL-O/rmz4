@ FUN_0804a6c4  entry 0x0804a6c4  size 40
.thumb
.org 0x4a6c4
FUN_0804a6c4:
	push {lr}	@ 0004a6c4 00b5
.org 0x4a6c6
	bl 0x7c7c	@ 0004a6c6 bdf7d9fa
.org 0x4a6ca
	lsls r0, r0, #16	@ 0004a6ca 0004
.org 0x4a6cc
	lsrs r0, r0, #16	@ 0004a6cc 000c
.org 0x4a6ce
	adds r1, r0, #0	@ 0004a6ce 011c
.org 0x4a6d0
	movs r0, #15	@ 0004a6d0 0f20
.org 0x4a6d2
	ands r0, r1	@ 0004a6d2 0840
.org 0x4a6d4
	cmp r0, #15	@ 0004a6d4 0f28
.org 0x4a6d6
	beq.n 0x4a6e6	@ 0004a6d6 06d0
.org 0x4a6d8
	movs r0, #128	@ 0004a6d8 8020
.org 0x4a6da
	lsls r0, r0, #8	@ 0004a6da 0002
.org 0x4a6dc
	ands r0, r1	@ 0004a6dc 0840
.org 0x4a6de
	cmp r0, #0	@ 0004a6de 0028
.org 0x4a6e0
	bne.n 0x4a6e6	@ 0004a6e0 01d1
.org 0x4a6e2
	adds r0, r1, #0	@ 0004a6e2 081c
.org 0x4a6e4
	b.n 0x4a6e8	@ 0004a6e4 00e0
.org 0x4a6e6
	movs r0, #0	@ 0004a6e6 0020
.org 0x4a6e8
	pop {r1}	@ 0004a6e8 02bc
.org 0x4a6ea
	bx r1	@ 0004a6ea 0847
