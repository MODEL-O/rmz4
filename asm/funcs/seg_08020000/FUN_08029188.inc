@ FUN_08029188  entry 0x08029188  size 100
.thumb
.org 0x29188
FUN_08029188:
	push {lr}	@ 00029188 00b5
.org 0x2918a
	ldr r1, [r0, #12]	@ 0002918a c168
.org 0x2918c
	ldrb r0, [r1, #1]	@ 0002918c 4878
.org 0x2918e
	cmp r0, #1	@ 0002918e 0128
.org 0x29190
	beq.n 0x291c0	@ 00029190 16d0
.org 0x29192
	cmp r0, #1	@ 00029192 0128
.org 0x29194
	bgt.n 0x2919c	@ 00029194 02dc
.org 0x29196
	cmp r0, #0	@ 00029196 0028
.org 0x29198
	beq.n 0x291a6	@ 00029198 05d0
.org 0x2919a
	b.n 0x29202	@ 0002919a 32e0
.org 0x2919c
	cmp r0, #2	@ 0002919c 0228
.org 0x2919e
	beq.n 0x291dc	@ 0002919e 1dd0
.org 0x291a0
	cmp r0, #3	@ 000291a0 0328
.org 0x291a2
	beq.n 0x291f4	@ 000291a2 27d0
.org 0x291a4
	b.n 0x29202	@ 000291a4 2de0
.org 0x291a6
	ldr r0, [pc, #16]	@ 000291a6 0448
.org 0x291a8
	ldr r1, [pc, #16]	@ 000291a8 0449
.org 0x291aa
	adds r0, r0, r1	@ 000291aa 4018
.org 0x291ac
	ldrh r2, [r0, #0]	@ 000291ac 0288
.org 0x291ae
	movs r1, #1	@ 000291ae 0121
.org 0x291b0
	orrs r1, r2	@ 000291b0 1143
.org 0x291b2
	strh r1, [r0, #0]	@ 000291b2 0180
.org 0x291b4
	b.n 0x29202	@ 000291b4 25e0
.org 0x291b6
	.byte 0x00	@ 000291b6 data
.org 0x291b7
	.byte 0x00	@ 000291b7 data
.org 0x291b8
	.byte 0x40,0xe4,0x02,0x02	@ 000291b8 data
.org 0x291bc
	.byte 0x4e,0x04,0x00,0x00	@ 000291bc data
.org 0x291c0
	ldr r0, [pc, #12]	@ 000291c0 0348
.org 0x291c2
	ldr r2, [pc, #16]	@ 000291c2 044a
.org 0x291c4
	adds r0, r0, r2	@ 000291c4 8018
.org 0x291c6
	ldrh r2, [r0, #0]	@ 000291c6 0288
.org 0x291c8
	ldr r1, [pc, #12]	@ 000291c8 0349
.org 0x291ca
	ands r1, r2	@ 000291ca 1140
.org 0x291cc
	strh r1, [r0, #0]	@ 000291cc 0180
.org 0x291ce
	b.n 0x29202	@ 000291ce 18e0
.org 0x291d0
	.byte 0x40,0xe4,0x02,0x02	@ 000291d0 data
.org 0x291d4
	.byte 0x4e,0x04,0x00,0x00	@ 000291d4 data
.org 0x291d8
	.byte 0xfe,0xff,0x00,0x00	@ 000291d8 data
.org 0x291dc
	ldr r0, [r1, #4]	@ 000291dc 4868
.org 0x291de
	ldr r1, [pc, #16]	@ 000291de 0449
.org 0x291e0
	movs r2, #140	@ 000291e0 8c22
.org 0x291e2
	lsls r2, r2, #3	@ 000291e2 d200
.org 0x291e4
	adds r1, r1, r2	@ 000291e4 8918
.org 0x291e6
	ldr r1, [r1, #0]	@ 000291e6 0968
.org 0x291e8
	bl 0x1e0d0	@ 000291e8 f4f772ff
