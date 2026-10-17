@ FUN_08095c44  entry 0x08095c44  size 72
.thumb
.org 0x95c44
FUN_08095c44:
	push {r4, lr}	@ 00095c44 10b5
.org 0x95c46
	adds r4, r0, #0	@ 00095c46 041c
.org 0x95c48
	movs r0, #53	@ 00095c48 3520
.org 0x95c4a
	bl 0x2b10	@ 00095c4a 6cf761ff
.org 0x95c4e
	adds r1, r4, #0	@ 00095c4e 211c
.org 0x95c50
	adds r1, #84	@ 00095c50 5431
.org 0x95c52
	movs r0, #1	@ 00095c52 0120
.org 0x95c54
	bl 0xd0c88	@ 00095c54 3bf018f8
.org 0x95c58
	adds r0, r4, #0	@ 00095c58 201c
.org 0x95c5a
	adds r0, #140	@ 00095c5a 8c30
.org 0x95c5c
	movs r1, #0	@ 00095c5c 0021
.org 0x95c5e
	str r1, [r0, #0]	@ 00095c5e 0160
.org 0x95c60
	adds r0, #4	@ 00095c60 0430
.org 0x95c62
	str r1, [r0, #0]	@ 00095c62 0160
.org 0x95c64
	adds r0, #4	@ 00095c64 0430
.org 0x95c66
	strb r1, [r0, #0]	@ 00095c66 0170
.org 0x95c68
	ldrb r1, [r4, #10]	@ 00095c68 a17a
.org 0x95c6a
	movs r0, #251	@ 00095c6a fb20
.org 0x95c6c
	ands r0, r1	@ 00095c6c 0840
.org 0x95c6e
	movs r1, #254	@ 00095c6e fe21
.org 0x95c70
	ands r0, r1	@ 00095c70 0840
.org 0x95c72
	strb r0, [r4, #10]	@ 00095c72 a072
.org 0x95c74
	ldr r1, [pc, #20]	@ 00095c74 0549
.org 0x95c76
	ldrb r0, [r4, #9]	@ 00095c76 607a
.org 0x95c78
	lsls r0, r0, #2	@ 00095c78 8000
.org 0x95c7a
	adds r0, r0, r1	@ 00095c7a 4018
.org 0x95c7c
	movs r1, #4	@ 00095c7c 0421
.org 0x95c7e
	str r1, [r4, #12]	@ 00095c7e e160
.org 0x95c80
	ldr r0, [r0, #0]	@ 00095c80 0068
.org 0x95c82
	ldr r0, [r0, #16]	@ 00095c82 0069
.org 0x95c84
	str r0, [r4, #20]	@ 00095c84 6061
.org 0x95c86
	pop {r4}	@ 00095c86 10bc
.org 0x95c88
	pop {r0}	@ 00095c88 01bc
.org 0x95c8a
	bx r0	@ 00095c8a 0047
