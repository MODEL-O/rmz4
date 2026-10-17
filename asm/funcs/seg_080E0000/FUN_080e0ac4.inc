@ FUN_080e0ac4  entry 0x080e0ac4  size 86
.thumb
.org 0xe0ac4
FUN_080e0ac4:
	push {r4, lr}	@ 000e0ac4 10b5
.org 0xe0ac6
	adds r4, r0, #0	@ 000e0ac6 041c
.org 0xe0ac8
	ldrb r0, [r4, #14]	@ 000e0ac8 a07b
.org 0xe0aca
	cmp r0, #0	@ 000e0aca 0028
.org 0xe0acc
	bne.n 0xe0ade	@ 000e0acc 07d1
.org 0xe0ace
	ldrb r0, [r4, #17]	@ 000e0ace 607c
.org 0xe0ad0
	cmp r0, #2	@ 000e0ad0 0228
.org 0xe0ad2
	bls.n 0xe0ad6	@ 000e0ad2 00d9
.org 0xe0ad4
	movs r0, #2	@ 000e0ad4 0220
.org 0xe0ad6
	strb r0, [r4, #13]	@ 000e0ad6 6073
.org 0xe0ad8
	ldrb r0, [r4, #14]	@ 000e0ad8 a07b
.org 0xe0ada
	adds r0, #1	@ 000e0ada 0130
.org 0xe0adc
	strb r0, [r4, #14]	@ 000e0adc a073
.org 0xe0ade
	ldr r1, [pc, #60]	@ 000e0ade 0f49
.org 0xe0ae0
	ldrb r0, [r4, #13]	@ 000e0ae0 607b
.org 0xe0ae2
	lsls r0, r0, #2	@ 000e0ae2 8000
.org 0xe0ae4
	adds r0, r0, r1	@ 000e0ae4 4018
.org 0xe0ae6
	ldr r1, [r0, #0]	@ 000e0ae6 0168
.org 0xe0ae8
	adds r0, r4, #0	@ 000e0ae8 201c
.org 0xe0aea
	bl 0x128f80	@ 000e0aea 48f049fa
.org 0xe0aee
	adds r0, r4, #0	@ 000e0aee 201c
.org 0xe0af0
	bl 0x1cff0	@ 000e0af0 3cf77efa
.org 0xe0af4
	ldr r0, [r4, #84]	@ 000e0af4 606d
.org 0xe0af6
	ldr r1, [r4, #88]	@ 000e0af6 a16d
.org 0xe0af8
	bl 0x7c7c	@ 000e0af8 27f7c0f8
.org 0xe0afc
	lsls r0, r0, #16	@ 000e0afc 0004
.org 0xe0afe
	cmp r0, #0	@ 000e0afe 0028
.org 0xe0b00
	beq.n 0xe0b14	@ 000e0b00 08d0
.org 0xe0b02
	ldr r1, [pc, #28]	@ 000e0b02 0749
.org 0xe0b04
	ldrb r0, [r4, #9]	@ 000e0b04 607a
.org 0xe0b06
	lsls r0, r0, #2	@ 000e0b06 8000
.org 0xe0b08
	adds r0, r0, r1	@ 000e0b08 4018
.org 0xe0b0a
	movs r1, #2	@ 000e0b0a 0221
.org 0xe0b0c
	str r1, [r4, #12]	@ 000e0b0c e160
.org 0xe0b0e
	ldr r0, [r0, #0]	@ 000e0b0e 0068
.org 0xe0b10
	ldr r0, [r0, #8]	@ 000e0b10 8068
.org 0xe0b12
	str r0, [r4, #20]	@ 000e0b12 6061
.org 0xe0b14
	pop {r4}	@ 000e0b14 10bc
.org 0xe0b16
	pop {r0}	@ 000e0b16 01bc
.org 0xe0b18
	bx r0	@ 000e0b18 0047
