@ FUN_080a7ee4  entry 0x080a7ee4  size 48
.thumb
.org 0xa7ee4
FUN_080a7ee4:
	push {r4, r5, r6, r7, lr}	@ 000a7ee4 f0b5
.org 0xa7ee6
	mov r7, r9	@ 000a7ee6 4f46
.org 0xa7ee8
	mov r6, r8	@ 000a7ee8 4646
.org 0xa7eea
	push {r6, r7}	@ 000a7eea c0b4
.org 0xa7eec
	adds r7, r0, #0	@ 000a7eec 071c
.org 0xa7eee
	ldr r2, [r7, #40]	@ 000a7eee ba6a
.org 0xa7ef0
	ldrb r0, [r7, #14]	@ 000a7ef0 b87b
.org 0xa7ef2
	cmp r0, #5	@ 000a7ef2 0528
.org 0xa7ef4
	bls.n 0xa7ef8	@ 000a7ef4 00d9
.org 0xa7ef6
	b.n 0xa81b8	@ 000a7ef6 5fe1
.org 0xa7ef8
	lsls r0, r0, #2	@ 000a7ef8 8000
.org 0xa7efa
	ldr r1, [pc, #8]	@ 000a7efa 0249
.org 0xa7efc
	adds r0, r0, r1	@ 000a7efc 4018
.org 0xa7efe
	ldr r0, [r0, #0]	@ 000a7efe 0068
.org 0xa7f00
	mov pc, r0	@ 000a7f00 8746
.org 0xa7f02
	.byte 0x00	@ 000a7f02 data
.org 0xa7f03
	.byte 0x00	@ 000a7f03 data
.org 0xa7f04
	.byte 0x08,0x7f,0x0a,0x08	@ 000a7f04 data
.org 0xa7f08
	.byte 0x20,0x7f,0x0a,0x08	@ 000a7f08 data
.org 0xa7f0c
	.byte 0x50,0x7f,0x0a,0x08	@ 000a7f0c data
.org 0xa7f10
	.byte 0xcc,0x7f,0x0a,0x08	@ 000a7f10 data
