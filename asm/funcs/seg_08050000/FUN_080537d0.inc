@ FUN_080537d0  entry 0x080537d0  size 58
.thumb
.org 0x537d0
FUN_080537d0:
	push {r4, lr}	@ 000537d0 10b5
.org 0x537d2
	adds r4, r0, #0	@ 000537d2 041c
.org 0x537d4
	ldrb r0, [r4, #15]	@ 000537d4 e07b
.org 0x537d6
	cmp r0, #0	@ 000537d6 0028
.org 0x537d8
	bne.n 0x537ea	@ 000537d8 07d1
.org 0x537da
	movs r1, #182	@ 000537da b621
.org 0x537dc
	lsls r1, r1, #8	@ 000537dc 0902
.org 0x537de
	adds r0, r4, #0	@ 000537de 201c
.org 0x537e0
	bl 0x1cf00	@ 000537e0 c9f78efb
.org 0x537e4
	ldrb r0, [r4, #15]	@ 000537e4 e07b
.org 0x537e6
	adds r0, #1	@ 000537e6 0130
.org 0x537e8
	strb r0, [r4, #15]	@ 000537e8 e073
.org 0x537ea
	adds r0, r4, #0	@ 000537ea 201c
.org 0x537ec
	bl 0x1cff0	@ 000537ec c9f700fc
.org 0x537f0
	ldr r0, [r4, #24]	@ 000537f0 a069
.org 0x537f2
	ldrb r1, [r0, #9]	@ 000537f2 417a
.org 0x537f4
	movs r2, #1	@ 000537f4 0122
.org 0x537f6
	adds r0, r2, #0	@ 000537f6 101c
.org 0x537f8
	ands r0, r1	@ 000537f8 0840
.org 0x537fa
	cmp r0, #0	@ 000537fa 0028
.org 0x537fc
	beq.n 0x53804	@ 000537fc 02d0
.org 0x537fe
	movs r0, #0	@ 000537fe 0020
.org 0x53800
	strb r2, [r4, #14]	@ 00053800 a273
.org 0x53802
	strb r0, [r4, #15]	@ 00053802 e073
.org 0x53804
	pop {r4}	@ 00053804 10bc
.org 0x53806
	pop {r0}	@ 00053806 01bc
.org 0x53808
	bx r0	@ 00053808 0047
