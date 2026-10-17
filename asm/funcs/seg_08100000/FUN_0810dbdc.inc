@ FUN_0810dbdc  entry 0x0810dbdc  size 428
.thumb
.org 0x10dbdc
FUN_0810dbdc:
	push {r4, r5, r6, r7, lr}	@ 0010dbdc f0b5
.org 0x10dbde
	mov r7, sl	@ 0010dbde 5746
.org 0x10dbe0
	mov r6, r9	@ 0010dbe0 4e46
.org 0x10dbe2
	mov r5, r8	@ 0010dbe2 4546
.org 0x10dbe4
	push {r5, r6, r7}	@ 0010dbe4 e0b4
.org 0x10dbe6
	sub sp, #16	@ 0010dbe6 84b0
.org 0x10dbe8
	adds r7, r2, #0	@ 0010dbe8 171c
.org 0x10dbea
	lsls r0, r0, #24	@ 0010dbea 0006
.org 0x10dbec
	lsrs r6, r0, #24	@ 0010dbec 060e
.org 0x10dbee
	lsls r1, r1, #24	@ 0010dbee 0906
.org 0x10dbf0
	lsrs r1, r1, #24	@ 0010dbf0 090e
.org 0x10dbf2
	str r1, [sp, #0]	@ 0010dbf2 0091
.org 0x10dbf4
	lsls r3, r3, #16	@ 0010dbf4 1b04
.org 0x10dbf6
	lsrs r3, r3, #16	@ 0010dbf6 1b0c
.org 0x10dbf8
	mov r8, r3	@ 0010dbf8 9846
.org 0x10dbfa
	str r6, [sp, #4]	@ 0010dbfa 0196
.org 0x10dbfc
	ldr r2, [pc, #40]	@ 0010dbfc 0a4a
.org 0x10dbfe
	lsls r0, r1, #5	@ 0010dbfe 4801
.org 0x10dc00
	adds r0, r0, r6	@ 0010dc00 8019
.org 0x10dc02
	lsls r0, r0, #1	@ 0010dc02 4000
.org 0x10dc04
	ldr r1, [r2, #0]	@ 0010dc04 1168
.org 0x10dc06
	adds r5, r1, r0	@ 0010dc06 0d18
.org 0x10dc08
	str r5, [sp, #8]	@ 0010dc08 0295
.org 0x10dc0a
	movs r0, #0	@ 0010dc0a 0020
.org 0x10dc0c
	str r0, [sp, #12]	@ 0010dc0c 0390
.org 0x10dc0e
	ldrb r0, [r7, #0]	@ 0010dc0e 3878
.org 0x10dc10
	cmp r0, #252	@ 0010dc10 fc28
.org 0x10dc12
	bls.n 0x10dc16	@ 0010dc12 00d9
.org 0x10dc14
	b.n 0x10dda2	@ 0010dc14 c5e0
.org 0x10dc16
	cmp r3, #0	@ 0010dc16 002b
.org 0x10dc18
	bne.n 0x10dc2c	@ 0010dc18 08d1
.org 0x10dc1a
	b.n 0x10dda2	@ 0010dc1a c2e0
.org 0x10dc1c
	b.n 0x10dc2c	@ 0010dc1c 06e0
.org 0x10dc1e
	.byte 0x05	@ 0010dc1e data
.org 0x10dc1f
	.byte 0xd8	@ 0010dc1f data
.org 0x10dc20
	.byte 0x3c	@ 0010dc20 data
.org 0x10dc21
	.byte 0x78	@ 0010dc21 data
.org 0x10dc22
	.byte 0x03	@ 0010dc22 data
.org 0x10dc23
	.byte 0x99	@ 0010dc23 data
.org 0x10dc24
	.byte 0x0c	@ 0010dc24 data
.org 0x10dc25
	.byte 0x43	@ 0010dc25 data
.org 0x10dc26
	.byte 0x4f	@ 0010dc26 data
.org 0x10dc27
	.byte 0xe0	@ 0010dc27 data
.org 0x10dc28
	.byte 0xc0,0xed,0x02,0x02	@ 0010dc28 data
.org 0x10dc2c
	cmp r0, #240	@ 0010dc2c f028
.org 0x10dc2e
	bgt.n 0x10dc3e	@ 0010dc2e 06dc
.org 0x10dc30
	adds r7, #1	@ 0010dc30 0137
.org 0x10dc32
	ldrb r4, [r7, #0]	@ 0010dc32 3c78
.org 0x10dc34
	lsls r0, r0, #8	@ 0010dc34 0002
.org 0x10dc36
	orrs r4, r0	@ 0010dc36 0443
.org 0x10dc38
	ldr r2, [sp, #12]	@ 0010dc38 039a
.org 0x10dc3a
	orrs r4, r2	@ 0010dc3a 1443
.org 0x10dc3c
	b.n 0x10dcc8	@ 0010dc3c 44e0
.org 0x10dc3e
	cmp r0, #241	@ 0010dc3e f128
.org 0x10dc40
	bne.n 0x10dc48	@ 0010dc40 02d1
.org 0x10dc42
	movs r3, #0	@ 0010dc42 0023
.org 0x10dc44
	str r3, [sp, #12]	@ 0010dc44 0393
.org 0x10dc46
	b.n 0x10dd92	@ 0010dc46 a4e0
.org 0x10dc48
	cmp r0, #242	@ 0010dc48 f228
.org 0x10dc4a
	bne.n 0x10dc54	@ 0010dc4a 03d1
.org 0x10dc4c
	movs r0, #128	@ 0010dc4c 8020
.org 0x10dc4e
	lsls r0, r0, #8	@ 0010dc4e 0002
.org 0x10dc50
	str r0, [sp, #12]	@ 0010dc50 0390
.org 0x10dc52
	b.n 0x10dd92	@ 0010dc52 9ee0
.org 0x10dc54
	cmp r0, #247	@ 0010dc54 f728
.org 0x10dc56
	bne.n 0x10dc78	@ 0010dc56 0fd1
.org 0x10dc58
	adds r7, #1	@ 0010dc58 0137
.org 0x10dc5a
	ldr r0, [pc, #24]	@ 0010dc5a 0648
.org 0x10dc5c
	ldrh r0, [r0, #6]	@ 0010dc5c c088
.org 0x10dc5e
	ldrb r1, [r7, #0]	@ 0010dc5e 3978
.org 0x10dc60
	adds r0, r0, r1	@ 0010dc60 4018
.org 0x10dc62
	lsls r0, r0, #12	@ 0010dc62 0003
.org 0x10dc64
	movs r2, #91	@ 0010dc64 5b22
.org 0x10dc66
	lsls r2, r2, #4	@ 0010dc66 1201
.org 0x10dc68
	adds r1, r2, #0	@ 0010dc68 111c
.org 0x10dc6a
	orrs r0, r1	@ 0010dc6a 0843
.org 0x10dc6c
	lsls r0, r0, #16	@ 0010dc6c 0004
.org 0x10dc6e
	lsrs r0, r0, #16	@ 0010dc6e 000c
.org 0x10dc70
	str r0, [sp, #12]	@ 0010dc70 0390
.org 0x10dc72
	b.n 0x10dd92	@ 0010dc72 8ee0
.org 0x10dc74
	.byte 0xc0,0xed,0x02,0x02	@ 0010dc74 data
.org 0x10dc78
	cmp r0, #252	@ 0010dc78 fc28
.org 0x10dc7a
	bne.n 0x10dc90	@ 0010dc7a 09d1
.org 0x10dc7c
	ldr r5, [sp, #8]	@ 0010dc7c 029d
.org 0x10dc7e
	adds r5, #128	@ 0010dc7e 8035
.org 0x10dc80
	str r5, [sp, #8]	@ 0010dc80 0295
.org 0x10dc82
	ldr r0, [sp, #0]	@ 0010dc82 0098
.org 0x10dc84
	adds r0, #2	@ 0010dc84 0230
.org 0x10dc86
	lsls r0, r0, #24	@ 0010dc86 0006
.org 0x10dc88
	lsrs r0, r0, #24	@ 0010dc88 000e
.org 0x10dc8a
	str r0, [sp, #0]	@ 0010dc8a 0090
.org 0x10dc8c
	ldr r6, [sp, #4]	@ 0010dc8c 019e
.org 0x10dc8e
	b.n 0x10dd92	@ 0010dc8e 80e0
.org 0x10dc90
	cmp r0, #249	@ 0010dc90 f928
.org 0x10dc92
	bne.n 0x10dcc0	@ 0010dc92 15d1
.org 0x10dc94
	ldr r3, [pc, #36]	@ 0010dc94 094b
.org 0x10dc96
	ldr r2, [r3, #0]	@ 0010dc96 1a68
.org 0x10dc98
	adds r0, r6, #0	@ 0010dc98 301c
.org 0x10dc9a
	ldr r1, [sp, #0]	@ 0010dc9a 0099
.org 0x10dc9c
	mov r3, r8	@ 0010dc9c 4346
.org 0x10dc9e
	bl 0x10dbdc	@ 0010dc9e fff79dff
.org 0x10dca2
	lsls r0, r0, #16	@ 0010dca2 0004
.org 0x10dca4
	lsrs r2, r0, #16	@ 0010dca4 020c
.org 0x10dca6
	cmp r2, #0	@ 0010dca6 002a
.org 0x10dca8
	beq.n 0x10dda2	@ 0010dca8 7bd0
.org 0x10dcaa
	mov r1, r8	@ 0010dcaa 4146
.org 0x10dcac
	subs r0, r1, r2	@ 0010dcac 881a
.org 0x10dcae
	lsls r1, r0, #1	@ 0010dcae 4100
.org 0x10dcb0
	adds r5, r5, r1	@ 0010dcb0 6d18
.org 0x10dcb2
	adds r0, r6, r0	@ 0010dcb2 3018
.org 0x10dcb4
	lsls r0, r0, #24	@ 0010dcb4 0006
.org 0x10dcb6
	lsrs r6, r0, #24	@ 0010dcb6 060e
.org 0x10dcb8
	mov r8, r2	@ 0010dcb8 9046
.org 0x10dcba
	b.n 0x10dd92	@ 0010dcba 6ae0
.org 0x10dcbc
	.byte 0x54,0xf3,0x02,0x02	@ 0010dcbc data
.org 0x10dcc0
	cmp r0, #248	@ 0010dcc0 f828
.org 0x10dcc2
	bhi.n 0x10dd92	@ 0010dcc2 66d8
.org 0x10dcc4
	adds r7, #1	@ 0010dcc4 0137
.org 0x10dcc6
	b.n 0x10dd92	@ 0010dcc6 64e0
.org 0x10dcc8
	ldr r2, [pc, #64]	@ 0010dcc8 104a
.org 0x10dcca
	movs r3, #179	@ 0010dcca b323
.org 0x10dccc
	lsls r3, r3, #3	@ 0010dccc db00
.org 0x10dcce
	adds r0, r2, r3	@ 0010dcce d018
.org 0x10dcd0
	ldrb r0, [r0, #0]	@ 0010dcd0 0078
.org 0x10dcd2
	subs r0, r6, r0	@ 0010dcd2 301a
.org 0x10dcd4
	adds r3, #2	@ 0010dcd4 0233
.org 0x10dcd6
	adds r1, r2, r3	@ 0010dcd6 d118
.org 0x10dcd8
	lsls r0, r0, #24	@ 0010dcd8 0006
.org 0x10dcda
	lsrs r0, r0, #24	@ 0010dcda 000e
.org 0x10dcdc
	ldrb r1, [r1, #0]	@ 0010dcdc 0978
.org 0x10dcde
	cmp r0, r1	@ 0010dcde 8842
.org 0x10dce0
	bcs.n 0x10dcfa	@ 0010dce0 0bd2
.org 0x10dce2
	ldr r1, [pc, #44]	@ 0010dce2 0b49
.org 0x10dce4
	adds r0, r2, r1	@ 0010dce4 5018
.org 0x10dce6
	ldrb r0, [r0, #0]	@ 0010dce6 0078
.org 0x10dce8
	ldr r3, [sp, #0]	@ 0010dce8 009b
.org 0x10dcea
	subs r0, r3, r0	@ 0010dcea 181a
.org 0x10dcec
	ldr r3, [pc, #36]	@ 0010dcec 094b
.org 0x10dcee
	adds r1, r2, r3	@ 0010dcee d118
.org 0x10dcf0
	lsls r0, r0, #24	@ 0010dcf0 0006
.org 0x10dcf2
	lsrs r0, r0, #24	@ 0010dcf2 000e
.org 0x10dcf4
	ldrb r1, [r1, #0]	@ 0010dcf4 0978
.org 0x10dcf6
	cmp r0, r1	@ 0010dcf6 8842
.org 0x10dcf8
	bcc.n 0x10dd1c	@ 0010dcf8 10d3
.org 0x10dcfa
	adds r5, #2	@ 0010dcfa 0235
.org 0x10dcfc
	adds r0, r6, #1	@ 0010dcfc 701c
.org 0x10dcfe
	lsls r0, r0, #24	@ 0010dcfe 0006
.org 0x10dd00
	lsrs r6, r0, #24	@ 0010dd00 060e
.org 0x10dd02
	ldr r0, [pc, #20]	@ 0010dd02 0548
.org 0x10dd04
	cmp r4, r0	@ 0010dd04 8442
.org 0x10dd06
	bls.n 0x10dd88	@ 0010dd06 3fd9
.org 0x10dd08
	b.n 0x10dd80	@ 0010dd08 3ae0
.org 0x10dd0a
	.byte 0x00	@ 0010dd0a data
.org 0x10dd0b
	.byte 0x00	@ 0010dd0b data
.org 0x10dd0c
	.byte 0xc0,0xed,0x02,0x02	@ 0010dd0c data
.org 0x10dd10
	.byte 0x99,0x05,0x00,0x00	@ 0010dd10 data
.org 0x10dd14
	.byte 0x9b,0x05,0x00,0x00	@ 0010dd14 data
.org 0x10dd18
	.byte 0xff,0x03,0x00,0x00	@ 0010dd18 data
.org 0x10dd1c
	adds r0, r4, #0	@ 0010dd1c 201c
.org 0x10dd1e
	bl 0x10ddbc	@ 0010dd1e 00f04df8
.org 0x10dd22
	cmp r0, #0	@ 0010dd22 0028
.org 0x10dd24
	beq.n 0x10dda2	@ 0010dd24 3dd0
.org 0x10dd26
	strh r4, [r0, #4]	@ 0010dd26 8480
.org 0x10dd28
	adds r3, r5, #0	@ 0010dd28 2b1c
.org 0x10dd2a
	adds r3, #64	@ 0010dd2a 4033
.org 0x10dd2c
	movs r1, #240	@ 0010dd2c f021
.org 0x10dd2e
	lsls r1, r1, #8	@ 0010dd2e 0902
.org 0x10dd30
	mov sl, r1	@ 0010dd30 8a46
.org 0x10dd32
	adds r1, r4, #0	@ 0010dd32 211c
.org 0x10dd34
	mov r2, sl	@ 0010dd34 5246
.org 0x10dd36
	ands r1, r2	@ 0010dd36 1140
.org 0x10dd38
	ldrh r2, [r0, #6]	@ 0010dd38 c288
.org 0x10dd3a
	ldr r0, [pc, #120]	@ 0010dd3a 1e48
.org 0x10dd3c
	mov r9, r0	@ 0010dd3c 8146
.org 0x10dd3e
	ands r0, r2	@ 0010dd3e 1040
.org 0x10dd40
	orrs r1, r0	@ 0010dd40 0143
.org 0x10dd42
	strh r1, [r5, #0]	@ 0010dd42 2980
.org 0x10dd44
	adds r1, #1	@ 0010dd44 0131
.org 0x10dd46
	strh r1, [r3, #0]	@ 0010dd46 1980
.org 0x10dd48
	adds r5, #2	@ 0010dd48 0235
.org 0x10dd4a
	adds r0, r6, #1	@ 0010dd4a 701c
.org 0x10dd4c
	lsls r0, r0, #24	@ 0010dd4c 0006
.org 0x10dd4e
	lsrs r6, r0, #24	@ 0010dd4e 060e
.org 0x10dd50
	ldr r1, [pc, #100]	@ 0010dd50 1949
.org 0x10dd52
	cmp r4, r1	@ 0010dd52 8c42
.org 0x10dd54
	nop	@ 0010dd54 c046
.org 0x10dd56
	ldr r2, [pc, #88]	@ 0010dd56 164a
.org 0x10dd58
	nop	@ 0010dd58 c046
.org 0x10dd5a
	adds r0, r2, #0	@ 0010dd5a 101c
.org 0x10dd5c
	adds r4, r4, r0	@ 0010dd5c 2418
.org 0x10dd5e
	adds r0, r4, #0	@ 0010dd5e 201c
.org 0x10dd60
	bl 0x10ddbc	@ 0010dd60 00f02cf8
.org 0x10dd64
	cmp r0, #0	@ 0010dd64 0028
.org 0x10dd66
	beq.n 0x10dda2	@ 0010dd66 1cd0
.org 0x10dd68
	strh r4, [r0, #4]	@ 0010dd68 8480
.org 0x10dd6a
	adds r3, r5, #0	@ 0010dd6a 2b1c
.org 0x10dd6c
	adds r3, #64	@ 0010dd6c 4033
.org 0x10dd6e
	mov r1, sl	@ 0010dd6e 5146
.org 0x10dd70
	ands r1, r4	@ 0010dd70 2140
.org 0x10dd72
	ldrh r2, [r0, #6]	@ 0010dd72 c288
.org 0x10dd74
	mov r0, r9	@ 0010dd74 4846
.org 0x10dd76
	ands r0, r2	@ 0010dd76 1040
.org 0x10dd78
	orrs r1, r0	@ 0010dd78 0143
.org 0x10dd7a
	strh r1, [r5, #0]	@ 0010dd7a 2980
.org 0x10dd7c
	adds r1, #1	@ 0010dd7c 0131
.org 0x10dd7e
	strh r1, [r3, #0]	@ 0010dd7e 1980
.org 0x10dd80
	adds r5, #2	@ 0010dd80 0235
.org 0x10dd82
	adds r0, r6, #1	@ 0010dd82 701c
.org 0x10dd84
	lsls r0, r0, #24	@ 0010dd84 0006
.org 0x10dd86
	lsrs r6, r0, #24	@ 0010dd86 060e
