@ FUN_080ecf58  entry 0x080ecf58  size 62
.thumb
.org 0xecf58
FUN_080ecf58:
	adds r2, r0, #0	@ 000ecf58 021c
.org 0xecf5a
	ldrb r1, [r2, #10]	@ 000ecf5a 917a
.org 0xecf5c
	movs r0, #254	@ 000ecf5c fe20
.org 0xecf5e
	ands r0, r1	@ 000ecf5e 0840
.org 0xecf60
	movs r1, #0	@ 000ecf60 0021
.org 0xecf62
	strb r0, [r2, #10]	@ 000ecf62 9072
.org 0xecf64
	adds r0, r2, #0	@ 000ecf64 101c
.org 0xecf66
	adds r0, #140	@ 000ecf66 8c30
.org 0xecf68
	str r1, [r0, #0]	@ 000ecf68 0160
.org 0xecf6a
	adds r0, #4	@ 000ecf6a 0430
.org 0xecf6c
	str r1, [r0, #0]	@ 000ecf6c 0160
.org 0xecf6e
	adds r0, #4	@ 000ecf6e 0430
.org 0xecf70
	strb r1, [r0, #0]	@ 000ecf70 0170
.org 0xecf72
	ldrb r1, [r2, #10]	@ 000ecf72 917a
.org 0xecf74
	movs r0, #251	@ 000ecf74 fb20
.org 0xecf76
	ands r0, r1	@ 000ecf76 0840
.org 0xecf78
	strb r0, [r2, #10]	@ 000ecf78 9072
.org 0xecf7a
	ldrb r1, [r2, #11]	@ 000ecf7a d17a
.org 0xecf7c
	movs r0, #247	@ 000ecf7c f720
.org 0xecf7e
	ands r0, r1	@ 000ecf7e 0840
.org 0xecf80
	strb r0, [r2, #11]	@ 000ecf80 d072
.org 0xecf82
	ldr r1, [pc, #20]	@ 000ecf82 0549
.org 0xecf84
	ldrb r0, [r2, #9]	@ 000ecf84 507a
.org 0xecf86
	lsls r0, r0, #2	@ 000ecf86 8000
.org 0xecf88
	adds r0, r0, r1	@ 000ecf88 4018
.org 0xecf8a
	movs r1, #4	@ 000ecf8a 0421
.org 0xecf8c
	str r1, [r2, #12]	@ 000ecf8c d160
.org 0xecf8e
	ldr r0, [r0, #0]	@ 000ecf8e 0068
.org 0xecf90
	ldr r0, [r0, #16]	@ 000ecf90 0069
.org 0xecf92
	str r0, [r2, #20]	@ 000ecf92 5061
.org 0xecf94
	bx lr	@ 000ecf94 7047
