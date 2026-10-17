@ FUN_080e5ac0  entry 0x080e5ac0  size 108
.thumb
.org 0xe5ac0
FUN_080e5ac0:
	push {r4, lr}	@ 000e5ac0 10b5
.org 0xe5ac2
	adds r4, r0, #0	@ 000e5ac2 041c
.org 0xe5ac4
	ldr r0, [r4, #84]	@ 000e5ac4 606d
.org 0xe5ac6
	ldr r1, [r4, #92]	@ 000e5ac6 e16d
.org 0xe5ac8
	adds r0, r0, r1	@ 000e5ac8 4018
.org 0xe5aca
	str r0, [r4, #84]	@ 000e5aca 6065
.org 0xe5acc
	ldr r0, [r4, #88]	@ 000e5acc a06d
.org 0xe5ace
	ldr r1, [r4, #96]	@ 000e5ace 216e
.org 0xe5ad0
	adds r0, r0, r1	@ 000e5ad0 4018
.org 0xe5ad2
	str r0, [r4, #88]	@ 000e5ad2 a065
.org 0xe5ad4
	adds r1, #64	@ 000e5ad4 4031
.org 0xe5ad6
	str r1, [r4, #96]	@ 000e5ad6 2166
.org 0xe5ad8
	adds r3, r4, #0	@ 000e5ad8 231c
.org 0xe5ada
	adds r3, #116	@ 000e5ada 7433
.org 0xe5adc
	ldrb r0, [r3, #0]	@ 000e5adc 1878
.org 0xe5ade
	cmp r0, #0	@ 000e5ade 0028
.org 0xe5ae0
	bne.n 0xe5af0	@ 000e5ae0 06d1
.org 0xe5ae2
	ldrb r0, [r4, #10]	@ 000e5ae2 a07a
.org 0xe5ae4
	movs r1, #254	@ 000e5ae4 fe21
.org 0xe5ae6
	ands r1, r0	@ 000e5ae6 0140
.org 0xe5ae8
	strb r1, [r4, #10]	@ 000e5ae8 a172
.org 0xe5aea
	movs r0, #1	@ 000e5aea 0120
.org 0xe5aec
	strb r0, [r3, #0]	@ 000e5aec 1870
.org 0xe5aee
	b.n 0xe5afc	@ 000e5aee 05e0
.org 0xe5af0
	ldrb r0, [r4, #10]	@ 000e5af0 a07a
.org 0xe5af2
	movs r1, #1	@ 000e5af2 0121
.org 0xe5af4
	movs r2, #0	@ 000e5af4 0022
.org 0xe5af6
	orrs r1, r0	@ 000e5af6 0143
.org 0xe5af8
	strb r1, [r4, #10]	@ 000e5af8 a172
.org 0xe5afa
	strb r2, [r3, #0]	@ 000e5afa 1a70
.org 0xe5afc
	ldr r0, [r4, #84]	@ 000e5afc 606d
.org 0xe5afe
	ldr r1, [r4, #88]	@ 000e5afe a16d
.org 0xe5b00
	bl 0x7c7c	@ 000e5b00 22f7bcf8
.org 0xe5b04
	lsls r0, r0, #16	@ 000e5b04 0004
.org 0xe5b06
	cmp r0, #0	@ 000e5b06 0028
.org 0xe5b08
	beq.n 0xe5b26	@ 000e5b08 0dd0
.org 0xe5b0a
	adds r1, r4, #0	@ 000e5b0a 211c
.org 0xe5b0c
	adds r1, #84	@ 000e5b0c 5431
.org 0xe5b0e
	movs r0, #3	@ 000e5b0e 0320
.org 0xe5b10
	bl 0xd0c88	@ 000e5b10 ebf7baf8
.org 0xe5b14
	ldr r1, [pc, #20]	@ 000e5b14 0549
.org 0xe5b16
	ldrb r0, [r4, #9]	@ 000e5b16 607a
.org 0xe5b18
	lsls r0, r0, #2	@ 000e5b18 8000
.org 0xe5b1a
	adds r0, r0, r1	@ 000e5b1a 4018
.org 0xe5b1c
	movs r1, #2	@ 000e5b1c 0221
.org 0xe5b1e
	str r1, [r4, #12]	@ 000e5b1e e160
.org 0xe5b20
	ldr r0, [r0, #0]	@ 000e5b20 0068
.org 0xe5b22
	ldr r0, [r0, #8]	@ 000e5b22 8068
.org 0xe5b24
	str r0, [r4, #20]	@ 000e5b24 6061
.org 0xe5b26
	pop {r4}	@ 000e5b26 10bc
.org 0xe5b28
	pop {r0}	@ 000e5b28 01bc
.org 0xe5b2a
	bx r0	@ 000e5b2a 0047
