@ FUN_0809acdc  entry 0x0809acdc  size 68
.thumb
.org 0x9acdc
FUN_0809acdc:
	push {r4, lr}	@ 0009acdc 10b5
.org 0x9acde
	adds r4, r0, #0	@ 0009acde 041c
.org 0x9ace0
	adds r0, #84	@ 0009ace0 5430
.org 0x9ace2
	movs r1, #0	@ 0009ace2 0021
.org 0x9ace4
	movs r2, #3	@ 0009ace4 0322
.org 0x9ace6
	movs r3, #24	@ 0009ace6 1823
.org 0x9ace8
	bl 0xc62a0	@ 0009ace8 2bf0dafa
.org 0x9acec
	adds r0, r4, #0	@ 0009acec 201c
.org 0x9acee
	adds r0, #140	@ 0009acee 8c30
.org 0x9acf0
	movs r1, #0	@ 0009acf0 0021
.org 0x9acf2
	str r1, [r0, #0]	@ 0009acf2 0160
.org 0x9acf4
	adds r0, #4	@ 0009acf4 0430
.org 0x9acf6
	str r1, [r0, #0]	@ 0009acf6 0160
.org 0x9acf8
	adds r0, #4	@ 0009acf8 0430
.org 0x9acfa
	strb r1, [r0, #0]	@ 0009acfa 0170
.org 0x9acfc
	ldrb r1, [r4, #10]	@ 0009acfc a17a
.org 0x9acfe
	movs r0, #251	@ 0009acfe fb20
.org 0x9ad00
	ands r0, r1	@ 0009ad00 0840
.org 0x9ad02
	movs r1, #254	@ 0009ad02 fe21
.org 0x9ad04
	ands r0, r1	@ 0009ad04 0840
.org 0x9ad06
	strb r0, [r4, #10]	@ 0009ad06 a072
.org 0x9ad08
	ldr r1, [pc, #20]	@ 0009ad08 0549
.org 0x9ad0a
	ldrb r0, [r4, #9]	@ 0009ad0a 607a
.org 0x9ad0c
	lsls r0, r0, #2	@ 0009ad0c 8000
.org 0x9ad0e
	adds r0, r0, r1	@ 0009ad0e 4018
.org 0x9ad10
	movs r1, #4	@ 0009ad10 0421
.org 0x9ad12
	str r1, [r4, #12]	@ 0009ad12 e160
.org 0x9ad14
	ldr r0, [r0, #0]	@ 0009ad14 0068
.org 0x9ad16
	ldr r0, [r0, #16]	@ 0009ad16 0069
.org 0x9ad18
	str r0, [r4, #20]	@ 0009ad18 6061
.org 0x9ad1a
	pop {r4}	@ 0009ad1a 10bc
.org 0x9ad1c
	pop {r0}	@ 0009ad1c 01bc
.org 0x9ad1e
	bx r0	@ 0009ad1e 0047
