@ FUN_08006984  entry 0x08006984  size 52
.thumb
.org 0x6984
FUN_08006984:
	push {r4, r5, lr}	@ 00006984 30b5
.org 0x6986
	lsls r0, r0, #16	@ 00006986 0004
.org 0x6988
	ldr r5, [pc, #44]	@ 00006988 0b4d
.org 0x698a
	lsrs r1, r0, #19	@ 0000698a c10c
.org 0x698c
	adds r4, r1, r5	@ 0000698c 4c19
.org 0x698e
	ldrb r2, [r4, #0]	@ 0000698e 2278
.org 0x6990
	movs r1, #224	@ 00006990 e021
.org 0x6992
	lsls r1, r1, #11	@ 00006992 c902
.org 0x6994
	ands r1, r0	@ 00006994 0140
.org 0x6996
	lsrs r1, r1, #16	@ 00006996 090c
.org 0x6998
	adds r0, r2, #0	@ 00006998 101c
.org 0x699a
	asrs r0, r1	@ 0000699a 0841
.org 0x699c
	movs r3, #1	@ 0000699c 0123
.org 0x699e
	ands r0, r3	@ 0000699e 1840
.org 0x69a0
	cmp r0, #0	@ 000069a0 0028
.org 0x69a2
	bne.n 0x69b2	@ 000069a2 06d1
.org 0x69a4
	adds r0, r3, #0	@ 000069a4 181c
.org 0x69a6
	lsls r0, r1	@ 000069a6 8840
.org 0x69a8
	orrs r2, r0	@ 000069a8 0243
.org 0x69aa
	strb r2, [r4, #0]	@ 000069aa 2270
.org 0x69ac
	adds r0, r5, #0	@ 000069ac 281c
.org 0x69ae
	adds r0, #56	@ 000069ae 3830
.org 0x69b0
	strb r3, [r0, #0]	@ 000069b0 0370
.org 0x69b2
	pop {r4, r5}	@ 000069b2 30bc
.org 0x69b4
	pop {r0}	@ 000069b4 01bc
.org 0x69b6
	bx r0	@ 000069b6 0047
