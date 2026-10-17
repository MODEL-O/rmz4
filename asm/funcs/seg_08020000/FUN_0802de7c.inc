@ FUN_0802de7c  entry 0x0802de7c  size 236
.thumb
.org 0x2de7c
FUN_0802de7c:
	push {r4, r5, r6, r7, lr}	@ 0002de7c f0b5
.org 0x2de7e
	mov r7, sl	@ 0002de7e 5746
.org 0x2de80
	mov r6, r9	@ 0002de80 4e46
.org 0x2de82
	mov r5, r8	@ 0002de82 4546
.org 0x2de84
	push {r5, r6, r7}	@ 0002de84 e0b4
.org 0x2de86
	sub sp, #4	@ 0002de86 81b0
.org 0x2de88
	adds r7, r0, #0	@ 0002de88 071c
.org 0x2de8a
	mov sl, r1	@ 0002de8a 8a46
.org 0x2de8c
	str r2, [sp, #0]	@ 0002de8c 0092
.org 0x2de8e
	movs r0, #0	@ 0002de8e 0020
.org 0x2de90
	mov r8, r0	@ 0002de90 8046
.org 0x2de92
	mov r9, r0	@ 0002de92 8146
.org 0x2de94
	movs r1, #220	@ 0002de94 dc21
.org 0x2de96
	lsls r1, r1, #1	@ 0002de96 4900
.org 0x2de98
	adds r0, r7, r1	@ 0002de98 7818
.org 0x2de9a
	ldrb r0, [r0, #0]	@ 0002de9a 0078
.org 0x2de9c
	cmp r8, r0	@ 0002de9c 8045
.org 0x2de9e
	bcs.n 0x2df64	@ 0002de9e 61d2
.org 0x2dea0
	movs r2, #196	@ 0002dea0 c422
.org 0x2dea2
	lsls r2, r2, #1	@ 0002dea2 5200
.org 0x2dea4
	adds r0, r7, r2	@ 0002dea4 b818
.org 0x2dea6
	add r0, r9	@ 0002dea6 4844
.org 0x2dea8
	ldrb r5, [r0, #0]	@ 0002dea8 0578
.org 0x2deaa
	lsls r0, r5, #1	@ 0002deaa 6800
.org 0x2deac
	adds r0, r0, r5	@ 0002deac 4019
.org 0x2deae
	lsls r2, r0, #3	@ 0002deae c200
.org 0x2deb0
	ldr r4, [pc, #104]	@ 0002deb0 1a4c
.org 0x2deb2
	adds r3, r2, r4	@ 0002deb2 1319
.org 0x2deb4
	movs r1, #235	@ 0002deb4 eb21
.org 0x2deb6
	lsls r1, r1, #1	@ 0002deb6 4900
.org 0x2deb8
	adds r0, r3, r1	@ 0002deb8 5818
.org 0x2deba
	ldrh r1, [r0, #0]	@ 0002deba 0188
.org 0x2debc
	ldr r4, [pc, #96]	@ 0002debc 184c
.org 0x2debe
	adds r0, r4, #0	@ 0002debe 201c
.org 0x2dec0
	ands r0, r1	@ 0002dec0 0840
.org 0x2dec2
	cmp r0, #15	@ 0002dec2 0f28
.org 0x2dec4
	beq.n 0x2df4e	@ 0002dec4 43d0
.org 0x2dec6
	ldr r1, [pc, #84]	@ 0002dec6 1549
.org 0x2dec8
	movs r4, #238	@ 0002dec8 ee24
.org 0x2deca
	lsls r4, r4, #1	@ 0002deca 6400
.org 0x2decc
	adds r0, r1, r4	@ 0002decc 0819
.org 0x2dece
	adds r6, r2, r0	@ 0002dece 1618
.org 0x2ded0
	ldr r1, [r6, #0]	@ 0002ded0 3168
.org 0x2ded2
	mov r0, sl	@ 0002ded2 5046
.org 0x2ded4
	subs r1, r0, r1	@ 0002ded4 411a
.org 0x2ded6
	movs r0, #236	@ 0002ded6 ec20
.org 0x2ded8
	lsls r0, r0, #1	@ 0002ded8 4000
.org 0x2deda
	adds r4, r3, r0	@ 0002deda 1c18
.org 0x2dedc
	ldrh r0, [r4, #0]	@ 0002dedc 2088
.org 0x2dede
	adds r1, r1, r0	@ 0002dede 0918
.org 0x2dee0
	lsls r0, r0, #1	@ 0002dee0 4000
.org 0x2dee2
	cmp r1, r0	@ 0002dee2 8142
.org 0x2dee4
	bcs.n 0x2df4e	@ 0002dee4 33d2
.org 0x2dee6
	ldr r1, [pc, #60]	@ 0002dee6 0f49
.org 0x2dee8
	adds r0, r2, r1	@ 0002dee8 5018
.org 0x2deea
	ldr r1, [r0, #0]	@ 0002deea 0168
.org 0x2deec
	ldr r2, [sp, #0]	@ 0002deec 009a
.org 0x2deee
	subs r1, r2, r1	@ 0002deee 511a
.org 0x2def0
	movs r2, #237	@ 0002def0 ed22
.org 0x2def2
	lsls r2, r2, #1	@ 0002def2 5200
.org 0x2def4
	adds r0, r3, r2	@ 0002def4 9818
.org 0x2def6
	ldrh r0, [r0, #0]	@ 0002def6 0088
.org 0x2def8
	adds r1, r1, r0	@ 0002def8 0918
.org 0x2defa
	lsls r0, r0, #1	@ 0002defa 4000
.org 0x2defc
	cmp r1, r0	@ 0002defc 8142
.org 0x2defe
	bcs.n 0x2df4e	@ 0002defe 26d2
.org 0x2df00
	adds r0, r7, #0	@ 0002df00 381c
.org 0x2df02
	adds r1, r5, #0	@ 0002df02 291c
.org 0x2df04
	bl 0x2e63c	@ 0002df04 00f09afb
.org 0x2df08
	ldr r1, [r6, #0]	@ 0002df08 3168
.org 0x2df0a
	ldr r0, [r7, #84]	@ 0002df0a 786d
.org 0x2df0c
	cmp r1, r0	@ 0002df0c 8142
.org 0x2df0e
	bge.n 0x2df28	@ 0002df0e 0bda
.org 0x2df10
	ldrh r0, [r4, #0]	@ 0002df10 2088
.org 0x2df12
	adds r0, r1, r0	@ 0002df12 0818
.org 0x2df14
	mov r3, sl	@ 0002df14 5346
.org 0x2df16
	subs r0, r0, r3	@ 0002df16 c01a
.org 0x2df18
	b.n 0x2df32	@ 0002df18 0be0
.org 0x2df1a
	.byte 0x00	@ 0002df1a data
.org 0x2df1b
	.byte 0x00	@ 0002df1b data
.org 0x2df1c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002df1c data
.org 0x2df20
	.byte 0x0f,0x80,0x00,0x00	@ 0002df20 data
.org 0x2df24
	.byte 0x90,0x0c,0x00,0x02	@ 0002df24 data
.org 0x2df28
	ldrh r0, [r4, #0]	@ 0002df28 2088
.org 0x2df2a
	subs r0, r1, r0	@ 0002df2a 081a
.org 0x2df2c
	mov r4, sl	@ 0002df2c 5446
.org 0x2df2e
	subs r0, r0, r4	@ 0002df2e 001b
.org 0x2df30
	subs r0, #1	@ 0002df30 0138
.org 0x2df32
	mov r1, r8	@ 0002df32 4146
.org 0x2df34
	cmp r1, #0	@ 0002df34 0029
.org 0x2df36
	beq.n 0x2df4c	@ 0002df36 09d0
.org 0x2df38
	adds r2, r0, #0	@ 0002df38 021c
.org 0x2df3a
	cmp r0, #0	@ 0002df3a 0028
.org 0x2df3c
	bge.n 0x2df40	@ 0002df3c 00da
.org 0x2df3e
	negs r2, r0	@ 0002df3e 4242
.org 0x2df40
	mov r1, r8	@ 0002df40 4146
.org 0x2df42
	cmp r1, #0	@ 0002df42 0029
.org 0x2df44
	bge.n 0x2df48	@ 0002df44 00da
.org 0x2df46
	negs r1, r1	@ 0002df46 4942
.org 0x2df48
	cmp r2, r1	@ 0002df48 8a42
.org 0x2df4a
	bge.n 0x2df4e	@ 0002df4a 00da
.org 0x2df4c
	mov r8, r0	@ 0002df4c 8046
.org 0x2df4e
	mov r0, r9	@ 0002df4e 4846
.org 0x2df50
	adds r0, #1	@ 0002df50 0130
.org 0x2df52
	lsls r0, r0, #24	@ 0002df52 0006
.org 0x2df54
	lsrs r0, r0, #24	@ 0002df54 000e
.org 0x2df56
	mov r9, r0	@ 0002df56 8146
.org 0x2df58
	movs r2, #220	@ 0002df58 dc22
.org 0x2df5a
	lsls r2, r2, #1	@ 0002df5a 5200
.org 0x2df5c
	adds r0, r7, r2	@ 0002df5c b818
.org 0x2df5e
	ldrb r0, [r0, #0]	@ 0002df5e 0078
.org 0x2df60
	cmp r9, r0	@ 0002df60 8145
.org 0x2df62
	bcc.n 0x2dea0	@ 0002df62 9dd3
.org 0x2df64
	mov r0, r8	@ 0002df64 4046
.org 0x2df66
	add sp, #4	@ 0002df66 01b0
