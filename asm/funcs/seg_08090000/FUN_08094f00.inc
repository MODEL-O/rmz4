@ FUN_08094f00  entry 0x08094f00  size 50
.thumb
.org 0x94f00
FUN_08094f00:
	push {lr}	@ 00094f00 00b5
.org 0x94f02
	sub sp, #8	@ 00094f02 82b0
.org 0x94f04
	ldrb r2, [r0, #16]	@ 00094f04 027c
.org 0x94f06
	ldr r1, [r0, #84]	@ 00094f06 416d
.org 0x94f08
	str r1, [sp, #0]	@ 00094f08 0091
.org 0x94f0a
	ldr r0, [r0, #88]	@ 00094f0a 806d
.org 0x94f0c
	ldr r1, [pc, #20]	@ 00094f0c 0549
.org 0x94f0e
	adds r0, r0, r1	@ 00094f0e 4018
.org 0x94f10
	str r0, [sp, #4]	@ 00094f10 0190
.org 0x94f12
	cmp r2, #2	@ 00094f12 022a
.org 0x94f14
	bne.n 0x94f28	@ 00094f14 08d1
.org 0x94f16
	movs r0, #1	@ 00094f16 0120
.org 0x94f18
	movs r1, #255	@ 00094f18 ff21
.org 0x94f1a
	mov r2, sp	@ 00094f1a 6a46
.org 0x94f1c
	bl 0x2ab88	@ 00094f1c 95f734fe
.org 0x94f20
	b.n 0x94f32	@ 00094f20 07e0
.org 0x94f22
	.byte 0x00	@ 00094f22 data
.org 0x94f23
	.byte 0x00	@ 00094f23 data
.org 0x94f24
	.byte 0x00,0xf8,0xff,0xff	@ 00094f24 data
.org 0x94f28
	movs r0, #1	@ 00094f28 0120
.org 0x94f2a
	movs r1, #24	@ 00094f2a 1821
.org 0x94f2c
	mov r2, sp	@ 00094f2c 6a46
.org 0x94f2e
	bl 0x2ab88	@ 00094f2e 95f72bfe
