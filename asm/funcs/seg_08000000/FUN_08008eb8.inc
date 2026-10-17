@ FUN_08008eb8  entry 0x08008eb8  size 24
.thumb
.org 0x8eb8
FUN_08008eb8:
	push {lr}	@ 00008eb8 00b5
.org 0x8eba
	ldr r2, [pc, #16]	@ 00008eba 044a
.org 0x8ebc
	adds r1, r1, r2	@ 00008ebc 8918
.org 0x8ebe
	asrs r0, r0, #1	@ 00008ebe 4010
.org 0x8ec0
	adds r0, r1, r0	@ 00008ec0 0818
.org 0x8ec2
	cmp r0, #0	@ 00008ec2 0028
.org 0x8ec4
	bgt.n 0x8ed0	@ 00008ec4 04dc
.org 0x8ec6
	movs r0, #0	@ 00008ec6 0020
.org 0x8ec8
	b.n 0x8ed2	@ 00008ec8 03e0
.org 0x8eca
	.byte 0x00	@ 00008eca data
.org 0x8ecb
	.byte 0x00	@ 00008ecb data
.org 0x8ecc
	.byte 0x00,0xf8,0xff,0xff	@ 00008ecc data
