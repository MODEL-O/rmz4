@ FUN_0807fec4  entry 0x0807fec4  size 34
.thumb
.org 0x7fec4
FUN_0807fec4:
	push {r4, lr}	@ 0007fec4 10b5
.org 0x7fec6
	adds r4, r0, #0	@ 0007fec6 041c
.org 0x7fec8
	ldrb r0, [r4, #14]	@ 0007fec8 a07b
.org 0x7feca
	cmp r0, #5	@ 0007feca 0528
.org 0x7fecc
	bls.n 0x7fed0	@ 0007fecc 00d9
.org 0x7fece
	b.n 0x801da	@ 0007fece 84e1
.org 0x7fed0
	lsls r0, r0, #2	@ 0007fed0 8000
.org 0x7fed2
	ldr r1, [pc, #8]	@ 0007fed2 0249
.org 0x7fed4
	adds r0, r0, r1	@ 0007fed4 4018
.org 0x7fed6
	ldr r0, [r0, #0]	@ 0007fed6 0068
.org 0x7fed8
	mov pc, r0	@ 0007fed8 8746
.org 0x7feda
	.byte 0x00	@ 0007feda data
.org 0x7fedb
	.byte 0x00	@ 0007fedb data
.org 0x7fedc
	.byte 0xe0,0xfe,0x07,0x08	@ 0007fedc data
.org 0x7fee0
	.byte 0xf8,0xfe,0x07,0x08	@ 0007fee0 data
.org 0x7fee4
	.byte 0x52,0xff,0x07,0x08	@ 0007fee4 data
