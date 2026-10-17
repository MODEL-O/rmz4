@ FUN_08008e98  entry 0x08008e98  size 24
.thumb
.org 0x8e98
FUN_08008e98:
	push {lr}	@ 00008e98 00b5
.org 0x8e9a
	ldr r2, [pc, #16]	@ 00008e9a 044a
.org 0x8e9c
	adds r1, r1, r2	@ 00008e9c 8918
.org 0x8e9e
	asrs r0, r0, #1	@ 00008e9e 4010
.org 0x8ea0
	adds r0, r1, r0	@ 00008ea0 0818
.org 0x8ea2
	cmp r0, #0	@ 00008ea2 0028
.org 0x8ea4
	bgt.n 0x8eb0	@ 00008ea4 04dc
.org 0x8ea6
	movs r0, #0	@ 00008ea6 0020
.org 0x8ea8
	b.n 0x8eb2	@ 00008ea8 03e0
.org 0x8eaa
	.byte 0x00	@ 00008eaa data
.org 0x8eab
	.byte 0x00	@ 00008eab data
.org 0x8eac
	.byte 0x00,0xf0,0xff,0xff	@ 00008eac data
