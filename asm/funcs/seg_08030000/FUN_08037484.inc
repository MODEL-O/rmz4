@ FUN_08037484  entry 0x08037484  size 104
.thumb
.org 0x37484
FUN_08037484:
	push {r4, r5, lr}	@ 00037484 30b5
.org 0x37486
	adds r5, r0, #0	@ 00037486 051c
.org 0x37488
	movs r0, #129	@ 00037488 8120
.org 0x3748a
	lsls r0, r0, #1	@ 0003748a 4000
.org 0x3748c
	adds r4, r5, r0	@ 0003748c 2c18
.org 0x3748e
	ldrb r0, [r4, #0]	@ 0003748e 2078
.org 0x37490
	cmp r0, #0	@ 00037490 0028
.org 0x37492
	bne.n 0x374aa	@ 00037492 0ad1
.org 0x37494
	ldr r1, [pc, #84]	@ 00037494 1549
.org 0x37496
	adds r0, r5, #0	@ 00037496 281c
.org 0x37498
	bl 0x1cf00	@ 00037498 e5f732fd
.org 0x3749c
	ldr r0, [pc, #80]	@ 0003749c 1448
.org 0x3749e
	adds r1, r5, r0	@ 0003749e 2918
.org 0x374a0
	movs r0, #4	@ 000374a0 0420
.org 0x374a2
	strb r0, [r1, #0]	@ 000374a2 0870
.org 0x374a4
	ldrb r0, [r4, #0]	@ 000374a4 2078
.org 0x374a6
	adds r0, #1	@ 000374a6 0130
.org 0x374a8
	strb r0, [r4, #0]	@ 000374a8 2070
.org 0x374aa
	ldr r4, [pc, #64]	@ 000374aa 104c
.org 0x374ac
	adds r0, r5, #0	@ 000374ac 281c
.org 0x374ae
	adds r1, r4, #0	@ 000374ae 211c
.org 0x374b0
	bl 0x3a3b0	@ 000374b0 02f07eff
.org 0x374b4
	adds r0, r5, #0	@ 000374b4 281c
.org 0x374b6
	adds r1, r4, #0	@ 000374b6 211c
.org 0x374b8
	bl 0x3a3f0	@ 000374b8 02f09aff
.org 0x374bc
	ldr r0, [pc, #48]	@ 000374bc 0c48
.org 0x374be
	adds r1, r5, r0	@ 000374be 2918
.org 0x374c0
	ldrb r0, [r1, #0]	@ 000374c0 0878
.org 0x374c2
	subs r0, #1	@ 000374c2 0138
.org 0x374c4
	strb r0, [r1, #0]	@ 000374c4 0870
.org 0x374c6
	lsls r0, r0, #24	@ 000374c6 0006
.org 0x374c8
	lsrs r0, r0, #24	@ 000374c8 000e
.org 0x374ca
	cmp r0, #255	@ 000374ca ff28
.org 0x374cc
	bne.n 0x374e6	@ 000374cc 0bd1
.org 0x374ce
	movs r1, #160	@ 000374ce a021
.org 0x374d0
	lsls r1, r1, #3	@ 000374d0 c900
.org 0x374d2
	adds r0, r5, #0	@ 000374d2 281c
.org 0x374d4
	movs r2, #4	@ 000374d4 0422
.org 0x374d6
	movs r3, #1	@ 000374d6 0123
.org 0x374d8
	bl 0x1cfc8	@ 000374d8 e5f776fd
.org 0x374dc
	movs r0, #128	@ 000374dc 8020
.org 0x374de
	lsls r0, r0, #1	@ 000374de 4000
.org 0x374e0
	adds r1, r5, r0	@ 000374e0 2918
.org 0x374e2
	movs r0, #0	@ 000374e2 0020
.org 0x374e4
	strb r0, [r1, #0]	@ 000374e4 0870
.org 0x374e6
	pop {r4, r5}	@ 000374e6 30bc
.org 0x374e8
	pop {r0}	@ 000374e8 01bc
.org 0x374ea
	bx r0	@ 000374ea 0047
