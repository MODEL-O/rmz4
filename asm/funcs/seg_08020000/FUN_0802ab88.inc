@ FUN_0802ab88  entry 0x0802ab88  size 74
.thumb
.org 0x2ab88
FUN_0802ab88:
	push {r4, r5, lr}	@ 0002ab88 30b5
.org 0x2ab8a
	adds r5, r0, #0	@ 0002ab8a 051c
.org 0x2ab8c
	adds r4, r2, #0	@ 0002ab8c 141c
.org 0x2ab8e
	lsls r1, r1, #24	@ 0002ab8e 0906
.org 0x2ab90
	lsrs r3, r1, #24	@ 0002ab90 0b0e
.org 0x2ab92
	ldr r2, [pc, #44]	@ 0002ab92 0b4a
.org 0x2ab94
	ldr r1, [r2, #0]	@ 0002ab94 1168
.org 0x2ab96
	ldr r0, [pc, #44]	@ 0002ab96 0b48
.org 0x2ab98
	muls r0, r1	@ 0002ab98 4843
.org 0x2ab9a
	ldr r1, [pc, #44]	@ 0002ab9a 0b49
.org 0x2ab9c
	adds r0, r0, r1	@ 0002ab9c 4018
.org 0x2ab9e
	lsls r0, r0, #1	@ 0002ab9e 4000
.org 0x2aba0
	lsrs r1, r0, #1	@ 0002aba0 4108
.org 0x2aba2
	str r1, [r2, #0]	@ 0002aba2 1160
.org 0x2aba4
	lsrs r0, r0, #17	@ 0002aba4 400c
.org 0x2aba6
	lsls r0, r0, #24	@ 0002aba6 0006
.org 0x2aba8
	lsrs r0, r0, #24	@ 0002aba8 000e
.org 0x2abaa
	cmp r3, #255	@ 0002abaa ff2b
.org 0x2abac
	beq.n 0x2abcc	@ 0002abac 0ed0
.org 0x2abae
	cmp r0, #31	@ 0002abae 1f28
.org 0x2abb0
	bhi.n 0x2abcc	@ 0002abb0 0cd8
.org 0x2abb2
	adds r0, r3, #0	@ 0002abb2 181c
.org 0x2abb4
	adds r1, r4, #0	@ 0002abb4 211c
.org 0x2abb6
	movs r2, #0	@ 0002abb6 0022
.org 0x2abb8
	bl 0x108908	@ 0002abb8 ddf0a6fe
.org 0x2abbc
	movs r0, #0	@ 0002abbc 0020
.org 0x2abbe
	b.n 0x2abd8	@ 0002abbe 0be0
.org 0x2abc0
	.byte 0x38,0xdc,0x02,0x02	@ 0002abc0 data
.org 0x2abc4
	.byte 0xfd,0x43,0x03,0x00	@ 0002abc4 data
.org 0x2abc8
	.byte 0xc3,0x9e,0x26,0x00	@ 0002abc8 data
.org 0x2abcc
	adds r0, r5, #0	@ 0002abcc 281c
.org 0x2abce
	adds r1, r4, #0	@ 0002abce 211c
.org 0x2abd0
	bl 0x2aaec	@ 0002abd0 fff78cff
