@ FUN_080aa5d4  entry 0x080aa5d4  size 72
.thumb
.org 0xaa5d4
FUN_080aa5d4:
	push {r4, r5, r6, lr}	@ 000aa5d4 70b5
.org 0xaa5d6
	adds r4, r0, #0	@ 000aa5d6 041c
.org 0xaa5d8
	ldr r0, [r4, #20]	@ 000aa5d8 6069
.org 0xaa5da
	movs r6, #1	@ 000aa5da 0126
.org 0xaa5dc
	ands r0, r6	@ 000aa5dc 3040
.org 0xaa5de
	cmp r0, #0	@ 000aa5de 0028
.org 0xaa5e0
	beq.n 0xaa616	@ 000aa5e0 19d0
.org 0xaa5e2
	ldr r5, [r4, #44]	@ 000aa5e2 e56a
.org 0xaa5e4
	movs r0, #20	@ 000aa5e4 1420
.org 0xaa5e6
	bl 0x6984	@ 000aa5e6 5cf7cdf9
.org 0xaa5ea
	ldr r1, [r4, #20]	@ 000aa5ea 6169
.org 0xaa5ec
	movs r0, #128	@ 000aa5ec 8020
.org 0xaa5ee
	lsls r0, r0, #2	@ 000aa5ee 8000
.org 0xaa5f0
	ands r0, r1	@ 000aa5f0 0840
.org 0xaa5f2
	cmp r0, #0	@ 000aa5f2 0028
.org 0xaa5f4
	beq.n 0xaa616	@ 000aa5f4 0fd0
.org 0xaa5f6
	movs r0, #128	@ 000aa5f6 8020
.org 0xaa5f8
	lsls r0, r0, #10	@ 000aa5f8 8002
.org 0xaa5fa
	ands r1, r0	@ 000aa5fa 0140
.org 0xaa5fc
	cmp r1, #0	@ 000aa5fc 0029
.org 0xaa5fe
	beq.n 0xaa616	@ 000aa5fe 0ad0
.org 0xaa600
	adds r0, r5, #0	@ 000aa600 281c
.org 0xaa602
	adds r0, #181	@ 000aa602 b530
.org 0xaa604
	strb r6, [r0, #0]	@ 000aa604 0670
.org 0xaa606
	ldr r0, [pc, #20]	@ 000aa606 0548
.org 0xaa608
	ldr r0, [r0, #0]	@ 000aa608 0068
.org 0xaa60a
	cmp r0, #0	@ 000aa60a 0028
.org 0xaa60c
	beq.n 0xaa616	@ 000aa60c 03d0
.org 0xaa60e
	movs r1, #4	@ 000aa60e 0421
.org 0xaa610
	movs r2, #3	@ 000aa610 0322
.org 0xaa612
	bl 0x3a578	@ 000aa612 8ff7b1ff
.org 0xaa616
	pop {r4, r5, r6}	@ 000aa616 70bc
.org 0xaa618
	pop {r0}	@ 000aa618 01bc
.org 0xaa61a
	bx r0	@ 000aa61a 0047
