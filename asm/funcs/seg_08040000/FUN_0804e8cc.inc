@ FUN_0804e8cc  entry 0x0804e8cc  size 38
.thumb
.org 0x4e8cc
FUN_0804e8cc:
	push {lr}	@ 0004e8cc 00b5
.org 0x4e8ce
	bl 0x7c7c	@ 0004e8ce b9f7d5f9
.org 0x4e8d2
	lsls r0, r0, #16	@ 0004e8d2 0004
.org 0x4e8d4
	lsrs r2, r0, #16	@ 0004e8d4 020c
.org 0x4e8d6
	movs r1, #15	@ 0004e8d6 0f21
.org 0x4e8d8
	ands r1, r2	@ 0004e8d8 1140
.org 0x4e8da
	cmp r1, #15	@ 0004e8da 0f29
.org 0x4e8dc
	beq.n 0x4e8ec	@ 0004e8dc 06d0
.org 0x4e8de
	movs r0, #128	@ 0004e8de 8020
.org 0x4e8e0
	lsls r0, r0, #8	@ 0004e8e0 0002
.org 0x4e8e2
	ands r0, r2	@ 0004e8e2 1040
.org 0x4e8e4
	cmp r0, #0	@ 0004e8e4 0028
.org 0x4e8e6
	bne.n 0x4e8ec	@ 0004e8e6 01d1
.org 0x4e8e8
	adds r0, r1, #0	@ 0004e8e8 081c
.org 0x4e8ea
	b.n 0x4e8ee	@ 0004e8ea 00e0
.org 0x4e8ec
	movs r0, #0	@ 0004e8ec 0020
.org 0x4e8ee
	pop {r1}	@ 0004e8ee 02bc
.org 0x4e8f0
	bx r1	@ 0004e8f0 0847
