@ FUN_080b8ab8  entry 0x080b8ab8  size 100
.thumb
.org 0xb8ab8
FUN_080b8ab8:
	push {r4, r5, r6, lr}	@ 000b8ab8 70b5
.org 0xb8aba
	adds r4, r0, #0	@ 000b8aba 041c
.org 0xb8abc
	ldr r6, [r4, #40]	@ 000b8abc a66a
.org 0xb8abe
	ldrb r5, [r4, #15]	@ 000b8abe e57b
.org 0xb8ac0
	cmp r5, #0	@ 000b8ac0 002d
.org 0xb8ac2
	bne.n 0xb8af6	@ 000b8ac2 18d1
.org 0xb8ac4
	adds r0, #116	@ 000b8ac4 7430
.org 0xb8ac6
	ldr r1, [pc, #84]	@ 000b8ac6 1549
.org 0xb8ac8
	bl 0x5784	@ 000b8ac8 4cf75cfe
.org 0xb8acc
	ldr r0, [pc, #80]	@ 000b8acc 1448
.org 0xb8ace
	strh r5, [r0, #0]	@ 000b8ace 0580
.org 0xb8ad0
	adds r2, r4, #0	@ 000b8ad0 221c
.org 0xb8ad2
	adds r2, #69	@ 000b8ad2 4532
.org 0xb8ad4
	ldrb r1, [r2, #0]	@ 000b8ad4 1178
.org 0xb8ad6
	movs r0, #13	@ 000b8ad6 0d20
.org 0xb8ad8
	negs r0, r0	@ 000b8ad8 4042
.org 0xb8ada
	ands r0, r1	@ 000b8ada 0840
.org 0xb8adc
	strb r0, [r2, #0]	@ 000b8adc 1070
.org 0xb8ade
	movs r0, #160	@ 000b8ade a020
.org 0xb8ae0
	lsls r0, r0, #2	@ 000b8ae0 8000
.org 0xb8ae2
	str r0, [r4, #96]	@ 000b8ae2 2066
.org 0xb8ae4
	adds r0, r6, #0	@ 000b8ae4 301c
.org 0xb8ae6
	adds r0, #184	@ 000b8ae6 b830
.org 0xb8ae8
	ldr r0, [r0, #0]	@ 000b8ae8 0068
.org 0xb8aea
	ldr r1, [pc, #56]	@ 000b8aea 0e49
.org 0xb8aec
	adds r0, r0, r1	@ 000b8aec 4018
.org 0xb8aee
	str r0, [r4, #100]	@ 000b8aee 6066
.org 0xb8af0
	ldrb r0, [r4, #15]	@ 000b8af0 e07b
.org 0xb8af2
	adds r0, #1	@ 000b8af2 0130
.org 0xb8af4
	strb r0, [r4, #15]	@ 000b8af4 e073
.org 0xb8af6
	adds r0, r4, #0	@ 000b8af6 201c
.org 0xb8af8
	bl 0x1cff0	@ 000b8af8 64f77afa
.org 0xb8afc
	ldr r0, [r4, #88]	@ 000b8afc a06d
.org 0xb8afe
	ldr r1, [r4, #96]	@ 000b8afe 216e
.org 0xb8b00
	adds r0, r0, r1	@ 000b8b00 4018
.org 0xb8b02
	str r0, [r4, #88]	@ 000b8b02 a065
.org 0xb8b04
	ldr r1, [r4, #100]	@ 000b8b04 616e
.org 0xb8b06
	cmp r0, r1	@ 000b8b06 8842
.org 0xb8b08
	blt.n 0xb8b16	@ 000b8b08 05db
.org 0xb8b0a
	str r1, [r4, #88]	@ 000b8b0a a165
.org 0xb8b0c
	movs r1, #0	@ 000b8b0c 0021
.org 0xb8b0e
	movs r0, #4	@ 000b8b0e 0420
.org 0xb8b10
	strb r0, [r4, #13]	@ 000b8b10 6073
.org 0xb8b12
	strb r1, [r4, #14]	@ 000b8b12 a173
.org 0xb8b14
	strb r1, [r4, #15]	@ 000b8b14 e173
.org 0xb8b16
	pop {r4, r5, r6}	@ 000b8b16 70bc
.org 0xb8b18
	pop {r0}	@ 000b8b18 01bc
.org 0xb8b1a
	bx r0	@ 000b8b1a 0047
