@ FUN_08008ed8  entry 0x08008ed8  size 24
.thumb
.org 0x8ed8
FUN_08008ed8:
	push {lr}	@ 00008ed8 00b5
.org 0x8eda
	ldr r2, [pc, #16]	@ 00008eda 044a
.org 0x8edc
	adds r1, r1, r2	@ 00008edc 8918
.org 0x8ede
	asrs r0, r0, #2	@ 00008ede 8010
.org 0x8ee0
	adds r0, r1, r0	@ 00008ee0 0818
.org 0x8ee2
	cmp r0, #0	@ 00008ee2 0028
.org 0x8ee4
	bgt.n 0x8ef0	@ 00008ee4 04dc
.org 0x8ee6
	movs r0, #0	@ 00008ee6 0020
.org 0x8ee8
	b.n 0x8ef2	@ 00008ee8 03e0
.org 0x8eea
	.byte 0x00	@ 00008eea data
.org 0x8eeb
	.byte 0x00	@ 00008eeb data
.org 0x8eec
	.byte 0x00,0xf0,0xff,0xff	@ 00008eec data
