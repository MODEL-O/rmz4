@ FUN_080cd9fc  entry 0x080cd9fc  size 118
.thumb
.org 0xcd9fc
FUN_080cd9fc:
	push {r4, r5, lr}	@ 000cd9fc 30b5
.org 0xcd9fe
	adds r4, r0, #0	@ 000cd9fe 041c
.org 0xcda00
	ldr r5, [r4, #40]	@ 000cda00 a56a
.org 0xcda02
	ldrb r0, [r5, #12]	@ 000cda02 287b
.org 0xcda04
	cmp r0, #1	@ 000cda04 0128
.org 0xcda06
	bls.n 0xcda28	@ 000cda06 0fd9
.org 0xcda08
	ldr r1, [pc, #24]	@ 000cda08 0649
.org 0xcda0a
	ldrb r0, [r4, #9]	@ 000cda0a 607a
.org 0xcda0c
	lsls r0, r0, #2	@ 000cda0c 8000
.org 0xcda0e
	adds r0, r0, r1	@ 000cda0e 4018
.org 0xcda10
	movs r1, #2	@ 000cda10 0221
.org 0xcda12
	str r1, [r4, #12]	@ 000cda12 e160
.org 0xcda14
	ldr r0, [r0, #0]	@ 000cda14 0068
.org 0xcda16
	ldr r0, [r0, #8]	@ 000cda16 8068
.org 0xcda18
	str r0, [r4, #20]	@ 000cda18 6061
.org 0xcda1a
	adds r0, r4, #0	@ 000cda1a 201c
.org 0xcda1c
	bl 0xcda8c	@ 000cda1c 00f036f8
.org 0xcda20
	b.n 0xcda72	@ 000cda20 27e0
.org 0xcda22
	.byte 0x00	@ 000cda22 data
.org 0xcda23
	.byte 0x00	@ 000cda23 data
.org 0xcda24
	.byte 0xf4,0x49,0x86,0x08	@ 000cda24 data
.org 0xcda28
	adds r0, r4, #0	@ 000cda28 201c
.org 0xcda2a
	bl 0x1cff0	@ 000cda2a 4ff7e1fa
.org 0xcda2e
	ldr r0, [r5, #84]	@ 000cda2e 686d
.org 0xcda30
	movs r1, #128	@ 000cda30 8021
.org 0xcda32
	lsls r1, r1, #3	@ 000cda32 c900
.org 0xcda34
	adds r0, r0, r1	@ 000cda34 4018
.org 0xcda36
	str r0, [r4, #84]	@ 000cda36 6065
.org 0xcda38
	ldr r0, [r5, #88]	@ 000cda38 a86d
.org 0xcda3a
	ldr r2, [pc, #60]	@ 000cda3a 0f4a
.org 0xcda3c
	adds r0, r0, r2	@ 000cda3c 8018
.org 0xcda3e
	str r0, [r4, #88]	@ 000cda3e a065
.org 0xcda40
	adds r0, r4, #0	@ 000cda40 201c
.org 0xcda42
	adds r0, #115	@ 000cda42 7330
.org 0xcda44
	ldrb r0, [r0, #0]	@ 000cda44 0078
.org 0xcda46
	cmp r0, #3	@ 000cda46 0328
.org 0xcda48
	bne.n 0xcda72	@ 000cda48 13d1
.org 0xcda4a
	ldr r0, [pc, #48]	@ 000cda4a 0c48
.org 0xcda4c
	ldr r2, [pc, #48]	@ 000cda4c 0c4a
.org 0xcda4e
	adds r1, r0, r2	@ 000cda4e 8118
.org 0xcda50
	movs r2, #1	@ 000cda50 0122
.org 0xcda52
	strb r2, [r1, #0]	@ 000cda52 0a70
.org 0xcda54
	ldr r1, [pc, #44]	@ 000cda54 0b49
.org 0xcda56
	adds r0, r0, r1	@ 000cda56 4018
.org 0xcda58
	strh r2, [r0, #0]	@ 000cda58 0280
.org 0xcda5a
	ldr r1, [pc, #44]	@ 000cda5a 0b49
.org 0xcda5c
	ldrb r0, [r4, #9]	@ 000cda5c 607a
.org 0xcda5e
	lsls r0, r0, #2	@ 000cda5e 8000
.org 0xcda60
	adds r0, r0, r1	@ 000cda60 4018
.org 0xcda62
	movs r1, #2	@ 000cda62 0221
.org 0xcda64
	str r1, [r4, #12]	@ 000cda64 e160
.org 0xcda66
	ldr r0, [r0, #0]	@ 000cda66 0068
.org 0xcda68
	ldr r0, [r0, #8]	@ 000cda68 8068
.org 0xcda6a
	str r0, [r4, #20]	@ 000cda6a 6061
.org 0xcda6c
	adds r0, r4, #0	@ 000cda6c 201c
.org 0xcda6e
	bl 0xcda8c	@ 000cda6e 00f00df8
