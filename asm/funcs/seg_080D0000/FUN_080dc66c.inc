@ FUN_080dc66c  entry 0x080dc66c  size 78
.thumb
.org 0xdc66c
FUN_080dc66c:
	push {lr}	@ 000dc66c 00b5
.org 0xdc66e
	adds r2, r0, #0	@ 000dc66e 021c
.org 0xdc670
	ldr r0, [pc, #52]	@ 000dc670 0d48
.org 0xdc672
	ldrb r1, [r0, #9]	@ 000dc672 417a
.org 0xdc674
	movs r0, #4	@ 000dc674 0420
.org 0xdc676
	ands r0, r1	@ 000dc676 0840
.org 0xdc678
	cmp r0, #0	@ 000dc678 0028
.org 0xdc67a
	beq.n 0xdc6b0	@ 000dc67a 19d0
.org 0xdc67c
	adds r0, r2, #0	@ 000dc67c 101c
.org 0xdc67e
	adds r0, #120	@ 000dc67e 7830
.org 0xdc680
	ldrb r0, [r0, #0]	@ 000dc680 0078
.org 0xdc682
	cmp r0, #0	@ 000dc682 0028
.org 0xdc684
	beq.n 0xdc6b0	@ 000dc684 14d0
.org 0xdc686
	ldrb r1, [r2, #10]	@ 000dc686 917a
.org 0xdc688
	movs r0, #254	@ 000dc688 fe20
.org 0xdc68a
	ands r0, r1	@ 000dc68a 0840
.org 0xdc68c
	movs r1, #253	@ 000dc68c fd21
.org 0xdc68e
	ands r0, r1	@ 000dc68e 0840
.org 0xdc690
	strb r0, [r2, #10]	@ 000dc690 9072
.org 0xdc692
	ldr r1, [pc, #24]	@ 000dc692 0649
.org 0xdc694
	ldrb r0, [r2, #9]	@ 000dc694 507a
.org 0xdc696
	lsls r0, r0, #2	@ 000dc696 8000
.org 0xdc698
	adds r0, r0, r1	@ 000dc698 4018
.org 0xdc69a
	movs r1, #3	@ 000dc69a 0321
.org 0xdc69c
	str r1, [r2, #12]	@ 000dc69c d160
.org 0xdc69e
	ldr r0, [r0, #0]	@ 000dc69e 0068
.org 0xdc6a0
	ldr r0, [r0, #12]	@ 000dc6a0 c068
.org 0xdc6a2
	str r0, [r2, #20]	@ 000dc6a2 5061
.org 0xdc6a4
	b.n 0xdc6c0	@ 000dc6a4 0ce0
.org 0xdc6a6
	.byte 0x00	@ 000dc6a6 data
.org 0xdc6a7
	.byte 0x00	@ 000dc6a7 data
.org 0xdc6a8
	.byte 0xb0,0xe8,0x02,0x02	@ 000dc6a8 data
.org 0xdc6ac
	.byte 0x64,0x6f,0x86,0x08	@ 000dc6ac data
.org 0xdc6b0
	ldr r0, [pc, #16]	@ 000dc6b0 0448
.org 0xdc6b2
	ldrb r1, [r2, #13]	@ 000dc6b2 517b
.org 0xdc6b4
	lsls r1, r1, #2	@ 000dc6b4 8900
.org 0xdc6b6
	adds r1, r1, r0	@ 000dc6b6 0918
.org 0xdc6b8
	ldr r1, [r1, #0]	@ 000dc6b8 0968
