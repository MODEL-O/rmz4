@ FUN_0810465c  entry 0x0810465c  size 50
.thumb
.org 0x10465c
FUN_0810465c:
	push {r4, lr}	@ 0010465c 10b5
.org 0x10465e
	adds r4, r0, #0	@ 0010465e 041c
.org 0x104660
	bl 0x1cc9c	@ 00104660 18f71cfb
.org 0x104664
	ldrb r1, [r4, #10]	@ 00104664 a17a
.org 0x104666
	movs r0, #1	@ 00104666 0120
.org 0x104668
	orrs r0, r1	@ 00104668 0843
.org 0x10466a
	movs r1, #2	@ 0010466a 0221
.org 0x10466c
	orrs r0, r1	@ 0010466c 0843
.org 0x10466e
	strb r0, [r4, #10]	@ 0010466e a072
.org 0x104670
	ldr r0, [pc, #28]	@ 00104670 0748
.org 0x104672
	str r0, [r4, #96]	@ 00104672 2066
.org 0x104674
	movs r1, #219	@ 00104674 db21
.org 0x104676
	lsls r1, r1, #8	@ 00104676 0902
.org 0x104678
	adds r0, r4, #0	@ 00104678 201c
.org 0x10467a
	bl 0x1cf00	@ 0010467a 18f741fc
.org 0x10467e
	adds r4, #73	@ 0010467e 4934
.org 0x104680
	ldrb r0, [r4, #0]	@ 00104680 2078
.org 0x104682
	movs r1, #12	@ 00104682 0c21
.org 0x104684
	orrs r0, r1	@ 00104684 0843
.org 0x104686
	strb r0, [r4, #0]	@ 00104686 2070
.org 0x104688
	pop {r4}	@ 00104688 10bc
.org 0x10468a
	pop {r0}	@ 0010468a 01bc
.org 0x10468c
	bx r0	@ 0010468c 0047
