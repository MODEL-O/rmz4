@ FUN_080e4ae0  entry 0x080e4ae0  size 72
.thumb
.org 0xe4ae0
FUN_080e4ae0:
	push {r4, r5, lr}	@ 000e4ae0 30b5
.org 0xe4ae2
	adds r4, r0, #0	@ 000e4ae2 041c
.org 0xe4ae4
	bl 0x1cc9c	@ 000e4ae4 38f7daf8
.org 0xe4ae8
	ldrb r1, [r4, #10]	@ 000e4ae8 a17a
.org 0xe4aea
	movs r0, #1	@ 000e4aea 0120
.org 0xe4aec
	orrs r0, r1	@ 000e4aec 0843
.org 0xe4aee
	movs r1, #2	@ 000e4aee 0221
.org 0xe4af0
	orrs r0, r1	@ 000e4af0 0843
.org 0xe4af2
	strb r0, [r4, #10]	@ 000e4af2 a072
.org 0xe4af4
	ldr r1, [pc, #48]	@ 000e4af4 0c49
.org 0xe4af6
	ldrb r0, [r4, #9]	@ 000e4af6 607a
.org 0xe4af8
	lsls r0, r0, #2	@ 000e4af8 8000
.org 0xe4afa
	adds r0, r0, r1	@ 000e4afa 4018
.org 0xe4afc
	movs r5, #1	@ 000e4afc 0125
.org 0xe4afe
	str r5, [r4, #12]	@ 000e4afe e560
.org 0xe4b00
	ldr r0, [r0, #0]	@ 000e4b00 0068
.org 0xe4b02
	ldr r0, [r0, #4]	@ 000e4b02 4068
.org 0xe4b04
	str r0, [r4, #20]	@ 000e4b04 6061
.org 0xe4b06
	ldr r1, [pc, #36]	@ 000e4b06 0949
.org 0xe4b08
	ldrb r0, [r4, #16]	@ 000e4b08 207c
.org 0xe4b0a
	lsls r0, r0, #2	@ 000e4b0a 8000
.org 0xe4b0c
	adds r0, r0, r1	@ 000e4b0c 4018
.org 0xe4b0e
	ldr r1, [r0, #0]	@ 000e4b0e 0168
.org 0xe4b10
	adds r0, r4, #0	@ 000e4b10 201c
.org 0xe4b12
	bl 0x128f80	@ 000e4b12 44f035fa
.org 0xe4b16
	adds r0, r4, #0	@ 000e4b16 201c
.org 0xe4b18
	adds r0, #116	@ 000e4b18 7430
.org 0xe4b1a
	strb r5, [r0, #0]	@ 000e4b1a 0570
.org 0xe4b1c
	adds r0, r4, #0	@ 000e4b1c 201c
.org 0xe4b1e
	bl 0xe4b30	@ 000e4b1e 00f007f8
.org 0xe4b22
	pop {r4, r5}	@ 000e4b22 30bc
.org 0xe4b24
	pop {r0}	@ 000e4b24 01bc
.org 0xe4b26
	bx r0	@ 000e4b26 0047
