@ FUN_0803aaf4  entry 0x0803aaf4  size 52
.thumb
.org 0x3aaf4
FUN_0803aaf4:
	push {r4, r5, r6, lr}	@ 0003aaf4 70b5
.org 0x3aaf6
	movs r3, #0	@ 0003aaf6 0023
.org 0x3aaf8
	ldr r6, [pc, #28]	@ 0003aaf8 074e
.org 0x3aafa
	movs r5, #7	@ 0003aafa 0725
.org 0x3aafc
	movs r4, #1	@ 0003aafc 0124
.org 0x3aafe
	adds r2, r3, #0	@ 0003aafe 1a1c
.org 0x3ab00
	adds r2, #78	@ 0003ab00 4e32
.org 0x3ab02
	asrs r0, r2, #3	@ 0003ab02 d010
.org 0x3ab04
	adds r0, r0, r6	@ 0003ab04 8019
.org 0x3ab06
	ldrb r1, [r0, #0]	@ 0003ab06 0178
.org 0x3ab08
	adds r0, r2, #0	@ 0003ab08 101c
.org 0x3ab0a
	ands r0, r5	@ 0003ab0a 2840
.org 0x3ab0c
	asrs r1, r0	@ 0003ab0c 0141
.org 0x3ab0e
	ands r1, r4	@ 0003ab0e 2140
.org 0x3ab10
	cmp r1, #0	@ 0003ab10 0029
.org 0x3ab12
	bne.n 0x3ab1c	@ 0003ab12 03d1
.org 0x3ab14
	movs r0, #0	@ 0003ab14 0020
.org 0x3ab16
	b.n 0x3ab26	@ 0003ab16 06e0
.org 0x3ab18
	.byte 0xb4,0xe8,0x02,0x02	@ 0003ab18 data
.org 0x3ab1c
	cmp r2, #131	@ 0003ab1c 832a
.org 0x3ab1e
	beq.n 0x3ab24	@ 0003ab1e 01d0
.org 0x3ab20
	adds r3, #1	@ 0003ab20 0133
.org 0x3ab22
	b.n 0x3aafe	@ 0003ab22 ece7
.org 0x3ab24
	movs r0, #1	@ 0003ab24 0120
.org 0x3ab26
	pop {r4, r5, r6}	@ 0003ab26 70bc
