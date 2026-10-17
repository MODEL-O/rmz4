@ FUN_08059a9c  entry 0x08059a9c  size 184
.thumb
.org 0x59a9c
FUN_08059a9c:
	push {r4, r5, r6, r7, lr}	@ 00059a9c f0b5
.org 0x59a9e
	mov r7, sl	@ 00059a9e 5746
.org 0x59aa0
	mov r6, r9	@ 00059aa0 4e46
.org 0x59aa2
	mov r5, r8	@ 00059aa2 4546
.org 0x59aa4
	push {r5, r6, r7}	@ 00059aa4 e0b4
.org 0x59aa6
	mov ip, r0	@ 00059aa6 8446
.org 0x59aa8
	ldrb r0, [r0, #10]	@ 00059aa8 807a
.org 0x59aaa
	lsrs r0, r0, #4	@ 00059aaa 0009
.org 0x59aac
	mov r8, r0	@ 00059aac 8046
.org 0x59aae
	movs r0, #1	@ 00059aae 0120
.org 0x59ab0
	mov sl, r0	@ 00059ab0 8246
.org 0x59ab2
	mov r1, r8	@ 00059ab2 4146
.org 0x59ab4
	ands r1, r0	@ 00059ab4 0140
.org 0x59ab6
	mov r8, r1	@ 00059ab6 8846
.org 0x59ab8
	movs r2, #0	@ 00059ab8 0022
.org 0x59aba
	mov r9, r2	@ 00059aba 9146
.org 0x59abc
	ldr r0, [pc, #112]	@ 00059abc 1c48
.org 0x59abe
	ldr r0, [r0, #0]	@ 00059abe 0068
.org 0x59ac0
	mov r1, ip	@ 00059ac0 6146
.org 0x59ac2
	ldr r2, [r1, #84]	@ 00059ac2 4a6d
.org 0x59ac4
	ldr r7, [r0, #84]	@ 00059ac4 476d
.org 0x59ac6
	cmp r2, r7	@ 00059ac6 ba42
.org 0x59ac8
	bge.n 0x59ace	@ 00059ac8 01da
.org 0x59aca
	movs r0, #1	@ 00059aca 0120
.org 0x59acc
	mov r9, r0	@ 00059acc 8146
.org 0x59ace
	mov r0, r8	@ 00059ace 4046
.org 0x59ad0
	lsls r1, r0, #1	@ 00059ad0 4100
.org 0x59ad2
	subs r1, #1	@ 00059ad2 0139
.org 0x59ad4
	lsls r0, r1, #1	@ 00059ad4 4800
.org 0x59ad6
	adds r0, r0, r1	@ 00059ad6 4018
.org 0x59ad8
	lsls r0, r0, #10	@ 00059ad8 8002
.org 0x59ada
	adds r3, r2, r0	@ 00059ada 1318
.org 0x59adc
	mov r0, ip	@ 00059adc 6046
.org 0x59ade
	adds r0, #188	@ 00059ade bc30
.org 0x59ae0
	ldr r0, [r0, #0]	@ 00059ae0 0068
.org 0x59ae2
	ldr r1, [pc, #80]	@ 00059ae2 1449
.org 0x59ae4
	adds r4, r0, r1	@ 00059ae4 4418
.org 0x59ae6
	adds r5, r7, #0	@ 00059ae6 3d1c
.org 0x59ae8
	mov r0, ip	@ 00059ae8 6046
.org 0x59aea
	adds r0, #184	@ 00059aea b830
.org 0x59aec
	ldr r2, [r0, #0]	@ 00059aec 0268
.org 0x59aee
	adds r0, #20	@ 00059aee 1430
.org 0x59af0
	ldr r0, [r0, #0]	@ 00059af0 0068
.org 0x59af2
	subs r0, r7, r0	@ 00059af2 381a
.org 0x59af4
	ldr r1, [pc, #64]	@ 00059af4 1049
.org 0x59af6
	adds r0, r0, r1	@ 00059af6 4018
.org 0x59af8
	movs r1, #160	@ 00059af8 a021
.org 0x59afa
	lsls r1, r1, #8	@ 00059afa 0902
.org 0x59afc
	cmp r0, r1	@ 00059afc 8842
.org 0x59afe
	bls.n 0x59b04	@ 00059afe 01d9
.org 0x59b00
	ldr r0, [pc, #56]	@ 00059b00 0e48
.org 0x59b02
	adds r2, r2, r0	@ 00059b02 1218
.org 0x59b04
	adds r6, r2, #0	@ 00059b04 161c
.org 0x59b06
	subs r2, r5, r3	@ 00059b06 ea1a
.org 0x59b08
	mov r1, r9	@ 00059b08 4946
.org 0x59b0a
	lsls r0, r1, #1	@ 00059b0a 4800
.org 0x59b0c
	mov r1, sl	@ 00059b0c 5146
.org 0x59b0e
	subs r0, r1, r0	@ 00059b0e 081a
.org 0x59b10
	muls r2, r0	@ 00059b10 4243
.org 0x59b12
	subs r1, r6, r4	@ 00059b12 311b
.org 0x59b14
	adds r0, r2, #0	@ 00059b14 101c
.org 0x59b16
	bl 0x10d338	@ 00059b16 b3f00ffc
.org 0x59b1a
	adds r1, r0, #0	@ 00059b1a 011c
.org 0x59b1c
	lsls r0, r1, #24	@ 00059b1c 0806
.org 0x59b1e
	movs r2, #128	@ 00059b1e 8022
.org 0x59b20
	lsls r2, r2, #23	@ 00059b20 d205
.org 0x59b22
	adds r0, r0, r2	@ 00059b22 8018
.org 0x59b24
	lsrs r2, r0, #24	@ 00059b24 020e
.org 0x59b26
	cmp r2, #143	@ 00059b26 8f2a
.org 0x59b28
	bgt.n 0x59b40	@ 00059b28 0adc
.org 0x59b2a
	movs r1, #80	@ 00059b2a 5021
.org 0x59b2c
	b.n 0x59b46	@ 00059b2c 0be0
.org 0x59b2e
	.byte 0x00	@ 00059b2e data
.org 0x59b2f
	.byte 0x00	@ 00059b2f data
.org 0x59b30
	.byte 0xf0,0xdb,0x02,0x02	@ 00059b30 data
.org 0x59b34
	.byte 0x00,0xd8,0xff,0xff	@ 00059b34 data
.org 0x59b38
	.byte 0x00,0x60,0xff,0xff	@ 00059b38 data
.org 0x59b3c
	.byte 0x00,0xf0,0xff,0xff	@ 00059b3c data
.org 0x59b40
	cmp r2, #168	@ 00059b40 a82a
.org 0x59b42
	ble.n 0x59b46	@ 00059b42 00dd
.org 0x59b44
	movs r1, #104	@ 00059b44 6821
.org 0x59b46
	mov r0, r8	@ 00059b46 4046
.org 0x59b48
	cmp r0, #0	@ 00059b48 0028
.org 0x59b4a
	beq.n 0x59b54	@ 00059b4a 03d0
.org 0x59b4c
	movs r0, #128	@ 00059b4c 8020
.org 0x59b4e
	subs r0, r0, r1	@ 00059b4e 401a
.org 0x59b50
	lsls r0, r0, #24	@ 00059b50 0006
.org 0x59b52
	lsrs r1, r0, #24	@ 00059b52 010e
