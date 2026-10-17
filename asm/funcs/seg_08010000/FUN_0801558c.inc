@ FUN_0801558c  entry 0x0801558c  size 202
.thumb
.org 0x1558c
FUN_0801558c:
	push {r4, r5, r6, r7, lr}	@ 0001558c f0b5
.org 0x1558e
	adds r6, r0, #0	@ 0001558e 061c
.org 0x15590
	movs r4, #159	@ 00015590 9f24
.org 0x15592
	movs r0, #160	@ 00015592 a020
.org 0x15594
	lsls r0, r0, #2	@ 00015594 8000
.org 0x15596
	bl 0xa70	@ 00015596 ebf76bfa
.org 0x1559a
	adds r7, r0, #0	@ 0001559a 071c
.org 0x1559c
	cmp r7, #0	@ 0001559c 002f
.org 0x1559e
	beq.n 0x15650	@ 0001559e 57d0
.org 0x155a0
	ldr r2, [pc, #180]	@ 000155a0 2d4a
.org 0x155a2
	movs r1, #186	@ 000155a2 ba21
.org 0x155a4
	lsls r1, r1, #1	@ 000155a4 4900
.org 0x155a6
	adds r0, r2, r1	@ 000155a6 5018
.org 0x155a8
	str r7, [r0, #0]	@ 000155a8 0760
.org 0x155aa
	movs r0, #188	@ 000155aa bc20
.org 0x155ac
	lsls r0, r0, #1	@ 000155ac 4000
.org 0x155ae
	adds r1, r2, r0	@ 000155ae 1118
.org 0x155b0
	ldr r0, [pc, #168]	@ 000155b0 2a48
.org 0x155b2
	str r0, [r1, #0]	@ 000155b2 0860
.org 0x155b4
	movs r0, #190	@ 000155b4 be20
.org 0x155b6
	lsls r0, r0, #1	@ 000155b6 4000
.org 0x155b8
	adds r1, r2, r0	@ 000155b8 1118
.org 0x155ba
	ldr r0, [pc, #164]	@ 000155ba 2948
.org 0x155bc
	str r0, [r1, #0]	@ 000155bc 0860
.org 0x155be
	ldr r0, [r6, #52]	@ 000155be 706b
.org 0x155c0
	lsls r0, r0, #14	@ 000155c0 8003
.org 0x155c2
	lsrs r5, r0, #16	@ 000155c2 050c
.org 0x155c4
	ldr r0, [r6, #56]	@ 000155c4 b06b
.org 0x155c6
	ldr r1, [pc, #156]	@ 000155c6 2749
.org 0x155c8
	adds r0, r0, r1	@ 000155c8 4018
.org 0x155ca
	lsls r3, r0, #16	@ 000155ca 0304
.org 0x155cc
	asrs r0, r3, #16	@ 000155cc 1814
.org 0x155ce
	adds r0, #159	@ 000155ce 9f30
.org 0x155d0
	cmp r0, #167	@ 000155d0 a728
.org 0x155d2
	ble.n 0x155f0	@ 000155d2 0ddd
.org 0x155d4
	movs r0, #159	@ 000155d4 9f20
.org 0x155d6
	lsls r0, r0, #2	@ 000155d6 8000
.org 0x155d8
	adds r2, r7, r0	@ 000155d8 3a18
.org 0x155da
	asrs r1, r3, #16	@ 000155da 1914
.org 0x155dc
	adds r0, r3, #0	@ 000155dc 181c
.org 0x155de
	orrs r0, r5	@ 000155de 2843
.org 0x155e0
	str r0, [r2, #0]	@ 000155e0 1060
.org 0x155e2
	subs r2, #4	@ 000155e2 043a
.org 0x155e4
	subs r4, #1	@ 000155e4 013c
.org 0x155e6
	adds r1, r1, r4	@ 000155e6 0919
.org 0x155e8
	cmp r1, #167	@ 000155e8 a729
.org 0x155ea
	ble.n 0x155f0	@ 000155ea 01dd
.org 0x155ec
	cmp r4, #0	@ 000155ec 002c
.org 0x155ee
	bge.n 0x155da	@ 000155ee f4da
.org 0x155f0
	lsls r0, r4, #16	@ 000155f0 2004
.org 0x155f2
	ldr r1, [r6, #52]	@ 000155f2 716b
.org 0x155f4
	lsls r1, r1, #15	@ 000155f4 c903
.org 0x155f6
	lsrs r5, r1, #16	@ 000155f6 0d0c
.org 0x155f8
	ldr r1, [r6, #56]	@ 000155f8 b16b
.org 0x155fa
	ldr r2, [pc, #108]	@ 000155fa 1b4a
.org 0x155fc
	adds r1, r1, r2	@ 000155fc 8918
.org 0x155fe
	lsls r1, r1, #16	@ 000155fe 0904
.org 0x15600
	lsrs r1, r1, #16	@ 00015600 090c
.org 0x15602
	movs r4, #0	@ 00015602 0024
.org 0x15604
	lsrs r2, r0, #16	@ 00015604 020c
.org 0x15606
	mov ip, r2	@ 00015606 9446
.org 0x15608
	asrs r3, r0, #16	@ 00015608 0314
.org 0x1560a
	cmp r4, r3	@ 0001560a 9c42
.org 0x1560c
	bgt.n 0x15650	@ 0001560c 20dc
.org 0x1560e
	lsls r0, r1, #16	@ 0001560e 0804
.org 0x15610
	asrs r0, r0, #16	@ 00015610 0014
.org 0x15612
	cmp r0, #159	@ 00015612 9f28
.org 0x15614
	bgt.n 0x1562c	@ 00015614 0adc
.org 0x15616
	adds r6, r7, #0	@ 00015616 3e1c
.org 0x15618
	adds r1, r0, #0	@ 00015618 011c
.org 0x1561a
	lsls r2, r1, #16	@ 0001561a 0a04
.org 0x1561c
	orrs r2, r5	@ 0001561c 2a43
.org 0x1561e
	stmia r6!, {r2}	@ 0001561e 04c6
.org 0x15620
	adds r4, #1	@ 00015620 0134
.org 0x15622
	cmp r4, r3	@ 00015622 9c42
.org 0x15624
	bgt.n 0x15650	@ 00015624 14dc
.org 0x15626
	adds r0, r1, r4	@ 00015626 0819
.org 0x15628
	cmp r0, #159	@ 00015628 9f28
.org 0x1562a
	ble.n 0x1561e	@ 0001562a f8dd
.org 0x1562c
	mov r1, ip	@ 0001562c 6146
.org 0x1562e
	lsls r0, r1, #16	@ 0001562e 0804
.org 0x15630
	asrs r0, r0, #16	@ 00015630 0014
.org 0x15632
	cmp r4, r0	@ 00015632 8442
.org 0x15634
	bgt.n 0x15650	@ 00015634 0cdc
.org 0x15636
	adds r2, r0, #0	@ 00015636 021c
.org 0x15638
	lsls r0, r4, #16	@ 00015638 2004
.org 0x1563a
	movs r1, #160	@ 0001563a a021
.org 0x1563c
	lsls r1, r1, #16	@ 0001563c 0904
.org 0x1563e
	subs r1, r1, r0	@ 0001563e 091a
.org 0x15640
	lsls r0, r4, #2	@ 00015640 a000
.org 0x15642
	adds r0, r0, r7	@ 00015642 c019
.org 0x15644
	ldr r3, [pc, #36]	@ 00015644 094b
.org 0x15646
	stmia r0!, {r1}	@ 00015646 02c0
.org 0x15648
	adds r1, r1, r3	@ 00015648 c918
.org 0x1564a
	adds r4, #1	@ 0001564a 0134
.org 0x1564c
	cmp r4, r2	@ 0001564c 9442
.org 0x1564e
	ble.n 0x15646	@ 0001564e fadd
.org 0x15650
	pop {r4, r5, r6, r7}	@ 00015650 f0bc
.org 0x15652
	pop {r0}	@ 00015652 01bc
.org 0x15654
	bx r0	@ 00015654 0047
