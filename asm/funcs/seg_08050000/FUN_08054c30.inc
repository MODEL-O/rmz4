@ FUN_08054c30  entry 0x08054c30  size 136
.thumb
.org 0x54c30
FUN_08054c30:
	push {r4, lr}	@ 00054c30 10b5
.org 0x54c32
	adds r4, r0, #0	@ 00054c32 041c
.org 0x54c34
	ldrb r2, [r4, #15]	@ 00054c34 e27b
.org 0x54c36
	cmp r2, #0	@ 00054c36 002a
.org 0x54c38
	bne.n 0x54c70	@ 00054c38 1ad1
.org 0x54c3a
	adds r1, r4, #0	@ 00054c3a 211c
.org 0x54c3c
	adds r1, #196	@ 00054c3c c431
.org 0x54c3e
	ldr r0, [r1, #0]	@ 00054c3e 0868
.org 0x54c40
	adds r0, #184	@ 00054c40 b830
.org 0x54c42
	strb r2, [r0, #0]	@ 00054c42 0270
.org 0x54c44
	ldr r0, [r1, #0]	@ 00054c44 0868
.org 0x54c46
	adds r0, #188	@ 00054c46 bc30
.org 0x54c48
	movs r3, #0	@ 00054c48 0023
.org 0x54c4a
	movs r2, #32	@ 00054c4a 2022
.org 0x54c4c
	strh r2, [r0, #0]	@ 00054c4c 0280
.org 0x54c4e
	adds r1, #4	@ 00054c4e 0431
.org 0x54c50
	ldr r0, [r1, #0]	@ 00054c50 0868
.org 0x54c52
	adds r0, #184	@ 00054c52 b830
.org 0x54c54
	strb r3, [r0, #0]	@ 00054c54 0370
.org 0x54c56
	ldr r0, [r1, #0]	@ 00054c56 0868
.org 0x54c58
	adds r0, #188	@ 00054c58 bc30
.org 0x54c5a
	strh r2, [r0, #0]	@ 00054c5a 0280
.org 0x54c5c
	movs r1, #176	@ 00054c5c b021
.org 0x54c5e
	lsls r1, r1, #6	@ 00054c5e 8901
.org 0x54c60
	adds r0, r4, #0	@ 00054c60 201c
.org 0x54c62
	bl 0x1cf00	@ 00054c62 c8f74df9
.org 0x54c66
	movs r0, #60	@ 00054c66 3c20
.org 0x54c68
	strb r0, [r4, #18]	@ 00054c68 a074
.org 0x54c6a
	ldrb r0, [r4, #15]	@ 00054c6a e07b
.org 0x54c6c
	adds r0, #1	@ 00054c6c 0130
.org 0x54c6e
	strb r0, [r4, #15]	@ 00054c6e e073
.org 0x54c70
	adds r0, r4, #0	@ 00054c70 201c
.org 0x54c72
	bl 0x1cff0	@ 00054c72 c8f7bdf9
.org 0x54c76
	ldrb r0, [r4, #18]	@ 00054c76 a07c
.org 0x54c78
	cmp r0, #0	@ 00054c78 0028
.org 0x54c7a
	beq.n 0x54c80	@ 00054c7a 01d0
.org 0x54c7c
	subs r0, #1	@ 00054c7c 0138
.org 0x54c7e
	strb r0, [r4, #18]	@ 00054c7e a074
.org 0x54c80
	adds r0, r4, #0	@ 00054c80 201c
.org 0x54c82
	bl 0x54fb0	@ 00054c82 00f095f9
.org 0x54c86
	adds r0, r4, #0	@ 00054c86 201c
.org 0x54c88
	adds r0, #196	@ 00054c88 c430
.org 0x54c8a
	ldr r0, [r0, #0]	@ 00054c8a 0068
.org 0x54c8c
	adds r0, #188	@ 00054c8c bc30
.org 0x54c8e
	movs r1, #0	@ 00054c8e 0021
.org 0x54c90
	ldrsh r0, [r0, r1]	@ 00054c90 405e
.org 0x54c92
	cmp r0, #0	@ 00054c92 0028
.org 0x54c94
	bne.n 0x54cb2	@ 00054c94 0dd1
.org 0x54c96
	adds r0, r4, #0	@ 00054c96 201c
.org 0x54c98
	adds r0, #200	@ 00054c98 c830
.org 0x54c9a
	ldr r0, [r0, #0]	@ 00054c9a 0068
.org 0x54c9c
	adds r0, #188	@ 00054c9c bc30
.org 0x54c9e
	movs r1, #0	@ 00054c9e 0021
.org 0x54ca0
	ldrsh r0, [r0, r1]	@ 00054ca0 405e
.org 0x54ca2
	cmp r0, #0	@ 00054ca2 0028
.org 0x54ca4
	bne.n 0x54cb2	@ 00054ca4 05d1
.org 0x54ca6
	ldrb r0, [r4, #18]	@ 00054ca6 a07c
.org 0x54ca8
	cmp r0, #0	@ 00054ca8 0028
.org 0x54caa
	bne.n 0x54cb2	@ 00054caa 02d1
.org 0x54cac
	adds r0, r4, #0	@ 00054cac 201c
.org 0x54cae
	bl 0x54ff0	@ 00054cae 00f09ff9
.org 0x54cb2
	pop {r4}	@ 00054cb2 10bc
.org 0x54cb4
	pop {r0}	@ 00054cb4 01bc
.org 0x54cb6
	bx r0	@ 00054cb6 0047
