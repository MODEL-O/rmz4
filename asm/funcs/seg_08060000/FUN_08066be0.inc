@ FUN_08066be0  entry 0x08066be0  size 44
.thumb
.org 0x66be0
FUN_08066be0:
	cmp r0, #0	@ 00066be0 0028
.org 0x66be2
	beq.n 0x66c36	@ 00066be2 28d0
.org 0x66be4
	movs r1, #0	@ 00066be4 0021
.org 0x66be6
	str r1, [sp, #8]	@ 00066be6 0291
.org 0x66be8
	ldrb r0, [r5, #15]	@ 00066be8 e87b
.org 0x66bea
	cmp r0, #0	@ 00066bea 0028
.org 0x66bec
	bne.n 0x66bf0	@ 00066bec 00d1
.org 0x66bee
	ldr r1, [pc, #20]	@ 00066bee 0549
.org 0x66bf0
	add r0, sp, #8	@ 00066bf0 02a8
.org 0x66bf2
	str r1, [r0, #4]	@ 00066bf2 4160
.org 0x66bf4
	adds r1, r0, #0	@ 00066bf4 011c
.org 0x66bf6
	adds r0, r5, #0	@ 00066bf6 281c
.org 0x66bf8
	bl 0xd296c	@ 00066bf8 6bf0b8fe
.org 0x66bfc
	str r0, [r5, #44]	@ 00066bfc e862
.org 0x66bfe
	movs r0, #2	@ 00066bfe 0220
.org 0x66c00
	strb r0, [r5, #13]	@ 00066c00 6873
.org 0x66c02
	b.n 0x66c36	@ 00066c02 18e0
.org 0x66c04
	.byte 0x00,0xec,0xff,0xff	@ 00066c04 data
.org 0x66c08
	cmp r0, #2	@ 00066c08 0228
.org 0x66c0a
	bne.n 0x66c28	@ 00066c0a 0dd1
