@ FUN_080cdb00  entry 0x080cdb00  size 226
.thumb
.org 0xcdb00
FUN_080cdb00:
	push {r4, lr}	@ 000cdb00 10b5
.org 0xcdb02
	adds r4, r0, #0	@ 000cdb02 041c
.org 0xcdb04
	bl 0x1cc9c	@ 000cdb04 4ff7caf8
.org 0xcdb08
	ldrb r1, [r4, #10]	@ 000cdb08 a17a
.org 0xcdb0a
	movs r0, #1	@ 000cdb0a 0120
.org 0xcdb0c
	orrs r0, r1	@ 000cdb0c 0843
.org 0xcdb0e
	movs r1, #2	@ 000cdb0e 0221
.org 0xcdb10
	orrs r0, r1	@ 000cdb10 0843
.org 0xcdb12
	strb r0, [r4, #10]	@ 000cdb12 a072
.org 0xcdb14
	ldrb r0, [r4, #16]	@ 000cdb14 207c
.org 0xcdb16
	cmp r0, #1	@ 000cdb16 0128
.org 0xcdb18
	bls.n 0xcdb44	@ 000cdb18 14d9
.org 0xcdb1a
	ldrb r0, [r4, #17]	@ 000cdb1a 607c
.org 0xcdb1c
	cmp r0, #0	@ 000cdb1c 0028
.org 0xcdb1e
	beq.n 0xcdb38	@ 000cdb1e 0bd0
.org 0xcdb20
	ldr r0, [pc, #12]	@ 000cdb20 0348
.org 0xcdb22
	ldrb r1, [r4, #16]	@ 000cdb22 217c
.org 0xcdb24
	adds r1, r1, r0	@ 000cdb24 0918
.org 0xcdb26
	ldrb r0, [r1, #0]	@ 000cdb26 0878
.org 0xcdb28
	cmp r0, #9	@ 000cdb28 0928
.org 0xcdb2a
	bls.n 0xcdb44	@ 000cdb2a 0bd9
.org 0xcdb2c
	ldr r1, [pc, #4]	@ 000cdb2c 0149
.org 0xcdb2e
	b.n 0xcdb48	@ 000cdb2e 0be0
.org 0xcdb30
	.byte 0x64,0x6a,0x86,0x08	@ 000cdb30 data
.org 0xcdb34
	.byte 0x04,0xdc,0x00,0x00	@ 000cdb34 data
.org 0xcdb38
	ldr r0, [pc, #20]	@ 000cdb38 0548
.org 0xcdb3a
	ldrb r1, [r4, #16]	@ 000cdb3a 217c
.org 0xcdb3c
	adds r1, r1, r0	@ 000cdb3c 0918
.org 0xcdb3e
	ldrb r0, [r1, #0]	@ 000cdb3e 0878
.org 0xcdb40
	cmp r0, #9	@ 000cdb40 0928
.org 0xcdb42
	bhi.n 0xcdb54	@ 000cdb42 07d8
.org 0xcdb44
	movs r1, #220	@ 000cdb44 dc21
.org 0xcdb46
	lsls r1, r1, #8	@ 000cdb46 0902
.org 0xcdb48
	adds r0, r4, #0	@ 000cdb48 201c
.org 0xcdb4a
	bl 0x1cf00	@ 000cdb4a 4ff7d9f9
.org 0xcdb4e
	b.n 0xcdb5c	@ 000cdb4e 05e0
.org 0xcdb50
	.byte 0x64,0x6a,0x86,0x08	@ 000cdb50 data
.org 0xcdb54
	ldr r1, [pc, #92]	@ 000cdb54 1749
.org 0xcdb56
	adds r0, r4, #0	@ 000cdb56 201c
.org 0xcdb58
	bl 0x1cf00	@ 000cdb58 4ff7d2f9
.org 0xcdb5c
	adds r0, r4, #0	@ 000cdb5c 201c
.org 0xcdb5e
	bl 0x1cff0	@ 000cdb5e 4ff747fa
.org 0xcdb62
	movs r2, #0	@ 000cdb62 0022
.org 0xcdb64
	ldrb r1, [r4, #10]	@ 000cdb64 a17a
.org 0xcdb66
	movs r0, #239	@ 000cdb66 ef20
.org 0xcdb68
	ands r0, r1	@ 000cdb68 0840
.org 0xcdb6a
	strb r0, [r4, #10]	@ 000cdb6a a072
.org 0xcdb6c
	adds r0, r4, #0	@ 000cdb6c 201c
.org 0xcdb6e
	adds r0, #76	@ 000cdb6e 4c30
.org 0xcdb70
	strb r2, [r0, #0]	@ 000cdb70 0270
.org 0xcdb72
	adds r2, r4, #0	@ 000cdb72 221c
.org 0xcdb74
	adds r2, #74	@ 000cdb74 4a32
.org 0xcdb76
	ldrb r1, [r2, #0]	@ 000cdb76 1178
.org 0xcdb78
	movs r0, #17	@ 000cdb78 1120
.org 0xcdb7a
	negs r0, r0	@ 000cdb7a 4042
.org 0xcdb7c
	ands r0, r1	@ 000cdb7c 0840
.org 0xcdb7e
	strb r0, [r2, #0]	@ 000cdb7e 1070
.org 0xcdb80
	subs r2, #1	@ 000cdb80 013a
.org 0xcdb82
	ldrb r0, [r2, #0]	@ 000cdb82 1078
.org 0xcdb84
	movs r1, #12	@ 000cdb84 0c21
.org 0xcdb86
	orrs r0, r1	@ 000cdb86 0843
.org 0xcdb88
	strb r0, [r2, #0]	@ 000cdb88 1070
.org 0xcdb8a
	ldr r0, [r4, #84]	@ 000cdb8a 606d
.org 0xcdb8c
	movs r1, #160	@ 000cdb8c a021
.org 0xcdb8e
	lsls r1, r1, #7	@ 000cdb8e c901
.org 0xcdb90
	adds r0, r0, r1	@ 000cdb90 4018
.org 0xcdb92
	str r0, [r4, #84]	@ 000cdb92 6065
.org 0xcdb94
	ldrb r0, [r4, #17]	@ 000cdb94 607c
.org 0xcdb96
	cmp r0, #0	@ 000cdb96 0028
.org 0xcdb98
	beq.n 0xcdbbc	@ 000cdb98 10d0
.org 0xcdb9a
	ldr r2, [pc, #28]	@ 000cdb9a 074a
.org 0xcdb9c
	ldrb r0, [r4, #16]	@ 000cdb9c 207c
.org 0xcdb9e
	adds r0, r0, r2	@ 000cdb9e 8018
.org 0xcdba0
	ldrb r1, [r0, #0]	@ 000cdba0 0178
.org 0xcdba2
	lsls r1, r1, #8	@ 000cdba2 0902
.org 0xcdba4
	ldr r0, [r4, #88]	@ 000cdba4 a06d
.org 0xcdba6
	adds r0, r0, r1	@ 000cdba6 4018
.org 0xcdba8
	str r0, [r4, #88]	@ 000cdba8 a065
.org 0xcdbaa
	ldrb r0, [r4, #16]	@ 000cdbaa 207c
.org 0xcdbac
	adds r0, r0, r2	@ 000cdbac 8018
.org 0xcdbae
	ldrb r0, [r0, #0]	@ 000cdbae 0078
.org 0xcdbb0
	lsls r0, r0, #8	@ 000cdbb0 0002
.org 0xcdbb2
	b.n 0xcdbd6	@ 000cdbb2 10e0
.org 0xcdbb4
	.byte 0x03,0xdc,0x00,0x00	@ 000cdbb4 data
.org 0xcdbb8
	.byte 0x64,0x6a,0x86,0x08	@ 000cdbb8 data
.org 0xcdbbc
	ldr r2, [pc, #56]	@ 000cdbbc 0e4a
.org 0xcdbbe
	ldrb r0, [r4, #16]	@ 000cdbbe 207c
.org 0xcdbc0
	adds r0, r0, r2	@ 000cdbc0 8018
.org 0xcdbc2
	ldrb r1, [r0, #0]	@ 000cdbc2 0178
.org 0xcdbc4
	lsls r1, r1, #8	@ 000cdbc4 0902
.org 0xcdbc6
	ldr r0, [r4, #88]	@ 000cdbc6 a06d
.org 0xcdbc8
	subs r0, r0, r1	@ 000cdbc8 401a
.org 0xcdbca
	str r0, [r4, #88]	@ 000cdbca a065
.org 0xcdbcc
	ldrb r0, [r4, #16]	@ 000cdbcc 207c
.org 0xcdbce
	adds r0, r0, r2	@ 000cdbce 8018
.org 0xcdbd0
	ldrb r0, [r0, #0]	@ 000cdbd0 0078
.org 0xcdbd2
	lsls r0, r0, #8	@ 000cdbd2 0002
.org 0xcdbd4
	negs r0, r0	@ 000cdbd4 4042
.org 0xcdbd6
	str r0, [r4, #104]	@ 000cdbd6 a066
.org 0xcdbd8
	ldr r1, [pc, #32]	@ 000cdbd8 0849
.org 0xcdbda
	ldrb r0, [r4, #9]	@ 000cdbda 607a
.org 0xcdbdc
	lsls r0, r0, #2	@ 000cdbdc 8000
.org 0xcdbde
	adds r0, r0, r1	@ 000cdbde 4018
.org 0xcdbe0
	movs r1, #1	@ 000cdbe0 0121
