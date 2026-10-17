@ FUN_081045ec  entry 0x081045ec  size 50
.thumb
.org 0x1045ec
FUN_081045ec:
	push {r4, lr}	@ 001045ec 10b5
.org 0x1045ee
	adds r4, r0, #0	@ 001045ee 041c
.org 0x1045f0
	bl 0x1cc9c	@ 001045f0 18f754fb
.org 0x1045f4
	ldrb r1, [r4, #10]	@ 001045f4 a17a
.org 0x1045f6
	movs r0, #1	@ 001045f6 0120
.org 0x1045f8
	orrs r0, r1	@ 001045f8 0843
.org 0x1045fa
	movs r1, #2	@ 001045fa 0221
.org 0x1045fc
	orrs r0, r1	@ 001045fc 0843
.org 0x1045fe
	strb r0, [r4, #10]	@ 001045fe a072
.org 0x104600
	ldr r0, [pc, #28]	@ 00104600 0748
.org 0x104602
	str r0, [r4, #96]	@ 00104602 2066
.org 0x104604
	movs r1, #217	@ 00104604 d921
.org 0x104606
	lsls r1, r1, #8	@ 00104606 0902
.org 0x104608
	adds r0, r4, #0	@ 00104608 201c
.org 0x10460a
	bl 0x1cf00	@ 0010460a 18f779fc
.org 0x10460e
	adds r4, #73	@ 0010460e 4934
.org 0x104610
	ldrb r0, [r4, #0]	@ 00104610 2078
.org 0x104612
	movs r1, #12	@ 00104612 0c21
.org 0x104614
	orrs r0, r1	@ 00104614 0843
.org 0x104616
	strb r0, [r4, #0]	@ 00104616 2070
.org 0x104618
	pop {r4}	@ 00104618 10bc
.org 0x10461a
	pop {r0}	@ 0010461a 01bc
.org 0x10461c
	bx r0	@ 0010461c 0047
