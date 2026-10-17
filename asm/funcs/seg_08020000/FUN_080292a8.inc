@ FUN_080292a8  entry 0x080292a8  size 60
.thumb
.org 0x292a8
FUN_080292a8:
	push {lr}	@ 000292a8 00b5
.org 0x292aa
	adds r2, r0, #0	@ 000292aa 021c
.org 0x292ac
	ldr r1, [r2, #12]	@ 000292ac d168
.org 0x292ae
	ldrb r0, [r1, #1]	@ 000292ae 4878
.org 0x292b0
	cmp r0, #0	@ 000292b0 0028
.org 0x292b2
	beq.n 0x292ba	@ 000292b2 02d0
.org 0x292b4
	cmp r0, #1	@ 000292b4 0128
.org 0x292b6
	beq.n 0x292dc	@ 000292b6 11d0
.org 0x292b8
	b.n 0x292e6	@ 000292b8 15e0
.org 0x292ba
	ldrh r0, [r1, #2]	@ 000292ba 4888
.org 0x292bc
	strb r0, [r2, #3]	@ 000292bc d070
.org 0x292be
	ldr r0, [pc, #20]	@ 000292be 0548
.org 0x292c0
	ldrb r1, [r0, #4]	@ 000292c0 0179
.org 0x292c2
	movs r0, #64	@ 000292c2 4020
.org 0x292c4
	ands r0, r1	@ 000292c4 0840
.org 0x292c6
	cmp r0, #0	@ 000292c6 0028
.org 0x292c8
	bne.n 0x292e6	@ 000292c8 0dd1
.org 0x292ca
	ldr r2, [pc, #12]	@ 000292ca 034a
.org 0x292cc
	ldrh r1, [r2, #8]	@ 000292cc 1189
.org 0x292ce
	movs r0, #128	@ 000292ce 8020
.org 0x292d0
	orrs r0, r1	@ 000292d0 0843
.org 0x292d2
	b.n 0x292e4	@ 000292d2 07e0
.org 0x292d4
	.byte 0xb0,0xe8,0x02,0x02	@ 000292d4 data
.org 0x292d8
	.byte 0x10,0xe9,0x02,0x02	@ 000292d8 data
.org 0x292dc
	ldr r2, [pc, #12]	@ 000292dc 034a
.org 0x292de
	ldrh r1, [r2, #8]	@ 000292de 1189
.org 0x292e0
	ldr r0, [pc, #12]	@ 000292e0 0348
.org 0x292e2
	ands r0, r1	@ 000292e2 0840
