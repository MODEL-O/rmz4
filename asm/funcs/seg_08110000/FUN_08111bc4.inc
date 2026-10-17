@ FUN_08111bc4  entry 0x08111bc4  size 150
.thumb
.org 0x111bc4
FUN_08111bc4:
	push {r4, r5, r6, lr}	@ 00111bc4 70b5
.org 0x111bc6
	adds r6, r0, #0	@ 00111bc6 061c
.org 0x111bc8
	ldrb r5, [r6, #5]	@ 00111bc8 7579
.org 0x111bca
	cmp r5, #0	@ 00111bca 002d
.org 0x111bcc
	beq.n 0x111bd4	@ 00111bcc 02d0
.org 0x111bce
	cmp r5, #1	@ 00111bce 012d
.org 0x111bd0
	beq.n 0x111c38	@ 00111bd0 32d0
.org 0x111bd2
	b.n 0x111c54	@ 00111bd2 3fe0
.org 0x111bd4
	ldr r4, [pc, #132]	@ 00111bd4 214c
.org 0x111bd6
	ldr r1, [pc, #136]	@ 00111bd6 2249
.org 0x111bd8
	adds r0, r4, r1	@ 00111bd8 6018
.org 0x111bda
	movs r1, #32	@ 00111bda 2021
.org 0x111bdc
	strb r1, [r0, #0]	@ 00111bdc 0170
.org 0x111bde
	ldr r2, [pc, #132]	@ 00111bde 214a
.org 0x111be0
	adds r0, r4, r2	@ 00111be0 a018
.org 0x111be2
	strb r1, [r0, #0]	@ 00111be2 0170
.org 0x111be4
	movs r3, #128	@ 00111be4 8023
.org 0x111be6
	lsls r3, r3, #3	@ 00111be6 db00
.org 0x111be8
	adds r0, r4, r3	@ 00111be8 e018
.org 0x111bea
	strb r1, [r0, #0]	@ 00111bea 0170
.org 0x111bec
	movs r1, #129	@ 00111bec 8121
.org 0x111bee
	lsls r1, r1, #3	@ 00111bee c900
.org 0x111bf0
	adds r0, r4, r1	@ 00111bf0 6018
.org 0x111bf2
	str r5, [r0, #0]	@ 00111bf2 0560
.org 0x111bf4
	bl 0x2348	@ 00111bf4 f0f6a8fb
.org 0x111bf8
	ldr r0, [pc, #108]	@ 00111bf8 1b48
.org 0x111bfa
	strh r5, [r0, #0]	@ 00111bfa 0580
.org 0x111bfc
	ldr r1, [pc, #108]	@ 00111bfc 1b49
.org 0x111bfe
	strh r5, [r1, #0]	@ 00111bfe 0d80
.org 0x111c00
	movs r0, #255	@ 00111c00 ff20
.org 0x111c02
	strb r0, [r1, #14]	@ 00111c02 8873
.org 0x111c04
	ldr r0, [pc, #104]	@ 00111c04 1a48
.org 0x111c06
	strh r5, [r0, #0]	@ 00111c06 0580
.org 0x111c08
	strh r5, [r4, #0]	@ 00111c08 2580
.org 0x111c0a
	bl 0x10d4a8	@ 00111c0a fbf74dfc
.org 0x111c0e
	ldr r2, [pc, #100]	@ 00111c0e 194a
.org 0x111c10
	ldrh r1, [r2, #0]	@ 00111c10 1188
.org 0x111c12
	ldr r0, [pc, #100]	@ 00111c12 1948
.org 0x111c14
	ands r0, r1	@ 00111c14 0840
.org 0x111c16
	ldr r1, [pc, #100]	@ 00111c16 1949
.org 0x111c18
	ands r0, r1	@ 00111c18 0840
.org 0x111c1a
	movs r3, #128	@ 00111c1a 8023
.org 0x111c1c
	lsls r3, r3, #1	@ 00111c1c 5b00
.org 0x111c1e
	adds r1, r3, #0	@ 00111c1e 191c
.org 0x111c20
	orrs r0, r1	@ 00111c20 0843
.org 0x111c22
	strh r0, [r2, #0]	@ 00111c22 1080
.org 0x111c24
	movs r0, #1	@ 00111c24 0120
.org 0x111c26
	bl 0x12ec	@ 00111c26 eff661fb
.org 0x111c2a
	ldr r1, [pc, #84]	@ 00111c2a 1549
.org 0x111c2c
	movs r0, #1	@ 00111c2c 0120
.org 0x111c2e
	bl 0x12b8	@ 00111c2e eff643fb
.org 0x111c32
	ldrb r0, [r6, #5]	@ 00111c32 7079
.org 0x111c34
	adds r0, #1	@ 00111c34 0130
.org 0x111c36
	strb r0, [r6, #5]	@ 00111c36 7071
.org 0x111c38
	ldr r0, [pc, #72]	@ 00111c38 1248
.org 0x111c3a
	movs r1, #153	@ 00111c3a 9921
.org 0x111c3c
	lsls r1, r1, #5	@ 00111c3c 4901
.org 0x111c3e
	adds r0, r0, r1	@ 00111c3e 4018
.org 0x111c40
	ldrb r0, [r0, #0]	@ 00111c40 0078
.org 0x111c42
	cmp r0, #1	@ 00111c42 0128
.org 0x111c44
	bne.n 0x111c54	@ 00111c44 06d1
.org 0x111c46
	ldr r0, [pc, #64]	@ 00111c46 1048
.org 0x111c48
	movs r1, #1	@ 00111c48 0121
.org 0x111c4a
	bl 0x10f6f8	@ 00111c4a fdf755fd
.org 0x111c4e
	ldr r0, [pc, #60]	@ 00111c4e 0f48
.org 0x111c50
	bl 0x13b0	@ 00111c50 eff6aefb
.org 0x111c54
	pop {r4, r5, r6}	@ 00111c54 70bc
.org 0x111c56
	pop {r0}	@ 00111c56 01bc
.org 0x111c58
	bx r0	@ 00111c58 0047
