@ FUN_08008fc0  entry 0x08008fc0  size 24
.thumb
.org 0x8fc0
FUN_08008fc0:
	push {lr}	@ 00008fc0 00b5
.org 0x8fc2
	ldr r2, [pc, #16]	@ 00008fc2 044a
.org 0x8fc4
	adds r1, r1, r2	@ 00008fc4 8918
.org 0x8fc6
	asrs r0, r0, #2	@ 00008fc6 8010
.org 0x8fc8
	subs r0, r1, r0	@ 00008fc8 081a
.org 0x8fca
	cmp r0, #0	@ 00008fca 0028
.org 0x8fcc
	bgt.n 0x8fd8	@ 00008fcc 04dc
.org 0x8fce
	movs r0, #0	@ 00008fce 0020
.org 0x8fd0
	b.n 0x8fda	@ 00008fd0 03e0
.org 0x8fd2
	.byte 0x00	@ 00008fd2 data
.org 0x8fd3
	.byte 0x00	@ 00008fd3 data
.org 0x8fd4
	.byte 0x00,0xf8,0xff,0xff	@ 00008fd4 data
