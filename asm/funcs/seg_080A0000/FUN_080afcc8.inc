@ FUN_080afcc8  entry 0x080afcc8  size 144
.thumb
.org 0xafcc8
FUN_080afcc8:
	push {r4, r5, lr}	@ 000afcc8 30b5
.org 0xafcca
	adds r4, r0, #0	@ 000afcca 041c
.org 0xafccc
	ldrb r5, [r4, #14]	@ 000afccc a57b
.org 0xafcce
	cmp r5, #0	@ 000afcce 002d
.org 0xafcd0
	bne.n 0xafcfa	@ 000afcd0 13d1
.org 0xafcd2
	adds r0, #183	@ 000afcd2 b730
.org 0xafcd4
	ldrb r1, [r0, #0]	@ 000afcd4 0178
.org 0xafcd6
	movs r2, #166	@ 000afcd6 a622
.org 0xafcd8
	lsls r2, r2, #8	@ 000afcd8 1202
.org 0xafcda
	adds r0, r2, #0	@ 000afcda 101c
.org 0xafcdc
	orrs r1, r0	@ 000afcdc 0143
.org 0xafcde
	adds r0, r4, #0	@ 000afcde 201c
.org 0xafce0
	bl 0x1cf00	@ 000afce0 6df70ef9
.org 0xafce4
	ldr r0, [r4, #44]	@ 000afce4 e06a
.org 0xafce6
	cmp r0, #0	@ 000afce6 0028
.org 0xafce8
	beq.n 0xafcf4	@ 000afce8 04d0
.org 0xafcea
	strb r5, [r0, #13]	@ 000afcea 4573
.org 0xafcec
	ldr r0, [r4, #44]	@ 000afcec e06a
.org 0xafcee
	strb r5, [r0, #14]	@ 000afcee 8573
.org 0xafcf0
	movs r0, #60	@ 000afcf0 3c20
.org 0xafcf2
	strb r0, [r4, #18]	@ 000afcf2 a074
.org 0xafcf4
	ldrb r0, [r4, #14]	@ 000afcf4 a07b
.org 0xafcf6
	adds r0, #1	@ 000afcf6 0130
.org 0xafcf8
	strb r0, [r4, #14]	@ 000afcf8 a073
.org 0xafcfa
	ldrb r5, [r4, #16]	@ 000afcfa 257c
.org 0xafcfc
	cmp r5, #0	@ 000afcfc 002d
.org 0xafcfe
	bne.n 0xafd52	@ 000afcfe 28d1
.org 0xafd00
	ldr r0, [r4, #84]	@ 000afd00 606d
.org 0xafd02
	ldr r1, [r4, #92]	@ 000afd02 e16d
.org 0xafd04
	adds r0, r0, r1	@ 000afd04 4018
.org 0xafd06
	str r0, [r4, #84]	@ 000afd06 6065
.org 0xafd08
	ldr r0, [r4, #88]	@ 000afd08 a06d
.org 0xafd0a
	ldr r2, [r4, #96]	@ 000afd0a 226e
.org 0xafd0c
	adds r0, r0, r2	@ 000afd0c 8018
.org 0xafd0e
	str r0, [r4, #88]	@ 000afd0e a065
.org 0xafd10
	adds r0, r1, #0	@ 000afd10 081c
.org 0xafd12
	cmp r1, #0	@ 000afd12 0029
.org 0xafd14
	bge.n 0xafd18	@ 000afd14 00da
.org 0xafd16
	negs r0, r1	@ 000afd16 4842
.org 0xafd18
	cmp r0, #76	@ 000afd18 4c28
.org 0xafd1a
	ble.n 0xafd22	@ 000afd1a 02dd
.org 0xafd1c
	ldr r0, [r4, #100]	@ 000afd1c 606e
.org 0xafd1e
	adds r0, r1, r0	@ 000afd1e 0818
.org 0xafd20
	str r0, [r4, #92]	@ 000afd20 e065
.org 0xafd22
	cmp r2, #127	@ 000afd22 7f2a
.org 0xafd24
	bgt.n 0xafd2c	@ 000afd24 02dc
.org 0xafd26
	ldr r0, [r4, #104]	@ 000afd26 a06e
.org 0xafd28
	adds r0, r2, r0	@ 000afd28 1018
.org 0xafd2a
	str r0, [r4, #96]	@ 000afd2a 2066
.org 0xafd2c
	adds r0, r4, #0	@ 000afd2c 201c
.org 0xafd2e
	bl 0xb0318	@ 000afd2e 00f0f3fa
.org 0xafd32
	lsls r0, r0, #24	@ 000afd32 0006
.org 0xafd34
	cmp r0, #0	@ 000afd34 0028
.org 0xafd36
	beq.n 0xafd52	@ 000afd36 0cd0
.org 0xafd38
	ldrb r1, [r4, #19]	@ 000afd38 e17c
.org 0xafd3a
	cmp r1, #0	@ 000afd3a 0029
.org 0xafd3c
	beq.n 0xafd4c	@ 000afd3c 06d0
.org 0xafd3e
	movs r0, #1	@ 000afd3e 0120
.org 0xafd40
	strb r0, [r4, #13]	@ 000afd40 6073
.org 0xafd42
	strb r5, [r4, #14]	@ 000afd42 a573
.org 0xafd44
	adds r0, r4, #0	@ 000afd44 201c
.org 0xafd46
	bl 0xb0008	@ 000afd46 00f05ff9
.org 0xafd4a
	b.n 0xafd52	@ 000afd4a 02e0
.org 0xafd4c
	movs r0, #3	@ 000afd4c 0320
.org 0xafd4e
	strb r0, [r4, #13]	@ 000afd4e 6073
.org 0xafd50
	strb r1, [r4, #14]	@ 000afd50 a173
.org 0xafd52
	pop {r4, r5}	@ 000afd52 30bc
.org 0xafd54
	pop {r0}	@ 000afd54 01bc
.org 0xafd56
	bx r0	@ 000afd56 0047
