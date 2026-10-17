@ FUN_080d3a5c  entry 0x080d3a5c  size 206
.thumb
.org 0xd3a5c
FUN_080d3a5c:
	push {r4, r5, r6, lr}	@ 000d3a5c 70b5
.org 0xd3a5e
	adds r6, r0, #0	@ 000d3a5e 061c
.org 0xd3a60
	ldrb r0, [r6, #13]	@ 000d3a60 707b
.org 0xd3a62
	cmp r0, #0	@ 000d3a62 0028
.org 0xd3a64
	bne.n 0xd3ac8	@ 000d3a64 30d1
.org 0xd3a66
	movs r1, #144	@ 000d3a66 9021
.org 0xd3a68
	lsls r1, r1, #4	@ 000d3a68 0901
.org 0xd3a6a
	adds r0, r6, #0	@ 000d3a6a 301c
.org 0xd3a6c
	bl 0x1cf00	@ 000d3a6c 49f748fa
.org 0xd3a70
	movs r0, #63	@ 000d3a70 3f20
.org 0xd3a72
	bl 0x2bb4	@ 000d3a72 2ff79ff8
.org 0xd3a76
	cmp r0, #0	@ 000d3a76 0028
.org 0xd3a78
	bne.n 0xd3a80	@ 000d3a78 02d1
.org 0xd3a7a
	movs r0, #63	@ 000d3a7a 3f20
.org 0xd3a7c
	bl 0x2b10	@ 000d3a7c 2ff748f8
.org 0xd3a80
	ldr r5, [pc, #88]	@ 000d3a80 164d
.org 0xd3a82
	ldr r0, [r5, #0]	@ 000d3a82 2868
.org 0xd3a84
	ldr r3, [pc, #88]	@ 000d3a84 164b
.org 0xd3a86
	muls r0, r3	@ 000d3a86 5843
.org 0xd3a88
	ldr r2, [pc, #88]	@ 000d3a88 164a
.org 0xd3a8a
	adds r0, r0, r2	@ 000d3a8a 8018
.org 0xd3a8c
	lsls r0, r0, #1	@ 000d3a8c 4000
.org 0xd3a8e
	lsrs r4, r0, #1	@ 000d3a8e 4408
.org 0xd3a90
	lsls r0, r0, #5	@ 000d3a90 4001
.org 0xd3a92
	lsrs r0, r0, #22	@ 000d3a92 800d
.org 0xd3a94
	ldr r1, [pc, #80]	@ 000d3a94 1449
.org 0xd3a96
	adds r0, r0, r1	@ 000d3a96 4018
.org 0xd3a98
	str r0, [r6, #92]	@ 000d3a98 f065
.org 0xd3a9a
	adds r0, r4, #0	@ 000d3a9a 201c
.org 0xd3a9c
	muls r0, r3	@ 000d3a9c 5843
.org 0xd3a9e
	adds r0, r0, r2	@ 000d3a9e 8018
.org 0xd3aa0
	lsls r0, r0, #1	@ 000d3aa0 4000
.org 0xd3aa2
	lsrs r4, r0, #1	@ 000d3aa2 4408
.org 0xd3aa4
	lsls r0, r0, #6	@ 000d3aa4 8001
.org 0xd3aa6
	lsrs r0, r0, #23	@ 000d3aa6 c00d
.org 0xd3aa8
	subs r1, r1, r0	@ 000d3aa8 091a
.org 0xd3aaa
	str r1, [r6, #96]	@ 000d3aaa 3166
.org 0xd3aac
	adds r0, r4, #0	@ 000d3aac 201c
.org 0xd3aae
	muls r0, r3	@ 000d3aae 5843
.org 0xd3ab0
	adds r0, r0, r2	@ 000d3ab0 8018
.org 0xd3ab2
	lsls r0, r0, #1	@ 000d3ab2 4000
.org 0xd3ab4
	lsrs r1, r0, #1	@ 000d3ab4 4108
.org 0xd3ab6
	str r1, [r5, #0]	@ 000d3ab6 2960
.org 0xd3ab8
	lsrs r0, r0, #17	@ 000d3ab8 400c
.org 0xd3aba
	movs r1, #31	@ 000d3aba 1f21
.org 0xd3abc
	ands r0, r1	@ 000d3abc 0840
.org 0xd3abe
	adds r0, #32	@ 000d3abe 2030
.org 0xd3ac0
	strb r0, [r6, #18]	@ 000d3ac0 b074
.org 0xd3ac2
	ldrb r0, [r6, #13]	@ 000d3ac2 707b
.org 0xd3ac4
	adds r0, #1	@ 000d3ac4 0130
.org 0xd3ac6
	strb r0, [r6, #13]	@ 000d3ac6 7073
.org 0xd3ac8
	ldrb r0, [r6, #18]	@ 000d3ac8 b07c
.org 0xd3aca
	subs r0, #1	@ 000d3aca 0138
.org 0xd3acc
	strb r0, [r6, #18]	@ 000d3acc b074
.org 0xd3ace
	movs r1, #1	@ 000d3ace 0121
.org 0xd3ad0
	ands r0, r1	@ 000d3ad0 0840
.org 0xd3ad2
	cmp r0, #0	@ 000d3ad2 0028
.org 0xd3ad4
	bne.n 0xd3aec	@ 000d3ad4 0ad1
.org 0xd3ad6
	ldrb r0, [r6, #10]	@ 000d3ad6 b07a
.org 0xd3ad8
	orrs r0, r1	@ 000d3ad8 0843
.org 0xd3ada
	b.n 0xd3af2	@ 000d3ada 0ae0
.org 0xd3adc
	.byte 0x38,0xdc,0x02,0x02	@ 000d3adc data
.org 0xd3ae0
	.byte 0xfd,0x43,0x03,0x00	@ 000d3ae0 data
.org 0xd3ae4
	.byte 0xc3,0x9e,0x26,0x00	@ 000d3ae4 data
.org 0xd3ae8
	.byte 0x00,0xfe,0xff,0xff	@ 000d3ae8 data
.org 0xd3aec
	ldrb r1, [r6, #10]	@ 000d3aec b17a
.org 0xd3aee
	movs r0, #254	@ 000d3aee fe20
.org 0xd3af0
	ands r0, r1	@ 000d3af0 0840
.org 0xd3af2
	strb r0, [r6, #10]	@ 000d3af2 b072
.org 0xd3af4
	ldr r0, [r6, #84]	@ 000d3af4 706d
.org 0xd3af6
	ldr r1, [r6, #92]	@ 000d3af6 f16d
.org 0xd3af8
	adds r0, r0, r1	@ 000d3af8 4018
.org 0xd3afa
	str r0, [r6, #84]	@ 000d3afa 7065
.org 0xd3afc
	ldr r0, [r6, #88]	@ 000d3afc b06d
.org 0xd3afe
	ldr r1, [r6, #96]	@ 000d3afe 316e
.org 0xd3b00
	adds r0, r0, r1	@ 000d3b00 4018
.org 0xd3b02
	str r0, [r6, #88]	@ 000d3b02 b065
.org 0xd3b04
	adds r1, #64	@ 000d3b04 4031
.org 0xd3b06
	str r1, [r6, #96]	@ 000d3b06 3166
.org 0xd3b08
	adds r0, r6, #0	@ 000d3b08 301c
.org 0xd3b0a
	bl 0x1cff0	@ 000d3b0a 49f771fa
.org 0xd3b0e
	ldrb r0, [r6, #18]	@ 000d3b0e b07c
.org 0xd3b10
	cmp r0, #0	@ 000d3b10 0028
.org 0xd3b12
	beq.n 0xd3b22	@ 000d3b12 06d0
.org 0xd3b14
	ldr r0, [r6, #84]	@ 000d3b14 706d
.org 0xd3b16
	ldr r1, [r6, #88]	@ 000d3b16 b16d
.org 0xd3b18
	bl 0x7c7c	@ 000d3b18 34f7b0f8
.org 0xd3b1c
	lsls r0, r0, #16	@ 000d3b1c 0004
.org 0xd3b1e
	cmp r0, #0	@ 000d3b1e 0028
.org 0xd3b20
	beq.n 0xd3b34	@ 000d3b20 08d0
.org 0xd3b22
	ldr r1, [pc, #24]	@ 000d3b22 0649
.org 0xd3b24
	ldrb r0, [r6, #9]	@ 000d3b24 707a
.org 0xd3b26
	lsls r0, r0, #2	@ 000d3b26 8000
.org 0xd3b28
	adds r0, r0, r1	@ 000d3b28 4018
