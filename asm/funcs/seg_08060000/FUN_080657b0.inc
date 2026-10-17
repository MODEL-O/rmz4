@ FUN_080657b0  entry 0x080657b0  size 50
.thumb
.org 0x657b0
FUN_080657b0:
	push {r4, r5, r6, r7, lr}	@ 000657b0 f0b5
.org 0x657b2
	sub sp, #24	@ 000657b2 86b0
.org 0x657b4
	adds r5, r0, #0	@ 000657b4 051c
.org 0x657b6
	ldr r0, [pc, #36]	@ 000657b6 0948
.org 0x657b8
	ldr r1, [r0, #4]	@ 000657b8 4168
.org 0x657ba
	ldr r0, [r0, #0]	@ 000657ba 0068
.org 0x657bc
	str r0, [sp, #0]	@ 000657bc 0090
.org 0x657be
	str r1, [sp, #4]	@ 000657be 0191
.org 0x657c0
	ldrb r0, [r5, #10]	@ 000657c0 a87a
.org 0x657c2
	lsrs r6, r0, #4	@ 000657c2 0609
.org 0x657c4
	movs r0, #1	@ 000657c4 0120
.org 0x657c6
	ands r6, r0	@ 000657c6 0640
.org 0x657c8
	ldrb r0, [r5, #15]	@ 000657c8 e87b
.org 0x657ca
	cmp r0, #7	@ 000657ca 0728
.org 0x657cc
	bls.n 0x657d0	@ 000657cc 00d9
.org 0x657ce
	b.n 0x659fa	@ 000657ce 14e1
.org 0x657d0
	lsls r0, r0, #2	@ 000657d0 8000
.org 0x657d2
	ldr r1, [pc, #12]	@ 000657d2 0349
.org 0x657d4
	adds r0, r0, r1	@ 000657d4 4018
.org 0x657d6
	ldr r0, [r0, #0]	@ 000657d6 0068
.org 0x657d8
	mov pc, r0	@ 000657d8 8746
.org 0x657da
	.byte 0x00	@ 000657da data
.org 0x657db
	.byte 0x00	@ 000657db data
.org 0x657dc
	.byte 0x7c,0x98,0x12,0x08	@ 000657dc data
.org 0x657e0
	.byte 0xe4,0x57,0x06,0x08	@ 000657e0 data
