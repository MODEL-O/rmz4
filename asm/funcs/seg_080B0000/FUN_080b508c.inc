@ FUN_080b508c  entry 0x080b508c  size 150
.thumb
.org 0xb508c
FUN_080b508c:
	push {r4, lr}	@ 000b508c 10b5
.org 0xb508e
	adds r4, r0, #0	@ 000b508e 041c
.org 0xb5090
	ldrb r0, [r4, #14]	@ 000b5090 a07b
.org 0xb5092
	cmp r0, #0	@ 000b5092 0028
.org 0xb5094
	bne.n 0xb50ae	@ 000b5094 0bd1
.org 0xb5096
	ldr r1, [pc, #128]	@ 000b5096 2049
.org 0xb5098
	lsls r0, r0, #1	@ 000b5098 4000
.org 0xb509a
	adds r0, r0, r1	@ 000b509a 4018
.org 0xb509c
	ldrh r1, [r0, #0]	@ 000b509c 0188
.org 0xb509e
	adds r0, r4, #0	@ 000b509e 201c
.org 0xb50a0
	bl 0x1cf00	@ 000b50a0 67f72eff
.org 0xb50a4
	movs r0, #20	@ 000b50a4 1420
.org 0xb50a6
	strb r0, [r4, #18]	@ 000b50a6 a074
.org 0xb50a8
	ldrb r0, [r4, #14]	@ 000b50a8 a07b
.org 0xb50aa
	adds r0, #1	@ 000b50aa 0130
.org 0xb50ac
	strb r0, [r4, #14]	@ 000b50ac a073
.org 0xb50ae
	ldrb r0, [r4, #14]	@ 000b50ae a07b
.org 0xb50b0
	cmp r0, #1	@ 000b50b0 0128
.org 0xb50b2
	bne.n 0xb50e6	@ 000b50b2 18d1
.org 0xb50b4
	adds r0, r4, #0	@ 000b50b4 201c
.org 0xb50b6
	bl 0xb56a8	@ 000b50b6 00f0f7fa
.org 0xb50ba
	lsls r0, r0, #24	@ 000b50ba 0006
.org 0xb50bc
	cmp r0, #0	@ 000b50bc 0028
.org 0xb50be
	beq.n 0xb50e6	@ 000b50be 12d0
.org 0xb50c0
	adds r0, r4, #0	@ 000b50c0 201c
.org 0xb50c2
	adds r0, #116	@ 000b50c2 7430
.org 0xb50c4
	ldr r1, [pc, #84]	@ 000b50c4 1549
.org 0xb50c6
	bl 0x5784	@ 000b50c6 50f75dfb
.org 0xb50ca
	ldr r1, [pc, #76]	@ 000b50ca 1349
.org 0xb50cc
	ldrb r0, [r4, #14]	@ 000b50cc a07b
.org 0xb50ce
	lsls r0, r0, #1	@ 000b50ce 4000
.org 0xb50d0
	adds r0, r0, r1	@ 000b50d0 4018
.org 0xb50d2
	ldrh r1, [r0, #0]	@ 000b50d2 0188
.org 0xb50d4
	adds r0, r4, #0	@ 000b50d4 201c
.org 0xb50d6
	bl 0x1cf00	@ 000b50d6 67f713ff
.org 0xb50da
	ldr r0, [pc, #68]	@ 000b50da 1148
.org 0xb50dc
	bl 0x2b10	@ 000b50dc 4df718fd
.org 0xb50e0
	ldrb r0, [r4, #14]	@ 000b50e0 a07b
.org 0xb50e2
	adds r0, #1	@ 000b50e2 0130
.org 0xb50e4
	strb r0, [r4, #14]	@ 000b50e4 a073
.org 0xb50e6
	adds r0, r4, #0	@ 000b50e6 201c
.org 0xb50e8
	adds r0, #115	@ 000b50e8 7330
.org 0xb50ea
	ldrb r0, [r0, #0]	@ 000b50ea 0078
.org 0xb50ec
	cmp r0, #3	@ 000b50ec 0328
.org 0xb50ee
	bne.n 0xb512e	@ 000b50ee 1ed1
.org 0xb50f0
	ldrb r0, [r4, #14]	@ 000b50f0 a07b
.org 0xb50f2
	cmp r0, #2	@ 000b50f2 0228
.org 0xb50f4
	bne.n 0xb5128	@ 000b50f4 18d1
.org 0xb50f6
	adds r0, r4, #0	@ 000b50f6 201c
.org 0xb50f8
	adds r0, #116	@ 000b50f8 7430
.org 0xb50fa
	ldr r1, [pc, #40]	@ 000b50fa 0a49
.org 0xb50fc
	bl 0x5784	@ 000b50fc 50f742fb
.org 0xb5100
	ldr r1, [pc, #20]	@ 000b5100 0549
.org 0xb5102
	ldrb r0, [r4, #14]	@ 000b5102 a07b
.org 0xb5104
	lsls r0, r0, #1	@ 000b5104 4000
.org 0xb5106
	adds r0, r0, r1	@ 000b5106 4018
.org 0xb5108
	ldrh r1, [r0, #0]	@ 000b5108 0188
.org 0xb510a
	adds r0, r4, #0	@ 000b510a 201c
.org 0xb510c
	bl 0x1cf00	@ 000b510c 67f7f8fe
.org 0xb5110
	ldrb r0, [r4, #14]	@ 000b5110 a07b
.org 0xb5112
	adds r0, #1	@ 000b5112 0130
.org 0xb5114
	b.n 0xb512c	@ 000b5114 0ae0
.org 0xb5116
	.byte 0x00	@ 000b5116 data
.org 0xb5117
	.byte 0x00	@ 000b5117 data
.org 0xb5118
	.byte 0xd8,0x39,0x86,0x08	@ 000b5118 data
.org 0xb511c
	.byte 0x90,0x39,0x86,0x08	@ 000b511c data
.org 0xb5120
	.byte 0x6f,0x01,0x00,0x00	@ 000b5120 data
