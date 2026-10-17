@ FUN_080a5bd4  entry 0x080a5bd4  size 128
.thumb
.org 0xa5bd4
FUN_080a5bd4:
	push {r4, r5, lr}	@ 000a5bd4 30b5
.org 0xa5bd6
	sub sp, #4	@ 000a5bd6 81b0
.org 0xa5bd8
	adds r4, r0, #0	@ 000a5bd8 041c
.org 0xa5bda
	ldr r1, [pc, #120]	@ 000a5bda 1e49
.org 0xa5bdc
	mov r0, sp	@ 000a5bdc 6846
.org 0xa5bde
	movs r2, #3	@ 000a5bde 0322
.org 0xa5be0
	bl 0x129258	@ 000a5be0 83f03afb
.org 0xa5be4
	ldrb r5, [r4, #16]	@ 000a5be4 257c
.org 0xa5be6
	ldrb r0, [r4, #15]	@ 000a5be6 e07b
.org 0xa5be8
	cmp r0, #0	@ 000a5be8 0028
.org 0xa5bea
	bne.n 0xa5c10	@ 000a5bea 11d1
.org 0xa5bec
	adds r0, r4, #0	@ 000a5bec 201c
.org 0xa5bee
	adds r0, #116	@ 000a5bee 7430
.org 0xa5bf0
	ldr r1, [pc, #100]	@ 000a5bf0 1949
.org 0xa5bf2
	bl 0x5784	@ 000a5bf2 5ff7c7fd
.org 0xa5bf6
	ldr r1, [pc, #100]	@ 000a5bf6 1949
.org 0xa5bf8
	adds r0, r4, #0	@ 000a5bf8 201c
.org 0xa5bfa
	bl 0x1cf00	@ 000a5bfa 77f781f9
.org 0xa5bfe
	adds r0, r4, #0	@ 000a5bfe 201c
.org 0xa5c00
	movs r1, #5	@ 000a5c00 0521
.org 0xa5c02
	bl 0x1d3d0	@ 000a5c02 77f7e5fb
.org 0xa5c06
	movs r0, #1	@ 000a5c06 0120
.org 0xa5c08
	strb r0, [r4, #18]	@ 000a5c08 a074
.org 0xa5c0a
	ldrb r0, [r4, #15]	@ 000a5c0a e07b
.org 0xa5c0c
	adds r0, #1	@ 000a5c0c 0130
.org 0xa5c0e
	strb r0, [r4, #15]	@ 000a5c0e e073
.org 0xa5c10
	adds r0, r4, #0	@ 000a5c10 201c
.org 0xa5c12
	bl 0x1cff0	@ 000a5c12 77f7edf9
.org 0xa5c16
	ldrb r0, [r4, #18]	@ 000a5c16 a07c
.org 0xa5c18
	cmp r0, #0	@ 000a5c18 0028
.org 0xa5c1a
	beq.n 0xa5c34	@ 000a5c1a 0bd0
.org 0xa5c1c
	adds r0, r4, #0	@ 000a5c1c 201c
.org 0xa5c1e
	adds r0, #113	@ 000a5c1e 7130
.org 0xa5c20
	ldrb r0, [r0, #0]	@ 000a5c20 0078
.org 0xa5c22
	lsls r0, r0, #24	@ 000a5c22 0006
.org 0xa5c24
	asrs r0, r0, #24	@ 000a5c24 0016
.org 0xa5c26
	cmp r0, #6	@ 000a5c26 0628
.org 0xa5c28
	bne.n 0xa5c34	@ 000a5c28 04d1
.org 0xa5c2a
	adds r0, r4, #0	@ 000a5c2a 201c
.org 0xa5c2c
	adds r0, #116	@ 000a5c2c 7430
.org 0xa5c2e
	ldr r1, [pc, #48]	@ 000a5c2e 0c49
.org 0xa5c30
	bl 0x5784	@ 000a5c30 5ff7a8fd
.org 0xa5c34
	adds r0, r4, #0	@ 000a5c34 201c
.org 0xa5c36
	adds r0, #115	@ 000a5c36 7330
.org 0xa5c38
	ldrb r0, [r0, #0]	@ 000a5c38 0078
.org 0xa5c3a
	cmp r0, #3	@ 000a5c3a 0328
.org 0xa5c3c
	bne.n 0xa5c4c	@ 000a5c3c 06d1
.org 0xa5c3e
	mov r1, sp	@ 000a5c3e 6946
.org 0xa5c40
	adds r0, r1, r5	@ 000a5c40 4819
.org 0xa5c42
	ldrb r0, [r0, #0]	@ 000a5c42 0078
.org 0xa5c44
	movs r1, #0	@ 000a5c44 0021
.org 0xa5c46
	strb r0, [r4, #13]	@ 000a5c46 6073
.org 0xa5c48
	strb r1, [r4, #14]	@ 000a5c48 a173
.org 0xa5c4a
	strb r1, [r4, #15]	@ 000a5c4a e173
.org 0xa5c4c
	add sp, #4	@ 000a5c4c 01b0
.org 0xa5c4e
	pop {r4, r5}	@ 000a5c4e 30bc
.org 0xa5c50
	pop {r0}	@ 000a5c50 01bc
.org 0xa5c52
	bx r0	@ 000a5c52 0047
