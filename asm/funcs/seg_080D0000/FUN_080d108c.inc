@ FUN_080d108c  entry 0x080d108c  size 84
.thumb
.org 0xd108c
FUN_080d108c:
	push {lr}	@ 000d108c 00b5
.org 0xd108e
	adds r2, r0, #0	@ 000d108e 021c
.org 0xd1090
	ldr r0, [r2, #120]	@ 000d1090 906f
.org 0xd1092
	cmp r0, #0	@ 000d1092 0028
.org 0xd1094
	beq.n 0xd10b8	@ 000d1094 10d0
.org 0xd1096
	subs r1, r0, #1	@ 000d1096 411e
.org 0xd1098
	str r1, [r2, #120]	@ 000d1098 9167
.org 0xd109a
	cmp r0, #31	@ 000d109a 1f28
.org 0xd109c
	bgt.n 0xd10d0	@ 000d109c 18dc
.org 0xd109e
	movs r0, #1	@ 000d109e 0120
.org 0xd10a0
	ands r1, r0	@ 000d10a0 0140
.org 0xd10a2
	cmp r1, #0	@ 000d10a2 0029
.org 0xd10a4
	beq.n 0xd10ae	@ 000d10a4 03d0
.org 0xd10a6
	ldrb r1, [r2, #10]	@ 000d10a6 917a
.org 0xd10a8
	orrs r0, r1	@ 000d10a8 0843
.org 0xd10aa
	strb r0, [r2, #10]	@ 000d10aa 9072
.org 0xd10ac
	b.n 0xd10d0	@ 000d10ac 10e0
.org 0xd10ae
	ldrb r1, [r2, #10]	@ 000d10ae 917a
.org 0xd10b0
	movs r0, #254	@ 000d10b0 fe20
.org 0xd10b2
	ands r0, r1	@ 000d10b2 0840
.org 0xd10b4
	strb r0, [r2, #10]	@ 000d10b4 9072
.org 0xd10b6
	b.n 0xd10d0	@ 000d10b6 0be0
.org 0xd10b8
	ldr r1, [pc, #16]	@ 000d10b8 0449
.org 0xd10ba
	ldrb r0, [r2, #9]	@ 000d10ba 507a
.org 0xd10bc
	lsls r0, r0, #2	@ 000d10bc 8000
.org 0xd10be
	adds r0, r0, r1	@ 000d10be 4018
.org 0xd10c0
	movs r1, #3	@ 000d10c0 0321
.org 0xd10c2
	str r1, [r2, #12]	@ 000d10c2 d160
.org 0xd10c4
	ldr r0, [r0, #0]	@ 000d10c4 0068
.org 0xd10c6
	ldr r0, [r0, #12]	@ 000d10c6 c068
.org 0xd10c8
	str r0, [r2, #20]	@ 000d10c8 5061
.org 0xd10ca
	b.n 0xd10e0	@ 000d10ca 09e0
.org 0xd10cc
	.byte 0x64,0x6f,0x86,0x08	@ 000d10cc data
.org 0xd10d0
	ldr r0, [pc, #16]	@ 000d10d0 0448
.org 0xd10d2
	ldrb r1, [r2, #16]	@ 000d10d2 117c
.org 0xd10d4
	lsls r1, r1, #2	@ 000d10d4 8900
.org 0xd10d6
	adds r1, r1, r0	@ 000d10d6 0918
.org 0xd10d8
	ldr r1, [r1, #0]	@ 000d10d8 0968
.org 0xd10da
	adds r0, r2, #0	@ 000d10da 101c
.org 0xd10dc
	bl 0x128f80	@ 000d10dc 57f050ff
