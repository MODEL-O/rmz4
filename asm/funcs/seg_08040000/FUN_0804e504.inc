@ FUN_0804e504  entry 0x0804e504  size 38
.thumb
.org 0x4e504
FUN_0804e504:
	push {lr}	@ 0004e504 00b5
.org 0x4e506
	bl 0x7c7c	@ 0004e506 b9f7b9fb
.org 0x4e50a
	lsls r0, r0, #16	@ 0004e50a 0004
.org 0x4e50c
	lsrs r2, r0, #16	@ 0004e50c 020c
.org 0x4e50e
	movs r1, #15	@ 0004e50e 0f21
.org 0x4e510
	ands r1, r2	@ 0004e510 1140
.org 0x4e512
	cmp r1, #15	@ 0004e512 0f29
.org 0x4e514
	beq.n 0x4e524	@ 0004e514 06d0
.org 0x4e516
	movs r0, #128	@ 0004e516 8020
.org 0x4e518
	lsls r0, r0, #8	@ 0004e518 0002
.org 0x4e51a
	ands r0, r2	@ 0004e51a 1040
.org 0x4e51c
	cmp r0, #0	@ 0004e51c 0028
.org 0x4e51e
	bne.n 0x4e524	@ 0004e51e 01d1
.org 0x4e520
	adds r0, r1, #0	@ 0004e520 081c
.org 0x4e522
	b.n 0x4e526	@ 0004e522 00e0
.org 0x4e524
	movs r0, #0	@ 0004e524 0020
.org 0x4e526
	pop {r1}	@ 0004e526 02bc
.org 0x4e528
	bx r1	@ 0004e528 0847
