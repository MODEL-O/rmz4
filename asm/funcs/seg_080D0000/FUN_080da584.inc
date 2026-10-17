@ FUN_080da584  entry 0x080da584  size 72
.thumb
.org 0xda584
FUN_080da584:
	push {r4, lr}	@ 000da584 10b5
.org 0xda586
	adds r4, r0, #0	@ 000da586 041c
.org 0xda588
	bl 0x1cc9c	@ 000da588 42f788fb
.org 0xda58c
	ldrb r1, [r4, #10]	@ 000da58c a17a
.org 0xda58e
	movs r0, #1	@ 000da58e 0120
.org 0xda590
	orrs r0, r1	@ 000da590 0843
.org 0xda592
	movs r1, #2	@ 000da592 0221
.org 0xda594
	orrs r0, r1	@ 000da594 0843
.org 0xda596
	strb r0, [r4, #10]	@ 000da596 a072
.org 0xda598
	adds r2, r4, #0	@ 000da598 221c
.org 0xda59a
	adds r2, #73	@ 000da59a 4932
.org 0xda59c
	ldrb r0, [r2, #0]	@ 000da59c 1078
.org 0xda59e
	movs r1, #12	@ 000da59e 0c21
.org 0xda5a0
	orrs r0, r1	@ 000da5a0 0843
.org 0xda5a2
	strb r0, [r2, #0]	@ 000da5a2 1070
.org 0xda5a4
	movs r1, #184	@ 000da5a4 b821
.org 0xda5a6
	lsls r1, r1, #6	@ 000da5a6 8901
.org 0xda5a8
	adds r0, r4, #0	@ 000da5a8 201c
.org 0xda5aa
	bl 0x1cf00	@ 000da5aa 42f7a9fc
.org 0xda5ae
	ldr r1, [pc, #28]	@ 000da5ae 0749
.org 0xda5b0
	ldrb r0, [r4, #9]	@ 000da5b0 607a
.org 0xda5b2
	lsls r0, r0, #2	@ 000da5b2 8000
.org 0xda5b4
	adds r0, r0, r1	@ 000da5b4 4018
.org 0xda5b6
	movs r1, #1	@ 000da5b6 0121
.org 0xda5b8
	str r1, [r4, #12]	@ 000da5b8 e160
.org 0xda5ba
	ldr r0, [r0, #0]	@ 000da5ba 0068
.org 0xda5bc
	ldr r0, [r0, #4]	@ 000da5bc 4068
.org 0xda5be
	str r0, [r4, #20]	@ 000da5be 6061
.org 0xda5c0
	adds r0, r4, #0	@ 000da5c0 201c
.org 0xda5c2
	bl 0xda5d0	@ 000da5c2 00f005f8
.org 0xda5c6
	pop {r4}	@ 000da5c6 10bc
.org 0xda5c8
	pop {r0}	@ 000da5c8 01bc
.org 0xda5ca
	bx r0	@ 000da5ca 0047
