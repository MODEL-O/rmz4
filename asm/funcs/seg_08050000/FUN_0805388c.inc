@ FUN_0805388c  entry 0x0805388c  size 32
.thumb
.org 0x5388c
FUN_0805388c:
	push {r4, r5, lr}	@ 0005388c 30b5
.org 0x5388e
	sub sp, #8	@ 0005388e 82b0
.org 0x53890
	adds r4, r0, #0	@ 00053890 041c
.org 0x53892
	ldrb r0, [r4, #15]	@ 00053892 e07b
.org 0x53894
	cmp r0, #7	@ 00053894 0728
.org 0x53896
	bls.n 0x5389a	@ 00053896 00d9
.org 0x53898
	b.n 0x539da	@ 00053898 9fe0
.org 0x5389a
	lsls r0, r0, #2	@ 0005389a 8000
.org 0x5389c
	ldr r1, [pc, #4]	@ 0005389c 0149
.org 0x5389e
	adds r0, r0, r1	@ 0005389e 4018
.org 0x538a0
	ldr r0, [r0, #0]	@ 000538a0 0068
.org 0x538a2
	mov pc, r0	@ 000538a2 8746
.org 0x538a4
	.byte 0xa8,0x38,0x05,0x08	@ 000538a4 data
.org 0x538a8
	.byte 0xc8,0x38,0x05,0x08	@ 000538a8 data
