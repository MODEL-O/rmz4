@ FUN_08054b04  entry 0x08054b04  size 80
.thumb
.org 0x54b04
FUN_08054b04:
	push {r4, lr}	@ 00054b04 10b5
.org 0x54b06
	adds r4, r0, #0	@ 00054b06 041c
.org 0x54b08
	ldrb r0, [r4, #15]	@ 00054b08 e07b
.org 0x54b0a
	cmp r0, #0	@ 00054b0a 0028
.org 0x54b0c
	bne.n 0x54b2e	@ 00054b0c 0fd1
.org 0x54b0e
	adds r1, r4, #0	@ 00054b0e 211c
.org 0x54b10
	adds r1, #84	@ 00054b10 5431
.org 0x54b12
	adds r0, r4, #0	@ 00054b12 201c
.org 0x54b14
	movs r2, #1	@ 00054b14 0122
.org 0x54b16
	movs r3, #0	@ 00054b16 0023
.org 0x54b18
	bl 0xda650	@ 00054b18 85f09afd
.org 0x54b1c
	ldr r1, [pc, #52]	@ 00054b1c 0d49
.org 0x54b1e
	adds r0, r4, #0	@ 00054b1e 201c
.org 0x54b20
	bl 0x1cf00	@ 00054b20 c8f7eef9
.org 0x54b24
	movs r0, #48	@ 00054b24 3020
.org 0x54b26
	strb r0, [r4, #18]	@ 00054b26 a074
.org 0x54b28
	ldrb r0, [r4, #15]	@ 00054b28 e07b
.org 0x54b2a
	adds r0, #1	@ 00054b2a 0130
.org 0x54b2c
	strb r0, [r4, #15]	@ 00054b2c e073
.org 0x54b2e
	adds r0, r4, #0	@ 00054b2e 201c
.org 0x54b30
	bl 0x1cff0	@ 00054b30 c8f75efa
.org 0x54b34
	adds r0, r4, #0	@ 00054b34 201c
.org 0x54b36
	bl 0x54fb0	@ 00054b36 00f03bfa
.org 0x54b3a
	ldrb r0, [r4, #18]	@ 00054b3a a07c
.org 0x54b3c
	subs r0, #1	@ 00054b3c 0138
.org 0x54b3e
	strb r0, [r4, #18]	@ 00054b3e a074
.org 0x54b40
	lsls r0, r0, #24	@ 00054b40 0006
.org 0x54b42
	lsrs r1, r0, #24	@ 00054b42 010e
.org 0x54b44
	cmp r1, #0	@ 00054b44 0029
.org 0x54b46
	bne.n 0x54b4e	@ 00054b46 02d1
.org 0x54b48
	movs r0, #5	@ 00054b48 0520
.org 0x54b4a
	strb r0, [r4, #14]	@ 00054b4a a073
.org 0x54b4c
	strb r1, [r4, #15]	@ 00054b4c e173
.org 0x54b4e
	pop {r4}	@ 00054b4e 10bc
.org 0x54b50
	pop {r0}	@ 00054b50 01bc
.org 0x54b52
	bx r0	@ 00054b52 0047
