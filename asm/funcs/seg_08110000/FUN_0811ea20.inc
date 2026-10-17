@ FUN_0811ea20  entry 0x0811ea20  size 60
.thumb
.org 0x11ea20
FUN_0811ea20:
	push {r4, lr}	@ 0011ea20 10b5
.org 0x11ea22
	adds r4, r0, #0	@ 0011ea22 041c
.org 0x11ea24
	movs r0, #63	@ 0011ea24 3f20
.org 0x11ea26
	bl 0x2624	@ 0011ea26 e3f6fdfd
.org 0x11ea2a
	movs r0, #64	@ 0011ea2a 4020
.org 0x11ea2c
	bl 0x2624	@ 0011ea2c e3f6fafd
.org 0x11ea30
	ldr r0, [pc, #28]	@ 0011ea30 0748
.org 0x11ea32
	adds r1, r4, r0	@ 0011ea32 2118
.org 0x11ea34
	movs r2, #0	@ 0011ea34 0022
.org 0x11ea36
	movs r0, #2	@ 0011ea36 0220
.org 0x11ea38
	strb r0, [r1, #5]	@ 0011ea38 4871
.org 0x11ea3a
	ldr r0, [pc, #24]	@ 0011ea3a 0648
.org 0x11ea3c
	strh r2, [r0, #0]	@ 0011ea3c 0280
.org 0x11ea3e
	ldrb r0, [r1, #7]	@ 0011ea3e c879
.org 0x11ea40
	cmp r0, #1	@ 0011ea40 0128
.org 0x11ea42
	bne.n 0x11ea5c	@ 0011ea42 0bd1
.org 0x11ea44
	ldr r1, [pc, #16]	@ 0011ea44 0449
.org 0x11ea46
	adds r0, r4, #0	@ 0011ea46 201c
.org 0x11ea48
	bl 0x1126ac	@ 0011ea48 f3f730fe
.org 0x11ea4c
	b.n 0x11ea64	@ 0011ea4c 0ae0
.org 0x11ea4e
	.byte 0x00	@ 0011ea4e data
.org 0x11ea4f
	.byte 0x00	@ 0011ea4f data
.org 0x11ea50
	.byte 0xcc,0x0d,0x00,0x00	@ 0011ea50 data
.org 0x11ea54
	.byte 0xc0,0x2a,0x00,0x03	@ 0011ea54 data
.org 0x11ea58
	.byte 0x00,0x04,0x0a,0x07	@ 0011ea58 data
