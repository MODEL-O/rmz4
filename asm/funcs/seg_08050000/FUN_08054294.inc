@ FUN_08054294  entry 0x08054294  size 128
.thumb
.org 0x54294
FUN_08054294:
	push {r4, lr}	@ 00054294 10b5
.org 0x54296
	adds r4, r0, #0	@ 00054296 041c
.org 0x54298
	ldrb r2, [r4, #15]	@ 00054298 e27b
.org 0x5429a
	cmp r2, #0	@ 0005429a 002a
.org 0x5429c
	bne.n 0x542d0	@ 0005429c 18d1
.org 0x5429e
	adds r1, r4, #0	@ 0005429e 211c
.org 0x542a0
	adds r1, #196	@ 000542a0 c431
.org 0x542a2
	ldr r0, [r1, #0]	@ 000542a2 0868
.org 0x542a4
	adds r0, #184	@ 000542a4 b830
.org 0x542a6
	strb r2, [r0, #0]	@ 000542a6 0270
.org 0x542a8
	ldr r0, [r1, #0]	@ 000542a8 0868
.org 0x542aa
	adds r0, #188	@ 000542aa bc30
.org 0x542ac
	movs r3, #0	@ 000542ac 0023
.org 0x542ae
	movs r2, #8	@ 000542ae 0822
.org 0x542b0
	strh r2, [r0, #0]	@ 000542b0 0280
.org 0x542b2
	adds r1, #4	@ 000542b2 0431
.org 0x542b4
	ldr r0, [r1, #0]	@ 000542b4 0868
.org 0x542b6
	adds r0, #184	@ 000542b6 b830
.org 0x542b8
	strb r3, [r0, #0]	@ 000542b8 0370
.org 0x542ba
	ldr r0, [r1, #0]	@ 000542ba 0868
.org 0x542bc
	adds r0, #188	@ 000542bc bc30
.org 0x542be
	strh r2, [r0, #0]	@ 000542be 0280
.org 0x542c0
	movs r1, #176	@ 000542c0 b021
.org 0x542c2
	lsls r1, r1, #6	@ 000542c2 8901
.org 0x542c4
	adds r0, r4, #0	@ 000542c4 201c
.org 0x542c6
	bl 0x1cf00	@ 000542c6 c8f71bfe
.org 0x542ca
	ldrb r0, [r4, #15]	@ 000542ca e07b
.org 0x542cc
	adds r0, #1	@ 000542cc 0130
.org 0x542ce
	strb r0, [r4, #15]	@ 000542ce e073
.org 0x542d0
	adds r0, r4, #0	@ 000542d0 201c
.org 0x542d2
	bl 0x1cff0	@ 000542d2 c8f78dfe
.org 0x542d6
	adds r0, r4, #0	@ 000542d6 201c
.org 0x542d8
	bl 0x54fb0	@ 000542d8 00f06afe
.org 0x542dc
	adds r0, r4, #0	@ 000542dc 201c
.org 0x542de
	movs r1, #0	@ 000542de 0021
.org 0x542e0
	bl 0x55068	@ 000542e0 00f0c2fe
.org 0x542e4
	cmp r0, #0	@ 000542e4 0028
.org 0x542e6
	bne.n 0x5430e	@ 000542e6 12d1
.org 0x542e8
	adds r0, r4, #0	@ 000542e8 201c
.org 0x542ea
	adds r0, #196	@ 000542ea c430
.org 0x542ec
	ldr r0, [r0, #0]	@ 000542ec 0068
.org 0x542ee
	adds r0, #188	@ 000542ee bc30
.org 0x542f0
	movs r1, #0	@ 000542f0 0021
.org 0x542f2
	ldrsh r0, [r0, r1]	@ 000542f2 405e
.org 0x542f4
	cmp r0, #0	@ 000542f4 0028
.org 0x542f6
	bne.n 0x5430e	@ 000542f6 0ad1
.org 0x542f8
	adds r0, r4, #0	@ 000542f8 201c
.org 0x542fa
	adds r0, #200	@ 000542fa c830
.org 0x542fc
	ldr r0, [r0, #0]	@ 000542fc 0068
.org 0x542fe
	adds r0, #188	@ 000542fe bc30
.org 0x54300
	movs r1, #0	@ 00054300 0021
.org 0x54302
	ldrsh r0, [r0, r1]	@ 00054302 405e
.org 0x54304
	cmp r0, #0	@ 00054304 0028
.org 0x54306
	bne.n 0x5430e	@ 00054306 02d1
.org 0x54308
	adds r0, r4, #0	@ 00054308 201c
.org 0x5430a
	bl 0x54ff0	@ 0005430a 00f071fe
.org 0x5430e
	pop {r4}	@ 0005430e 10bc
.org 0x54310
	pop {r0}	@ 00054310 01bc
.org 0x54312
	bx r0	@ 00054312 0047
