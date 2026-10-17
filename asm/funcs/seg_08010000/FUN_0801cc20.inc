@ FUN_0801cc20  entry 0x0801cc20  size 124
.thumb
.org 0x1cc20
FUN_0801cc20:
	push {r4, r5, r6, r7, lr}	@ 0001cc20 f0b5
.org 0x1cc22
	mov r7, r9	@ 0001cc22 4f46
.org 0x1cc24
	mov r6, r8	@ 0001cc24 4646
.org 0x1cc26
	push {r6, r7}	@ 0001cc26 c0b4
.org 0x1cc28
	adds r4, r0, #0	@ 0001cc28 041c
.org 0x1cc2a
	lsls r1, r1, #24	@ 0001cc2a 0906
.org 0x1cc2c
	lsrs r1, r1, #24	@ 0001cc2c 090e
.org 0x1cc2e
	mov r8, r1	@ 0001cc2e 8846
.org 0x1cc30
	lsls r2, r2, #24	@ 0001cc30 1206
.org 0x1cc32
	lsrs r7, r2, #24	@ 0001cc32 170e
.org 0x1cc34
	lsls r3, r3, #24	@ 0001cc34 1b06
.org 0x1cc36
	lsrs r6, r3, #24	@ 0001cc36 1e0e
.org 0x1cc38
	movs r5, #0	@ 0001cc38 0025
.org 0x1cc3a
	movs r0, #8	@ 0001cc3a 0820
.org 0x1cc3c
	ldrsh r1, [r4, r0]	@ 0001cc3c 215e
.org 0x1cc3e
	movs r2, #10	@ 0001cc3e 0a22
.org 0x1cc40
	ldrsh r0, [r4, r2]	@ 0001cc40 a05e
.org 0x1cc42
	cmp r1, r0	@ 0001cc42 8142
.org 0x1cc44
	bne.n 0x1cc4a	@ 0001cc44 01d1
.org 0x1cc46
	movs r0, #0	@ 0001cc46 0020
.org 0x1cc48
	b.n 0x1cc90	@ 0001cc48 22e0
.org 0x1cc4a
	ldr r0, [r4, #12]	@ 0001cc4a e068
.org 0x1cc4c
	mov r9, r0	@ 0001cc4c 8146
.org 0x1cc4e
	adds r0, r4, #0	@ 0001cc4e 201c
.org 0x1cc50
	bl 0x54c4	@ 0001cc50 e8f738fc
.org 0x1cc54
	ldr r0, [r4, #12]	@ 0001cc54 e068
.org 0x1cc56
	ldr r0, [r0, #4]	@ 0001cc56 4068
.org 0x1cc58
	str r0, [r4, #12]	@ 0001cc58 e060
.org 0x1cc5a
	adds r1, r0, #0	@ 0001cc5a 011c
.org 0x1cc5c
	adds r0, r4, #0	@ 0001cc5c 201c
.org 0x1cc5e
	adds r0, #20	@ 0001cc5e 1430
.org 0x1cc60
	cmp r1, r0	@ 0001cc60 8142
.org 0x1cc62
	beq.n 0x1cc8a	@ 0001cc62 12d0
.org 0x1cc64
	adds r2, r0, #0	@ 0001cc64 021c
.org 0x1cc66
	ldrb r0, [r1, #9]	@ 0001cc66 487a
.org 0x1cc68
	cmp r0, r8	@ 0001cc68 4045
.org 0x1cc6a
	bne.n 0x1cc7e	@ 0001cc6a 08d1
.org 0x1cc6c
	ldrb r0, [r1, #16]	@ 0001cc6c 087c
.org 0x1cc6e
	cmp r0, r7	@ 0001cc6e b842
.org 0x1cc70
	bne.n 0x1cc7e	@ 0001cc70 05d1
.org 0x1cc72
	ldrb r0, [r1, #17]	@ 0001cc72 487c
.org 0x1cc74
	cmp r0, r6	@ 0001cc74 b042
.org 0x1cc76
	bne.n 0x1cc7e	@ 0001cc76 02d1
.org 0x1cc78
	adds r0, r5, #1	@ 0001cc78 681c
.org 0x1cc7a
	lsls r0, r0, #16	@ 0001cc7a 0004
.org 0x1cc7c
	lsrs r5, r0, #16	@ 0001cc7c 050c
.org 0x1cc7e
	ldr r0, [r4, #12]	@ 0001cc7e e068
.org 0x1cc80
	ldr r0, [r0, #4]	@ 0001cc80 4068
.org 0x1cc82
	str r0, [r4, #12]	@ 0001cc82 e060
.org 0x1cc84
	adds r1, r0, #0	@ 0001cc84 011c
.org 0x1cc86
	cmp r1, r2	@ 0001cc86 9142
.org 0x1cc88
	bne.n 0x1cc66	@ 0001cc88 edd1
.org 0x1cc8a
	mov r2, r9	@ 0001cc8a 4a46
.org 0x1cc8c
	str r2, [r4, #12]	@ 0001cc8c e260
.org 0x1cc8e
	adds r0, r5, #0	@ 0001cc8e 281c
.org 0x1cc90
	pop {r3, r4}	@ 0001cc90 18bc
.org 0x1cc92
	mov r8, r3	@ 0001cc92 9846
.org 0x1cc94
	mov r9, r4	@ 0001cc94 a146
.org 0x1cc96
	pop {r4, r5, r6, r7}	@ 0001cc96 f0bc
.org 0x1cc98
	pop {r1}	@ 0001cc98 02bc
.org 0x1cc9a
	bx r1	@ 0001cc9a 0847
