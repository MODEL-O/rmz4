@ FUN_08070b8c  entry 0x08070b8c  size 272
.thumb
.org 0x70b8c
FUN_08070b8c:
	push {r4, r5, r6, r7, lr}	@ 00070b8c f0b5
.org 0x70b8e
	mov r7, r8	@ 00070b8e 4746
.org 0x70b90
	push {r7}	@ 00070b90 80b4
.org 0x70b92
	adds r6, r0, #0	@ 00070b92 061c
.org 0x70b94
	ldrb r0, [r6, #10]	@ 00070b94 b07a
.org 0x70b96
	lsrs r7, r0, #4	@ 00070b96 0709
.org 0x70b98
	movs r0, #1	@ 00070b98 0120
.org 0x70b9a
	ands r7, r0	@ 00070b9a 0740
.org 0x70b9c
	movs r0, #0	@ 00070b9c 0020
.org 0x70b9e
	mov r8, r0	@ 00070b9e 8046
.org 0x70ba0
	ldrb r1, [r6, #15]	@ 00070ba0 f17b
.org 0x70ba2
	cmp r1, #0	@ 00070ba2 0029
.org 0x70ba4
	bne.n 0x70bb8	@ 00070ba4 08d1
.org 0x70ba6
	lsls r0, r7, #1	@ 00070ba6 7800
.org 0x70ba8
	subs r0, #1	@ 00070ba8 0138
.org 0x70baa
	lsls r0, r0, #8	@ 00070baa 0002
.org 0x70bac
	negs r0, r0	@ 00070bac 4042
.org 0x70bae
	str r0, [r6, #92]	@ 00070bae f065
.org 0x70bb0
	ldr r0, [pc, #120]	@ 00070bb0 1e48
.org 0x70bb2
	str r0, [r6, #96]	@ 00070bb2 3066
.org 0x70bb4
	adds r0, r1, #1	@ 00070bb4 481c
.org 0x70bb6
	strb r0, [r6, #15]	@ 00070bb6 f073
.org 0x70bb8
	adds r0, r6, #0	@ 00070bb8 301c
.org 0x70bba
	bl 0x1cff0	@ 00070bba acf719fa
.org 0x70bbe
	adds r0, r6, #0	@ 00070bbe 301c
.org 0x70bc0
	adds r0, #116	@ 00070bc0 7430
.org 0x70bc2
	ldr r4, [pc, #108]	@ 00070bc2 1b4c
.org 0x70bc4
	ldr r3, [pc, #108]	@ 00070bc4 1b4b
.org 0x70bc6
	adds r1, r6, #0	@ 00070bc6 311c
.org 0x70bc8
	adds r1, #184	@ 00070bc8 b831
.org 0x70bca
	ldrb r2, [r1, #0]	@ 00070bca 0a78
.org 0x70bcc
	lsls r1, r2, #1	@ 00070bcc 5100
.org 0x70bce
	adds r1, r1, r3	@ 00070bce c918
.org 0x70bd0
	ldrh r1, [r1, #0]	@ 00070bd0 0988
.org 0x70bd2
	lsls r1, r1, #2	@ 00070bd2 8900
.org 0x70bd4
	adds r1, r1, r4	@ 00070bd4 0919
.org 0x70bd6
	adds r3, r6, #0	@ 00070bd6 331c
.org 0x70bd8
	adds r3, #113	@ 00070bd8 7133
.org 0x70bda
	movs r5, #0	@ 00070bda 0025
.org 0x70bdc
	ldrsb r5, [r3, r5]	@ 00070bdc 5d57
.org 0x70bde
	ldr r1, [r1, #0]	@ 00070bde 0968
.org 0x70be0
	lsls r3, r5, #2	@ 00070be0 ab00
.org 0x70be2
	adds r3, r3, r1	@ 00070be2 5b18
.org 0x70be4
	ldr r4, [pc, #80]	@ 00070be4 144c
.org 0x70be6
	adds r1, r6, #0	@ 00070be6 311c
.org 0x70be8
	adds r1, #185	@ 00070be8 b931
.org 0x70bea
	ldrb r1, [r1, #0]	@ 00070bea 0978
.org 0x70bec
	lsls r1, r1, #2	@ 00070bec 8900
.org 0x70bee
	adds r1, r1, r4	@ 00070bee 0919
.org 0x70bf0
	ldr r1, [r1, #0]	@ 00070bf0 0968
.org 0x70bf2
	lsls r2, r2, #2	@ 00070bf2 9200
.org 0x70bf4
	adds r2, r2, r1	@ 00070bf4 5218
.org 0x70bf6
	ldr r1, [r2, #0]	@ 00070bf6 1168
.org 0x70bf8
	adds r1, r1, r5	@ 00070bf8 4919
.org 0x70bfa
	ldrb r1, [r1, #0]	@ 00070bfa 0978
.org 0x70bfc
	lsls r2, r1, #1	@ 00070bfc 4a00
.org 0x70bfe
	adds r2, r2, r1	@ 00070bfe 5218
.org 0x70c00
	lsls r2, r2, #3	@ 00070c00 d200
.org 0x70c02
	ldr r1, [r3, #0]	@ 00070c02 1968
.org 0x70c04
	adds r1, r1, r2	@ 00070c04 8918
.org 0x70c06
	bl 0x5784	@ 00070c06 94f7bdfd
.org 0x70c0a
	ldr r0, [r6, #88]	@ 00070c0a b06d
.org 0x70c0c
	ldr r1, [r6, #96]	@ 00070c0c 316e
.org 0x70c0e
	adds r0, r0, r1	@ 00070c0e 4018
.org 0x70c10
	str r0, [r6, #88]	@ 00070c10 b065
.org 0x70c12
	cmp r1, #0	@ 00070c12 0029
.org 0x70c14
	bge.n 0x70c3c	@ 00070c14 12da
.org 0x70c16
	adds r0, r6, #0	@ 00070c16 301c
.org 0x70c18
	bl 0x737e8	@ 00070c18 02f0e6fd
.org 0x70c1c
	cmp r0, #0	@ 00070c1c 0028
.org 0x70c1e
	beq.n 0x70c54	@ 00070c1e 19d0
.org 0x70c20
	adds r0, r6, #0	@ 00070c20 301c
.org 0x70c22
	bl 0x739cc	@ 00070c22 02f0d3fe
.org 0x70c26
	mov r0, r8	@ 00070c26 4046
.org 0x70c28
	str r0, [r6, #96]	@ 00070c28 3066
.org 0x70c2a
	b.n 0x70c54	@ 00070c2a 13e0
.org 0x70c2c
	.byte 0x40,0xfd,0xff,0xff	@ 00070c2c data
.org 0x70c30
	.byte 0x08,0xcb,0x85,0x08	@ 00070c30 data
.org 0x70c34
	.byte 0x04,0xcc,0x85,0x08	@ 00070c34 data
.org 0x70c38
	.byte 0xfc,0xcb,0x85,0x08	@ 00070c38 data
.org 0x70c3c
	adds r0, r6, #0	@ 00070c3c 301c
.org 0x70c3e
	bl 0x73850	@ 00070c3e 02f007fe
.org 0x70c42
	cmp r0, #0	@ 00070c42 0028
.org 0x70c44
	beq.n 0x70c54	@ 00070c44 06d0
.org 0x70c46
	adds r0, r6, #0	@ 00070c46 301c
.org 0x70c48
	bl 0x73a68	@ 00070c48 02f00eff
.org 0x70c4c
	mov r0, r8	@ 00070c4c 4046
.org 0x70c4e
	str r0, [r6, #96]	@ 00070c4e 3066
.org 0x70c50
	movs r0, #1	@ 00070c50 0120
.org 0x70c52
	mov r8, r0	@ 00070c52 8046
.org 0x70c54
	ldr r0, [r6, #96]	@ 00070c54 306e
.org 0x70c56
	adds r0, #64	@ 00070c56 4030
.org 0x70c58
	str r0, [r6, #96]	@ 00070c58 3066
.org 0x70c5a
	movs r1, #224	@ 00070c5a e021
.org 0x70c5c
	lsls r1, r1, #3	@ 00070c5c c900
.org 0x70c5e
	cmp r0, r1	@ 00070c5e 8842
.org 0x70c60
	ble.n 0x70c64	@ 00070c60 00dd
.org 0x70c62
	str r1, [r6, #96]	@ 00070c62 3166
.org 0x70c64
	ldr r0, [r6, #84]	@ 00070c64 706d
.org 0x70c66
	ldr r1, [r6, #92]	@ 00070c66 f16d
.org 0x70c68
	adds r0, r0, r1	@ 00070c68 4018
.org 0x70c6a
	str r0, [r6, #84]	@ 00070c6a 7065
.org 0x70c6c
	cmp r7, #0	@ 00070c6c 002f
.org 0x70c6e
	bne.n 0x70c82	@ 00070c6e 08d1
.org 0x70c70
	adds r0, r6, #0	@ 00070c70 301c
.org 0x70c72
	bl 0x7371c	@ 00070c72 02f053fd
.org 0x70c76
	cmp r0, #0	@ 00070c76 0028
.org 0x70c78
	beq.n 0x70c92	@ 00070c78 0bd0
.org 0x70c7a
	adds r0, r6, #0	@ 00070c7a 301c
.org 0x70c7c
	bl 0x738b4	@ 00070c7c 02f01afe
.org 0x70c80
	b.n 0x70c92	@ 00070c80 07e0
.org 0x70c82
	adds r0, r6, #0	@ 00070c82 301c
.org 0x70c84
	bl 0x73784	@ 00070c84 02f07efd
.org 0x70c88
	cmp r0, #0	@ 00070c88 0028
.org 0x70c8a
	beq.n 0x70c92	@ 00070c8a 02d0
.org 0x70c8c
	adds r0, r6, #0	@ 00070c8c 301c
.org 0x70c8e
	bl 0x73940	@ 00070c8e 02f057fe
.org 0x70c92
	mov r0, r8	@ 00070c92 4046
.org 0x70c94
	cmp r0, #0	@ 00070c94 0028
.org 0x70c96
	beq.n 0x70ca2	@ 00070c96 04d0
.org 0x70c98
	ldrb r0, [r6, #14]	@ 00070c98 b07b
.org 0x70c9a
	adds r0, #1	@ 00070c9a 0130
