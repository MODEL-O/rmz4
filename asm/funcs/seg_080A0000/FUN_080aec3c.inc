@ FUN_080aec3c  entry 0x080aec3c  size 288
.thumb
.org 0xaec3c
FUN_080aec3c:
	push {r4, r5, r6, r7, lr}	@ 000aec3c f0b5
.org 0xaec3e
	adds r5, r0, #0	@ 000aec3e 051c
.org 0xaec40
	ldr r7, [r5, #40]	@ 000aec40 af6a
.org 0xaec42
	ldrb r6, [r5, #14]	@ 000aec42 ae7b
.org 0xaec44
	cmp r6, #0	@ 000aec44 002e
.org 0xaec46
	bne.n 0xaec78	@ 000aec46 17d1
.org 0xaec48
	ldrb r1, [r5, #10]	@ 000aec48 a97a
.org 0xaec4a
	movs r0, #4	@ 000aec4a 0420
.org 0xaec4c
	orrs r0, r1	@ 000aec4c 0843
.org 0xaec4e
	strb r0, [r5, #10]	@ 000aec4e a872
.org 0xaec50
	adds r4, r5, #0	@ 000aec50 2c1c
.org 0xaec52
	adds r4, #116	@ 000aec52 7434
.org 0xaec54
	ldr r1, [pc, #64]	@ 000aec54 1049
.org 0xaec56
	adds r2, r5, #0	@ 000aec56 2a1c
.org 0xaec58
	adds r2, #84	@ 000aec58 5432
.org 0xaec5a
	adds r0, r4, #0	@ 000aec5a 201c
.org 0xaec5c
	movs r3, #8	@ 000aec5c 0823
.org 0xaec5e
	bl 0x5760	@ 000aec5e 56f77ffd
.org 0xaec62
	str r5, [r4, #44]	@ 000aec62 e562
.org 0xaec64
	ldr r0, [pc, #52]	@ 000aec64 0d48
.org 0xaec66
	str r0, [r4, #36]	@ 000aec66 6062
.org 0xaec68
	str r6, [r5, #92]	@ 000aec68 ee65
.org 0xaec6a
	str r6, [r5, #96]	@ 000aec6a 2e66
.org 0xaec6c
	movs r0, #32	@ 000aec6c 2020
.org 0xaec6e
	strb r0, [r5, #18]	@ 000aec6e a874
.org 0xaec70
	strb r6, [r5, #15]	@ 000aec70 ee73
.org 0xaec72
	ldrb r0, [r5, #14]	@ 000aec72 a87b
.org 0xaec74
	adds r0, #1	@ 000aec74 0130
.org 0xaec76
	strb r0, [r5, #14]	@ 000aec76 a873
.org 0xaec78
	adds r0, r5, #0	@ 000aec78 281c
.org 0xaec7a
	bl 0x1cff0	@ 000aec7a 6ef7b9f9
.org 0xaec7e
	adds r3, r7, #0	@ 000aec7e 3b1c
.org 0xaec80
	adds r3, #216	@ 000aec80 d833
.org 0xaec82
	ldrb r1, [r3, #0]	@ 000aec82 1978
.org 0xaec84
	adds r4, r1, #0	@ 000aec84 0c1c
.org 0xaec86
	cmp r4, #0	@ 000aec86 002c
.org 0xaec88
	beq.n 0xaeca0	@ 000aec88 0ad0
.org 0xaec8a
	ldrb r0, [r5, #13]	@ 000aec8a 687b
.org 0xaec8c
	adds r0, #1	@ 000aec8c 0130
.org 0xaec8e
	movs r1, #0	@ 000aec8e 0021
.org 0xaec90
	strb r0, [r5, #13]	@ 000aec90 6873
.org 0xaec92
	strb r1, [r5, #14]	@ 000aec92 a973
.org 0xaec94
	b.n 0xaed72	@ 000aec94 6de0
.org 0xaec96
	.byte 0x00	@ 000aec96 data
.org 0xaec97
	.byte 0x00	@ 000aec97 data
.org 0xaec98
	.byte 0xb0,0x30,0x86,0x08	@ 000aec98 data
.org 0xaec9c
	.byte 0xd5,0xf1,0x0a,0x08	@ 000aec9c data
.org 0xaeca0
	adds r0, r5, #0	@ 000aeca0 281c
.org 0xaeca2
	adds r0, #140	@ 000aeca2 8c30
.org 0xaeca4
	ldr r2, [r0, #0]	@ 000aeca4 0268
.org 0xaeca6
	movs r0, #128	@ 000aeca6 8020
.org 0xaeca8
	lsls r0, r0, #4	@ 000aeca8 0001
.org 0xaecaa
	ands r2, r0	@ 000aecaa 0240
.org 0xaecac
	cmp r2, #0	@ 000aecac 002a
.org 0xaecae
	beq.n 0xaecdc	@ 000aecae 15d0
.org 0xaecb0
	adds r0, r1, #1	@ 000aecb0 481c
.org 0xaecb2
	strb r0, [r3, #0]	@ 000aecb2 1870
.org 0xaecb4
	ldr r0, [pc, #28]	@ 000aecb4 0748
.org 0xaecb6
	ldr r1, [r0, #0]	@ 000aecb6 0168
.org 0xaecb8
	ldr r0, [r1, #84]	@ 000aecb8 486d
.org 0xaecba
	str r0, [r5, #84]	@ 000aecba 6865
.org 0xaecbc
	ldr r0, [r1, #88]	@ 000aecbc 886d
.org 0xaecbe
	ldr r1, [pc, #24]	@ 000aecbe 0649
.org 0xaecc0
	adds r0, r0, r1	@ 000aecc0 4018
.org 0xaecc2
	str r0, [r5, #88]	@ 000aecc2 a865
.org 0xaecc4
	ldrb r0, [r5, #13]	@ 000aecc4 687b
.org 0xaecc6
	adds r0, #2	@ 000aecc6 0230
.org 0xaecc8
	strb r0, [r5, #13]	@ 000aecc8 6873
.org 0xaecca
	strb r4, [r5, #14]	@ 000aecca ac73
.org 0xaeccc
	adds r0, r5, #0	@ 000aeccc 281c
.org 0xaecce
	bl 0xaee28	@ 000aecce 00f0abf8
.org 0xaecd2
	b.n 0xaed72	@ 000aecd2 4ee0
.org 0xaecd4
	.byte 0xf0,0xdb,0x02,0x02	@ 000aecd4 data
.org 0xaecd8
	.byte 0x00,0xed,0xff,0xff	@ 000aecd8 data
.org 0xaecdc
	ldrb r0, [r5, #15]	@ 000aecdc e87b
.org 0xaecde
	cmp r0, #0	@ 000aecde 0028
.org 0xaece0
	bne.n 0xaed4c	@ 000aece0 34d1
.org 0xaece2
	ldrb r0, [r5, #18]	@ 000aece2 a87c
.org 0xaece4
	subs r0, #1	@ 000aece4 0138
.org 0xaece6
	strb r0, [r5, #18]	@ 000aece6 a874
.org 0xaece8
	lsls r0, r0, #24	@ 000aece8 0006
.org 0xaecea
	lsrs r0, r0, #24	@ 000aecea 000e
.org 0xaecec
	cmp r0, #255	@ 000aecec ff28
.org 0xaecee
	bne.n 0xaed72	@ 000aecee 40d1
.org 0xaecf0
	ldr r0, [pc, #80]	@ 000aecf0 1448
.org 0xaecf2
	ldr r2, [r0, #0]	@ 000aecf2 0268
.org 0xaecf4
	ldr r0, [r5, #84]	@ 000aecf4 686d
.org 0xaecf6
	ldr r1, [r2, #84]	@ 000aecf6 516d
.org 0xaecf8
	subs r0, r0, r1	@ 000aecf8 401a
.org 0xaecfa
	lsls r0, r0, #8	@ 000aecfa 0002
.org 0xaecfc
	asrs r0, r0, #16	@ 000aecfc 0014
.org 0xaecfe
	ldr r1, [r5, #88]	@ 000aecfe a96d
.org 0xaed00
	movs r3, #240	@ 000aed00 f023
.org 0xaed02
	lsls r3, r3, #4	@ 000aed02 1b01
.org 0xaed04
	adds r1, r1, r3	@ 000aed04 c918
.org 0xaed06
	ldr r2, [r2, #88]	@ 000aed06 926d
.org 0xaed08
	subs r1, r1, r2	@ 000aed08 891a
.org 0xaed0a
	lsls r1, r1, #8	@ 000aed0a 0902
.org 0xaed0c
	asrs r1, r1, #16	@ 000aed0c 0914
.org 0xaed0e
	bl 0x128bdc	@ 000aed0e 79f065ff
.org 0xaed12
	lsls r0, r0, #16	@ 000aed12 0004
.org 0xaed14
	lsrs r0, r0, #24	@ 000aed14 000e
.org 0xaed16
	adds r0, #128	@ 000aed16 8030
.org 0xaed18
	lsls r0, r0, #24	@ 000aed18 0006
.org 0xaed1a
	ldr r2, [pc, #44]	@ 000aed1a 0b4a
.org 0xaed1c
	movs r3, #128	@ 000aed1c 8023
.org 0xaed1e
	lsls r3, r3, #23	@ 000aed1e db05
.org 0xaed20
	adds r1, r0, r3	@ 000aed20 c118
.org 0xaed22
	lsrs r1, r1, #23	@ 000aed22 c90d
.org 0xaed24
	adds r1, r1, r2	@ 000aed24 8918
.org 0xaed26
	movs r3, #0	@ 000aed26 0023
.org 0xaed28
	ldrsh r1, [r1, r3]	@ 000aed28 c95e
.org 0xaed2a
	str r1, [r5, #92]	@ 000aed2a e965
.org 0xaed2c
	lsrs r0, r0, #23	@ 000aed2c c00d
.org 0xaed2e
	adds r0, r0, r2	@ 000aed2e 8018
.org 0xaed30
	movs r1, #0	@ 000aed30 0021
.org 0xaed32
	ldrsh r0, [r0, r1]	@ 000aed32 405e
.org 0xaed34
	str r0, [r5, #96]	@ 000aed34 2866
.org 0xaed36
	movs r0, #96	@ 000aed36 6020
.org 0xaed38
	strb r0, [r5, #18]	@ 000aed38 a874
.org 0xaed3a
	ldrb r0, [r5, #15]	@ 000aed3a e87b
.org 0xaed3c
	adds r0, #1	@ 000aed3c 0130
.org 0xaed3e
	strb r0, [r5, #15]	@ 000aed3e e873
.org 0xaed40
	b.n 0xaed72	@ 000aed40 17e0
.org 0xaed42
	.byte 0x00	@ 000aed42 data
.org 0xaed43
	.byte 0x00	@ 000aed43 data
.org 0xaed44
	.byte 0xf0,0xdb,0x02,0x02	@ 000aed44 data
.org 0xaed48
	.byte 0x0c,0x93,0x12,0x08	@ 000aed48 data
.org 0xaed4c
	ldr r0, [r5, #84]	@ 000aed4c 686d
.org 0xaed4e
	ldr r1, [r5, #92]	@ 000aed4e e96d
.org 0xaed50
	adds r0, r0, r1	@ 000aed50 4018
.org 0xaed52
	str r0, [r5, #84]	@ 000aed52 6865
.org 0xaed54
	ldr r0, [r5, #88]	@ 000aed54 a86d
.org 0xaed56
	ldr r1, [r5, #96]	@ 000aed56 296e
.org 0xaed58
	adds r0, r0, r1	@ 000aed58 4018
.org 0xaed5a
	str r0, [r5, #88]	@ 000aed5a a865
