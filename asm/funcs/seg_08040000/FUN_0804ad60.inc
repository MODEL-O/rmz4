@ FUN_0804ad60  entry 0x0804ad60  size 40
.thumb
.org 0x4ad60
FUN_0804ad60:
	push {lr}	@ 0004ad60 00b5
.org 0x4ad62
	bl 0x7c7c	@ 0004ad62 bcf78bff
.org 0x4ad66
	lsls r0, r0, #16	@ 0004ad66 0004
.org 0x4ad68
	lsrs r0, r0, #16	@ 0004ad68 000c
.org 0x4ad6a
	adds r1, r0, #0	@ 0004ad6a 011c
.org 0x4ad6c
	movs r0, #15	@ 0004ad6c 0f20
.org 0x4ad6e
	ands r0, r1	@ 0004ad6e 0840
.org 0x4ad70
	cmp r0, #15	@ 0004ad70 0f28
.org 0x4ad72
	beq.n 0x4ad82	@ 0004ad72 06d0
.org 0x4ad74
	movs r0, #128	@ 0004ad74 8020
.org 0x4ad76
	lsls r0, r0, #8	@ 0004ad76 0002
.org 0x4ad78
	ands r0, r1	@ 0004ad78 0840
.org 0x4ad7a
	cmp r0, #0	@ 0004ad7a 0028
.org 0x4ad7c
	bne.n 0x4ad82	@ 0004ad7c 01d1
.org 0x4ad7e
	adds r0, r1, #0	@ 0004ad7e 081c
.org 0x4ad80
	b.n 0x4ad84	@ 0004ad80 00e0
.org 0x4ad82
	movs r0, #0	@ 0004ad82 0020
.org 0x4ad84
	pop {r1}	@ 0004ad84 02bc
.org 0x4ad86
	bx r1	@ 0004ad86 0847
