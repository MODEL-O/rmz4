@ FUN_0809ed04  entry 0x0809ed04  size 108
.thumb
.org 0x9ed04
FUN_0809ed04:
	push {r4, r5, r6, lr}	@ 0009ed04 70b5
.org 0x9ed06
	adds r4, r0, #0	@ 0009ed06 041c
.org 0x9ed08
	ldrb r0, [r4, #15]	@ 0009ed08 e07b
.org 0x9ed0a
	cmp r0, #0	@ 0009ed0a 0028
.org 0x9ed0c
	bne.n 0x9ed1e	@ 0009ed0c 07d1
.org 0x9ed0e
	movs r1, #178	@ 0009ed0e b221
.org 0x9ed10
	lsls r1, r1, #7	@ 0009ed10 c901
.org 0x9ed12
	adds r0, r4, #0	@ 0009ed12 201c
.org 0x9ed14
	bl 0x1cf00	@ 0009ed14 7ef7f4f8
.org 0x9ed18
	ldrb r0, [r4, #15]	@ 0009ed18 e07b
.org 0x9ed1a
	adds r0, #1	@ 0009ed1a 0130
.org 0x9ed1c
	strb r0, [r4, #15]	@ 0009ed1c e073
.org 0x9ed1e
	adds r0, r4, #0	@ 0009ed1e 201c
.org 0x9ed20
	bl 0x1cff0	@ 0009ed20 7ef766f9
.org 0x9ed24
	ldr r0, [r4, #88]	@ 0009ed24 a06d
.org 0x9ed26
	ldr r1, [r4, #96]	@ 0009ed26 216e
.org 0x9ed28
	adds r0, r0, r1	@ 0009ed28 4018
.org 0x9ed2a
	str r0, [r4, #88]	@ 0009ed2a a065
.org 0x9ed2c
	adds r1, #64	@ 0009ed2c 4031
.org 0x9ed2e
	str r1, [r4, #96]	@ 0009ed2e 2166
.org 0x9ed30
	movs r0, #224	@ 0009ed30 e020
.org 0x9ed32
	lsls r0, r0, #3	@ 0009ed32 c000
.org 0x9ed34
	cmp r1, r0	@ 0009ed34 8142
.org 0x9ed36
	ble.n 0x9ed3a	@ 0009ed36 00dd
.org 0x9ed38
	str r0, [r4, #96]	@ 0009ed38 2066
.org 0x9ed3a
	ldr r6, [r4, #84]	@ 0009ed3a 666d
.org 0x9ed3c
	ldr r0, [r4, #88]	@ 0009ed3c a06d
.org 0x9ed3e
	movs r1, #128	@ 0009ed3e 8021
.org 0x9ed40
	lsls r1, r1, #3	@ 0009ed40 c900
.org 0x9ed42
	adds r5, r0, r1	@ 0009ed42 4518
.org 0x9ed44
	adds r0, r6, #0	@ 0009ed44 301c
.org 0x9ed46
	adds r1, r5, #0	@ 0009ed46 291c
.org 0x9ed48
	bl 0x7c7c	@ 0009ed48 68f798ff
.org 0x9ed4c
	lsls r0, r0, #16	@ 0009ed4c 0004
.org 0x9ed4e
	cmp r0, #0	@ 0009ed4e 0028
.org 0x9ed50
	beq.n 0x9ed6a	@ 0009ed50 0bd0
.org 0x9ed52
	adds r0, r6, #0	@ 0009ed52 301c
.org 0x9ed54
	adds r1, r5, #0	@ 0009ed54 291c
.org 0x9ed56
	bl 0x8534	@ 0009ed56 69f7edfb
.org 0x9ed5a
	ldr r1, [pc, #20]	@ 0009ed5a 0549
.org 0x9ed5c
	adds r0, r0, r1	@ 0009ed5c 4018
.org 0x9ed5e
	str r0, [r4, #88]	@ 0009ed5e a065
.org 0x9ed60
	movs r1, #0	@ 0009ed60 0021
.org 0x9ed62
	movs r0, #1	@ 0009ed62 0120
.org 0x9ed64
	strb r0, [r4, #13]	@ 0009ed64 6073
.org 0x9ed66
	strb r1, [r4, #14]	@ 0009ed66 a173
.org 0x9ed68
	strb r1, [r4, #15]	@ 0009ed68 e173
.org 0x9ed6a
	pop {r4, r5, r6}	@ 0009ed6a 70bc
.org 0x9ed6c
	pop {r0}	@ 0009ed6c 01bc
.org 0x9ed6e
	bx r0	@ 0009ed6e 0047
