@ FUN_080e6ad4  entry 0x080e6ad4  size 108
.thumb
.org 0xe6ad4
FUN_080e6ad4:
	push {r4, lr}	@ 000e6ad4 10b5
.org 0xe6ad6
	adds r4, r0, #0	@ 000e6ad6 041c
.org 0xe6ad8
	ldr r0, [r4, #84]	@ 000e6ad8 606d
.org 0xe6ada
	ldr r1, [r4, #92]	@ 000e6ada e16d
.org 0xe6adc
	adds r0, r0, r1	@ 000e6adc 4018
.org 0xe6ade
	str r0, [r4, #84]	@ 000e6ade 6065
.org 0xe6ae0
	ldr r0, [r4, #88]	@ 000e6ae0 a06d
.org 0xe6ae2
	ldr r1, [r4, #96]	@ 000e6ae2 216e
.org 0xe6ae4
	adds r0, r0, r1	@ 000e6ae4 4018
.org 0xe6ae6
	str r0, [r4, #88]	@ 000e6ae6 a065
.org 0xe6ae8
	adds r1, #64	@ 000e6ae8 4031
.org 0xe6aea
	str r1, [r4, #96]	@ 000e6aea 2166
.org 0xe6aec
	adds r3, r4, #0	@ 000e6aec 231c
.org 0xe6aee
	adds r3, #116	@ 000e6aee 7433
.org 0xe6af0
	ldrb r0, [r3, #0]	@ 000e6af0 1878
.org 0xe6af2
	cmp r0, #0	@ 000e6af2 0028
.org 0xe6af4
	bne.n 0xe6b04	@ 000e6af4 06d1
.org 0xe6af6
	ldrb r0, [r4, #10]	@ 000e6af6 a07a
.org 0xe6af8
	movs r1, #254	@ 000e6af8 fe21
.org 0xe6afa
	ands r1, r0	@ 000e6afa 0140
.org 0xe6afc
	strb r1, [r4, #10]	@ 000e6afc a172
.org 0xe6afe
	movs r0, #1	@ 000e6afe 0120
.org 0xe6b00
	strb r0, [r3, #0]	@ 000e6b00 1870
.org 0xe6b02
	b.n 0xe6b10	@ 000e6b02 05e0
.org 0xe6b04
	ldrb r0, [r4, #10]	@ 000e6b04 a07a
.org 0xe6b06
	movs r1, #1	@ 000e6b06 0121
.org 0xe6b08
	movs r2, #0	@ 000e6b08 0022
.org 0xe6b0a
	orrs r1, r0	@ 000e6b0a 0143
.org 0xe6b0c
	strb r1, [r4, #10]	@ 000e6b0c a172
.org 0xe6b0e
	strb r2, [r3, #0]	@ 000e6b0e 1a70
.org 0xe6b10
	ldr r0, [r4, #84]	@ 000e6b10 606d
.org 0xe6b12
	ldr r1, [r4, #88]	@ 000e6b12 a16d
.org 0xe6b14
	bl 0x7c7c	@ 000e6b14 21f7b2f8
.org 0xe6b18
	lsls r0, r0, #16	@ 000e6b18 0004
.org 0xe6b1a
	cmp r0, #0	@ 000e6b1a 0028
.org 0xe6b1c
	beq.n 0xe6b3a	@ 000e6b1c 0dd0
.org 0xe6b1e
	adds r1, r4, #0	@ 000e6b1e 211c
.org 0xe6b20
	adds r1, #84	@ 000e6b20 5431
.org 0xe6b22
	movs r0, #3	@ 000e6b22 0320
.org 0xe6b24
	bl 0xd0c88	@ 000e6b24 eaf7b0f8
.org 0xe6b28
	ldr r1, [pc, #20]	@ 000e6b28 0549
.org 0xe6b2a
	ldrb r0, [r4, #9]	@ 000e6b2a 607a
.org 0xe6b2c
	lsls r0, r0, #2	@ 000e6b2c 8000
.org 0xe6b2e
	adds r0, r0, r1	@ 000e6b2e 4018
.org 0xe6b30
	movs r1, #2	@ 000e6b30 0221
.org 0xe6b32
	str r1, [r4, #12]	@ 000e6b32 e160
.org 0xe6b34
	ldr r0, [r0, #0]	@ 000e6b34 0068
.org 0xe6b36
	ldr r0, [r0, #8]	@ 000e6b36 8068
.org 0xe6b38
	str r0, [r4, #20]	@ 000e6b38 6061
.org 0xe6b3a
	pop {r4}	@ 000e6b3a 10bc
.org 0xe6b3c
	pop {r0}	@ 000e6b3c 01bc
.org 0xe6b3e
	bx r0	@ 000e6b3e 0047
