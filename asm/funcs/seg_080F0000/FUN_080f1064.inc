@ FUN_080f1064  entry 0x080f1064  size 34
.thumb
.org 0xf1064
FUN_080f1064:
	push {r4, lr}	@ 000f1064 10b5
.org 0xf1066
	adds r4, r0, #0	@ 000f1066 041c
.org 0xf1068
	ldrb r0, [r4, #17]	@ 000f1068 607c
.org 0xf106a
	cmp r0, #7	@ 000f106a 0728
.org 0xf106c
	bls.n 0xf1070	@ 000f106c 00d9
.org 0xf106e
	b.n 0xf11ba	@ 000f106e a4e0
.org 0xf1070
	lsls r0, r0, #2	@ 000f1070 8000
.org 0xf1072
	ldr r1, [pc, #8]	@ 000f1072 0249
.org 0xf1074
	adds r0, r0, r1	@ 000f1074 4018
.org 0xf1076
	ldr r0, [r0, #0]	@ 000f1076 0068
.org 0xf1078
	mov pc, r0	@ 000f1078 8746
.org 0xf107a
	.byte 0x00	@ 000f107a data
.org 0xf107b
	.byte 0x00	@ 000f107b data
.org 0xf107c
	.byte 0x80,0x10,0x0f,0x08	@ 000f107c data
.org 0xf1080
	.byte 0xa0,0x10,0x0f,0x08	@ 000f1080 data
.org 0xf1084
	.byte 0xde,0x10,0x0f,0x08	@ 000f1084 data
