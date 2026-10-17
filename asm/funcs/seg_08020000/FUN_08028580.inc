@ FUN_08028580  entry 0x08028580  size 48
.thumb
.org 0x28580
FUN_08028580:
	push {r4, r5, lr}	@ 00028580 30b5
.org 0x28582
	adds r2, r0, #0	@ 00028582 021c
.org 0x28584
	ldr r4, [r2, #12]	@ 00028584 d468
.org 0x28586
	ldrb r0, [r4, #1]	@ 00028586 6078
.org 0x28588
	lsls r0, r0, #4	@ 00028588 0001
.org 0x2858a
	adds r0, #16	@ 0002858a 1030
.org 0x2858c
	adds r5, r2, r0	@ 0002858c 1518
.org 0x2858e
	ldr r3, [r5, #0]	@ 0002858e 2b68
.org 0x28590
	cmp r3, #0	@ 00028590 002b
.org 0x28592
	bne.n 0x28596	@ 00028592 00d1
.org 0x28594
	b.n 0x28692	@ 00028594 7de0
.org 0x28596
	movs r1, #2	@ 00028596 0221
.org 0x28598
	ldrsh r0, [r4, r1]	@ 00028598 605e
.org 0x2859a
	cmp r0, #7	@ 0002859a 0728
.org 0x2859c
	bhi.n 0x28692	@ 0002859c 79d8
.org 0x2859e
	lsls r0, r0, #2	@ 0002859e 8000
.org 0x285a0
	ldr r1, [pc, #4]	@ 000285a0 0149
.org 0x285a2
	adds r0, r0, r1	@ 000285a2 4018
.org 0x285a4
	ldr r0, [r0, #0]	@ 000285a4 0068
.org 0x285a6
	mov pc, r0	@ 000285a6 8746
.org 0x285a8
	.byte 0xac,0x85,0x02,0x08	@ 000285a8 data
.org 0x285ac
	.byte 0xcc,0x85,0x02,0x08	@ 000285ac data
