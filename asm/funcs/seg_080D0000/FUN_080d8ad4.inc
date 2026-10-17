@ FUN_080d8ad4  entry 0x080d8ad4  size 138
.thumb
.org 0xd8ad4
FUN_080d8ad4:
	push {r4, lr}	@ 000d8ad4 10b5
.org 0xd8ad6
	adds r4, r0, #0	@ 000d8ad6 041c
.org 0xd8ad8
	bl 0x1cc9c	@ 000d8ad8 44f7e0f8
.org 0xd8adc
	ldrb r1, [r4, #10]	@ 000d8adc a17a
.org 0xd8ade
	movs r0, #1	@ 000d8ade 0120
.org 0xd8ae0
	orrs r0, r1	@ 000d8ae0 0843
.org 0xd8ae2
	movs r1, #2	@ 000d8ae2 0221
.org 0xd8ae4
	orrs r0, r1	@ 000d8ae4 0843
.org 0xd8ae6
	strb r0, [r4, #10]	@ 000d8ae6 a072
.org 0xd8ae8
	movs r1, #16	@ 000d8ae8 1021
.org 0xd8aea
	ands r0, r1	@ 000d8aea 0840
.org 0xd8aec
	cmp r0, #0	@ 000d8aec 0028
.org 0xd8aee
	beq.n 0xd8af4	@ 000d8aee 01d0
.org 0xd8af0
	movs r0, #192	@ 000d8af0 c020
.org 0xd8af2
	b.n 0xd8af8	@ 000d8af2 01e0
.org 0xd8af4
	movs r0, #192	@ 000d8af4 c020
.org 0xd8af6
	negs r0, r0	@ 000d8af6 4042
.org 0xd8af8
	str r0, [r4, #92]	@ 000d8af8 e065
.org 0xd8afa
	movs r3, #0	@ 000d8afa 0023
.org 0xd8afc
	str r3, [r4, #96]	@ 000d8afc 2366
.org 0xd8afe
	ldrb r0, [r4, #17]	@ 000d8afe 607c
.org 0xd8b00
	cmp r0, #0	@ 000d8b00 0028
.org 0xd8b02
	bne.n 0xd8b24	@ 000d8b02 0fd1
.org 0xd8b04
	movs r0, #255	@ 000d8b04 ff20
.org 0xd8b06
	strb r0, [r4, #18]	@ 000d8b06 a074
.org 0xd8b08
	ldr r1, [pc, #20]	@ 000d8b08 0549
.org 0xd8b0a
	ldrb r0, [r4, #9]	@ 000d8b0a 607a
.org 0xd8b0c
	lsls r0, r0, #2	@ 000d8b0c 8000
.org 0xd8b0e
	adds r0, r0, r1	@ 000d8b0e 4018
.org 0xd8b10
	movs r1, #1	@ 000d8b10 0121
.org 0xd8b12
	str r1, [r4, #12]	@ 000d8b12 e160
.org 0xd8b14
	ldr r0, [r0, #0]	@ 000d8b14 0068
.org 0xd8b16
	ldr r0, [r0, #4]	@ 000d8b16 4068
.org 0xd8b18
	str r0, [r4, #20]	@ 000d8b18 6061
.org 0xd8b1a
	strb r3, [r4, #13]	@ 000d8b1a 6373
.org 0xd8b1c
	b.n 0xd8b54	@ 000d8b1c 1ae0
.org 0xd8b1e
	.byte 0x00	@ 000d8b1e data
.org 0xd8b1f
	.byte 0x00	@ 000d8b1f data
.org 0xd8b20
	.byte 0x64,0x6f,0x86,0x08	@ 000d8b20 data
.org 0xd8b24
	ldr r2, [pc, #60]	@ 000d8b24 0f4a
.org 0xd8b26
	ldr r1, [r2, #0]	@ 000d8b26 1168
.org 0xd8b28
	ldr r0, [pc, #60]	@ 000d8b28 0f48
.org 0xd8b2a
	muls r0, r1	@ 000d8b2a 4843
.org 0xd8b2c
	ldr r1, [pc, #60]	@ 000d8b2c 0f49
.org 0xd8b2e
	adds r0, r0, r1	@ 000d8b2e 4018
.org 0xd8b30
	lsls r0, r0, #1	@ 000d8b30 4000
.org 0xd8b32
	lsrs r1, r0, #1	@ 000d8b32 4108
.org 0xd8b34
	str r1, [r2, #0]	@ 000d8b34 1160
.org 0xd8b36
	lsrs r0, r0, #17	@ 000d8b36 400c
.org 0xd8b38
	movs r1, #7	@ 000d8b38 0721
.org 0xd8b3a
	ands r0, r1	@ 000d8b3a 0840
.org 0xd8b3c
	adds r0, #127	@ 000d8b3c 7f30
.org 0xd8b3e
	strb r0, [r4, #18]	@ 000d8b3e a074
.org 0xd8b40
	ldr r1, [pc, #44]	@ 000d8b40 0b49
.org 0xd8b42
	ldrb r0, [r4, #9]	@ 000d8b42 607a
.org 0xd8b44
	lsls r0, r0, #2	@ 000d8b44 8000
.org 0xd8b46
	adds r0, r0, r1	@ 000d8b46 4018
.org 0xd8b48
	movs r1, #1	@ 000d8b48 0121
.org 0xd8b4a
	str r1, [r4, #12]	@ 000d8b4a e160
.org 0xd8b4c
	ldr r0, [r0, #0]	@ 000d8b4c 0068
.org 0xd8b4e
	ldr r0, [r0, #4]	@ 000d8b4e 4068
.org 0xd8b50
	str r0, [r4, #20]	@ 000d8b50 6061
.org 0xd8b52
	strb r1, [r4, #13]	@ 000d8b52 6173
.org 0xd8b54
	strb r3, [r4, #14]	@ 000d8b54 a373
.org 0xd8b56
	strb r3, [r4, #15]	@ 000d8b56 e373
.org 0xd8b58
	adds r0, r4, #0	@ 000d8b58 201c
.org 0xd8b5a
	bl 0xd8b74	@ 000d8b5a 00f00bf8
