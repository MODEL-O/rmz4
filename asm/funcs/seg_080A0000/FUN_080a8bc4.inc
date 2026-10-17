@ FUN_080a8bc4  entry 0x080a8bc4  size 108
.thumb
.org 0xa8bc4
FUN_080a8bc4:
	push {r4, r5, lr}	@ 000a8bc4 30b5
.org 0xa8bc6
	adds r4, r0, #0	@ 000a8bc6 041c
.org 0xa8bc8
	bl 0x1cc9c	@ 000a8bc8 74f768f8
.org 0xa8bcc
	ldrb r1, [r4, #10]	@ 000a8bcc a17a
.org 0xa8bce
	movs r0, #1	@ 000a8bce 0120
.org 0xa8bd0
	orrs r0, r1	@ 000a8bd0 0843
.org 0xa8bd2
	movs r1, #2	@ 000a8bd2 0221
.org 0xa8bd4
	orrs r0, r1	@ 000a8bd4 0843
.org 0xa8bd6
	strb r0, [r4, #10]	@ 000a8bd6 a072
.org 0xa8bd8
	adds r0, r4, #0	@ 000a8bd8 201c
.org 0xa8bda
	adds r0, #34	@ 000a8bda 2230
.org 0xa8bdc
	movs r5, #1	@ 000a8bdc 0125
.org 0xa8bde
	strb r5, [r0, #0]	@ 000a8bde 0570
.org 0xa8be0
	ldr r1, [pc, #76]	@ 000a8be0 1349
.org 0xa8be2
	adds r0, r4, #0	@ 000a8be2 201c
.org 0xa8be4
	bl 0x1cf00	@ 000a8be4 74f78cf9
.org 0xa8be8
	adds r0, r4, #0	@ 000a8be8 201c
.org 0xa8bea
	bl 0x1cff0	@ 000a8bea 74f701fa
.org 0xa8bee
	movs r2, #0	@ 000a8bee 0022
.org 0xa8bf0
	ldrb r1, [r4, #10]	@ 000a8bf0 a17a
.org 0xa8bf2
	movs r0, #239	@ 000a8bf2 ef20
.org 0xa8bf4
	ands r0, r1	@ 000a8bf4 0840
.org 0xa8bf6
	strb r0, [r4, #10]	@ 000a8bf6 a072
.org 0xa8bf8
	adds r0, r4, #0	@ 000a8bf8 201c
.org 0xa8bfa
	adds r0, #76	@ 000a8bfa 4c30
.org 0xa8bfc
	strb r2, [r0, #0]	@ 000a8bfc 0270
.org 0xa8bfe
	adds r2, r4, #0	@ 000a8bfe 221c
.org 0xa8c00
	adds r2, #74	@ 000a8c00 4a32
.org 0xa8c02
	ldrb r1, [r2, #0]	@ 000a8c02 1178
.org 0xa8c04
	movs r0, #17	@ 000a8c04 1120
.org 0xa8c06
	negs r0, r0	@ 000a8c06 4042
.org 0xa8c08
	ands r0, r1	@ 000a8c08 0840
.org 0xa8c0a
	strb r0, [r2, #0]	@ 000a8c0a 1070
.org 0xa8c0c
	adds r1, r4, #0	@ 000a8c0c 211c
.org 0xa8c0e
	adds r1, #37	@ 000a8c0e 2531
.org 0xa8c10
	movs r0, #21	@ 000a8c10 1520
.org 0xa8c12
	strb r0, [r1, #0]	@ 000a8c12 0870
.org 0xa8c14
	ldr r1, [pc, #28]	@ 000a8c14 0749
.org 0xa8c16
	ldrb r0, [r4, #9]	@ 000a8c16 607a
.org 0xa8c18
	lsls r0, r0, #2	@ 000a8c18 8000
.org 0xa8c1a
	adds r0, r0, r1	@ 000a8c1a 4018
.org 0xa8c1c
	str r5, [r4, #12]	@ 000a8c1c e560
.org 0xa8c1e
	ldr r0, [r0, #0]	@ 000a8c1e 0068
.org 0xa8c20
	ldr r0, [r0, #4]	@ 000a8c20 4068
.org 0xa8c22
	str r0, [r4, #20]	@ 000a8c22 6061
.org 0xa8c24
	adds r0, r4, #0	@ 000a8c24 201c
.org 0xa8c26
	bl 0xa896c	@ 000a8c26 fff7a1fe
.org 0xa8c2a
	pop {r4, r5}	@ 000a8c2a 30bc
.org 0xa8c2c
	pop {r0}	@ 000a8c2c 01bc
.org 0xa8c2e
	bx r0	@ 000a8c2e 0047
