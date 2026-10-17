@ FUN_080cbb54  entry 0x080cbb54  size 144
.thumb
.org 0xcbb54
FUN_080cbb54:
	push {r4, r5, r6, lr}	@ 000cbb54 70b5
.org 0xcbb56
	adds r4, r0, #0	@ 000cbb56 041c
.org 0xcbb58
	ldrb r5, [r4, #17]	@ 000cbb58 657c
.org 0xcbb5a
	adds r6, r5, #0	@ 000cbb5a 2e1c
.org 0xcbb5c
	ldrb r0, [r4, #15]	@ 000cbb5c e07b
.org 0xcbb5e
	cmp r0, #0	@ 000cbb5e 0028
.org 0xcbb60
	bne.n 0xcbbaa	@ 000cbb60 23d1
.org 0xcbb62
	movs r1, #146	@ 000cbb62 9221
.org 0xcbb64
	lsls r1, r1, #8	@ 000cbb64 0902
.org 0xcbb66
	adds r0, r4, #0	@ 000cbb66 201c
.org 0xcbb68
	bl 0x1cf00	@ 000cbb68 51f7caf9
.org 0xcbb6c
	ldr r2, [pc, #116]	@ 000cbb6c 1d4a
.org 0xcbb6e
	adds r0, r5, #0	@ 000cbb6e 281c
.org 0xcbb70
	adds r0, #64	@ 000cbb70 4030
.org 0xcbb72
	lsls r0, r0, #24	@ 000cbb72 0006
.org 0xcbb74
	lsrs r0, r0, #23	@ 000cbb74 c00d
.org 0xcbb76
	adds r0, r0, r2	@ 000cbb76 8018
.org 0xcbb78
	movs r3, #0	@ 000cbb78 0023
.org 0xcbb7a
	ldrsh r1, [r0, r3]	@ 000cbb7a c15e
.org 0xcbb7c
	lsls r0, r1, #3	@ 000cbb7c c800
.org 0xcbb7e
	subs r0, r0, r1	@ 000cbb7e 401a
.org 0xcbb80
	lsls r0, r0, #7	@ 000cbb80 c001
.org 0xcbb82
	cmp r0, #0	@ 000cbb82 0028
.org 0xcbb84
	bge.n 0xcbb88	@ 000cbb84 00da
.org 0xcbb86
	adds r0, #255	@ 000cbb86 ff30
.org 0xcbb88
	asrs r0, r0, #8	@ 000cbb88 0012
.org 0xcbb8a
	str r0, [r4, #92]	@ 000cbb8a e065
.org 0xcbb8c
	lsls r0, r6, #1	@ 000cbb8c 7000
.org 0xcbb8e
	adds r0, r0, r2	@ 000cbb8e 8018
.org 0xcbb90
	movs r2, #0	@ 000cbb90 0022
.org 0xcbb92
	ldrsh r1, [r0, r2]	@ 000cbb92 815e
.org 0xcbb94
	lsls r0, r1, #3	@ 000cbb94 c800
.org 0xcbb96
	subs r0, r0, r1	@ 000cbb96 401a
.org 0xcbb98
	lsls r0, r0, #7	@ 000cbb98 c001
.org 0xcbb9a
	cmp r0, #0	@ 000cbb9a 0028
.org 0xcbb9c
	bge.n 0xcbba0	@ 000cbb9c 00da
.org 0xcbb9e
	adds r0, #255	@ 000cbb9e ff30
.org 0xcbba0
	asrs r0, r0, #8	@ 000cbba0 0012
.org 0xcbba2
	str r0, [r4, #96]	@ 000cbba2 2066
.org 0xcbba4
	ldrb r0, [r4, #15]	@ 000cbba4 e07b
.org 0xcbba6
	adds r0, #1	@ 000cbba6 0130
.org 0xcbba8
	strb r0, [r4, #15]	@ 000cbba8 e073
.org 0xcbbaa
	adds r0, r4, #0	@ 000cbbaa 201c
.org 0xcbbac
	bl 0x1cff0	@ 000cbbac 51f720fa
.org 0xcbbb0
	adds r0, r4, #0	@ 000cbbb0 201c
.org 0xcbbb2
	adds r0, #116	@ 000cbbb2 7430
.org 0xcbbb4
	ldr r1, [pc, #48]	@ 000cbbb4 0c49
.org 0xcbbb6
	bl 0x5784	@ 000cbbb6 39f7e5fd
.org 0xcbbba
	ldr r0, [r4, #84]	@ 000cbbba 606d
.org 0xcbbbc
	ldr r1, [r4, #92]	@ 000cbbbc e16d
.org 0xcbbbe
	adds r0, r0, r1	@ 000cbbbe 4018
.org 0xcbbc0
	str r0, [r4, #84]	@ 000cbbc0 6065
.org 0xcbbc2
	ldr r1, [r4, #88]	@ 000cbbc2 a16d
.org 0xcbbc4
	ldr r2, [r4, #96]	@ 000cbbc4 226e
.org 0xcbbc6
	adds r1, r1, r2	@ 000cbbc6 8918
.org 0xcbbc8
	str r1, [r4, #88]	@ 000cbbc8 a165
.org 0xcbbca
	bl 0x7c7c	@ 000cbbca 3cf757f8
.org 0xcbbce
	lsls r0, r0, #16	@ 000cbbce 0004
.org 0xcbbd0
	cmp r0, #0	@ 000cbbd0 0028
.org 0xcbbd2
	beq.n 0xcbbde	@ 000cbbd2 04d0
.org 0xcbbd4
	movs r1, #0	@ 000cbbd4 0021
.org 0xcbbd6
	movs r0, #4	@ 000cbbd6 0420
.org 0xcbbd8
	strb r0, [r4, #13]	@ 000cbbd8 6073
.org 0xcbbda
	strb r1, [r4, #14]	@ 000cbbda a173
.org 0xcbbdc
	strb r1, [r4, #15]	@ 000cbbdc e173
.org 0xcbbde
	pop {r4, r5, r6}	@ 000cbbde 70bc
.org 0xcbbe0
	pop {r0}	@ 000cbbe0 01bc
.org 0xcbbe2
	bx r0	@ 000cbbe2 0047
