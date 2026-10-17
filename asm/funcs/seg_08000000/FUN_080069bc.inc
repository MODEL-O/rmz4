@ FUN_080069bc  entry 0x080069bc  size 52
.thumb
.org 0x69bc
FUN_080069bc:
	push {r4, r5, lr}	@ 000069bc 30b5
.org 0x69be
	lsls r0, r0, #16	@ 000069be 0004
.org 0x69c0
	ldr r5, [pc, #44]	@ 000069c0 0b4d
.org 0x69c2
	lsrs r1, r0, #19	@ 000069c2 c10c
.org 0x69c4
	adds r4, r1, r5	@ 000069c4 4c19
.org 0x69c6
	ldrb r2, [r4, #0]	@ 000069c6 2278
.org 0x69c8
	movs r1, #224	@ 000069c8 e021
.org 0x69ca
	lsls r1, r1, #11	@ 000069ca c902
.org 0x69cc
	ands r1, r0	@ 000069cc 0140
.org 0x69ce
	lsrs r1, r1, #16	@ 000069ce 090c
.org 0x69d0
	adds r0, r2, #0	@ 000069d0 101c
.org 0x69d2
	asrs r0, r1	@ 000069d2 0841
.org 0x69d4
	movs r3, #1	@ 000069d4 0123
.org 0x69d6
	ands r0, r3	@ 000069d6 1840
.org 0x69d8
	cmp r0, #0	@ 000069d8 0028
.org 0x69da
	beq.n 0x69ea	@ 000069da 06d0
.org 0x69dc
	adds r0, r3, #0	@ 000069dc 181c
.org 0x69de
	lsls r0, r1	@ 000069de 8840
.org 0x69e0
	bics r2, r0	@ 000069e0 8243
.org 0x69e2
	strb r2, [r4, #0]	@ 000069e2 2270
.org 0x69e4
	adds r0, r5, #0	@ 000069e4 281c
.org 0x69e6
	adds r0, #56	@ 000069e6 3830
.org 0x69e8
	strb r3, [r0, #0]	@ 000069e8 0370
.org 0x69ea
	pop {r4, r5}	@ 000069ea 30bc
.org 0x69ec
	pop {r0}	@ 000069ec 01bc
.org 0x69ee
	bx r0	@ 000069ee 0047
