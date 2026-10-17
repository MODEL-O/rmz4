@ FUN_0804409c  entry 0x0804409c  size 40
.thumb
.org 0x4409c
FUN_0804409c:
	push {lr}	@ 0004409c 00b5
.org 0x4409e
	bl 0x7c7c	@ 0004409e c3f7edfd
.org 0x440a2
	lsls r0, r0, #16	@ 000440a2 0004
.org 0x440a4
	lsrs r0, r0, #16	@ 000440a4 000c
.org 0x440a6
	adds r1, r0, #0	@ 000440a6 011c
.org 0x440a8
	movs r0, #15	@ 000440a8 0f20
.org 0x440aa
	ands r0, r1	@ 000440aa 0840
.org 0x440ac
	cmp r0, #15	@ 000440ac 0f28
.org 0x440ae
	beq.n 0x440be	@ 000440ae 06d0
.org 0x440b0
	movs r0, #128	@ 000440b0 8020
.org 0x440b2
	lsls r0, r0, #8	@ 000440b2 0002
.org 0x440b4
	ands r0, r1	@ 000440b4 0840
.org 0x440b6
	cmp r0, #0	@ 000440b6 0028
.org 0x440b8
	bne.n 0x440be	@ 000440b8 01d1
.org 0x440ba
	adds r0, r1, #0	@ 000440ba 081c
.org 0x440bc
	b.n 0x440c0	@ 000440bc 00e0
.org 0x440be
	movs r0, #0	@ 000440be 0020
.org 0x440c0
	pop {r1}	@ 000440c0 02bc
.org 0x440c2
	bx r1	@ 000440c2 0847
