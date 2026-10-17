@ FUN_080e6c70  entry 0x080e6c70  size 194
.thumb
.org 0xe6c70
FUN_080e6c70:
	push {r4, r5, r6, lr}	@ 000e6c70 70b5
.org 0xe6c72
	sub sp, #8	@ 000e6c72 82b0
.org 0xe6c74
	adds r5, r0, #0	@ 000e6c74 051c
.org 0xe6c76
	ldrb r6, [r5, #17]	@ 000e6c76 6e7c
.org 0xe6c78
	cmp r6, #0	@ 000e6c78 002e
.org 0xe6c7a
	bne.n 0xe6cd4	@ 000e6c7a 2bd1
.org 0xe6c7c
	adds r0, #84	@ 000e6c7c 5430
.org 0xe6c7e
	ldrb r2, [r5, #10]	@ 000e6c7e aa7a
.org 0xe6c80
	lsrs r2, r2, #4	@ 000e6c80 1209
.org 0xe6c82
	movs r4, #1	@ 000e6c82 0124
.org 0xe6c84
	ands r2, r4	@ 000e6c84 2240
.org 0xe6c86
	movs r1, #1	@ 000e6c86 0121
.org 0xe6c88
	bl 0xe6b5c	@ 000e6c88 fff768ff
.org 0xe6c8c
	ldr r0, [r5, #84]	@ 000e6c8c 686d
.org 0xe6c8e
	str r0, [sp, #0]	@ 000e6c8e 0090
.org 0xe6c90
	ldr r0, [r5, #88]	@ 000e6c90 a86d
.org 0xe6c92
	ldr r1, [pc, #56]	@ 000e6c92 0e49
.org 0xe6c94
	adds r0, r0, r1	@ 000e6c94 4018
.org 0xe6c96
	str r0, [sp, #4]	@ 000e6c96 0190
.org 0xe6c98
	movs r2, #128	@ 000e6c98 8022
.org 0xe6c9a
	lsls r2, r2, #2	@ 000e6c9a 9200
.org 0xe6c9c
	ldrb r3, [r5, #10]	@ 000e6c9c ab7a
.org 0xe6c9e
	lsrs r3, r3, #4	@ 000e6c9e 1b09
.org 0xe6ca0
	ands r3, r4	@ 000e6ca0 2340
.org 0xe6ca2
	movs r0, #0	@ 000e6ca2 0020
.org 0xe6ca4
	mov r1, sp	@ 000e6ca4 6946
.org 0xe6ca6
	bl 0xd0dc4	@ 000e6ca6 eaf78df8
.org 0xe6caa
	ldr r0, [r5, #88]	@ 000e6caa a86d
.org 0xe6cac
	ldr r3, [pc, #32]	@ 000e6cac 084b
.org 0xe6cae
	adds r0, r0, r3	@ 000e6cae c018
.org 0xe6cb0
	str r0, [sp, #4]	@ 000e6cb0 0190
.org 0xe6cb2
	movs r0, #2	@ 000e6cb2 0220
.org 0xe6cb4
	mov r1, sp	@ 000e6cb4 6946
.org 0xe6cb6
	bl 0xd0c88	@ 000e6cb6 e9f7e7ff
.org 0xe6cba
	str r6, [r5, #92]	@ 000e6cba ee65
.org 0xe6cbc
	str r6, [r5, #96]	@ 000e6cbc 2e66
.org 0xe6cbe
	movs r0, #20	@ 000e6cbe 1420
.org 0xe6cc0
	strb r0, [r5, #18]	@ 000e6cc0 a874
.org 0xe6cc2
	adds r1, r5, #0	@ 000e6cc2 291c
.org 0xe6cc4
	adds r1, #37	@ 000e6cc4 2531
.org 0xe6cc6
	movs r0, #24	@ 000e6cc6 1820
.org 0xe6cc8
	strb r0, [r1, #0]	@ 000e6cc8 0870
.org 0xe6cca
	b.n 0xe6d1e	@ 000e6cca 28e0
.org 0xe6ccc
	.byte 0x00,0xf1,0xff,0xff	@ 000e6ccc data
.org 0xe6cd0
	.byte 0x00,0xec,0xff,0xff	@ 000e6cd0 data
.org 0xe6cd4
	movs r2, #0	@ 000e6cd4 0022
.org 0xe6cd6
	str r2, [r5, #92]	@ 000e6cd6 ea65
.org 0xe6cd8
	str r2, [r5, #96]	@ 000e6cd8 2a66
.org 0xe6cda
	ldr r1, [pc, #96]	@ 000e6cda 1849
.org 0xe6cdc
	adds r0, r1, #0	@ 000e6cdc 081c
.org 0xe6cde
	adds r0, #160	@ 000e6cde a030
.org 0xe6ce0
	movs r4, #0	@ 000e6ce0 0024
.org 0xe6ce2
	ldrsh r0, [r0, r4]	@ 000e6ce2 005f
.org 0xe6ce4
	cmp r0, #0	@ 000e6ce4 0028
.org 0xe6ce6
	bge.n 0xe6cea	@ 000e6ce6 00da
.org 0xe6ce8
	adds r0, #15	@ 000e6ce8 0f30
.org 0xe6cea
	asrs r3, r0, #4	@ 000e6cea 0311
.org 0xe6cec
	str r3, [r5, #100]	@ 000e6cec 6b66
.org 0xe6cee
	movs r4, #32	@ 000e6cee 2024
.org 0xe6cf0
	ldrsh r0, [r1, r4]	@ 000e6cf0 085f
.org 0xe6cf2
	cmp r0, #0	@ 000e6cf2 0028
.org 0xe6cf4
	bge.n 0xe6cf8	@ 000e6cf4 00da
.org 0xe6cf6
	adds r0, #15	@ 000e6cf6 0f30
.org 0xe6cf8
	asrs r0, r0, #4	@ 000e6cf8 0011
.org 0xe6cfa
	str r0, [r5, #104]	@ 000e6cfa a866
.org 0xe6cfc
	str r2, [r5, #120]	@ 000e6cfc aa67
.org 0xe6cfe
	str r2, [r5, #96]	@ 000e6cfe 2a66
.org 0xe6d00
	ldrb r1, [r5, #10]	@ 000e6d00 a97a
.org 0xe6d02
	movs r0, #16	@ 000e6d02 1020
.org 0xe6d04
	ands r0, r1	@ 000e6d04 0840
.org 0xe6d06
	cmp r0, #0	@ 000e6d06 0028
.org 0xe6d08
	beq.n 0xe6d1a	@ 000e6d08 07d0
.org 0xe6d0a
	lsls r0, r3, #8	@ 000e6d0a 1802
.org 0xe6d0c
	negs r0, r0	@ 000e6d0c 4042
.org 0xe6d0e
	cmp r0, #0	@ 000e6d0e 0028
.org 0xe6d10
	bge.n 0xe6d14	@ 000e6d10 00da
.org 0xe6d12
	adds r0, #255	@ 000e6d12 ff30
.org 0xe6d14
	asrs r0, r0, #8	@ 000e6d14 0012
.org 0xe6d16
	str r0, [r5, #100]	@ 000e6d16 6866
.org 0xe6d18
	str r2, [r5, #92]	@ 000e6d18 ea65
.org 0xe6d1a
	movs r0, #255	@ 000e6d1a ff20
.org 0xe6d1c
	strb r0, [r5, #18]	@ 000e6d1c a874
.org 0xe6d1e
	ldr r1, [pc, #32]	@ 000e6d1e 0849
.org 0xe6d20
	ldrb r0, [r5, #17]	@ 000e6d20 687c
.org 0xe6d22
	lsls r0, r0, #1	@ 000e6d22 4000
.org 0xe6d24
	adds r0, r0, r1	@ 000e6d24 4018
.org 0xe6d26
	ldrh r1, [r0, #0]	@ 000e6d26 0188
.org 0xe6d28
	adds r0, r5, #0	@ 000e6d28 281c
.org 0xe6d2a
	bl 0x1cf00	@ 000e6d2a 36f7e9f8
.org 0xe6d2e
	movs r0, #0	@ 000e6d2e 0020
.org 0xe6d30
	strb r0, [r5, #13]	@ 000e6d30 6873
