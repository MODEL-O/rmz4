@ FUN_080d24bc  entry 0x080d24bc  size 78
.thumb
.org 0xd24bc
FUN_080d24bc:
	push {r4, lr}	@ 000d24bc 10b5
.org 0xd24be
	adds r4, r0, #0	@ 000d24be 041c
.org 0xd24c0
	bl 0x1cff0	@ 000d24c0 4af796fd
.org 0xd24c4
	ldrb r1, [r4, #18]	@ 000d24c4 a17c
.org 0xd24c6
	adds r0, r1, #1	@ 000d24c6 481c
.org 0xd24c8
	strb r0, [r4, #18]	@ 000d24c8 a074
.org 0xd24ca
	movs r0, #1	@ 000d24ca 0120
.org 0xd24cc
	ands r0, r1	@ 000d24cc 0840
.org 0xd24ce
	cmp r0, #0	@ 000d24ce 0028
.org 0xd24d0
	beq.n 0xd24da	@ 000d24d0 03d0
.org 0xd24d2
	ldrb r1, [r4, #10]	@ 000d24d2 a17a
.org 0xd24d4
	movs r0, #254	@ 000d24d4 fe20
.org 0xd24d6
	ands r0, r1	@ 000d24d6 0840
.org 0xd24d8
	b.n 0xd24e0	@ 000d24d8 02e0
.org 0xd24da
	ldrb r0, [r4, #10]	@ 000d24da a07a
.org 0xd24dc
	movs r1, #1	@ 000d24dc 0121
.org 0xd24de
	orrs r0, r1	@ 000d24de 0843
.org 0xd24e0
	strb r0, [r4, #10]	@ 000d24e0 a072
.org 0xd24e2
	ldr r0, [r4, #88]	@ 000d24e2 a06d
.org 0xd24e4
	subs r0, #192	@ 000d24e4 c038
.org 0xd24e6
	str r0, [r4, #88]	@ 000d24e6 a065
.org 0xd24e8
	adds r0, r4, #0	@ 000d24e8 201c
.org 0xd24ea
	adds r0, #115	@ 000d24ea 7330
.org 0xd24ec
	ldrb r0, [r0, #0]	@ 000d24ec 0078
.org 0xd24ee
	cmp r0, #3	@ 000d24ee 0328
.org 0xd24f0
	bne.n 0xd2504	@ 000d24f0 08d1
.org 0xd24f2
	ldr r1, [pc, #24]	@ 000d24f2 0649
.org 0xd24f4
	ldrb r0, [r4, #9]	@ 000d24f4 607a
.org 0xd24f6
	lsls r0, r0, #2	@ 000d24f6 8000
.org 0xd24f8
	adds r0, r0, r1	@ 000d24f8 4018
.org 0xd24fa
	movs r1, #2	@ 000d24fa 0221
.org 0xd24fc
	str r1, [r4, #12]	@ 000d24fc e160
.org 0xd24fe
	ldr r0, [r0, #0]	@ 000d24fe 0068
.org 0xd2500
	ldr r0, [r0, #8]	@ 000d2500 8068
.org 0xd2502
	str r0, [r4, #20]	@ 000d2502 6061
.org 0xd2504
	pop {r4}	@ 000d2504 10bc
.org 0xd2506
	pop {r0}	@ 000d2506 01bc
.org 0xd2508
	bx r0	@ 000d2508 0047
