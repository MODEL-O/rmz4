@ FUN_080375cc  entry 0x080375cc  size 84
.thumb
.org 0x375cc
FUN_080375cc:
	push {r4, lr}	@ 000375cc 10b5
.org 0x375ce
	adds r4, r0, #0	@ 000375ce 041c
.org 0x375d0
	adds r1, r4, #0	@ 000375d0 211c
.org 0x375d2
	adds r1, #180	@ 000375d2 b431
.org 0x375d4
	ldrb r0, [r1, #12]	@ 000375d4 087b
.org 0x375d6
	cmp r0, #4	@ 000375d6 0428
.org 0x375d8
	beq.n 0x375fa	@ 000375d8 0fd0
.org 0x375da
	ldrb r0, [r1, #13]	@ 000375da 487b
.org 0x375dc
	cmp r0, #4	@ 000375dc 0428
.org 0x375de
	beq.n 0x375fa	@ 000375de 0cd0
.org 0x375e0
	movs r1, #160	@ 000375e0 a021
.org 0x375e2
	lsls r1, r1, #3	@ 000375e2 c900
.org 0x375e4
	adds r0, r4, #0	@ 000375e4 201c
.org 0x375e6
	movs r2, #4	@ 000375e6 0422
.org 0x375e8
	movs r3, #1	@ 000375e8 0123
.org 0x375ea
	bl 0x1cfc8	@ 000375ea e5f7edfc
.org 0x375ee
	movs r0, #128	@ 000375ee 8020
.org 0x375f0
	lsls r0, r0, #1	@ 000375f0 4000
.org 0x375f2
	adds r1, r4, r0	@ 000375f2 2118
.org 0x375f4
	movs r0, #0	@ 000375f4 0020
.org 0x375f6
	strb r0, [r1, #0]	@ 000375f6 0870
.org 0x375f8
	b.n 0x3761a	@ 000375f8 0fe0
.org 0x375fa
	ldr r0, [pc, #36]	@ 000375fa 0948
.org 0x375fc
	adds r2, r4, r0	@ 000375fc 2218
.org 0x375fe
	ldrb r0, [r2, #0]	@ 000375fe 1078
.org 0x37600
	movs r1, #4	@ 00037600 0421
.org 0x37602
	orrs r0, r1	@ 00037602 0843
.org 0x37604
	strb r0, [r2, #0]	@ 00037604 1070
.org 0x37606
	ldr r1, [pc, #28]	@ 00037606 0749
.org 0x37608
	ldr r2, [pc, #28]	@ 00037608 074a
.org 0x3760a
	adds r0, r4, r2	@ 0003760a a018
.org 0x3760c
	ldrb r0, [r0, #0]	@ 0003760c 0078
.org 0x3760e
	lsls r0, r0, #2	@ 0003760e 8000
.org 0x37610
	adds r0, r0, r1	@ 00037610 4018
.org 0x37612
	ldr r1, [r0, #0]	@ 00037612 0168
.org 0x37614
	adds r0, r4, #0	@ 00037614 201c
.org 0x37616
	bl 0x128f80	@ 00037616 f1f0b3fc
.org 0x3761a
	pop {r4}	@ 0003761a 10bc
.org 0x3761c
	pop {r0}	@ 0003761c 01bc
.org 0x3761e
	bx r0	@ 0003761e 0047
