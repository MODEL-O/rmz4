@ FUN_080e8c44  entry 0x080e8c44  size 70
.thumb
.org 0xe8c44
FUN_080e8c44:
	push {r4, lr}	@ 000e8c44 10b5
.org 0xe8c46
	adds r4, r0, #0	@ 000e8c46 041c
.org 0xe8c48
	ldr r0, [pc, #64]	@ 000e8c48 1048
.org 0xe8c4a
	ldr r0, [r0, #0]	@ 000e8c4a 0068
.org 0xe8c4c
	bl 0x5500	@ 000e8c4c 1cf758fc
.org 0xe8c50
	adds r3, r0, #0	@ 000e8c50 031c
.org 0xe8c52
	cmp r3, #0	@ 000e8c52 002b
.org 0xe8c54
	beq.n 0xe8c82	@ 000e8c54 15d0
.org 0xe8c56
	adds r1, r3, #0	@ 000e8c56 191c
.org 0xe8c58
	adds r1, #37	@ 000e8c58 2531
.org 0xe8c5a
	movs r2, #0	@ 000e8c5a 0022
.org 0xe8c5c
	movs r0, #1	@ 000e8c5c 0120
.org 0xe8c5e
	strb r0, [r1, #0]	@ 000e8c5e 0870
.org 0xe8c60
	ldr r0, [pc, #44]	@ 000e8c60 0b48
.org 0xe8c62
	movs r1, #91	@ 000e8c62 5b21
.org 0xe8c64
	strb r1, [r3, #9]	@ 000e8c64 5972
.org 0xe8c66
	movs r1, #182	@ 000e8c66 b621
.org 0xe8c68
	lsls r1, r1, #1	@ 000e8c68 4900
.org 0xe8c6a
	adds r0, r0, r1	@ 000e8c6a 4018
.org 0xe8c6c
	ldr r0, [r0, #0]	@ 000e8c6c 0068
.org 0xe8c6e
	ldr r0, [r0, #0]	@ 000e8c6e 0068
.org 0xe8c70
	str r0, [r3, #20]	@ 000e8c70 5861
.org 0xe8c72
	movs r0, #0	@ 000e8c72 0020
.org 0xe8c74
	strh r2, [r3, #32]	@ 000e8c74 1a84
.org 0xe8c76
	adds r1, r3, #0	@ 000e8c76 191c
.org 0xe8c78
	adds r1, #34	@ 000e8c78 2231
.org 0xe8c7a
	strb r0, [r1, #0]	@ 000e8c7a 0870
.org 0xe8c7c
	strb r0, [r3, #16]	@ 000e8c7c 1874
.org 0xe8c7e
	strb r0, [r3, #17]	@ 000e8c7e 5874
.org 0xe8c80
	str r4, [r3, #40]	@ 000e8c80 9c62
.org 0xe8c82
	adds r0, r3, #0	@ 000e8c82 181c
.org 0xe8c84
	pop {r4}	@ 000e8c84 10bc
.org 0xe8c86
	pop {r1}	@ 000e8c86 02bc
.org 0xe8c88
	bx r1	@ 000e8c88 0847
