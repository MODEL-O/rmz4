@ FUN_08046f90  entry 0x08046f90  size 40
.thumb
.org 0x46f90
FUN_08046f90:
	push {lr}	@ 00046f90 00b5
.org 0x46f92
	bl 0x7c7c	@ 00046f92 c0f773fe
.org 0x46f96
	lsls r0, r0, #16	@ 00046f96 0004
.org 0x46f98
	lsrs r0, r0, #16	@ 00046f98 000c
.org 0x46f9a
	adds r1, r0, #0	@ 00046f9a 011c
.org 0x46f9c
	movs r0, #15	@ 00046f9c 0f20
.org 0x46f9e
	ands r0, r1	@ 00046f9e 0840
.org 0x46fa0
	cmp r0, #15	@ 00046fa0 0f28
.org 0x46fa2
	beq.n 0x46fb2	@ 00046fa2 06d0
.org 0x46fa4
	movs r0, #128	@ 00046fa4 8020
.org 0x46fa6
	lsls r0, r0, #8	@ 00046fa6 0002
.org 0x46fa8
	ands r0, r1	@ 00046fa8 0840
.org 0x46faa
	cmp r0, #0	@ 00046faa 0028
.org 0x46fac
	bne.n 0x46fb2	@ 00046fac 01d1
.org 0x46fae
	adds r0, r1, #0	@ 00046fae 081c
.org 0x46fb0
	b.n 0x46fb4	@ 00046fb0 00e0
.org 0x46fb2
	movs r0, #0	@ 00046fb2 0020
.org 0x46fb4
	pop {r1}	@ 00046fb4 02bc
.org 0x46fb6
	bx r1	@ 00046fb6 0847
