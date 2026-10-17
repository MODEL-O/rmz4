@ FUN_080e7ad8  entry 0x080e7ad8  size 66
.thumb
.org 0xe7ad8
FUN_080e7ad8:
	push {r4, lr}	@ 000e7ad8 10b5
.org 0xe7ada
	adds r4, r0, #0	@ 000e7ada 041c
.org 0xe7adc
	bl 0x1cc9c	@ 000e7adc 35f7def8
.org 0xe7ae0
	ldrb r1, [r4, #10]	@ 000e7ae0 a17a
.org 0xe7ae2
	movs r0, #1	@ 000e7ae2 0120
.org 0xe7ae4
	orrs r0, r1	@ 000e7ae4 0843
.org 0xe7ae6
	movs r1, #2	@ 000e7ae6 0221
.org 0xe7ae8
	orrs r0, r1	@ 000e7ae8 0843
.org 0xe7aea
	strb r0, [r4, #10]	@ 000e7aea a072
.org 0xe7aec
	ldr r1, [pc, #44]	@ 000e7aec 0b49
.org 0xe7aee
	ldrb r0, [r4, #9]	@ 000e7aee 607a
.org 0xe7af0
	lsls r0, r0, #2	@ 000e7af0 8000
.org 0xe7af2
	adds r0, r0, r1	@ 000e7af2 4018
.org 0xe7af4
	movs r1, #1	@ 000e7af4 0121
.org 0xe7af6
	str r1, [r4, #12]	@ 000e7af6 e160
.org 0xe7af8
	ldr r0, [r0, #0]	@ 000e7af8 0068
.org 0xe7afa
	ldr r0, [r0, #4]	@ 000e7afa 4068
.org 0xe7afc
	str r0, [r4, #20]	@ 000e7afc 6061
.org 0xe7afe
	ldr r1, [pc, #32]	@ 000e7afe 0849
.org 0xe7b00
	ldrb r0, [r4, #16]	@ 000e7b00 207c
.org 0xe7b02
	lsls r0, r0, #2	@ 000e7b02 8000
.org 0xe7b04
	adds r0, r0, r1	@ 000e7b04 4018
.org 0xe7b06
	ldr r1, [r0, #0]	@ 000e7b06 0168
.org 0xe7b08
	adds r0, r4, #0	@ 000e7b08 201c
.org 0xe7b0a
	bl 0x128f80	@ 000e7b0a 41f039fa
.org 0xe7b0e
	adds r0, r4, #0	@ 000e7b0e 201c
.org 0xe7b10
	bl 0xe7b24	@ 000e7b10 00f008f8
.org 0xe7b14
	pop {r4}	@ 000e7b14 10bc
.org 0xe7b16
	pop {r0}	@ 000e7b16 01bc
.org 0xe7b18
	bx r0	@ 000e7b18 0047
