@ FUN_080b1bbc  entry 0x080b1bbc  size 152
.thumb
.org 0xb1bbc
FUN_080b1bbc:
	push {r4, r5, lr}	@ 000b1bbc 30b5
.org 0xb1bbe
	adds r5, r0, #0	@ 000b1bbe 051c
.org 0xb1bc0
	adds r0, #180	@ 000b1bc0 b430
.org 0xb1bc2
	ldrb r0, [r0, #0]	@ 000b1bc2 0078
.org 0xb1bc4
	cmp r0, #0	@ 000b1bc4 0028
.org 0xb1bc6
	bne.n 0xb1c06	@ 000b1bc6 1ed1
.org 0xb1bc8
	adds r0, r5, #0	@ 000b1bc8 281c
.org 0xb1bca
	adds r0, #140	@ 000b1bca 8c30
.org 0xb1bcc
	ldr r0, [r0, #0]	@ 000b1bcc 0068
.org 0xb1bce
	movs r1, #128	@ 000b1bce 8021
.org 0xb1bd0
	lsls r1, r1, #9	@ 000b1bd0 4902
.org 0xb1bd2
	ands r0, r1	@ 000b1bd2 0840
.org 0xb1bd4
	cmp r0, #0	@ 000b1bd4 0028
.org 0xb1bd6
	beq.n 0xb1bee	@ 000b1bd6 0ad0
.org 0xb1bd8
	adds r4, r5, #0	@ 000b1bd8 2c1c
.org 0xb1bda
	adds r4, #84	@ 000b1bda 5434
.org 0xb1bdc
	ldrb r2, [r5, #10]	@ 000b1bdc aa7a
.org 0xb1bde
	lsrs r2, r2, #4	@ 000b1bde 1209
.org 0xb1be0
	movs r0, #1	@ 000b1be0 0120
.org 0xb1be2
	ands r2, r0	@ 000b1be2 0240
.org 0xb1be4
	adds r0, r4, #0	@ 000b1be4 201c
.org 0xb1be6
	movs r1, #0	@ 000b1be6 0021
.org 0xb1be8
	bl 0xe5d34	@ 000b1be8 34f0a4f8
.org 0xb1bec
	b.n 0xb1c1c	@ 000b1bec 16e0
.org 0xb1bee
	adds r4, r5, #0	@ 000b1bee 2c1c
.org 0xb1bf0
	adds r4, #84	@ 000b1bf0 5434
.org 0xb1bf2
	movs r1, #128	@ 000b1bf2 8021
.org 0xb1bf4
	lsls r1, r1, #1	@ 000b1bf4 4900
.org 0xb1bf6
	ldrb r2, [r5, #10]	@ 000b1bf6 aa7a
.org 0xb1bf8
	lsrs r2, r2, #4	@ 000b1bf8 1209
.org 0xb1bfa
	movs r0, #1	@ 000b1bfa 0120
.org 0xb1bfc
	ands r2, r0	@ 000b1bfc 0240
.org 0xb1bfe
	adds r0, r4, #0	@ 000b1bfe 201c
.org 0xb1c00
	bl 0xe5d34	@ 000b1c00 34f098f8
.org 0xb1c04
	b.n 0xb1c1c	@ 000b1c04 0ae0
.org 0xb1c06
	adds r4, r5, #0	@ 000b1c06 2c1c
.org 0xb1c08
	adds r4, #84	@ 000b1c08 5434
.org 0xb1c0a
	movs r1, #128	@ 000b1c0a 8021
.org 0xb1c0c
	lsls r1, r1, #2	@ 000b1c0c 8900
.org 0xb1c0e
	ldrb r2, [r5, #10]	@ 000b1c0e aa7a
.org 0xb1c10
	lsrs r2, r2, #4	@ 000b1c10 1209
.org 0xb1c12
	movs r0, #1	@ 000b1c12 0120
.org 0xb1c14
	ands r2, r0	@ 000b1c14 0240
.org 0xb1c16
	adds r0, r4, #0	@ 000b1c16 201c
.org 0xb1c18
	bl 0xe5d34	@ 000b1c18 34f08cf8
.org 0xb1c1c
	ldr r2, [pc, #52]	@ 000b1c1c 0d4a
.org 0xb1c1e
	ldrh r1, [r2, #12]	@ 000b1c1e 9189
.org 0xb1c20
	ldr r0, [pc, #52]	@ 000b1c20 0d48
.org 0xb1c22
	cmp r1, r0	@ 000b1c22 8142
.org 0xb1c24
	bhi.n 0xb1c2a	@ 000b1c24 01d8
.org 0xb1c26
	adds r0, r1, #1	@ 000b1c26 481c
.org 0xb1c28
	strh r0, [r2, #12]	@ 000b1c28 9081
.org 0xb1c2a
	adds r0, r5, #0	@ 000b1c2a 281c
.org 0xb1c2c
	adds r1, r4, #0	@ 000b1c2c 211c
.org 0xb1c2e
	bl 0x2abe0	@ 000b1c2e 78f7d7ff
.org 0xb1c32
	movs r0, #5	@ 000b1c32 0520
.org 0xb1c34
	movs r1, #25	@ 000b1c34 1921
.org 0xb1c36
	adds r2, r4, #0	@ 000b1c36 221c
.org 0xb1c38
	bl 0x2ab88	@ 000b1c38 78f7a6ff
.org 0xb1c3c
	ldr r1, [pc, #28]	@ 000b1c3c 0749
.org 0xb1c3e
	ldrb r0, [r5, #9]	@ 000b1c3e 687a
.org 0xb1c40
	lsls r0, r0, #2	@ 000b1c40 8000
.org 0xb1c42
	adds r0, r0, r1	@ 000b1c42 4018
.org 0xb1c44
	movs r1, #4	@ 000b1c44 0421
.org 0xb1c46
	str r1, [r5, #12]	@ 000b1c46 e960
.org 0xb1c48
	ldr r0, [r0, #0]	@ 000b1c48 0068
.org 0xb1c4a
	ldr r0, [r0, #16]	@ 000b1c4a 0069
.org 0xb1c4c
	str r0, [r5, #20]	@ 000b1c4c 6861
.org 0xb1c4e
	pop {r4, r5}	@ 000b1c4e 30bc
.org 0xb1c50
	pop {r0}	@ 000b1c50 01bc
.org 0xb1c52
	bx r0	@ 000b1c52 0047
