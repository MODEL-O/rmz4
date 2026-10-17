@ FUN_080d6c48  entry 0x080d6c48  size 166
.thumb
.org 0xd6c48
FUN_080d6c48:
	push {r4, r5, lr}	@ 000d6c48 30b5
.org 0xd6c4a
	adds r5, r0, #0	@ 000d6c4a 051c
.org 0xd6c4c
	bl 0x1cff0	@ 000d6c4c 46f7d0f9
.org 0xd6c50
	ldr r0, [r5, #84]	@ 000d6c50 686d
.org 0xd6c52
	ldr r1, [r5, #92]	@ 000d6c52 e96d
.org 0xd6c54
	adds r0, r0, r1	@ 000d6c54 4018
.org 0xd6c56
	str r0, [r5, #84]	@ 000d6c56 6865
.org 0xd6c58
	movs r0, #250	@ 000d6c58 fa20
.org 0xd6c5a
	muls r0, r1	@ 000d6c5a 4843
.org 0xd6c5c
	cmp r0, #0	@ 000d6c5c 0028
.org 0xd6c5e
	bge.n 0xd6c62	@ 000d6c5e 00da
.org 0xd6c60
	adds r0, #255	@ 000d6c60 ff30
.org 0xd6c62
	asrs r0, r0, #8	@ 000d6c62 0012
.org 0xd6c64
	str r0, [r5, #92]	@ 000d6c64 e865
.org 0xd6c66
	ldr r0, [r5, #88]	@ 000d6c66 a86d
.org 0xd6c68
	ldr r1, [r5, #96]	@ 000d6c68 296e
.org 0xd6c6a
	adds r0, r0, r1	@ 000d6c6a 4018
.org 0xd6c6c
	str r0, [r5, #88]	@ 000d6c6c a865
.org 0xd6c6e
	ldrb r0, [r5, #19]	@ 000d6c6e e87c
.org 0xd6c70
	cmp r0, #0	@ 000d6c70 0028
.org 0xd6c72
	beq.n 0xd6c84	@ 000d6c72 07d0
.org 0xd6c74
	adds r0, r1, #0	@ 000d6c74 081c
.org 0xd6c76
	adds r0, #64	@ 000d6c76 4030
.org 0xd6c78
	str r0, [r5, #96]	@ 000d6c78 2866
.org 0xd6c7a
	movs r1, #224	@ 000d6c7a e021
.org 0xd6c7c
	lsls r1, r1, #3	@ 000d6c7c c900
.org 0xd6c7e
	cmp r0, r1	@ 000d6c7e 8842
.org 0xd6c80
	ble.n 0xd6c84	@ 000d6c80 00dd
.org 0xd6c82
	str r1, [r5, #96]	@ 000d6c82 2966
.org 0xd6c84
	ldrb r1, [r5, #18]	@ 000d6c84 a97c
.org 0xd6c86
	movs r0, #2	@ 000d6c86 0220
.org 0xd6c88
	ands r0, r1	@ 000d6c88 0840
.org 0xd6c8a
	cmp r0, #0	@ 000d6c8a 0028
.org 0xd6c8c
	beq.n 0xd6c96	@ 000d6c8c 03d0
.org 0xd6c8e
	ldrb r1, [r5, #10]	@ 000d6c8e a97a
.org 0xd6c90
	movs r0, #1	@ 000d6c90 0120
.org 0xd6c92
	orrs r0, r1	@ 000d6c92 0843
.org 0xd6c94
	b.n 0xd6c9c	@ 000d6c94 02e0
.org 0xd6c96
	ldrb r1, [r5, #10]	@ 000d6c96 a97a
.org 0xd6c98
	movs r0, #254	@ 000d6c98 fe20
.org 0xd6c9a
	ands r0, r1	@ 000d6c9a 0840
.org 0xd6c9c
	strb r0, [r5, #10]	@ 000d6c9c a872
.org 0xd6c9e
	ldrb r0, [r5, #18]	@ 000d6c9e a87c
.org 0xd6ca0
	subs r0, #1	@ 000d6ca0 0138
.org 0xd6ca2
	strb r0, [r5, #18]	@ 000d6ca2 a874
.org 0xd6ca4
	ldr r0, [r5, #84]	@ 000d6ca4 686d
.org 0xd6ca6
	ldr r1, [r5, #88]	@ 000d6ca6 a96d
.org 0xd6ca8
	bl 0x7c7c	@ 000d6ca8 30f7e8ff
.org 0xd6cac
	lsls r0, r0, #16	@ 000d6cac 0004
.org 0xd6cae
	cmp r0, #0	@ 000d6cae 0028
.org 0xd6cb0
	beq.n 0xd6cb6	@ 000d6cb0 01d0
.org 0xd6cb2
	movs r0, #0	@ 000d6cb2 0020
.org 0xd6cb4
	strb r0, [r5, #18]	@ 000d6cb4 a874
.org 0xd6cb6
	ldrb r0, [r5, #18]	@ 000d6cb6 a87c
.org 0xd6cb8
	cmp r0, #0	@ 000d6cb8 0028
.org 0xd6cba
	bne.n 0xd6ce8	@ 000d6cba 15d1
.org 0xd6cbc
	ldr r0, [r5, #40]	@ 000d6cbc a86a
.org 0xd6cbe
	adds r4, r5, #0	@ 000d6cbe 2c1c
.org 0xd6cc0
	adds r4, #84	@ 000d6cc0 5434
.org 0xd6cc2
	adds r1, r4, #0	@ 000d6cc2 211c
.org 0xd6cc4
	bl 0xd67cc	@ 000d6cc4 fff782fd
.org 0xd6cc8
	movs r0, #1	@ 000d6cc8 0120
.org 0xd6cca
	adds r1, r4, #0	@ 000d6cca 211c
.org 0xd6ccc
	bl 0xd0c88	@ 000d6ccc f9f7dcff
.org 0xd6cd0
	movs r0, #42	@ 000d6cd0 2a20
.org 0xd6cd2
	bl 0x2b10	@ 000d6cd2 2bf71dff
.org 0xd6cd6
	ldr r1, [pc, #24]	@ 000d6cd6 0649
.org 0xd6cd8
	ldrb r0, [r5, #9]	@ 000d6cd8 687a
.org 0xd6cda
	lsls r0, r0, #2	@ 000d6cda 8000
.org 0xd6cdc
	adds r0, r0, r1	@ 000d6cdc 4018
.org 0xd6cde
	movs r1, #2	@ 000d6cde 0221
.org 0xd6ce0
	str r1, [r5, #12]	@ 000d6ce0 e960
.org 0xd6ce2
	ldr r0, [r0, #0]	@ 000d6ce2 0068
.org 0xd6ce4
	ldr r0, [r0, #8]	@ 000d6ce4 8068
.org 0xd6ce6
	str r0, [r5, #20]	@ 000d6ce6 6861
.org 0xd6ce8
	pop {r4, r5}	@ 000d6ce8 30bc
.org 0xd6cea
	pop {r0}	@ 000d6cea 01bc
.org 0xd6cec
	bx r0	@ 000d6cec 0047
