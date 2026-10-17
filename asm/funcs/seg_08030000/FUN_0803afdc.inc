@ FUN_0803afdc  entry 0x0803afdc  size 36
.thumb
.org 0x3afdc
FUN_0803afdc:
	push {lr}	@ 0003afdc 00b5
.org 0x3afde
	adds r2, r0, #0	@ 0003afde 021c
.org 0x3afe0
	ldrb r0, [r2, #16]	@ 0003afe0 107c
.org 0x3afe2
	cmp r0, #0	@ 0003afe2 0028
.org 0x3afe4
	bne.n 0x3aff8	@ 0003afe4 08d1
.org 0x3afe6
	ldr r0, [r2, #84]	@ 0003afe6 506d
.org 0x3afe8
	str r0, [r1, #0]	@ 0003afe8 0860
.org 0x3afea
	ldr r0, [r2, #88]	@ 0003afea 906d
.org 0x3afec
	ldr r2, [pc, #4]	@ 0003afec 014a
.org 0x3afee
	adds r0, r0, r2	@ 0003afee 8018
.org 0x3aff0
	b.n 0x3affe	@ 0003aff0 05e0
.org 0x3aff2
	.byte 0x00	@ 0003aff2 data
.org 0x3aff3
	.byte 0x00	@ 0003aff3 data
.org 0x3aff4
	.byte 0x00,0xf3,0xff,0xff	@ 0003aff4 data
.org 0x3aff8
	ldr r0, [r2, #84]	@ 0003aff8 506d
.org 0x3affa
	str r0, [r1, #0]	@ 0003affa 0860
.org 0x3affc
	ldr r0, [r2, #88]	@ 0003affc 906d
.org 0x3affe
	str r0, [r1, #4]	@ 0003affe 4860
