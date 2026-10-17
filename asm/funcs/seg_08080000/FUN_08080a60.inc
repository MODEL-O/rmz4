@ FUN_08080a60  entry 0x08080a60  size 128
.thumb
.org 0x80a60
FUN_08080a60:
	push {r4, r5, r6, lr}	@ 00080a60 70b5
.org 0x80a62
	adds r5, r0, #0	@ 00080a62 051c
.org 0x80a64
	ldrb r0, [r5, #15]	@ 00080a64 e87b
.org 0x80a66
	cmp r0, #0	@ 00080a66 0028
.org 0x80a68
	bne.n 0x80a78	@ 00080a68 06d1
.org 0x80a6a
	ldr r1, [pc, #104]	@ 00080a6a 1a49
.org 0x80a6c
	adds r0, r5, #0	@ 00080a6c 281c
.org 0x80a6e
	bl 0x1cf00	@ 00080a6e 9cf747fa
.org 0x80a72
	ldrb r0, [r5, #15]	@ 00080a72 e87b
.org 0x80a74
	adds r0, #1	@ 00080a74 0130
.org 0x80a76
	strb r0, [r5, #15]	@ 00080a76 e873
.org 0x80a78
	adds r0, r5, #0	@ 00080a78 281c
.org 0x80a7a
	bl 0x1cff0	@ 00080a7a 9cf7b9fa
.org 0x80a7e
	adds r0, r5, #0	@ 00080a7e 281c
.org 0x80a80
	adds r0, #116	@ 00080a80 7430
.org 0x80a82
	ldr r4, [pc, #84]	@ 00080a82 154c
.org 0x80a84
	adds r6, r5, #0	@ 00080a84 2e1c
.org 0x80a86
	adds r6, #181	@ 00080a86 b536
.org 0x80a88
	ldrb r3, [r6, #0]	@ 00080a88 3378
.org 0x80a8a
	lsls r3, r3, #2	@ 00080a8a 9b00
.org 0x80a8c
	ldrb r1, [r5, #30]	@ 00080a8c a97f
.org 0x80a8e
	lsls r1, r1, #8	@ 00080a8e 0902
.org 0x80a90
	adds r2, r5, #0	@ 00080a90 2a1c
.org 0x80a92
	adds r2, #112	@ 00080a92 7032
.org 0x80a94
	ldrb r2, [r2, #0]	@ 00080a94 1278
.org 0x80a96
	orrs r1, r2	@ 00080a96 1143
.org 0x80a98
	ldr r2, [pc, #64]	@ 00080a98 104a
.org 0x80a9a
	adds r1, r1, r2	@ 00080a9a 8918
.org 0x80a9c
	lsls r1, r1, #3	@ 00080a9c c900
.org 0x80a9e
	adds r3, r3, r1	@ 00080a9e 5b18
.org 0x80aa0
	adds r3, r3, r4	@ 00080aa0 1b19
.org 0x80aa2
	adds r1, r5, #0	@ 00080aa2 291c
.org 0x80aa4
	adds r1, #113	@ 00080aa4 7131
.org 0x80aa6
	ldrb r1, [r1, #0]	@ 00080aa6 0978
.org 0x80aa8
	lsls r1, r1, #24	@ 00080aa8 0906
.org 0x80aaa
	asrs r1, r1, #24	@ 00080aaa 0916
.org 0x80aac
	ldr r2, [r3, #0]	@ 00080aac 1a68
.org 0x80aae
	lsls r1, r1, #2	@ 00080aae 8900
.org 0x80ab0
	adds r1, r1, r2	@ 00080ab0 8918
.org 0x80ab2
	ldr r1, [r1, #0]	@ 00080ab2 0968
.org 0x80ab4
	bl 0x5784	@ 00080ab4 84f766fe
.org 0x80ab8
	adds r0, r5, #0	@ 00080ab8 281c
.org 0x80aba
	adds r0, #115	@ 00080aba 7330
.org 0x80abc
	ldrb r0, [r0, #0]	@ 00080abc 0078
.org 0x80abe
	cmp r0, #3	@ 00080abe 0328
.org 0x80ac0
	bne.n 0x80aea	@ 00080ac0 13d1
.org 0x80ac2
	ldr r0, [pc, #28]	@ 00080ac2 0748
.org 0x80ac4
	bl 0x2b10	@ 00080ac4 82f724f8
.org 0x80ac8
	ldrb r1, [r6, #0]	@ 00080ac8 3178
.org 0x80aca
	cmp r1, #0	@ 00080aca 0029
.org 0x80acc
	beq.n 0x80ae4	@ 00080acc 0ad0
.org 0x80ace
	movs r1, #0	@ 00080ace 0021
.org 0x80ad0
	movs r0, #4	@ 00080ad0 0420
.org 0x80ad2
	b.n 0x80ae6	@ 00080ad2 08e0
.org 0x80ad4
	.byte 0x01,0x18,0x00,0x00	@ 00080ad4 data
.org 0x80ad8
	.byte 0x74,0xe4,0x85,0x08	@ 00080ad8 data
.org 0x80adc
	.byte 0x00,0xe8,0xff,0xff	@ 00080adc data
