@ FUN_080e9b80  entry 0x080e9b80  size 48
.thumb
.org 0xe9b80
FUN_080e9b80:
	adds r2, r0, #0	@ 000e9b80 021c
.org 0xe9b82
	adds r0, #140	@ 000e9b82 8c30
.org 0xe9b84
	movs r1, #0	@ 000e9b84 0021
.org 0xe9b86
	str r1, [r0, #0]	@ 000e9b86 0160
.org 0xe9b88
	adds r0, #4	@ 000e9b88 0430
.org 0xe9b8a
	str r1, [r0, #0]	@ 000e9b8a 0160
.org 0xe9b8c
	adds r0, #4	@ 000e9b8c 0430
.org 0xe9b8e
	strb r1, [r0, #0]	@ 000e9b8e 0170
.org 0xe9b90
	ldrb r1, [r2, #10]	@ 000e9b90 917a
.org 0xe9b92
	movs r0, #251	@ 000e9b92 fb20
.org 0xe9b94
	ands r0, r1	@ 000e9b94 0840
.org 0xe9b96
	movs r1, #254	@ 000e9b96 fe21
.org 0xe9b98
	ands r0, r1	@ 000e9b98 0840
.org 0xe9b9a
	strb r0, [r2, #10]	@ 000e9b9a 9072
.org 0xe9b9c
	ldr r1, [pc, #16]	@ 000e9b9c 0449
.org 0xe9b9e
	ldrb r0, [r2, #9]	@ 000e9b9e 507a
.org 0xe9ba0
	lsls r0, r0, #2	@ 000e9ba0 8000
.org 0xe9ba2
	adds r0, r0, r1	@ 000e9ba2 4018
.org 0xe9ba4
	movs r1, #4	@ 000e9ba4 0421
.org 0xe9ba6
	str r1, [r2, #12]	@ 000e9ba6 d160
.org 0xe9ba8
	ldr r0, [r0, #0]	@ 000e9ba8 0068
.org 0xe9baa
	ldr r0, [r0, #16]	@ 000e9baa 0069
.org 0xe9bac
	str r0, [r2, #20]	@ 000e9bac 5061
.org 0xe9bae
	bx lr	@ 000e9bae 7047
