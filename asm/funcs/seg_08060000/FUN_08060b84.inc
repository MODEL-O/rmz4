@ FUN_08060b84  entry 0x08060b84  size 164
.thumb
.org 0x60b84
FUN_08060b84:
	push {r4, lr}	@ 00060b84 10b5
.org 0x60b86
	adds r4, r0, #0	@ 00060b86 041c
.org 0x60b88
	ldrb r0, [r4, #14]	@ 00060b88 a07b
.org 0x60b8a
	cmp r0, #0	@ 00060b8a 0028
.org 0x60b8c
	bne.n 0x60ba8	@ 00060b8c 0cd1
.org 0x60b8e
	adds r1, r4, #0	@ 00060b8e 211c
.org 0x60b90
	adds r1, #180	@ 00060b90 b431
.org 0x60b92
	movs r0, #20	@ 00060b92 1420
.org 0x60b94
	strb r0, [r1, #28]	@ 00060b94 0877
.org 0x60b96
	ldr r1, [pc, #104]	@ 00060b96 1a49
.org 0x60b98
	adds r0, r4, #0	@ 00060b98 201c
.org 0x60b9a
	bl 0x1cf00	@ 00060b9a bcf7b1f9
.org 0x60b9e
	ldr r0, [pc, #100]	@ 00060b9e 1948
.org 0x60ba0
	str r0, [r4, #96]	@ 00060ba0 2066
.org 0x60ba2
	ldrb r0, [r4, #14]	@ 00060ba2 a07b
.org 0x60ba4
	adds r0, #1	@ 00060ba4 0130
.org 0x60ba6
	strb r0, [r4, #14]	@ 00060ba6 a073
.org 0x60ba8
	adds r0, r4, #0	@ 00060ba8 201c
.org 0x60baa
	bl 0x1cff0	@ 00060baa bcf721fa
.org 0x60bae
	adds r0, r4, #0	@ 00060bae 201c
.org 0x60bb0
	adds r0, #113	@ 00060bb0 7130
.org 0x60bb2
	ldrb r0, [r0, #0]	@ 00060bb2 0078
.org 0x60bb4
	lsls r0, r0, #24	@ 00060bb4 0006
.org 0x60bb6
	asrs r0, r0, #24	@ 00060bb6 0016
.org 0x60bb8
	cmp r0, #0	@ 00060bb8 0028
.org 0x60bba
	beq.n 0x60c20	@ 00060bba 31d0
.org 0x60bbc
	movs r3, #0	@ 00060bbc 0023
.org 0x60bbe
	ldr r0, [pc, #72]	@ 00060bbe 1248
.org 0x60bc0
	ldr r2, [r0, #0]	@ 00060bc0 0268
.org 0x60bc2
	ldr r1, [r4, #84]	@ 00060bc2 616d
.org 0x60bc4
	ldr r0, [r2, #84]	@ 00060bc4 506d
.org 0x60bc6
	cmp r1, r0	@ 00060bc6 8142
.org 0x60bc8
	bge.n 0x60bcc	@ 00060bc8 00da
.org 0x60bca
	movs r3, #1	@ 00060bca 0123
.org 0x60bcc
	adds r0, r4, #0	@ 00060bcc 201c
.org 0x60bce
	adds r0, #76	@ 00060bce 4c30
.org 0x60bd0
	strb r3, [r0, #0]	@ 00060bd0 0370
.org 0x60bd2
	movs r3, #0	@ 00060bd2 0023
.org 0x60bd4
	ldr r1, [r4, #84]	@ 00060bd4 616d
.org 0x60bd6
	ldr r0, [r2, #84]	@ 00060bd6 506d
.org 0x60bd8
	cmp r1, r0	@ 00060bd8 8142
.org 0x60bda
	bge.n 0x60bde	@ 00060bda 00da
.org 0x60bdc
	movs r3, #1	@ 00060bdc 0123
.org 0x60bde
	movs r0, #74	@ 00060bde 4a20
.org 0x60be0
	adds r0, r0, r4	@ 00060be0 0019
.org 0x60be2
	mov ip, r0	@ 00060be2 8446
.org 0x60be4
	lsls r2, r3, #4	@ 00060be4 1a01
.org 0x60be6
	ldrb r1, [r0, #0]	@ 00060be6 0178
.org 0x60be8
	movs r0, #17	@ 00060be8 1120
.org 0x60bea
	negs r0, r0	@ 00060bea 4042
.org 0x60bec
	ands r0, r1	@ 00060bec 0840
.org 0x60bee
	orrs r0, r2	@ 00060bee 1043
.org 0x60bf0
	mov r1, ip	@ 00060bf0 6146
.org 0x60bf2
	strb r0, [r1, #0]	@ 00060bf2 0870
.org 0x60bf4
	cmp r3, #0	@ 00060bf4 002b
.org 0x60bf6
	beq.n 0x60c0c	@ 00060bf6 09d0
.org 0x60bf8
	ldrb r0, [r4, #10]	@ 00060bf8 a07a
.org 0x60bfa
	movs r1, #16	@ 00060bfa 1021
.org 0x60bfc
	orrs r0, r1	@ 00060bfc 0843
.org 0x60bfe
	b.n 0x60c12	@ 00060bfe 08e0
.org 0x60c00
	.byte 0x02,0xa5,0x00,0x00	@ 00060c00 data
.org 0x60c04
	.byte 0x80,0xf9,0xff,0xff	@ 00060c04 data
.org 0x60c08
	.byte 0xf0,0xdb,0x02,0x02	@ 00060c08 data
.org 0x60c0c
	ldrb r1, [r4, #10]	@ 00060c0c a17a
.org 0x60c0e
	movs r0, #239	@ 00060c0e ef20
.org 0x60c10
	ands r0, r1	@ 00060c10 0840
.org 0x60c12
	strb r0, [r4, #10]	@ 00060c12 a072
.org 0x60c14
	ldr r0, [r4, #88]	@ 00060c14 a06d
.org 0x60c16
	ldr r1, [r4, #96]	@ 00060c16 216e
.org 0x60c18
	adds r0, r0, r1	@ 00060c18 4018
.org 0x60c1a
	str r0, [r4, #88]	@ 00060c1a a065
.org 0x60c1c
	adds r1, #64	@ 00060c1c 4031
.org 0x60c1e
	str r1, [r4, #96]	@ 00060c1e 2166
.org 0x60c20
	ldr r0, [r4, #96]	@ 00060c20 206e
.org 0x60c22
	cmp r0, #0	@ 00060c22 0028
.org 0x60c24
	ble.n 0x60c2e	@ 00060c24 03dd
.org 0x60c26
	movs r1, #0	@ 00060c26 0021
