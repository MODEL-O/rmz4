@ FUN_0803bbc8  entry 0x0803bbc8  size 132
.thumb
.org 0x3bbc8
FUN_0803bbc8:
	push {r4, lr}	@ 0003bbc8 10b5
.org 0x3bbca
	adds r4, r0, #0	@ 0003bbca 041c
.org 0x3bbcc
	ldrb r0, [r4, #13]	@ 0003bbcc 607b
.org 0x3bbce
	cmp r0, #0	@ 0003bbce 0028
.org 0x3bbd0
	bne.n 0x3bbf8	@ 0003bbd0 12d1
.org 0x3bbd2
	ldr r1, [pc, #32]	@ 0003bbd2 0849
.org 0x3bbd4
	adds r0, r4, #0	@ 0003bbd4 201c
.org 0x3bbd6
	bl 0x3c27c	@ 0003bbd6 00f051fb
.org 0x3bbda
	lsls r0, r0, #24	@ 0003bbda 0006
.org 0x3bbdc
	cmp r0, #0	@ 0003bbdc 0028
.org 0x3bbde
	beq.n 0x3bc08	@ 0003bbde 13d0
.org 0x3bbe0
	movs r1, #164	@ 0003bbe0 a421
.org 0x3bbe2
	lsls r1, r1, #7	@ 0003bbe2 c901
.org 0x3bbe4
	adds r0, r4, #0	@ 0003bbe4 201c
.org 0x3bbe6
	bl 0x1cf00	@ 0003bbe6 e1f78bf9
.org 0x3bbea
	ldrb r0, [r4, #13]	@ 0003bbea 607b
.org 0x3bbec
	adds r0, #1	@ 0003bbec 0130
.org 0x3bbee
	strb r0, [r4, #13]	@ 0003bbee 6073
.org 0x3bbf0
	b.n 0x3bc08	@ 0003bbf0 0ae0
.org 0x3bbf2
	.byte 0x00	@ 0003bbf2 data
.org 0x3bbf3
	.byte 0x00	@ 0003bbf3 data
.org 0x3bbf4
	.byte 0x24,0x3b,0x85,0x08	@ 0003bbf4 data
.org 0x3bbf8
	ldr r0, [r4, #84]	@ 0003bbf8 606d
.org 0x3bbfa
	ldr r1, [r4, #92]	@ 0003bbfa e16d
.org 0x3bbfc
	adds r0, r0, r1	@ 0003bbfc 4018
.org 0x3bbfe
	str r0, [r4, #84]	@ 0003bbfe 6065
.org 0x3bc00
	ldr r0, [r4, #88]	@ 0003bc00 a06d
.org 0x3bc02
	ldr r1, [r4, #96]	@ 0003bc02 216e
.org 0x3bc04
	adds r0, r0, r1	@ 0003bc04 4018
.org 0x3bc06
	str r0, [r4, #88]	@ 0003bc06 a065
.org 0x3bc08
	adds r0, r4, #0	@ 0003bc08 201c
.org 0x3bc0a
	bl 0x3c400	@ 0003bc0a 00f0f9fb
.org 0x3bc0e
	lsls r0, r0, #24	@ 0003bc0e 0006
.org 0x3bc10
	cmp r0, #0	@ 0003bc10 0028
.org 0x3bc12
	beq.n 0x3bc2e	@ 0003bc12 0cd0
.org 0x3bc14
	adds r0, r4, #0	@ 0003bc14 201c
.org 0x3bc16
	adds r0, #84	@ 0003bc16 5430
.org 0x3bc18
	ldrb r2, [r4, #10]	@ 0003bc18 a27a
.org 0x3bc1a
	lsrs r2, r2, #4	@ 0003bc1a 1209
.org 0x3bc1c
	movs r1, #1	@ 0003bc1c 0121
.org 0x3bc1e
	ands r2, r1	@ 0003bc1e 0a40
.org 0x3bc20
	movs r1, #6	@ 0003bc20 0621
.org 0x3bc22
	bl 0xd1bcc	@ 0003bc22 95f0d3ff
.org 0x3bc26
	movs r0, #43	@ 0003bc26 2b20
.org 0x3bc28
	bl 0x2b10	@ 0003bc28 c6f772ff
.org 0x3bc2c
	b.n 0x3bc3a	@ 0003bc2c 05e0
.org 0x3bc2e
	adds r0, r4, #0	@ 0003bc2e 201c
.org 0x3bc30
	bl 0x3c1e4	@ 0003bc30 00f0d8fa
.org 0x3bc34
	lsls r0, r0, #24	@ 0003bc34 0006
.org 0x3bc36
	cmp r0, #0	@ 0003bc36 0028
.org 0x3bc38
	beq.n 0x3bc4c	@ 0003bc38 08d0
.org 0x3bc3a
	ldr r1, [pc, #24]	@ 0003bc3a 0649
.org 0x3bc3c
	ldrb r0, [r4, #9]	@ 0003bc3c 607a
.org 0x3bc3e
	lsls r0, r0, #2	@ 0003bc3e 8000
.org 0x3bc40
	adds r0, r0, r1	@ 0003bc40 4018
.org 0x3bc42
	movs r1, #2	@ 0003bc42 0221
.org 0x3bc44
	str r1, [r4, #12]	@ 0003bc44 e160
.org 0x3bc46
	ldr r0, [r0, #0]	@ 0003bc46 0068
.org 0x3bc48
	ldr r0, [r0, #8]	@ 0003bc48 8068
.org 0x3bc4a
	str r0, [r4, #20]	@ 0003bc4a 6061
