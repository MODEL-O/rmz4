@ FUN_080b1aa4  entry 0x080b1aa4  size 140
.thumb
.org 0xb1aa4
FUN_080b1aa4:
	push {r4, r5, r6, r7, lr}	@ 000b1aa4 f0b5
.org 0xb1aa6
	adds r5, r0, #0	@ 000b1aa6 051c
.org 0xb1aa8
	bl 0x1cc9c	@ 000b1aa8 6bf7f8f8
.org 0xb1aac
	ldrb r0, [r5, #10]	@ 000b1aac a87a
.org 0xb1aae
	movs r1, #1	@ 000b1aae 0121
.org 0xb1ab0
	movs r2, #0	@ 000b1ab0 0022
.org 0xb1ab2
	movs r6, #0	@ 000b1ab2 0026
.org 0xb1ab4
	orrs r1, r0	@ 000b1ab4 0143
.org 0xb1ab6
	movs r0, #2	@ 000b1ab6 0220
.org 0xb1ab8
	orrs r1, r0	@ 000b1ab8 0143
.org 0xb1aba
	orrs r1, r2	@ 000b1aba 1143
.org 0xb1abc
	strb r1, [r5, #10]	@ 000b1abc a972
.org 0xb1abe
	ldr r2, [pc, #112]	@ 000b1abe 1c4a
.org 0xb1ac0
	ldrb r0, [r5, #9]	@ 000b1ac0 687a
.org 0xb1ac2
	lsls r0, r0, #2	@ 000b1ac2 8000
.org 0xb1ac4
	adds r0, r0, r2	@ 000b1ac4 8018
.org 0xb1ac6
	movs r7, #1	@ 000b1ac6 0127
.org 0xb1ac8
	str r7, [r5, #12]	@ 000b1ac8 ef60
.org 0xb1aca
	ldr r0, [r0, #0]	@ 000b1aca 0068
.org 0xb1acc
	ldr r0, [r0, #4]	@ 000b1acc 4068
.org 0xb1ace
	str r0, [r5, #20]	@ 000b1ace 6861
.org 0xb1ad0
	movs r0, #4	@ 000b1ad0 0420
.org 0xb1ad2
	orrs r1, r0	@ 000b1ad2 0143
.org 0xb1ad4
	strb r1, [r5, #10]	@ 000b1ad4 a972
.org 0xb1ad6
	adds r4, r5, #0	@ 000b1ad6 2c1c
.org 0xb1ad8
	adds r4, #116	@ 000b1ad8 7434
.org 0xb1ada
	ldr r1, [pc, #88]	@ 000b1ada 1649
.org 0xb1adc
	adds r2, r5, #0	@ 000b1adc 2a1c
.org 0xb1ade
	adds r2, #84	@ 000b1ade 5432
.org 0xb1ae0
	adds r0, r4, #0	@ 000b1ae0 201c
.org 0xb1ae2
	movs r3, #12	@ 000b1ae2 0c23
.org 0xb1ae4
	bl 0x5760	@ 000b1ae4 53f73cfe
.org 0xb1ae8
	str r5, [r4, #44]	@ 000b1ae8 e562
.org 0xb1aea
	ldr r0, [pc, #76]	@ 000b1aea 1348
.org 0xb1aec
	str r0, [r4, #36]	@ 000b1aec 6062
.org 0xb1aee
	adds r2, r5, #0	@ 000b1aee 2a1c
.org 0xb1af0
	adds r2, #181	@ 000b1af0 b532
.org 0xb1af2
	strb r6, [r2, #0]	@ 000b1af2 1670
.org 0xb1af4
	adds r0, r5, #0	@ 000b1af4 281c
.org 0xb1af6
	adds r0, #180	@ 000b1af6 b430
.org 0xb1af8
	strb r6, [r0, #0]	@ 000b1af8 0670
.org 0xb1afa
	ldr r0, [pc, #64]	@ 000b1afa 1048
.org 0xb1afc
	ldr r1, [pc, #64]	@ 000b1afc 1049
.org 0xb1afe
	adds r0, r0, r1	@ 000b1afe 4018
.org 0xb1b00
	ldrb r1, [r0, #0]	@ 000b1b00 0178
.org 0xb1b02
	movs r0, #15	@ 000b1b02 0f20
.org 0xb1b04
	ands r0, r1	@ 000b1b04 0840
.org 0xb1b06
	cmp r0, #0	@ 000b1b06 0028
.org 0xb1b08
	bne.n 0xb1b0c	@ 000b1b08 00d1
.org 0xb1b0a
	strb r7, [r2, #0]	@ 000b1b0a 1770
.org 0xb1b0c
	adds r0, r5, #0	@ 000b1b0c 281c
.org 0xb1b0e
	adds r0, #192	@ 000b1b0e c030
.org 0xb1b10
	str r6, [r0, #0]	@ 000b1b10 0660
.org 0xb1b12
	ldr r0, [r5, #88]	@ 000b1b12 a86d
.org 0xb1b14
	asrs r0, r0, #12	@ 000b1b14 0013
.org 0xb1b16
	lsls r0, r0, #4	@ 000b1b16 0001
.org 0xb1b18
	adds r0, #10	@ 000b1b18 0a30
.org 0xb1b1a
	lsls r0, r0, #8	@ 000b1b1a 0002
.org 0xb1b1c
	str r0, [r5, #88]	@ 000b1b1c a865
.org 0xb1b1e
	adds r0, r5, #0	@ 000b1b1e 281c
.org 0xb1b20
	bl 0xb2170	@ 000b1b20 00f026fb
.org 0xb1b24
	adds r0, r5, #0	@ 000b1b24 281c
.org 0xb1b26
	bl 0xb1b44	@ 000b1b26 00f00df8
.org 0xb1b2a
	pop {r4, r5, r6, r7}	@ 000b1b2a f0bc
.org 0xb1b2c
	pop {r0}	@ 000b1b2c 01bc
.org 0xb1b2e
	bx r0	@ 000b1b2e 0047
