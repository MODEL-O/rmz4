@ FUN_0809ac40  entry 0x0809ac40  size 68
.thumb
.org 0x9ac40
FUN_0809ac40:
	push {r4, lr}	@ 0009ac40 10b5
.org 0x9ac42
	adds r4, r0, #0	@ 0009ac42 041c
.org 0x9ac44
	adds r0, #84	@ 0009ac44 5430
.org 0x9ac46
	movs r1, #0	@ 0009ac46 0021
.org 0x9ac48
	movs r2, #2	@ 0009ac48 0222
.org 0x9ac4a
	movs r3, #24	@ 0009ac4a 1823
.org 0x9ac4c
	bl 0xc62a0	@ 0009ac4c 2bf028fb
.org 0x9ac50
	adds r0, r4, #0	@ 0009ac50 201c
.org 0x9ac52
	adds r0, #140	@ 0009ac52 8c30
.org 0x9ac54
	movs r1, #0	@ 0009ac54 0021
.org 0x9ac56
	str r1, [r0, #0]	@ 0009ac56 0160
.org 0x9ac58
	adds r0, #4	@ 0009ac58 0430
.org 0x9ac5a
	str r1, [r0, #0]	@ 0009ac5a 0160
.org 0x9ac5c
	adds r0, #4	@ 0009ac5c 0430
.org 0x9ac5e
	strb r1, [r0, #0]	@ 0009ac5e 0170
.org 0x9ac60
	ldrb r1, [r4, #10]	@ 0009ac60 a17a
.org 0x9ac62
	movs r0, #251	@ 0009ac62 fb20
.org 0x9ac64
	ands r0, r1	@ 0009ac64 0840
.org 0x9ac66
	movs r1, #254	@ 0009ac66 fe21
.org 0x9ac68
	ands r0, r1	@ 0009ac68 0840
.org 0x9ac6a
	strb r0, [r4, #10]	@ 0009ac6a a072
.org 0x9ac6c
	ldr r1, [pc, #20]	@ 0009ac6c 0549
.org 0x9ac6e
	ldrb r0, [r4, #9]	@ 0009ac6e 607a
.org 0x9ac70
	lsls r0, r0, #2	@ 0009ac70 8000
.org 0x9ac72
	adds r0, r0, r1	@ 0009ac72 4018
.org 0x9ac74
	movs r1, #4	@ 0009ac74 0421
.org 0x9ac76
	str r1, [r4, #12]	@ 0009ac76 e160
.org 0x9ac78
	ldr r0, [r0, #0]	@ 0009ac78 0068
.org 0x9ac7a
	ldr r0, [r0, #16]	@ 0009ac7a 0069
.org 0x9ac7c
	str r0, [r4, #20]	@ 0009ac7c 6061
.org 0x9ac7e
	pop {r4}	@ 0009ac7e 10bc
.org 0x9ac80
	pop {r0}	@ 0009ac80 01bc
.org 0x9ac82
	bx r0	@ 0009ac82 0047
