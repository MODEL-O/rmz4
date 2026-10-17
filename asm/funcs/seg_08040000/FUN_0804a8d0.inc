@ FUN_0804a8d0  entry 0x0804a8d0  size 46
.thumb
.org 0x4a8d0
FUN_0804a8d0:
	push {r4, lr}	@ 0004a8d0 10b5
.org 0x4a8d2
	adds r4, r0, #0	@ 0004a8d2 041c
.org 0x4a8d4
	adds r0, #189	@ 0004a8d4 bd30
.org 0x4a8d6
	ldrb r0, [r0, #0]	@ 0004a8d6 0078
.org 0x4a8d8
	cmp r0, #0	@ 0004a8d8 0028
.org 0x4a8da
	beq.n 0x4a8f2	@ 0004a8da 0ad0
.org 0x4a8dc
	ldrb r0, [r4, #16]	@ 0004a8dc 207c
.org 0x4a8de
	cmp r0, #0	@ 0004a8de 0028
.org 0x4a8e0
	bne.n 0x4a8f2	@ 0004a8e0 07d1
.org 0x4a8e2
	adds r1, r4, #0	@ 0004a8e2 211c
.org 0x4a8e4
	adds r1, #84	@ 0004a8e4 5431
.org 0x4a8e6
	movs r0, #1	@ 0004a8e6 0120
.org 0x4a8e8
	bl 0xd0c88	@ 0004a8e8 86f0cef9
.org 0x4a8ec
	movs r0, #53	@ 0004a8ec 3520
.org 0x4a8ee
	bl 0x2b10	@ 0004a8ee b8f70ff9
.org 0x4a8f2
	adds r0, r4, #0	@ 0004a8f2 201c
.org 0x4a8f4
	bl 0x3a8b4	@ 0004a8f4 eff7deff
.org 0x4a8f8
	pop {r4}	@ 0004a8f8 10bc
.org 0x4a8fa
	pop {r0}	@ 0004a8fa 01bc
.org 0x4a8fc
	bx r0	@ 0004a8fc 0047
