@ FUN_080f59c8  entry 0x080f59c8  size 178
.thumb
.org 0xf59c8
FUN_080f59c8:
	push {r4, r5, r6, r7, lr}	@ 000f59c8 f0b5
.org 0xf59ca
	mov r7, r8	@ 000f59ca 4746
.org 0xf59cc
	push {r7}	@ 000f59cc 80b4
.org 0xf59ce
	adds r7, r0, #0	@ 000f59ce 071c
.org 0xf59d0
	ldr r0, [pc, #168]	@ 000f59d0 2a48
.org 0xf59d2
	adds r1, r7, #0	@ 000f59d2 391c
.org 0xf59d4
	adds r1, #84	@ 000f59d4 5431
.org 0xf59d6
	bl 0x1fb14	@ 000f59d6 2af79df8
.org 0xf59da
	movs r1, #240	@ 000f59da f021
.org 0xf59dc
	lsls r1, r1, #9	@ 000f59dc 4902
.org 0xf59de
	cmp r0, r1	@ 000f59de 8842
.org 0xf59e0
	bls.n 0xf5a70	@ 000f59e0 46d9
.org 0xf59e2
	adds r0, r7, #0	@ 000f59e2 381c
.org 0xf59e4
	adds r0, #180	@ 000f59e4 b430
.org 0xf59e6
	ldr r0, [r0, #0]	@ 000f59e6 0068
.org 0xf59e8
	mov ip, r0	@ 000f59e8 8446
.org 0xf59ea
	ldrb r2, [r0, #10]	@ 000f59ea 827a
.org 0xf59ec
	movs r1, #254	@ 000f59ec fe21
.org 0xf59ee
	adds r0, r1, #0	@ 000f59ee 081c
.org 0xf59f0
	ands r0, r2	@ 000f59f0 1040
.org 0xf59f2
	movs r4, #0	@ 000f59f2 0024
.org 0xf59f4
	movs r2, #253	@ 000f59f4 fd22
.org 0xf59f6
	mov r8, r2	@ 000f59f6 9046
.org 0xf59f8
	ands r0, r2	@ 000f59f8 1040
.org 0xf59fa
	mov r5, ip	@ 000f59fa 6546
.org 0xf59fc
	strb r0, [r5, #10]	@ 000f59fc a872
.org 0xf59fe
	mov r0, ip	@ 000f59fe 6046
.org 0xf5a00
	adds r0, #140	@ 000f5a00 8c30
.org 0xf5a02
	str r4, [r0, #0]	@ 000f5a02 0460
.org 0xf5a04
	adds r0, #4	@ 000f5a04 0430
.org 0xf5a06
	str r4, [r0, #0]	@ 000f5a06 0460
.org 0xf5a08
	adds r0, #4	@ 000f5a08 0430
.org 0xf5a0a
	strb r4, [r0, #0]	@ 000f5a0a 0470
.org 0xf5a0c
	ldrb r2, [r5, #10]	@ 000f5a0c aa7a
.org 0xf5a0e
	movs r3, #251	@ 000f5a0e fb23
.org 0xf5a10
	adds r0, r3, #0	@ 000f5a10 181c
.org 0xf5a12
	ands r0, r2	@ 000f5a12 1040
.org 0xf5a14
	strb r0, [r5, #10]	@ 000f5a14 a872
.org 0xf5a16
	ldr r2, [pc, #104]	@ 000f5a16 1a4a
.org 0xf5a18
	ldrb r0, [r5, #9]	@ 000f5a18 687a
.org 0xf5a1a
	lsls r0, r0, #2	@ 000f5a1a 8000
.org 0xf5a1c
	adds r0, r0, r2	@ 000f5a1c 8018
.org 0xf5a1e
	movs r5, #3	@ 000f5a1e 0325
.org 0xf5a20
	mov r6, ip	@ 000f5a20 6646
.org 0xf5a22
	str r5, [r6, #12]	@ 000f5a22 f560
.org 0xf5a24
	ldr r0, [r0, #0]	@ 000f5a24 0068
.org 0xf5a26
	ldr r0, [r0, #12]	@ 000f5a26 c068
.org 0xf5a28
	str r0, [r6, #20]	@ 000f5a28 7061
.org 0xf5a2a
	adds r0, r7, #0	@ 000f5a2a 381c
.org 0xf5a2c
	adds r0, #184	@ 000f5a2c b830
.org 0xf5a2e
	ldr r0, [r0, #0]	@ 000f5a2e 0068
.org 0xf5a30
	mov ip, r0	@ 000f5a30 8446
.org 0xf5a32
	ldrb r0, [r0, #10]	@ 000f5a32 807a
.org 0xf5a34
	ands r1, r0	@ 000f5a34 0140
.org 0xf5a36
	mov r0, r8	@ 000f5a36 4046
.org 0xf5a38
	ands r1, r0	@ 000f5a38 0140
.org 0xf5a3a
	mov r6, ip	@ 000f5a3a 6646
.org 0xf5a3c
	strb r1, [r6, #10]	@ 000f5a3c b172
.org 0xf5a3e
	mov r0, ip	@ 000f5a3e 6046
.org 0xf5a40
	adds r0, #140	@ 000f5a40 8c30
.org 0xf5a42
	str r4, [r0, #0]	@ 000f5a42 0460
.org 0xf5a44
	adds r0, #4	@ 000f5a44 0430
.org 0xf5a46
	str r4, [r0, #0]	@ 000f5a46 0460
.org 0xf5a48
	adds r0, #4	@ 000f5a48 0430
.org 0xf5a4a
	strb r4, [r0, #0]	@ 000f5a4a 0470
.org 0xf5a4c
	ldrb r0, [r6, #10]	@ 000f5a4c b07a
.org 0xf5a4e
	ands r3, r0	@ 000f5a4e 0340
.org 0xf5a50
	strb r3, [r6, #10]	@ 000f5a50 b372
.org 0xf5a52
	ldrb r0, [r6, #9]	@ 000f5a52 707a
.org 0xf5a54
	lsls r0, r0, #2	@ 000f5a54 8000
.org 0xf5a56
	adds r0, r0, r2	@ 000f5a56 8018
.org 0xf5a58
	str r5, [r6, #12]	@ 000f5a58 f560
.org 0xf5a5a
	ldr r0, [r0, #0]	@ 000f5a5a 0068
.org 0xf5a5c
	ldr r0, [r0, #12]	@ 000f5a5c c068
.org 0xf5a5e
	str r0, [r6, #20]	@ 000f5a5e 7061
.org 0xf5a60
	ldrb r0, [r7, #9]	@ 000f5a60 787a
.org 0xf5a62
	lsls r0, r0, #2	@ 000f5a62 8000
.org 0xf5a64
	adds r0, r0, r2	@ 000f5a64 8018
.org 0xf5a66
	movs r1, #4	@ 000f5a66 0421
.org 0xf5a68
	str r1, [r7, #12]	@ 000f5a68 f960
.org 0xf5a6a
	ldr r0, [r0, #0]	@ 000f5a6a 0068
.org 0xf5a6c
	ldr r0, [r0, #16]	@ 000f5a6c 0069
.org 0xf5a6e
	str r0, [r7, #20]	@ 000f5a6e 7861
.org 0xf5a70
	pop {r3}	@ 000f5a70 08bc
.org 0xf5a72
	mov r8, r3	@ 000f5a72 9846
.org 0xf5a74
	pop {r4, r5, r6, r7}	@ 000f5a74 f0bc
.org 0xf5a76
	pop {r0}	@ 000f5a76 01bc
.org 0xf5a78
	bx r0	@ 000f5a78 0047
