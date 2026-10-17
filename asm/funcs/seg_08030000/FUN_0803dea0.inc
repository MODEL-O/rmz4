@ FUN_0803dea0  entry 0x0803dea0  size 264
.thumb
.org 0x3dea0
FUN_0803dea0:
	push {r4, r5, lr}	@ 0003dea0 30b5
.org 0x3dea2
	adds r4, r0, #0	@ 0003dea2 041c
.org 0x3dea4
	adds r0, #180	@ 0003dea4 b430
.org 0x3dea6
	ldr r5, [r0, #0]	@ 0003dea6 0568
.org 0x3dea8
	ldrb r0, [r4, #13]	@ 0003dea8 607b
.org 0x3deaa
	cmp r0, #1	@ 0003deaa 0128
.org 0x3deac
	beq.n 0x3df36	@ 0003deac 43d0
.org 0x3deae
	cmp r0, #1	@ 0003deae 0128
.org 0x3deb0
	bgt.n 0x3deb8	@ 0003deb0 02dc
.org 0x3deb2
	cmp r0, #0	@ 0003deb2 0028
.org 0x3deb4
	beq.n 0x3dec2	@ 0003deb4 05d0
.org 0x3deb6
	b.n 0x3dfa8	@ 0003deb6 77e0
.org 0x3deb8
	cmp r0, #2	@ 0003deb8 0228
.org 0x3deba
	beq.n 0x3df58	@ 0003deba 4dd0
.org 0x3debc
	cmp r0, #3	@ 0003debc 0328
.org 0x3debe
	beq.n 0x3df7a	@ 0003debe 5cd0
.org 0x3dec0
	b.n 0x3dfa8	@ 0003dec0 72e0
.org 0x3dec2
	movs r1, #190	@ 0003dec2 be21
.org 0x3dec4
	lsls r1, r1, #7	@ 0003dec4 c901
.org 0x3dec6
	adds r0, r4, #0	@ 0003dec6 201c
.org 0x3dec8
	bl 0x1cf00	@ 0003dec8 dff71af8
.org 0x3decc
	ldrb r1, [r4, #17]	@ 0003decc 617c
.org 0x3dece
	cmp r1, #2	@ 0003dece 0229
.org 0x3ded0
	bne.n 0x3df12	@ 0003ded0 1fd1
.org 0x3ded2
	adds r0, r5, #0	@ 0003ded2 281c
.org 0x3ded4
	adds r0, #180	@ 0003ded4 b430
.org 0x3ded6
	ldrh r2, [r0, #20]	@ 0003ded6 828a
.org 0x3ded8
	movs r0, #1	@ 0003ded8 0120
.org 0x3deda
	ands r0, r2	@ 0003deda 1040
.org 0x3dedc
	cmp r0, #0	@ 0003dedc 0028
.org 0x3dede
	beq.n 0x3dee4	@ 0003dede 01d0
.org 0x3dee0
	movs r2, #3	@ 0003dee0 0322
.org 0x3dee2
	b.n 0x3df14	@ 0003dee2 17e0
.org 0x3dee4
	ands r1, r2	@ 0003dee4 1140
.org 0x3dee6
	lsrs r0, r1, #1	@ 0003dee6 4808
.org 0x3dee8
	cmp r0, #0	@ 0003dee8 0028
.org 0x3deea
	beq.n 0x3defc	@ 0003deea 07d0
.org 0x3deec
	ldr r1, [pc, #8]	@ 0003deec 0249
.org 0x3deee
	adds r0, r5, r1	@ 0003deee 6818
.org 0x3def0
	ldrb r0, [r0, #0]	@ 0003def0 0078
.org 0x3def2
	movs r2, #6	@ 0003def2 0622
.org 0x3def4
	b.n 0x3df0e	@ 0003def4 0be0
.org 0x3def6
	.byte 0x00	@ 0003def6 data
.org 0x3def7
	.byte 0x00	@ 0003def7 data
.org 0x3def8
	.byte 0x65,0x01,0x00,0x00	@ 0003def8 data
.org 0x3defc
	movs r0, #4	@ 0003defc 0420
.org 0x3defe
	ands r0, r2	@ 0003defe 1040
.org 0x3df00
	cmp r0, #0	@ 0003df00 0028
.org 0x3df02
	beq.n 0x3df08	@ 0003df02 01d0
.org 0x3df04
	movs r2, #4	@ 0003df04 0422
.org 0x3df06
	b.n 0x3df14	@ 0003df06 05e0
.org 0x3df08
	movs r0, #8	@ 0003df08 0820
.org 0x3df0a
	ands r0, r2	@ 0003df0a 1040
.org 0x3df0c
	movs r2, #5	@ 0003df0c 0522
.org 0x3df0e
	cmp r0, #0	@ 0003df0e 0028
.org 0x3df10
	bne.n 0x3df14	@ 0003df10 00d1
.org 0x3df12
	ldrb r2, [r4, #17]	@ 0003df12 627c
.org 0x3df14
	cmp r2, #6	@ 0003df14 062a
.org 0x3df16
	beq.n 0x3df20	@ 0003df16 03d0
.org 0x3df18
	adds r0, r5, #0	@ 0003df18 281c
.org 0x3df1a
	adds r1, r4, #0	@ 0003df1a 211c
.org 0x3df1c
	bl 0x3b2a4	@ 0003df1c fdf7c2f9
.org 0x3df20
	movs r1, #170	@ 0003df20 aa21
.org 0x3df22
	lsls r1, r1, #1	@ 0003df22 4900
.org 0x3df24
	adds r0, r5, r1	@ 0003df24 6818
.org 0x3df26
	movs r1, #0	@ 0003df26 0021
.org 0x3df28
	strb r1, [r0, #0]	@ 0003df28 0170
.org 0x3df2a
	movs r0, #2	@ 0003df2a 0220
.org 0x3df2c
	strb r0, [r4, #18]	@ 0003df2c a074
.org 0x3df2e
	strb r1, [r4, #19]	@ 0003df2e e174
.org 0x3df30
	ldrb r0, [r4, #13]	@ 0003df30 607b
.org 0x3df32
	adds r0, #1	@ 0003df32 0130
.org 0x3df34
	strb r0, [r4, #13]	@ 0003df34 6073
.org 0x3df36
	adds r0, r4, #0	@ 0003df36 201c
.org 0x3df38
	bl 0x3ddf4	@ 0003df38 fff75cff
.org 0x3df3c
	ldrb r0, [r4, #18]	@ 0003df3c a07c
.org 0x3df3e
	subs r0, #1	@ 0003df3e 0138
.org 0x3df40
	strb r0, [r4, #18]	@ 0003df40 a074
.org 0x3df42
	lsls r0, r0, #24	@ 0003df42 0006
.org 0x3df44
	cmp r0, #0	@ 0003df44 0028
.org 0x3df46
	bne.n 0x3dfa8	@ 0003df46 2fd1
.org 0x3df48
	movs r0, #170	@ 0003df48 aa20
.org 0x3df4a
	lsls r0, r0, #1	@ 0003df4a 4000
.org 0x3df4c
	adds r1, r5, r0	@ 0003df4c 2918
.org 0x3df4e
	movs r0, #1	@ 0003df4e 0120
.org 0x3df50
	strb r0, [r1, #0]	@ 0003df50 0870
.org 0x3df52
	movs r0, #4	@ 0003df52 0420
.org 0x3df54
	strb r0, [r4, #18]	@ 0003df54 a074
.org 0x3df56
	b.n 0x3dfa2	@ 0003df56 24e0
.org 0x3df58
	adds r0, r4, #0	@ 0003df58 201c
.org 0x3df5a
	bl 0x3ddf4	@ 0003df5a fff74bff
.org 0x3df5e
	ldrb r0, [r4, #18]	@ 0003df5e a07c
.org 0x3df60
	subs r0, #1	@ 0003df60 0138
.org 0x3df62
	strb r0, [r4, #18]	@ 0003df62 a074
.org 0x3df64
	lsls r0, r0, #24	@ 0003df64 0006
.org 0x3df66
	cmp r0, #0	@ 0003df66 0028
.org 0x3df68
	bne.n 0x3dfa8	@ 0003df68 1ed1
.org 0x3df6a
	movs r0, #170	@ 0003df6a aa20
.org 0x3df6c
	lsls r0, r0, #1	@ 0003df6c 4000
.org 0x3df6e
	adds r1, r5, r0	@ 0003df6e 2918
.org 0x3df70
	movs r0, #3	@ 0003df70 0320
.org 0x3df72
	strb r0, [r1, #0]	@ 0003df72 0870
.org 0x3df74
	movs r0, #16	@ 0003df74 1020
.org 0x3df76
	strb r0, [r4, #18]	@ 0003df76 a074
.org 0x3df78
	b.n 0x3dfa2	@ 0003df78 13e0
.org 0x3df7a
	adds r0, r4, #0	@ 0003df7a 201c
.org 0x3df7c
	bl 0x3ddf4	@ 0003df7c fff73aff
.org 0x3df80
	lsls r0, r0, #24	@ 0003df80 0006
.org 0x3df82
	cmp r0, #0	@ 0003df82 0028
.org 0x3df84
	beq.n 0x3df8c	@ 0003df84 02d0
.org 0x3df86
	movs r0, #1	@ 0003df86 0120
.org 0x3df88
	strb r0, [r4, #18]	@ 0003df88 a074
.org 0x3df8a
	b.n 0x3dfa8	@ 0003df8a 0de0
.org 0x3df8c
	ldrb r0, [r4, #18]	@ 0003df8c a07c
.org 0x3df8e
	subs r0, #1	@ 0003df8e 0138
.org 0x3df90
	strb r0, [r4, #18]	@ 0003df90 a074
.org 0x3df92
	lsls r0, r0, #24	@ 0003df92 0006
.org 0x3df94
	cmp r0, #0	@ 0003df94 0028
.org 0x3df96
	bne.n 0x3dfa8	@ 0003df96 07d1
.org 0x3df98
	movs r0, #170	@ 0003df98 aa20
.org 0x3df9a
	lsls r0, r0, #1	@ 0003df9a 4000
.org 0x3df9c
	adds r1, r5, r0	@ 0003df9c 2918
.org 0x3df9e
	movs r0, #4	@ 0003df9e 0420
.org 0x3dfa0
	strb r0, [r1, #0]	@ 0003dfa0 0870
.org 0x3dfa2
	ldrb r0, [r4, #13]	@ 0003dfa2 607b
.org 0x3dfa4
	adds r0, #1	@ 0003dfa4 0130
.org 0x3dfa6
	strb r0, [r4, #13]	@ 0003dfa6 6073
