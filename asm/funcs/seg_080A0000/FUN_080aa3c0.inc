@ FUN_080aa3c0  entry 0x080aa3c0  size 96
.thumb
.org 0xaa3c0
FUN_080aa3c0:
	push {r4, lr}	@ 000aa3c0 10b5
.org 0xaa3c2
	adds r4, r0, #0	@ 000aa3c2 041c
.org 0xaa3c4
	adds r0, #140	@ 000aa3c4 8c30
.org 0xaa3c6
	ldr r0, [r0, #0]	@ 000aa3c6 0068
.org 0xaa3c8
	movs r1, #128	@ 000aa3c8 8021
.org 0xaa3ca
	lsls r1, r1, #2	@ 000aa3ca 8900
.org 0xaa3cc
	ands r0, r1	@ 000aa3cc 0840
.org 0xaa3ce
	cmp r0, #0	@ 000aa3ce 0028
.org 0xaa3d0
	beq.n 0xaa3f0	@ 000aa3d0 0ed0
.org 0xaa3d2
	ldr r1, [pc, #24]	@ 000aa3d2 0649
.org 0xaa3d4
	ldrb r0, [r4, #9]	@ 000aa3d4 607a
.org 0xaa3d6
	lsls r0, r0, #2	@ 000aa3d6 8000
.org 0xaa3d8
	adds r0, r0, r1	@ 000aa3d8 4018
.org 0xaa3da
	movs r1, #2	@ 000aa3da 0221
.org 0xaa3dc
	str r1, [r4, #12]	@ 000aa3dc e160
.org 0xaa3de
	ldr r0, [r0, #0]	@ 000aa3de 0068
.org 0xaa3e0
	ldr r0, [r0, #8]	@ 000aa3e0 8068
.org 0xaa3e2
	str r0, [r4, #20]	@ 000aa3e2 6061
.org 0xaa3e4
	adds r0, r4, #0	@ 000aa3e4 201c
.org 0xaa3e6
	bl 0xaa42c	@ 000aa3e6 00f021f8
.org 0xaa3ea
	b.n 0xaa424	@ 000aa3ea 1be0
.org 0xaa3ec
	.byte 0x40,0xdb,0x85,0x08	@ 000aa3ec data
.org 0xaa3f0
	adds r0, r4, #0	@ 000aa3f0 201c
.org 0xaa3f2
	bl 0xaaa90	@ 000aa3f2 00f04dfb
.org 0xaa3f6
	adds r0, r4, #0	@ 000aa3f6 201c
.org 0xaa3f8
	adds r0, #192	@ 000aa3f8 c030
.org 0xaa3fa
	ldr r0, [r0, #0]	@ 000aa3fa 0068
.org 0xaa3fc
	cmp r0, #0	@ 000aa3fc 0028
.org 0xaa3fe
	bne.n 0xaa418	@ 000aa3fe 0bd1
.org 0xaa400
	ldr r0, [pc, #16]	@ 000aa400 0448
.org 0xaa402
	ldrb r1, [r4, #13]	@ 000aa402 617b
.org 0xaa404
	lsls r1, r1, #2	@ 000aa404 8900
.org 0xaa406
	adds r1, r1, r0	@ 000aa406 0918
.org 0xaa408
	ldr r1, [r1, #0]	@ 000aa408 0968
.org 0xaa40a
	adds r0, r4, #0	@ 000aa40a 201c
.org 0xaa40c
	bl 0x128f80	@ 000aa40c 7ef0b8fd
.org 0xaa410
	b.n 0xaa41e	@ 000aa410 05e0
.org 0xaa412
	.byte 0x00	@ 000aa412 data
.org 0xaa413
	.byte 0x00	@ 000aa413 data
.org 0xaa414
	.byte 0xbc,0x2a,0x86,0x08	@ 000aa414 data
.org 0xaa418
	adds r0, r4, #0	@ 000aa418 201c
.org 0xaa41a
	bl 0xaaafc	@ 000aa41a 00f06ffb
.org 0xaa41e
	adds r0, r4, #0	@ 000aa41e 201c
