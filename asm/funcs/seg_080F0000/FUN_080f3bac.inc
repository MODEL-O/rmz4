@ FUN_080f3bac  entry 0x080f3bac  size 92
.thumb
.org 0xf3bac
FUN_080f3bac:
	push {r4, lr}	@ 000f3bac 10b5
.org 0xf3bae
	adds r4, r0, #0	@ 000f3bae 041c
.org 0xf3bb0
	ldrb r0, [r4, #13]	@ 000f3bb0 607b
.org 0xf3bb2
	cmp r0, #0	@ 000f3bb2 0028
.org 0xf3bb4
	beq.n 0xf3bbc	@ 000f3bb4 02d0
.org 0xf3bb6
	cmp r0, #1	@ 000f3bb6 0128
.org 0xf3bb8
	beq.n 0xf3bfc	@ 000f3bb8 20d0
.org 0xf3bba
	b.n 0xf3c02	@ 000f3bba 22e0
.org 0xf3bbc
	ldrb r1, [r4, #10]	@ 000f3bbc a17a
.org 0xf3bbe
	movs r0, #1	@ 000f3bbe 0120
.org 0xf3bc0
	orrs r0, r1	@ 000f3bc0 0843
.org 0xf3bc2
	strb r0, [r4, #10]	@ 000f3bc2 a072
.org 0xf3bc4
	adds r0, r4, #0	@ 000f3bc4 201c
.org 0xf3bc6
	bl 0x1cc9c	@ 000f3bc6 29f769f8
.org 0xf3bca
	movs r1, #196	@ 000f3bca c421
.org 0xf3bcc
	lsls r1, r1, #6	@ 000f3bcc 8901
.org 0xf3bce
	adds r0, r4, #0	@ 000f3bce 201c
.org 0xf3bd0
	bl 0x1cf00	@ 000f3bd0 29f796f9
.org 0xf3bd4
	movs r2, #1	@ 000f3bd4 0122
.org 0xf3bd6
	ldrb r1, [r4, #10]	@ 000f3bd6 a17a
.org 0xf3bd8
	movs r0, #16	@ 000f3bd8 1020
.org 0xf3bda
	orrs r0, r1	@ 000f3bda 0843
.org 0xf3bdc
	strb r0, [r4, #10]	@ 000f3bdc a072
.org 0xf3bde
	adds r0, r4, #0	@ 000f3bde 201c
.org 0xf3be0
	adds r0, #76	@ 000f3be0 4c30
.org 0xf3be2
	strb r2, [r0, #0]	@ 000f3be2 0270
.org 0xf3be4
	adds r3, r4, #0	@ 000f3be4 231c
.org 0xf3be6
	adds r3, #74	@ 000f3be6 4a33
.org 0xf3be8
	movs r2, #16	@ 000f3be8 1022
.org 0xf3bea
	ldrb r1, [r3, #0]	@ 000f3bea 1978
.org 0xf3bec
	movs r0, #17	@ 000f3bec 1120
.org 0xf3bee
	negs r0, r0	@ 000f3bee 4042
.org 0xf3bf0
	ands r0, r1	@ 000f3bf0 0840
.org 0xf3bf2
	orrs r0, r2	@ 000f3bf2 1043
.org 0xf3bf4
	strb r0, [r3, #0]	@ 000f3bf4 1870
.org 0xf3bf6
	ldrb r0, [r4, #13]	@ 000f3bf6 607b
.org 0xf3bf8
	adds r0, #1	@ 000f3bf8 0130
.org 0xf3bfa
	strb r0, [r4, #13]	@ 000f3bfa 6073
.org 0xf3bfc
	adds r0, r4, #0	@ 000f3bfc 201c
.org 0xf3bfe
	bl 0x1cff0	@ 000f3bfe 29f7f7f9
.org 0xf3c02
	pop {r4}	@ 000f3c02 10bc
.org 0xf3c04
	pop {r0}	@ 000f3c04 01bc
.org 0xf3c06
	bx r0	@ 000f3c06 0047
