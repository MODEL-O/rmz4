@ FUN_08098bb0  entry 0x08098bb0  size 48
.thumb
.org 0x98bb0
FUN_08098bb0:
	adds r2, r0, #0	@ 00098bb0 021c
.org 0x98bb2
	adds r0, #140	@ 00098bb2 8c30
.org 0x98bb4
	movs r1, #0	@ 00098bb4 0021
.org 0x98bb6
	str r1, [r0, #0]	@ 00098bb6 0160
.org 0x98bb8
	adds r0, #4	@ 00098bb8 0430
.org 0x98bba
	str r1, [r0, #0]	@ 00098bba 0160
.org 0x98bbc
	adds r0, #4	@ 00098bbc 0430
.org 0x98bbe
	strb r1, [r0, #0]	@ 00098bbe 0170
.org 0x98bc0
	ldrb r1, [r2, #10]	@ 00098bc0 917a
.org 0x98bc2
	movs r0, #251	@ 00098bc2 fb20
.org 0x98bc4
	ands r0, r1	@ 00098bc4 0840
.org 0x98bc6
	movs r1, #254	@ 00098bc6 fe21
.org 0x98bc8
	ands r0, r1	@ 00098bc8 0840
.org 0x98bca
	strb r0, [r2, #10]	@ 00098bca 9072
.org 0x98bcc
	ldr r1, [pc, #16]	@ 00098bcc 0449
.org 0x98bce
	ldrb r0, [r2, #9]	@ 00098bce 507a
.org 0x98bd0
	lsls r0, r0, #2	@ 00098bd0 8000
.org 0x98bd2
	adds r0, r0, r1	@ 00098bd2 4018
.org 0x98bd4
	movs r1, #4	@ 00098bd4 0421
.org 0x98bd6
	str r1, [r2, #12]	@ 00098bd6 d160
.org 0x98bd8
	ldr r0, [r0, #0]	@ 00098bd8 0068
.org 0x98bda
	ldr r0, [r0, #16]	@ 00098bda 0069
.org 0x98bdc
	str r0, [r2, #20]	@ 00098bdc 5061
.org 0x98bde
	bx lr	@ 00098bde 7047
