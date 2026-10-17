@ FUN_080b4bd0  entry 0x080b4bd0  size 64
.thumb
.org 0xb4bd0
FUN_080b4bd0:
	push {r4, r5, lr}	@ 000b4bd0 30b5
.org 0xb4bd2
	adds r5, r0, #0	@ 000b4bd2 051c
.org 0xb4bd4
	ldr r4, [r5, #40]	@ 000b4bd4 ac6a
.org 0xb4bd6
	bl 0x1cff0	@ 000b4bd6 68f70bfa
.org 0xb4bda
	ldr r0, [r4, #84]	@ 000b4bda 606d
.org 0xb4bdc
	ldr r1, [r4, #88]	@ 000b4bdc a16d
.org 0xb4bde
	str r0, [r5, #84]	@ 000b4bde 6865
.org 0xb4be0
	str r1, [r5, #88]	@ 000b4be0 a965
.org 0xb4be2
	ldrb r0, [r4, #30]	@ 000b4be2 a07f
.org 0xb4be4
	lsls r0, r0, #8	@ 000b4be4 0002
.org 0xb4be6
	adds r4, #112	@ 000b4be6 7034
.org 0xb4be8
	ldrb r1, [r4, #0]	@ 000b4be8 2178
.org 0xb4bea
	orrs r0, r1	@ 000b4bea 0843
.org 0xb4bec
	ldr r1, [pc, #32]	@ 000b4bec 0849
.org 0xb4bee
	cmp r0, r1	@ 000b4bee 8842
.org 0xb4bf0
	beq.n 0xb4c0a	@ 000b4bf0 0bd0
.org 0xb4bf2
	ldr r1, [pc, #32]	@ 000b4bf2 0849
.org 0xb4bf4
	ldrb r0, [r5, #9]	@ 000b4bf4 687a
.org 0xb4bf6
	lsls r0, r0, #2	@ 000b4bf6 8000
.org 0xb4bf8
	adds r0, r0, r1	@ 000b4bf8 4018
.org 0xb4bfa
	movs r1, #2	@ 000b4bfa 0221
.org 0xb4bfc
	str r1, [r5, #12]	@ 000b4bfc e960
.org 0xb4bfe
	ldr r0, [r0, #0]	@ 000b4bfe 0068
.org 0xb4c00
	ldr r0, [r0, #8]	@ 000b4c00 8068
.org 0xb4c02
	str r0, [r5, #20]	@ 000b4c02 6861
.org 0xb4c04
	adds r0, r5, #0	@ 000b4c04 281c
.org 0xb4c06
	bl 0xb4c18	@ 000b4c06 00f007f8
.org 0xb4c0a
	pop {r4, r5}	@ 000b4c0a 30bc
.org 0xb4c0c
	pop {r0}	@ 000b4c0c 01bc
.org 0xb4c0e
	bx r0	@ 000b4c0e 0047
