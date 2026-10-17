@ FUN_080f74c4  entry 0x080f74c4  size 66
.thumb
.org 0xf74c4
FUN_080f74c4:
	push {r4, lr}	@ 000f74c4 10b5
.org 0xf74c6
	adds r4, r0, #0	@ 000f74c6 041c
.org 0xf74c8
	ldr r0, [r4, #40]	@ 000f74c8 a06a
.org 0xf74ca
	ldr r3, [r0, #40]	@ 000f74ca 836a
.org 0xf74cc
	adds r0, r4, #0	@ 000f74cc 201c
.org 0xf74ce
	adds r0, #184	@ 000f74ce b830
.org 0xf74d0
	ldr r2, [r0, #0]	@ 000f74d0 0268
.org 0xf74d2
	cmp r2, #0	@ 000f74d2 002a
.org 0xf74d4
	beq.n 0xf74ec	@ 000f74d4 0ad0
.org 0xf74d6
	adds r0, r2, #0	@ 000f74d6 101c
.org 0xf74d8
	adds r0, #140	@ 000f74d8 8c30
.org 0xf74da
	ldr r0, [r0, #0]	@ 000f74da 0068
.org 0xf74dc
	movs r1, #128	@ 000f74dc 8021
.org 0xf74de
	lsls r1, r1, #4	@ 000f74de 0901
.org 0xf74e0
	ands r0, r1	@ 000f74e0 0840
.org 0xf74e2
	cmp r0, #0	@ 000f74e2 0028
.org 0xf74e4
	beq.n 0xf74e8	@ 000f74e4 00d0
.org 0xf74e6
	movs r2, #0	@ 000f74e6 0022
.org 0xf74e8
	cmp r2, #0	@ 000f74e8 002a
.org 0xf74ea
	bne.n 0xf74fa	@ 000f74ea 06d1
.org 0xf74ec
	adds r2, r4, #0	@ 000f74ec 221c
.org 0xf74ee
	adds r2, #84	@ 000f74ee 5432
.org 0xf74f0
	adds r0, r3, #0	@ 000f74f0 181c
.org 0xf74f2
	adds r1, r4, #0	@ 000f74f2 211c
.org 0xf74f4
	bl 0x9e1f0	@ 000f74f4 a6f77cfe
.org 0xf74f8
	adds r2, r0, #0	@ 000f74f8 021c
.org 0xf74fa
	adds r0, r4, #0	@ 000f74fa 201c
.org 0xf74fc
	adds r0, #184	@ 000f74fc b830
.org 0xf74fe
	str r2, [r0, #0]	@ 000f74fe 0260
.org 0xf7500
	pop {r4}	@ 000f7500 10bc
.org 0xf7502
	pop {r0}	@ 000f7502 01bc
.org 0xf7504
	bx r0	@ 000f7504 0047
