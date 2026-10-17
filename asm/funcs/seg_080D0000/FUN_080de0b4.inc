@ FUN_080de0b4  entry 0x080de0b4  size 104
.thumb
.org 0xde0b4
FUN_080de0b4:
	push {r4, r5, r6, lr}	@ 000de0b4 70b5
.org 0xde0b6
	sub sp, #8	@ 000de0b6 82b0
.org 0xde0b8
	adds r5, r0, #0	@ 000de0b8 051c
.org 0xde0ba
	ldr r0, [r5, #84]	@ 000de0ba 686d
.org 0xde0bc
	str r0, [sp, #0]	@ 000de0bc 0090
.org 0xde0be
	ldr r0, [r5, #88]	@ 000de0be a86d
.org 0xde0c0
	ldr r1, [pc, #88]	@ 000de0c0 1649
.org 0xde0c2
	adds r0, r0, r1	@ 000de0c2 4018
.org 0xde0c4
	str r0, [sp, #4]	@ 000de0c4 0190
.org 0xde0c6
	ldr r6, [pc, #88]	@ 000de0c6 164e
.org 0xde0c8
	ldrb r0, [r5, #10]	@ 000de0c8 a87a
.org 0xde0ca
	movs r4, #16	@ 000de0ca 1024
.org 0xde0cc
	adds r3, r4, #0	@ 000de0cc 231c
.org 0xde0ce
	ands r3, r0	@ 000de0ce 0340
.org 0xde0d0
	lsls r3, r3, #24	@ 000de0d0 1b06
.org 0xde0d2
	lsrs r3, r3, #24	@ 000de0d2 1b0e
.org 0xde0d4
	mov r0, sp	@ 000de0d4 6846
.org 0xde0d6
	adds r1, r6, #0	@ 000de0d6 311c
.org 0xde0d8
	movs r2, #0	@ 000de0d8 0022
.org 0xde0da
	bl 0xd4c8c	@ 000de0da f6f7d7fd
.org 0xde0de
	adds r6, #28	@ 000de0de 1c36
.org 0xde0e0
	ldrb r0, [r5, #10]	@ 000de0e0 a87a
.org 0xde0e2
	ands r4, r0	@ 000de0e2 0440
.org 0xde0e4
	lsls r4, r4, #24	@ 000de0e4 2406
.org 0xde0e6
	lsrs r4, r4, #24	@ 000de0e6 240e
.org 0xde0e8
	mov r0, sp	@ 000de0e8 6846
.org 0xde0ea
	adds r1, r6, #0	@ 000de0ea 311c
.org 0xde0ec
	movs r2, #0	@ 000de0ec 0022
.org 0xde0ee
	adds r3, r4, #0	@ 000de0ee 231c
.org 0xde0f0
	bl 0xd4c8c	@ 000de0f0 f6f7ccfd
.org 0xde0f4
	movs r0, #1	@ 000de0f4 0120
.org 0xde0f6
	mov r1, sp	@ 000de0f6 6946
.org 0xde0f8
	bl 0xd0c88	@ 000de0f8 f2f7c6fd
.org 0xde0fc
	movs r0, #42	@ 000de0fc 2a20
.org 0xde0fe
	bl 0x2b10	@ 000de0fe 24f707fd
.org 0xde102
	ldr r1, [pc, #32]	@ 000de102 0849
.org 0xde104
	ldrb r0, [r5, #9]	@ 000de104 687a
.org 0xde106
	lsls r0, r0, #2	@ 000de106 8000
.org 0xde108
	adds r0, r0, r1	@ 000de108 4018
.org 0xde10a
	movs r1, #4	@ 000de10a 0421
.org 0xde10c
	str r1, [r5, #12]	@ 000de10c e960
.org 0xde10e
	ldr r0, [r0, #0]	@ 000de10e 0068
.org 0xde110
	ldr r0, [r0, #16]	@ 000de110 0069
.org 0xde112
	str r0, [r5, #20]	@ 000de112 6861
.org 0xde114
	add sp, #8	@ 000de114 02b0
.org 0xde116
	pop {r4, r5, r6}	@ 000de116 70bc
.org 0xde118
	pop {r0}	@ 000de118 01bc
.org 0xde11a
	bx r0	@ 000de11a 0047
