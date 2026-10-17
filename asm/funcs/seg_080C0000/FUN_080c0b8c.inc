@ FUN_080c0b8c  entry 0x080c0b8c  size 92
.thumb
.org 0xc0b8c
FUN_080c0b8c:
	push {r4, r5, lr}	@ 000c0b8c 30b5
.org 0xc0b8e
	sub sp, #8	@ 000c0b8e 82b0
.org 0xc0b90
	adds r4, r0, #0	@ 000c0b90 041c
.org 0xc0b92
	ldr r0, [pc, #84]	@ 000c0b92 1548
.org 0xc0b94
	ldr r1, [r0, #4]	@ 000c0b94 4168
.org 0xc0b96
	ldr r0, [r0, #0]	@ 000c0b96 0068
.org 0xc0b98
	str r0, [sp, #0]	@ 000c0b98 0090
.org 0xc0b9a
	str r1, [sp, #4]	@ 000c0b9a 0191
.org 0xc0b9c
	ldrb r5, [r4, #17]	@ 000c0b9c 657c
.org 0xc0b9e
	ldrb r0, [r4, #15]	@ 000c0b9e e07b
.org 0xc0ba0
	cmp r0, #0	@ 000c0ba0 0028
.org 0xc0ba2
	bne.n 0xc0bc8	@ 000c0ba2 11d1
.org 0xc0ba4
	adds r0, r4, #0	@ 000c0ba4 201c
.org 0xc0ba6
	adds r0, #116	@ 000c0ba6 7430
.org 0xc0ba8
	ldr r1, [pc, #64]	@ 000c0ba8 1049
.org 0xc0baa
	bl 0x5784	@ 000c0baa 44f7ebfd
.org 0xc0bae
	ldrb r1, [r4, #10]	@ 000c0bae a17a
.org 0xc0bb0
	movs r0, #1	@ 000c0bb0 0120
.org 0xc0bb2
	orrs r0, r1	@ 000c0bb2 0843
.org 0xc0bb4
	strb r0, [r4, #10]	@ 000c0bb4 a072
.org 0xc0bb6
	lsls r0, r5, #2	@ 000c0bb6 a800
.org 0xc0bb8
	add r0, sp	@ 000c0bb8 6844
.org 0xc0bba
	ldrh r1, [r0, #0]	@ 000c0bba 0188
.org 0xc0bbc
	adds r0, r4, #0	@ 000c0bbc 201c
.org 0xc0bbe
	bl 0x1cf00	@ 000c0bbe 5cf79ff9
.org 0xc0bc2
	ldrb r0, [r4, #15]	@ 000c0bc2 e07b
.org 0xc0bc4
	adds r0, #1	@ 000c0bc4 0130
.org 0xc0bc6
	strb r0, [r4, #15]	@ 000c0bc6 e073
.org 0xc0bc8
	adds r0, r4, #0	@ 000c0bc8 201c
.org 0xc0bca
	bl 0x1cff0	@ 000c0bca 5cf711fa
.org 0xc0bce
	adds r0, r4, #0	@ 000c0bce 201c
.org 0xc0bd0
	adds r0, #115	@ 000c0bd0 7330
.org 0xc0bd2
	ldrb r0, [r0, #0]	@ 000c0bd2 0078
.org 0xc0bd4
	cmp r0, #3	@ 000c0bd4 0328
.org 0xc0bd6
	bne.n 0xc0be0	@ 000c0bd6 03d1
.org 0xc0bd8
	movs r1, #0	@ 000c0bd8 0021
.org 0xc0bda
	movs r0, #1	@ 000c0bda 0120
.org 0xc0bdc
	strb r0, [r4, #14]	@ 000c0bdc a073
.org 0xc0bde
	strb r1, [r4, #15]	@ 000c0bde e173
.org 0xc0be0
	add sp, #8	@ 000c0be0 02b0
.org 0xc0be2
	pop {r4, r5}	@ 000c0be2 30bc
.org 0xc0be4
	pop {r0}	@ 000c0be4 01bc
.org 0xc0be6
	bx r0	@ 000c0be6 0047
