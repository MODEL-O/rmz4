@ FUN_08008fa0  entry 0x08008fa0  size 24
.thumb
.org 0x8fa0
FUN_08008fa0:
	push {lr}	@ 00008fa0 00b5
.org 0x8fa2
	ldr r2, [pc, #16]	@ 00008fa2 044a
.org 0x8fa4
	adds r1, r1, r2	@ 00008fa4 8918
.org 0x8fa6
	asrs r0, r0, #2	@ 00008fa6 8010
.org 0x8fa8
	subs r0, r1, r0	@ 00008fa8 081a
.org 0x8faa
	cmp r0, #0	@ 00008faa 0028
.org 0x8fac
	bgt.n 0x8fb8	@ 00008fac 04dc
.org 0x8fae
	movs r0, #0	@ 00008fae 0020
.org 0x8fb0
	b.n 0x8fba	@ 00008fb0 03e0
.org 0x8fb2
	.byte 0x00	@ 00008fb2 data
.org 0x8fb3
	.byte 0x00	@ 00008fb3 data
.org 0x8fb4
	.byte 0x00,0xfc,0xff,0xff	@ 00008fb4 data
