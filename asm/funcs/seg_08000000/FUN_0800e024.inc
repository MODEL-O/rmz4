@ FUN_0800e024  entry 0x0800e024  size 44
.thumb
.org 0xe024
FUN_0800e024:
	push {lr}	@ 0000e024 00b5
.org 0xe026
	adds r2, r0, #0	@ 0000e026 021c
.org 0xe028
	ldrb r0, [r2, #14]	@ 0000e028 907b
.org 0xe02a
	cmp r0, #0	@ 0000e02a 0028
.org 0xe02c
	bne.n 0xe056	@ 0000e02c 13d1
.org 0xe02e
	ldr r1, [r2, #52]	@ 0000e02e 516b
.org 0xe030
	ldr r0, [pc, #12]	@ 0000e030 0348
.org 0xe032
	cmp r1, r0	@ 0000e032 8142
.org 0xe034
	bgt.n 0xe048	@ 0000e034 08dc
.org 0xe036
	ldr r1, [pc, #12]	@ 0000e036 0349
.org 0xe038
	movs r0, #224	@ 0000e038 e020
.org 0xe03a
	lsls r0, r0, #10	@ 0000e03a 8002
.org 0xe03c
	b.n 0xe04e	@ 0000e03c 07e0
.org 0xe03e
	.byte 0x00	@ 0000e03e data
.org 0xe03f
	.byte 0x00	@ 0000e03f data
.org 0xe040
	.byte 0xdf,0x10,0x00,0x00	@ 0000e040 data
.org 0xe044
	.byte 0x60,0xea,0x02,0x02	@ 0000e044 data
.org 0xe048
	ldr r1, [pc, #16]	@ 0000e048 0449
.org 0xe04a
	movs r0, #140	@ 0000e04a 8c20
.org 0xe04c
	lsls r0, r0, #10	@ 0000e04c 8002
.org 0xe04e
	str r0, [r1, #0]	@ 0000e04e 0860
