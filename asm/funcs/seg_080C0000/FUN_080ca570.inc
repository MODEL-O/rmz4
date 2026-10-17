@ FUN_080ca570  entry 0x080ca570  size 64
.thumb
.org 0xca570
FUN_080ca570:
	push {lr}	@ 000ca570 00b5
.org 0xca572
	adds r2, r0, #0	@ 000ca572 021c
.org 0xca574
	adds r0, #140	@ 000ca574 8c30
.org 0xca576
	ldr r0, [r0, #0]	@ 000ca576 0068
.org 0xca578
	movs r1, #128	@ 000ca578 8021
.org 0xca57a
	lsls r1, r1, #2	@ 000ca57a 8900
.org 0xca57c
	ands r0, r1	@ 000ca57c 0840
.org 0xca57e
	cmp r0, #0	@ 000ca57e 0028
.org 0xca580
	beq.n 0xca5a0	@ 000ca580 0ed0
.org 0xca582
	ldr r1, [pc, #24]	@ 000ca582 0649
.org 0xca584
	ldrb r0, [r2, #9]	@ 000ca584 507a
.org 0xca586
	lsls r0, r0, #2	@ 000ca586 8000
.org 0xca588
	adds r0, r0, r1	@ 000ca588 4018
.org 0xca58a
	movs r1, #2	@ 000ca58a 0221
.org 0xca58c
	str r1, [r2, #12]	@ 000ca58c d160
.org 0xca58e
	ldr r0, [r0, #0]	@ 000ca58e 0068
.org 0xca590
	ldr r0, [r0, #8]	@ 000ca590 8068
.org 0xca592
	str r0, [r2, #20]	@ 000ca592 5061
.org 0xca594
	adds r0, r2, #0	@ 000ca594 101c
.org 0xca596
	bl 0xca5b8	@ 000ca596 00f00ff8
.org 0xca59a
	b.n 0xca5b0	@ 000ca59a 09e0
.org 0xca59c
	.byte 0xf4,0x49,0x86,0x08	@ 000ca59c data
.org 0xca5a0
	ldr r0, [pc, #16]	@ 000ca5a0 0448
.org 0xca5a2
	ldrb r1, [r2, #16]	@ 000ca5a2 117c
.org 0xca5a4
	lsls r1, r1, #2	@ 000ca5a4 8900
.org 0xca5a6
	adds r1, r1, r0	@ 000ca5a6 0918
.org 0xca5a8
	ldr r1, [r1, #0]	@ 000ca5a8 0968
.org 0xca5aa
	adds r0, r2, #0	@ 000ca5aa 101c
.org 0xca5ac
	bl 0x128f80	@ 000ca5ac 5ef0e8fc
