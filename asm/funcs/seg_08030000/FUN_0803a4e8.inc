@ FUN_0803a4e8  entry 0x0803a4e8  size 62
.thumb
.org 0x3a4e8
FUN_0803a4e8:
	push {lr}	@ 0003a4e8 00b5
.org 0x3a4ea
	adds r1, r0, #0	@ 0003a4ea 011c
.org 0x3a4ec
	adds r0, #180	@ 0003a4ec b430
.org 0x3a4ee
	ldrb r0, [r0, #19]	@ 0003a4ee c07c
.org 0x3a4f0
	cmp r0, #2	@ 0003a4f0 0228
.org 0x3a4f2
	bne.n 0x3a502	@ 0003a4f2 06d1
.org 0x3a4f4
	adds r0, r1, #0	@ 0003a4f4 081c
.org 0x3a4f6
	adds r0, #243	@ 0003a4f6 f330
.org 0x3a4f8
	ldrb r0, [r0, #0]	@ 0003a4f8 0078
.org 0x3a4fa
	movs r2, #0	@ 0003a4fa 0022
.org 0x3a4fc
	cmp r0, #2	@ 0003a4fc 0228
.org 0x3a4fe
	bls.n 0x3a510	@ 0003a4fe 07d9
.org 0x3a500
	b.n 0x3a50e	@ 0003a500 05e0
.org 0x3a502
	adds r0, r1, #0	@ 0003a502 081c
.org 0x3a504
	adds r0, #243	@ 0003a504 f330
.org 0x3a506
	ldrb r0, [r0, #0]	@ 0003a506 0078
.org 0x3a508
	movs r2, #0	@ 0003a508 0022
.org 0x3a50a
	cmp r0, #3	@ 0003a50a 0328
.org 0x3a50c
	bne.n 0x3a510	@ 0003a50c 00d1
.org 0x3a50e
	movs r2, #1	@ 0003a50e 0122
.org 0x3a510
	adds r0, r1, #0	@ 0003a510 081c
.org 0x3a512
	adds r0, #180	@ 0003a512 b430
.org 0x3a514
	ldrb r0, [r0, #19]	@ 0003a514 c07c
.org 0x3a516
	cmp r0, #3	@ 0003a516 0328
.org 0x3a518
	bne.n 0x3a520	@ 0003a518 02d1
.org 0x3a51a
	adds r0, r2, #3	@ 0003a51a d01c
.org 0x3a51c
	lsls r0, r0, #24	@ 0003a51c 0006
.org 0x3a51e
	lsrs r2, r0, #24	@ 0003a51e 020e
.org 0x3a520
	adds r0, r2, #0	@ 0003a520 101c
.org 0x3a522
	pop {r1}	@ 0003a522 02bc
.org 0x3a524
	bx r1	@ 0003a524 0847
