@ FUN_0806b1c8  entry 0x0806b1c8  size 90
.thumb
.org 0x6b1c8
FUN_0806b1c8:
	push {r4, lr}	@ 0006b1c8 10b5
.org 0x6b1ca
	adds r4, r0, #0	@ 0006b1ca 041c
.org 0x6b1cc
	ldrb r0, [r4, #14]	@ 0006b1cc a07b
.org 0x6b1ce
	cmp r0, #0	@ 0006b1ce 0028
.org 0x6b1d0
	bne.n 0x6b1f4	@ 0006b1d0 10d1
.org 0x6b1d2
	ldrb r0, [r4, #30]	@ 0006b1d2 a07f
.org 0x6b1d4
	lsls r0, r0, #8	@ 0006b1d4 0002
.org 0x6b1d6
	adds r1, r4, #0	@ 0006b1d6 211c
.org 0x6b1d8
	adds r1, #112	@ 0006b1d8 7031
.org 0x6b1da
	ldrb r1, [r1, #0]	@ 0006b1da 0978
.org 0x6b1dc
	orrs r0, r1	@ 0006b1dc 0843
.org 0x6b1de
	ldr r1, [pc, #68]	@ 0006b1de 1149
.org 0x6b1e0
	cmp r0, r1	@ 0006b1e0 8842
.org 0x6b1e2
	beq.n 0x6b1ea	@ 0006b1e2 02d0
.org 0x6b1e4
	adds r0, r4, #0	@ 0006b1e4 201c
.org 0x6b1e6
	bl 0x1cf00	@ 0006b1e6 b1f78bfe
.org 0x6b1ea
	ldrb r0, [r4, #14]	@ 0006b1ea a07b
.org 0x6b1ec
	adds r0, #1	@ 0006b1ec 0130
.org 0x6b1ee
	strb r0, [r4, #14]	@ 0006b1ee a073
.org 0x6b1f0
	movs r0, #2	@ 0006b1f0 0220
.org 0x6b1f2
	strb r0, [r4, #15]	@ 0006b1f2 e073
.org 0x6b1f4
	ldrb r0, [r4, #15]	@ 0006b1f4 e07b
.org 0x6b1f6
	cmp r0, #0	@ 0006b1f6 0028
.org 0x6b1f8
	blt.n 0x6b216	@ 0006b1f8 0ddb
.org 0x6b1fa
	cmp r0, #1	@ 0006b1fa 0128
.org 0x6b1fc
	ble.n 0x6b216	@ 0006b1fc 0bdd
.org 0x6b1fe
	cmp r0, #2	@ 0006b1fe 0228
.org 0x6b200
	bne.n 0x6b216	@ 0006b200 09d1
.org 0x6b202
	ldr r0, [r4, #24]	@ 0006b202 a069
.org 0x6b204
	ldrb r1, [r0, #9]	@ 0006b204 417a
.org 0x6b206
	movs r2, #1	@ 0006b206 0122
.org 0x6b208
	adds r0, r2, #0	@ 0006b208 101c
.org 0x6b20a
	ands r0, r1	@ 0006b20a 0840
.org 0x6b20c
	cmp r0, #0	@ 0006b20c 0028
.org 0x6b20e
	beq.n 0x6b216	@ 0006b20e 02d0
.org 0x6b210
	movs r0, #0	@ 0006b210 0020
.org 0x6b212
	strb r2, [r4, #13]	@ 0006b212 6273
.org 0x6b214
	strb r0, [r4, #14]	@ 0006b214 a073
.org 0x6b216
	adds r0, r4, #0	@ 0006b216 201c
.org 0x6b218
	bl 0x1cff0	@ 0006b218 b1f7eafe
.org 0x6b21c
	pop {r4}	@ 0006b21c 10bc
.org 0x6b21e
	pop {r0}	@ 0006b21e 01bc
.org 0x6b220
	bx r0	@ 0006b220 0047
