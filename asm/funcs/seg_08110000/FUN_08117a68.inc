@ FUN_08117a68  entry 0x08117a68  size 176
.thumb
.org 0x117a68
FUN_08117a68:
	push {r4, r5, lr}	@ 00117a68 30b5
.org 0x117a6a
	adds r4, r0, #0	@ 00117a6a 041c
.org 0x117a6c
	ldr r5, [pc, #128]	@ 00117a6c 204d
.org 0x117a6e
	ldrh r1, [r5, #6]	@ 00117a6e e988
.org 0x117a70
	movs r0, #128	@ 00117a70 8020
.org 0x117a72
	ands r0, r1	@ 00117a72 0840
.org 0x117a74
	cmp r0, #0	@ 00117a74 0028
.org 0x117a76
	beq.n 0x117a88	@ 00117a76 07d0
.org 0x117a78
	movs r0, #1	@ 00117a78 0120
.org 0x117a7a
	bl 0x2b10	@ 00117a7a ebf649f8
.org 0x117a7e
	ldrh r0, [r4, #10]	@ 00117a7e 6089
.org 0x117a80
	adds r0, #1	@ 00117a80 0130
.org 0x117a82
	movs r1, #1	@ 00117a82 0121
.org 0x117a84
	ands r0, r1	@ 00117a84 0840
.org 0x117a86
	strh r0, [r4, #10]	@ 00117a86 6081
.org 0x117a88
	ldrh r1, [r5, #6]	@ 00117a88 e988
.org 0x117a8a
	movs r0, #64	@ 00117a8a 4020
.org 0x117a8c
	ands r0, r1	@ 00117a8c 0840
.org 0x117a8e
	cmp r0, #0	@ 00117a8e 0028
.org 0x117a90
	beq.n 0x117aa2	@ 00117a90 07d0
.org 0x117a92
	movs r0, #1	@ 00117a92 0120
.org 0x117a94
	bl 0x2b10	@ 00117a94 ebf63cf8
.org 0x117a98
	ldrh r0, [r4, #10]	@ 00117a98 6089
.org 0x117a9a
	adds r0, #1	@ 00117a9a 0130
.org 0x117a9c
	movs r1, #1	@ 00117a9c 0121
.org 0x117a9e
	ands r0, r1	@ 00117a9e 0840
.org 0x117aa0
	strh r0, [r4, #10]	@ 00117aa0 6081
.org 0x117aa2
	ldr r0, [pc, #80]	@ 00117aa2 1448
.org 0x117aa4
	ldrh r1, [r0, #0]	@ 00117aa4 0188
.org 0x117aa6
	ldr r0, [pc, #80]	@ 00117aa6 1448
.org 0x117aa8
	adds r5, r1, r0	@ 00117aa8 0d18
.org 0x117aaa
	movs r2, #0	@ 00117aaa 0022
.org 0x117aac
	ldr r0, [pc, #76]	@ 00117aac 1348
.org 0x117aae
	ldrb r1, [r0, #6]	@ 00117aae 8179
.org 0x117ab0
	adds r3, r0, #0	@ 00117ab0 031c
.org 0x117ab2
	cmp r1, #0	@ 00117ab2 0029
.org 0x117ab4
	bne.n 0x117abc	@ 00117ab4 02d1
.org 0x117ab6
	ldrb r0, [r3, #4]	@ 00117ab6 1879
.org 0x117ab8
	cmp r0, #1	@ 00117ab8 0128
.org 0x117aba
	bne.n 0x117abe	@ 00117aba 00d1
.org 0x117abc
	movs r2, #1	@ 00117abc 0122
.org 0x117abe
	lsls r0, r2, #3	@ 00117abe d000
.org 0x117ac0
	subs r0, r0, r2	@ 00117ac0 801a
.org 0x117ac2
	movs r1, #8	@ 00117ac2 0821
.org 0x117ac4
	subs r1, r1, r0	@ 00117ac4 091a
.org 0x117ac6
	movs r0, #10	@ 00117ac6 0a20
.org 0x117ac8
	ldrsh r2, [r4, r0]	@ 00117ac8 225e
.org 0x117aca
	lsls r2, r2, #1	@ 00117aca 5200
.org 0x117acc
	adds r2, #2	@ 00117acc 0232
.org 0x117ace
	ldrb r3, [r3, #5]	@ 00117ace 5b79
.org 0x117ad0
	adds r2, r2, r3	@ 00117ad0 d218
.org 0x117ad2
	adds r0, r5, #0	@ 00117ad2 281c
.org 0x117ad4
	bl 0x10d85c	@ 00117ad4 f5f7c2fe
.org 0x117ad8
	ldr r0, [pc, #20]	@ 00117ad8 0548
.org 0x117ada
	ldrh r1, [r0, #4]	@ 00117ada 8188
.org 0x117adc
	movs r0, #2	@ 00117adc 0220
.org 0x117ade
	ands r0, r1	@ 00117ade 0840
.org 0x117ae0
	cmp r0, #0	@ 00117ae0 0028
.org 0x117ae2
	beq.n 0x117b00	@ 00117ae2 0dd0
.org 0x117ae4
	movs r0, #3	@ 00117ae4 0320
.org 0x117ae6
	bl 0x2b10	@ 00117ae6 ebf613f8
.org 0x117aea
	movs r0, #2	@ 00117aea 0220
.org 0x117aec
	negs r0, r0	@ 00117aec 4042
.org 0x117aee
	b.n 0x117b22	@ 00117aee 18e0
.org 0x117af0
	.byte 0x60,0x07,0x00,0x02	@ 00117af0 data
.org 0x117af4
	.byte 0xf8,0xcf,0x86,0x08	@ 00117af4 data
.org 0x117af8
	.byte 0x5f,0x0e,0x01,0x09	@ 00117af8 data
.org 0x117afc
	.byte 0x88,0xf3,0x02,0x02	@ 00117afc data
.org 0x117b00
	movs r0, #1	@ 00117b00 0120
.org 0x117b02
	ands r0, r1	@ 00117b02 0840
.org 0x117b04
	cmp r0, #0	@ 00117b04 0028
.org 0x117b06
	beq.n 0x117b20	@ 00117b06 0bd0
.org 0x117b08
	movs r0, #2	@ 00117b08 0220
.org 0x117b0a
	bl 0x2b10	@ 00117b0a ebf601f8
.org 0x117b0e
	movs r1, #10	@ 00117b0e 0a21
.org 0x117b10
	ldrsh r0, [r4, r1]	@ 00117b10 605e
.org 0x117b12
	cmp r0, #0	@ 00117b12 0028
.org 0x117b14
	bne.n 0x117b1a	@ 00117b14 01d1
.org 0x117b16
	movs r0, #1	@ 00117b16 0120
