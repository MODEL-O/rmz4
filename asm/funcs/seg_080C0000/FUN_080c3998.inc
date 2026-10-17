@ FUN_080c3998  entry 0x080c3998  size 144
.thumb
.org 0xc3998
FUN_080c3998:
	push {r4, r5, r6, r7, lr}	@ 000c3998 f0b5
.org 0xc399a
	adds r7, r0, #0	@ 000c399a 071c
.org 0xc399c
	lsls r1, r1, #24	@ 000c399c 0906
.org 0xc399e
	lsrs r6, r1, #24	@ 000c399e 0e0e
.org 0xc39a0
	lsls r2, r2, #24	@ 000c39a0 1206
.org 0xc39a2
	lsrs r5, r2, #24	@ 000c39a2 150e
.org 0xc39a4
	lsls r3, r3, #24	@ 000c39a4 1b06
.org 0xc39a6
	lsrs r4, r3, #24	@ 000c39a6 1c0e
.org 0xc39a8
	ldr r0, [pc, #64]	@ 000c39a8 1048
.org 0xc39aa
	ldr r0, [r0, #0]	@ 000c39aa 0068
.org 0xc39ac
	bl 0x5500	@ 000c39ac 41f7a8fd
.org 0xc39b0
	mov ip, r0	@ 000c39b0 8446
.org 0xc39b2
	cmp r0, #0	@ 000c39b2 0028
.org 0xc39b4
	beq.n 0xc3a2a	@ 000c39b4 39d0
.org 0xc39b6
	mov r1, ip	@ 000c39b6 6146
.org 0xc39b8
	adds r1, #37	@ 000c39b8 2531
.org 0xc39ba
	movs r2, #0	@ 000c39ba 0022
.org 0xc39bc
	movs r0, #8	@ 000c39bc 0820
.org 0xc39be
	strb r0, [r1, #0]	@ 000c39be 0870
.org 0xc39c0
	ldr r1, [pc, #44]	@ 000c39c0 0b49
.org 0xc39c2
	movs r0, #19	@ 000c39c2 1320
.org 0xc39c4
	mov r3, ip	@ 000c39c4 6346
.org 0xc39c6
	strb r0, [r3, #9]	@ 000c39c6 5872
.org 0xc39c8
	ldr r0, [r1, #76]	@ 000c39c8 c86c
.org 0xc39ca
	ldr r0, [r0, #0]	@ 000c39ca 0068
.org 0xc39cc
	str r0, [r3, #20]	@ 000c39cc 5861
.org 0xc39ce
	movs r0, #0	@ 000c39ce 0020
.org 0xc39d0
	strh r2, [r3, #32]	@ 000c39d0 1a84
.org 0xc39d2
	mov r1, ip	@ 000c39d2 6146
.org 0xc39d4
	adds r1, #34	@ 000c39d4 2231
.org 0xc39d6
	strb r0, [r1, #0]	@ 000c39d6 0870
.org 0xc39d8
	adds r3, r4, #0	@ 000c39d8 231c
.org 0xc39da
	cmp r3, #0	@ 000c39da 002b
.org 0xc39dc
	beq.n 0xc39f4	@ 000c39dc 0ad0
.org 0xc39de
	mov r1, ip	@ 000c39de 6146
.org 0xc39e0
	ldrb r0, [r1, #10]	@ 000c39e0 887a
.org 0xc39e2
	movs r1, #16	@ 000c39e2 1021
.org 0xc39e4
	orrs r0, r1	@ 000c39e4 0843
.org 0xc39e6
	mov r2, ip	@ 000c39e6 6246
.org 0xc39e8
	strb r0, [r2, #10]	@ 000c39e8 9072
.org 0xc39ea
	b.n 0xc3a00	@ 000c39ea 09e0
.org 0xc39ec
	.byte 0x94,0xed,0x02,0x02	@ 000c39ec data
.org 0xc39f0
	.byte 0xf4,0x49,0x86,0x08	@ 000c39f0 data
.org 0xc39f4
	mov r0, ip	@ 000c39f4 6046
.org 0xc39f6
	ldrb r1, [r0, #10]	@ 000c39f6 817a
.org 0xc39f8
	movs r0, #239	@ 000c39f8 ef20
.org 0xc39fa
	ands r0, r1	@ 000c39fa 0840
.org 0xc39fc
	mov r1, ip	@ 000c39fc 6146
.org 0xc39fe
	strb r0, [r1, #10]	@ 000c39fe 8872
.org 0xc3a00
	movs r1, #1	@ 000c3a00 0121
.org 0xc3a02
	ands r1, r3	@ 000c3a02 1940
.org 0xc3a04
	mov r0, ip	@ 000c3a04 6046
.org 0xc3a06
	adds r0, #76	@ 000c3a06 4c30
.org 0xc3a08
	strb r1, [r0, #0]	@ 000c3a08 0170
.org 0xc3a0a
	mov r3, ip	@ 000c3a0a 6346
.org 0xc3a0c
	adds r3, #74	@ 000c3a0c 4a33
.org 0xc3a0e
	lsls r1, r1, #4	@ 000c3a0e 0901
.org 0xc3a10
	ldrb r2, [r3, #0]	@ 000c3a10 1a78
.org 0xc3a12
	movs r0, #17	@ 000c3a12 1120
.org 0xc3a14
	negs r0, r0	@ 000c3a14 4042
.org 0xc3a16
	ands r0, r2	@ 000c3a16 1040
.org 0xc3a18
	orrs r0, r1	@ 000c3a18 0843
.org 0xc3a1a
	strb r0, [r3, #0]	@ 000c3a1a 1870
.org 0xc3a1c
	ldr r0, [r7, #0]	@ 000c3a1c 3868
.org 0xc3a1e
	ldr r1, [r7, #4]	@ 000c3a1e 7968
.org 0xc3a20
	mov r2, ip	@ 000c3a20 6246
.org 0xc3a22
	str r0, [r2, #84]	@ 000c3a22 5065
.org 0xc3a24
	str r1, [r2, #88]	@ 000c3a24 9165
.org 0xc3a26
	strb r6, [r2, #16]	@ 000c3a26 1674
