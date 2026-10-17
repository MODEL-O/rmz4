@ FUN_08070474  entry 0x08070474  size 142
.thumb
.org 0x70474
FUN_08070474:
	push {r4, r5, r6, lr}	@ 00070474 70b5
.org 0x70476
	adds r6, r0, #0	@ 00070476 061c
.org 0x70478
	ldrb r0, [r6, #15]	@ 00070478 f07b
.org 0x7047a
	cmp r0, #0	@ 0007047a 0028
.org 0x7047c
	bne.n 0x7048c	@ 0007047c 06d1
.org 0x7047e
	adds r0, r6, #0	@ 0007047e 301c
.org 0x70480
	movs r1, #0	@ 00070480 0021
.org 0x70482
	bl 0x736c4	@ 00070482 03f01ff9
.org 0x70486
	ldrb r0, [r6, #15]	@ 00070486 f07b
.org 0x70488
	adds r0, #1	@ 00070488 0130
.org 0x7048a
	strb r0, [r6, #15]	@ 0007048a f073
.org 0x7048c
	adds r0, r6, #0	@ 0007048c 301c
.org 0x7048e
	bl 0x1cff0	@ 0007048e acf7affd
.org 0x70492
	adds r0, r6, #0	@ 00070492 301c
.org 0x70494
	adds r0, #116	@ 00070494 7430
.org 0x70496
	ldr r4, [pc, #108]	@ 00070496 1b4c
.org 0x70498
	ldr r3, [pc, #108]	@ 00070498 1b4b
.org 0x7049a
	adds r1, r6, #0	@ 0007049a 311c
.org 0x7049c
	adds r1, #184	@ 0007049c b831
.org 0x7049e
	ldrb r2, [r1, #0]	@ 0007049e 0a78
.org 0x704a0
	lsls r1, r2, #1	@ 000704a0 5100
.org 0x704a2
	adds r1, r1, r3	@ 000704a2 c918
.org 0x704a4
	ldrh r1, [r1, #0]	@ 000704a4 0988
.org 0x704a6
	lsls r1, r1, #2	@ 000704a6 8900
.org 0x704a8
	adds r1, r1, r4	@ 000704a8 0919
.org 0x704aa
	adds r3, r6, #0	@ 000704aa 331c
.org 0x704ac
	adds r3, #113	@ 000704ac 7133
.org 0x704ae
	movs r5, #0	@ 000704ae 0025
.org 0x704b0
	ldrsb r5, [r3, r5]	@ 000704b0 5d57
.org 0x704b2
	ldr r1, [r1, #0]	@ 000704b2 0968
.org 0x704b4
	lsls r3, r5, #2	@ 000704b4 ab00
.org 0x704b6
	adds r3, r3, r1	@ 000704b6 5b18
.org 0x704b8
	ldr r4, [pc, #80]	@ 000704b8 144c
.org 0x704ba
	adds r1, r6, #0	@ 000704ba 311c
.org 0x704bc
	adds r1, #185	@ 000704bc b931
.org 0x704be
	ldrb r1, [r1, #0]	@ 000704be 0978
.org 0x704c0
	lsls r1, r1, #2	@ 000704c0 8900
.org 0x704c2
	adds r1, r1, r4	@ 000704c2 0919
.org 0x704c4
	ldr r1, [r1, #0]	@ 000704c4 0968
.org 0x704c6
	lsls r2, r2, #2	@ 000704c6 9200
.org 0x704c8
	adds r2, r2, r1	@ 000704c8 5218
.org 0x704ca
	ldr r1, [r2, #0]	@ 000704ca 1168
.org 0x704cc
	adds r1, r1, r5	@ 000704cc 4919
.org 0x704ce
	ldrb r1, [r1, #0]	@ 000704ce 0978
.org 0x704d0
	lsls r2, r1, #1	@ 000704d0 4a00
.org 0x704d2
	adds r2, r2, r1	@ 000704d2 5218
.org 0x704d4
	lsls r2, r2, #3	@ 000704d4 d200
.org 0x704d6
	ldr r1, [r3, #0]	@ 000704d6 1968
.org 0x704d8
	adds r1, r1, r2	@ 000704d8 8918
.org 0x704da
	bl 0x5784	@ 000704da 95f753f9
.org 0x704de
	adds r0, r6, #0	@ 000704de 301c
.org 0x704e0
	bl 0x73a68	@ 000704e0 03f0c2fa
.org 0x704e4
	ldr r0, [pc, #40]	@ 000704e4 0a48
.org 0x704e6
	ldrh r1, [r0, #8]	@ 000704e6 0189
.org 0x704e8
	movs r0, #8	@ 000704e8 0820
.org 0x704ea
	ands r0, r1	@ 000704ea 0840
.org 0x704ec
	lsls r0, r0, #16	@ 000704ec 0004
.org 0x704ee
	lsrs r1, r0, #16	@ 000704ee 010c
.org 0x704f0
	cmp r1, #0	@ 000704f0 0029
.org 0x704f2
	bne.n 0x704fc	@ 000704f2 03d1
.org 0x704f4
	ldrb r0, [r6, #14]	@ 000704f4 b07b
.org 0x704f6
	adds r0, #1	@ 000704f6 0130
.org 0x704f8
	strb r0, [r6, #14]	@ 000704f8 b073
.org 0x704fa
	strb r1, [r6, #15]	@ 000704fa f173
.org 0x704fc
	pop {r4, r5, r6}	@ 000704fc 70bc
.org 0x704fe
	pop {r0}	@ 000704fe 01bc
.org 0x70500
	bx r0	@ 00070500 0047
