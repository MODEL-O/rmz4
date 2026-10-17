@ FUN_080c0bf0  entry 0x080c0bf0  size 118
.thumb
.org 0xc0bf0
FUN_080c0bf0:
	push {r4, r5, r6, r7, lr}	@ 000c0bf0 f0b5
.org 0xc0bf2
	mov r7, r8	@ 000c0bf2 4746
.org 0xc0bf4
	push {r7}	@ 000c0bf4 80b4
.org 0xc0bf6
	sub sp, #20	@ 000c0bf6 85b0
.org 0xc0bf8
	adds r5, r0, #0	@ 000c0bf8 051c
.org 0xc0bfa
	ldr r1, [pc, #108]	@ 000c0bfa 1b49
.org 0xc0bfc
	mov r0, sp	@ 000c0bfc 6846
.org 0xc0bfe
	movs r2, #3	@ 000c0bfe 0322
.org 0xc0c00
	bl 0x129258	@ 000c0c00 68f02afb
.org 0xc0c04
	add r4, sp, #4	@ 000c0c04 01ac
.org 0xc0c06
	ldr r1, [pc, #100]	@ 000c0c06 1949
.org 0xc0c08
	adds r0, r4, #0	@ 000c0c08 201c
.org 0xc0c0a
	movs r2, #5	@ 000c0c0a 0522
.org 0xc0c0c
	bl 0x129258	@ 000c0c0c 68f024fb
.org 0xc0c10
	mov r0, sp	@ 000c0c10 6846
.org 0xc0c12
	str r0, [sp, #12]	@ 000c0c12 0390
.org 0xc0c14
	add r6, sp, #12	@ 000c0c14 03ae
.org 0xc0c16
	str r4, [r6, #4]	@ 000c0c16 7460
.org 0xc0c18
	ldr r4, [r5, #40]	@ 000c0c18 ac6a
.org 0xc0c1a
	ldrb r7, [r5, #17]	@ 000c0c1a 6f7c
.org 0xc0c1c
	adds r0, r5, #0	@ 000c0c1c 281c
.org 0xc0c1e
	adds r0, #180	@ 000c0c1e b430
.org 0xc0c20
	ldrb r0, [r0, #0]	@ 000c0c20 0078
.org 0xc0c22
	mov r8, r0	@ 000c0c22 8046
.org 0xc0c24
	ldrb r0, [r5, #15]	@ 000c0c24 e87b
.org 0xc0c26
	cmp r0, #0	@ 000c0c26 0028
.org 0xc0c28
	bne.n 0xc0c5a	@ 000c0c28 17d1
.org 0xc0c2a
	adds r0, r5, #0	@ 000c0c2a 281c
.org 0xc0c2c
	adds r0, #116	@ 000c0c2c 7430
.org 0xc0c2e
	ldr r1, [pc, #64]	@ 000c0c2e 1049
.org 0xc0c30
	bl 0x5784	@ 000c0c30 44f7a8fd
.org 0xc0c34
	adds r2, r4, #0	@ 000c0c34 221c
.org 0xc0c36
	adds r2, #180	@ 000c0c36 b432
.org 0xc0c38
	lsls r0, r7, #2	@ 000c0c38 b800
.org 0xc0c3a
	adds r0, r0, r6	@ 000c0c3a 8019
.org 0xc0c3c
	ldr r1, [r0, #0]	@ 000c0c3c 0168
.org 0xc0c3e
	add r1, r8	@ 000c0c3e 4144
.org 0xc0c40
	movs r0, #1	@ 000c0c40 0120
.org 0xc0c42
	ldrb r1, [r1, #0]	@ 000c0c42 0978
.org 0xc0c44
	lsls r0, r1	@ 000c0c44 8840
.org 0xc0c46
	ldrh r1, [r2, #0]	@ 000c0c46 1188
.org 0xc0c48
	orrs r0, r1	@ 000c0c48 0843
.org 0xc0c4a
	strh r0, [r2, #0]	@ 000c0c4a 1080
.org 0xc0c4c
	ldrb r1, [r5, #10]	@ 000c0c4c a97a
.org 0xc0c4e
	movs r0, #254	@ 000c0c4e fe20
.org 0xc0c50
	ands r0, r1	@ 000c0c50 0840
.org 0xc0c52
	strb r0, [r5, #10]	@ 000c0c52 a872
.org 0xc0c54
	ldrb r0, [r5, #15]	@ 000c0c54 e87b
.org 0xc0c56
	adds r0, #1	@ 000c0c56 0130
.org 0xc0c58
	strb r0, [r5, #15]	@ 000c0c58 e873
.org 0xc0c5a
	add sp, #20	@ 000c0c5a 05b0
.org 0xc0c5c
	pop {r3}	@ 000c0c5c 08bc
.org 0xc0c5e
	mov r8, r3	@ 000c0c5e 9846
.org 0xc0c60
	pop {r4, r5, r6, r7}	@ 000c0c60 f0bc
.org 0xc0c62
	pop {r0}	@ 000c0c62 01bc
.org 0xc0c64
	bx r0	@ 000c0c64 0047
