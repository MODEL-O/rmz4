@ FUN_080c9b8c  entry 0x080c9b8c  size 48
.thumb
.org 0xc9b8c
FUN_080c9b8c:
	adds r2, r0, #0	@ 000c9b8c 021c
.org 0xc9b8e
	adds r0, #140	@ 000c9b8e 8c30
.org 0xc9b90
	movs r1, #0	@ 000c9b90 0021
.org 0xc9b92
	str r1, [r0, #0]	@ 000c9b92 0160
.org 0xc9b94
	adds r0, #4	@ 000c9b94 0430
.org 0xc9b96
	str r1, [r0, #0]	@ 000c9b96 0160
.org 0xc9b98
	adds r0, #4	@ 000c9b98 0430
.org 0xc9b9a
	strb r1, [r0, #0]	@ 000c9b9a 0170
.org 0xc9b9c
	ldrb r1, [r2, #10]	@ 000c9b9c 917a
.org 0xc9b9e
	movs r0, #251	@ 000c9b9e fb20
.org 0xc9ba0
	ands r0, r1	@ 000c9ba0 0840
.org 0xc9ba2
	movs r1, #254	@ 000c9ba2 fe21
.org 0xc9ba4
	ands r0, r1	@ 000c9ba4 0840
.org 0xc9ba6
	strb r0, [r2, #10]	@ 000c9ba6 9072
.org 0xc9ba8
	ldr r1, [pc, #16]	@ 000c9ba8 0449
.org 0xc9baa
	ldrb r0, [r2, #9]	@ 000c9baa 507a
.org 0xc9bac
	lsls r0, r0, #2	@ 000c9bac 8000
.org 0xc9bae
	adds r0, r0, r1	@ 000c9bae 4018
.org 0xc9bb0
	movs r1, #4	@ 000c9bb0 0421
.org 0xc9bb2
	str r1, [r2, #12]	@ 000c9bb2 d160
.org 0xc9bb4
	ldr r0, [r0, #0]	@ 000c9bb4 0068
.org 0xc9bb6
	ldr r0, [r0, #16]	@ 000c9bb6 0069
.org 0xc9bb8
	str r0, [r2, #20]	@ 000c9bb8 5061
.org 0xc9bba
	bx lr	@ 000c9bba 7047
