@ FUN_080dd978  entry 0x080dd978  size 92
.thumb
.org 0xdd978
FUN_080dd978:
	push {r4, lr}	@ 000dd978 10b5
.org 0xdd97a
	adds r4, r0, #0	@ 000dd97a 041c
.org 0xdd97c
	bl 0x1cc9c	@ 000dd97c 3ff78ef9
.org 0xdd980
	ldrb r1, [r4, #10]	@ 000dd980 a17a
.org 0xdd982
	movs r0, #1	@ 000dd982 0120
.org 0xdd984
	orrs r0, r1	@ 000dd984 0843
.org 0xdd986
	movs r1, #2	@ 000dd986 0221
.org 0xdd988
	orrs r0, r1	@ 000dd988 0843
.org 0xdd98a
	strb r0, [r4, #10]	@ 000dd98a a072
.org 0xdd98c
	ldr r1, [pc, #24]	@ 000dd98c 0649
.org 0xdd98e
	adds r0, r4, #0	@ 000dd98e 201c
.org 0xdd990
	bl 0x1cf00	@ 000dd990 3ff7b6fa
.org 0xdd994
	adds r0, r4, #0	@ 000dd994 201c
.org 0xdd996
	bl 0x1cff0	@ 000dd996 3ff72bfb
.org 0xdd99a
	ldrb r1, [r4, #10]	@ 000dd99a a17a
.org 0xdd99c
	movs r0, #16	@ 000dd99c 1020
.org 0xdd99e
	ands r0, r1	@ 000dd99e 0840
.org 0xdd9a0
	cmp r0, #0	@ 000dd9a0 0028
.org 0xdd9a2
	beq.n 0xdd9b0	@ 000dd9a2 05d0
.org 0xdd9a4
	ldr r0, [pc, #4]	@ 000dd9a4 0148
.org 0xdd9a6
	b.n 0xdd9b4	@ 000dd9a6 05e0
.org 0xdd9a8
	.byte 0x0c,0x93,0x00,0x00	@ 000dd9a8 data
.org 0xdd9ac
	.byte 0x40,0xfe,0xff,0xff	@ 000dd9ac data
.org 0xdd9b0
	movs r0, #224	@ 000dd9b0 e020
.org 0xdd9b2
	lsls r0, r0, #1	@ 000dd9b2 4000
.org 0xdd9b4
	str r0, [r4, #92]	@ 000dd9b4 e065
.org 0xdd9b6
	ldr r0, [pc, #36]	@ 000dd9b6 0948
.org 0xdd9b8
	str r0, [r4, #96]	@ 000dd9b8 2066
.org 0xdd9ba
	movs r0, #20	@ 000dd9ba 1420
.org 0xdd9bc
	strb r0, [r4, #18]	@ 000dd9bc a074
.org 0xdd9be
	ldr r1, [pc, #32]	@ 000dd9be 0849
.org 0xdd9c0
	ldrb r0, [r4, #9]	@ 000dd9c0 607a
.org 0xdd9c2
	lsls r0, r0, #2	@ 000dd9c2 8000
.org 0xdd9c4
	adds r0, r0, r1	@ 000dd9c4 4018
.org 0xdd9c6
	movs r1, #1	@ 000dd9c6 0121
.org 0xdd9c8
	str r1, [r4, #12]	@ 000dd9c8 e160
.org 0xdd9ca
	ldr r0, [r0, #0]	@ 000dd9ca 0068
.org 0xdd9cc
	ldr r0, [r0, #4]	@ 000dd9cc 4068
.org 0xdd9ce
	str r0, [r4, #20]	@ 000dd9ce 6061
.org 0xdd9d0
	adds r0, r4, #0	@ 000dd9d0 201c
.org 0xdd9d2
	bl 0xdd6c8	@ 000dd9d2 fff779fe
