@ FUN_08093b28  entry 0x08093b28  size 234
.thumb
.org 0x93b28
FUN_08093b28:
	push {r4, r5, r6, r7, lr}	@ 00093b28 f0b5
.org 0x93b2a
	mov r7, r8	@ 00093b2a 4746
.org 0x93b2c
	push {r7}	@ 00093b2c 80b4
.org 0x93b2e
	adds r5, r0, #0	@ 00093b2e 051c
.org 0x93b30
	ldrb r7, [r5, #16]	@ 00093b30 2f7c
.org 0x93b32
	ldrb r0, [r5, #17]	@ 00093b32 687c
.org 0x93b34
	mov r8, r0	@ 00093b34 8046
.org 0x93b36
	movs r6, #0	@ 00093b36 0026
.org 0x93b38
	ldrb r0, [r5, #15]	@ 00093b38 e87b
.org 0x93b3a
	cmp r0, #0	@ 00093b3a 0028
.org 0x93b3c
	bne.n 0x93b5c	@ 00093b3c 0ed1
.org 0x93b3e
	adds r0, r5, #0	@ 00093b3e 281c
.org 0x93b40
	adds r0, #116	@ 00093b40 7430
.org 0x93b42
	ldr r1, [pc, #188]	@ 00093b42 2f49
.org 0x93b44
	bl 0x5784	@ 00093b44 71f71efe
.org 0x93b48
	ldr r1, [pc, #184]	@ 00093b48 2e49
.org 0x93b4a
	adds r0, r5, #0	@ 00093b4a 281c
.org 0x93b4c
	bl 0x1cf00	@ 00093b4c 89f7d8f9
.org 0x93b50
	str r6, [r5, #96]	@ 00093b50 2e66
.org 0x93b52
	movs r0, #1	@ 00093b52 0120
.org 0x93b54
	strb r0, [r5, #19]	@ 00093b54 e874
.org 0x93b56
	ldrb r0, [r5, #15]	@ 00093b56 e87b
.org 0x93b58
	adds r0, #1	@ 00093b58 0130
.org 0x93b5a
	strb r0, [r5, #15]	@ 00093b5a e873
.org 0x93b5c
	ldr r1, [r5, #84]	@ 00093b5c 696d
.org 0x93b5e
	ldr r2, [r5, #88]	@ 00093b5e aa6d
.org 0x93b60
	adds r0, r5, #0	@ 00093b60 281c
.org 0x93b62
	bl 0x947b4	@ 00093b62 00f027fe
.org 0x93b66
	cmp r0, #0	@ 00093b66 0028
.org 0x93b68
	bne.n 0x93bb2	@ 00093b68 23d1
.org 0x93b6a
	ldr r0, [r5, #88]	@ 00093b6a a86d
.org 0x93b6c
	ldr r1, [r5, #96]	@ 00093b6c 296e
.org 0x93b6e
	adds r0, r0, r1	@ 00093b6e 4018
.org 0x93b70
	str r0, [r5, #88]	@ 00093b70 a865
.org 0x93b72
	adds r1, #64	@ 00093b72 4031
.org 0x93b74
	str r1, [r5, #96]	@ 00093b74 2966
.org 0x93b76
	movs r0, #224	@ 00093b76 e020
.org 0x93b78
	lsls r0, r0, #3	@ 00093b78 c000
.org 0x93b7a
	cmp r1, r0	@ 00093b7a 8142
.org 0x93b7c
	ble.n 0x93b80	@ 00093b7c 00dd
.org 0x93b7e
	str r0, [r5, #96]	@ 00093b7e 2866
.org 0x93b80
	ldr r1, [r5, #84]	@ 00093b80 696d
.org 0x93b82
	ldr r2, [r5, #88]	@ 00093b82 aa6d
.org 0x93b84
	adds r0, r5, #0	@ 00093b84 281c
.org 0x93b86
	bl 0x947b4	@ 00093b86 00f015fe
.org 0x93b8a
	cmp r0, #0	@ 00093b8a 0028
.org 0x93b8c
	bne.n 0x93b90	@ 00093b8c 00d1
.org 0x93b8e
	movs r6, #1	@ 00093b8e 0126
.org 0x93b90
	ldrb r0, [r5, #19]	@ 00093b90 e87c
.org 0x93b92
	cmp r0, #0	@ 00093b92 0028
.org 0x93b94
	beq.n 0x93bb2	@ 00093b94 0dd0
.org 0x93b96
	ldr r4, [r5, #44]	@ 00093b96 ec6a
.org 0x93b98
	cmp r4, #0	@ 00093b98 002c
.org 0x93b9a
	bne.n 0x93bb2	@ 00093b9a 0ad1
.org 0x93b9c
	adds r0, r5, #0	@ 00093b9c 281c
.org 0x93b9e
	adds r0, #116	@ 00093b9e 7430
.org 0x93ba0
	ldr r1, [pc, #100]	@ 00093ba0 1949
.org 0x93ba2
	bl 0x5784	@ 00093ba2 71f7effd
.org 0x93ba6
	movs r1, #128	@ 00093ba6 8021
.org 0x93ba8
	lsls r1, r1, #7	@ 00093ba8 c901
.org 0x93baa
	adds r0, r5, #0	@ 00093baa 281c
.org 0x93bac
	bl 0x1cf00	@ 00093bac 89f7a8f9
.org 0x93bb0
	strb r4, [r5, #19]	@ 00093bb0 ec74
.org 0x93bb2
	cmp r6, #0	@ 00093bb2 002e
.org 0x93bb4
	bne.n 0x93bbc	@ 00093bb4 02d1
.org 0x93bb6
	adds r0, r5, #0	@ 00093bb6 281c
.org 0x93bb8
	bl 0x94a38	@ 00093bb8 00f03eff
.org 0x93bbc
	adds r0, r5, #0	@ 00093bbc 281c
.org 0x93bbe
	bl 0x1cff0	@ 00093bbe 89f717fa
.org 0x93bc2
	adds r0, r5, #0	@ 00093bc2 281c
.org 0x93bc4
	adds r0, #115	@ 00093bc4 7330
.org 0x93bc6
	ldrb r0, [r0, #0]	@ 00093bc6 0078
.org 0x93bc8
	cmp r0, #3	@ 00093bc8 0328
.org 0x93bca
	bne.n 0x93c1c	@ 00093bca 27d1
.org 0x93bcc
	ldr r0, [r5, #44]	@ 00093bcc e86a
.org 0x93bce
	cmp r0, #0	@ 00093bce 0028
.org 0x93bd0
	bne.n 0x93c1c	@ 00093bd0 24d1
.org 0x93bd2
	cmp r6, #0	@ 00093bd2 002e
.org 0x93bd4
	bne.n 0x93c1c	@ 00093bd4 22d1
.org 0x93bd6
	cmp r7, #1	@ 00093bd6 012f
.org 0x93bd8
	bne.n 0x93c14	@ 00093bd8 1cd1
.org 0x93bda
	ldr r0, [pc, #48]	@ 00093bda 0c48
.org 0x93bdc
	ldr r1, [pc, #48]	@ 00093bdc 0c49
.org 0x93bde
	adds r0, r0, r1	@ 00093bde 4018
.org 0x93be0
	ldrb r4, [r0, #0]	@ 00093be0 0478
.org 0x93be2
	mov r0, r8	@ 00093be2 4046
.org 0x93be4
	movs r1, #3	@ 00093be4 0321
.org 0x93be6
	bl 0x129120	@ 00093be6 95f09bfa
.org 0x93bea
	lsls r0, r0, #24	@ 00093bea 0006
.org 0x93bec
	lsrs r0, r0, #24	@ 00093bec 000e
.org 0x93bee
	asrs r4, r0	@ 00093bee 0441
.org 0x93bf0
	ands r4, r7	@ 00093bf0 3c40
.org 0x93bf2
	cmp r4, #0	@ 00093bf2 002c
.org 0x93bf4
	beq.n 0x93c14	@ 00093bf4 0ed0
.org 0x93bf6
	movs r0, #10	@ 00093bf6 0a20
.org 0x93bf8
	strb r0, [r5, #13]	@ 00093bf8 6873
.org 0x93bfa
	strb r6, [r5, #14]	@ 00093bfa ae73
.org 0x93bfc
	strb r6, [r5, #15]	@ 00093bfc ee73
.org 0x93bfe
	b.n 0x93c1c	@ 00093bfe 0de0
.org 0x93c00
	.byte 0xac,0x05,0x86,0x08	@ 00093c00 data
.org 0x93c04
	.byte 0x0f,0x40,0x00,0x00	@ 00093c04 data
.org 0x93c08
	.byte 0x94,0x05,0x86,0x08	@ 00093c08 data
.org 0x93c0c
	.byte 0xb0,0x0a,0x00,0x02	@ 00093c0c data
.org 0x93c10
	.byte 0x3f,0xd0,0x02,0x00	@ 00093c10 data
