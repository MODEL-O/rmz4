@ FUN_08033ca0  entry 0x08033ca0  size 116
.thumb
.org 0x33ca0
FUN_08033ca0:
	push {r4, r5, lr}	@ 00033ca0 30b5
.org 0x33ca2
	adds r4, r0, #0	@ 00033ca2 041c
.org 0x33ca4
	movs r0, #129	@ 00033ca4 8120
.org 0x33ca6
	lsls r0, r0, #1	@ 00033ca6 4000
.org 0x33ca8
	adds r5, r4, r0	@ 00033ca8 2518
.org 0x33caa
	ldrb r0, [r5, #0]	@ 00033caa 2878
.org 0x33cac
	cmp r0, #0	@ 00033cac 0028
.org 0x33cae
	bne.n 0x33cbc	@ 00033cae 05d1
.org 0x33cb0
	movs r1, #152	@ 00033cb0 9821
.org 0x33cb2
	lsls r1, r1, #5	@ 00033cb2 4901
.org 0x33cb4
	adds r0, r4, #0	@ 00033cb4 201c
.org 0x33cb6
	bl 0x1cf00	@ 00033cb6 e9f723f9
.org 0x33cba
	b.n 0x33ce2	@ 00033cba 12e0
.org 0x33cbc
	movs r1, #152	@ 00033cbc 9821
.org 0x33cbe
	lsls r1, r1, #5	@ 00033cbe 4901
.org 0x33cc0
	adds r0, r4, #0	@ 00033cc0 201c
.org 0x33cc2
	bl 0x3a3b0	@ 00033cc2 06f075fb
.org 0x33cc6
	ldrb r0, [r5, #0]	@ 00033cc6 2878
.org 0x33cc8
	cmp r0, #1	@ 00033cc8 0128
.org 0x33cca
	bne.n 0x33ce8	@ 00033cca 0dd1
.org 0x33ccc
	adds r0, r4, #0	@ 00033ccc 201c
.org 0x33cce
	adds r0, #114	@ 00033cce 7230
.org 0x33cd0
	ldrb r0, [r0, #0]	@ 00033cd0 0078
.org 0x33cd2
	lsls r0, r0, #24	@ 00033cd2 0006
.org 0x33cd4
	asrs r0, r0, #24	@ 00033cd4 0016
.org 0x33cd6
	cmp r0, #1	@ 00033cd6 0128
.org 0x33cd8
	bgt.n 0x33ce8	@ 00033cd8 06dc
.org 0x33cda
	adds r0, r4, #0	@ 00033cda 201c
.org 0x33cdc
	movs r1, #13	@ 00033cdc 0d21
.org 0x33cde
	bl 0x3c464	@ 00033cde 08f0c1fb
.org 0x33ce2
	ldrb r0, [r5, #0]	@ 00033ce2 2878
.org 0x33ce4
	adds r0, #1	@ 00033ce4 0130
.org 0x33ce6
	strb r0, [r5, #0]	@ 00033ce6 2870
.org 0x33ce8
	adds r0, r4, #0	@ 00033ce8 201c
.org 0x33cea
	adds r0, #115	@ 00033cea 7330
.org 0x33cec
	ldrb r0, [r0, #0]	@ 00033cec 0078
.org 0x33cee
	cmp r0, #3	@ 00033cee 0328
.org 0x33cf0
	bne.n 0x33d0e	@ 00033cf0 0dd1
.org 0x33cf2
	movs r0, #128	@ 00033cf2 8020
.org 0x33cf4
	lsls r0, r0, #1	@ 00033cf4 4000
.org 0x33cf6
	adds r1, r4, r0	@ 00033cf6 2118
.org 0x33cf8
	movs r0, #0	@ 00033cf8 0020
.org 0x33cfa
	strb r0, [r1, #0]	@ 00033cfa 0870
.org 0x33cfc
	adds r0, r4, #0	@ 00033cfc 201c
.org 0x33cfe
	bl 0x2b7d8	@ 00033cfe f7f76bfd
.org 0x33d02
	adds r1, r0, #0	@ 00033d02 011c
.org 0x33d04
	lsls r1, r1, #16	@ 00033d04 0904
.org 0x33d06
	lsrs r1, r1, #16	@ 00033d06 090c
.org 0x33d08
	adds r0, r4, #0	@ 00033d08 201c
.org 0x33d0a
	bl 0x1cf00	@ 00033d0a e9f7f9f8
.org 0x33d0e
	pop {r4, r5}	@ 00033d0e 30bc
.org 0x33d10
	pop {r0}	@ 00033d10 01bc
.org 0x33d12
	bx r0	@ 00033d12 0047
