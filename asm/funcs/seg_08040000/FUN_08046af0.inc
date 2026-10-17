@ FUN_08046af0  entry 0x08046af0  size 48
.thumb
.org 0x46af0
FUN_08046af0:
	adds r2, r0, #0	@ 00046af0 021c
.org 0x46af2
	adds r0, #140	@ 00046af2 8c30
.org 0x46af4
	movs r1, #0	@ 00046af4 0021
.org 0x46af6
	str r1, [r0, #0]	@ 00046af6 0160
.org 0x46af8
	adds r0, #4	@ 00046af8 0430
.org 0x46afa
	str r1, [r0, #0]	@ 00046afa 0160
.org 0x46afc
	adds r0, #4	@ 00046afc 0430
.org 0x46afe
	strb r1, [r0, #0]	@ 00046afe 0170
.org 0x46b00
	ldrb r1, [r2, #10]	@ 00046b00 917a
.org 0x46b02
	movs r0, #251	@ 00046b02 fb20
.org 0x46b04
	ands r0, r1	@ 00046b04 0840
.org 0x46b06
	movs r1, #254	@ 00046b06 fe21
.org 0x46b08
	ands r0, r1	@ 00046b08 0840
.org 0x46b0a
	strb r0, [r2, #10]	@ 00046b0a 9072
.org 0x46b0c
	ldr r1, [pc, #16]	@ 00046b0c 0449
.org 0x46b0e
	ldrb r0, [r2, #9]	@ 00046b0e 507a
.org 0x46b10
	lsls r0, r0, #2	@ 00046b10 8000
.org 0x46b12
	adds r0, r0, r1	@ 00046b12 4018
.org 0x46b14
	movs r1, #4	@ 00046b14 0421
.org 0x46b16
	str r1, [r2, #12]	@ 00046b16 d160
.org 0x46b18
	ldr r0, [r0, #0]	@ 00046b18 0068
.org 0x46b1a
	ldr r0, [r0, #16]	@ 00046b1a 0069
.org 0x46b1c
	str r0, [r2, #20]	@ 00046b1c 5061
.org 0x46b1e
	bx lr	@ 00046b1e 7047
