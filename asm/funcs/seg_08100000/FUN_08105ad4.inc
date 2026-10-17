@ FUN_08105ad4  entry 0x08105ad4  size 52
.thumb
.org 0x105ad4
FUN_08105ad4:
	push {r4, lr}	@ 00105ad4 10b5
.org 0x105ad6
	adds r4, r0, #0	@ 00105ad6 041c
.org 0x105ad8
	ldrb r1, [r4, #10]	@ 00105ad8 a17a
.org 0x105ada
	movs r0, #1	@ 00105ada 0120
.org 0x105adc
	orrs r0, r1	@ 00105adc 0843
.org 0x105ade
	movs r1, #2	@ 00105ade 0221
.org 0x105ae0
	orrs r0, r1	@ 00105ae0 0843
.org 0x105ae2
	strb r0, [r4, #10]	@ 00105ae2 a072
.org 0x105ae4
	adds r0, r4, #0	@ 00105ae4 201c
.org 0x105ae6
	bl 0x1cc9c	@ 00105ae6 17f7d9f8
.org 0x105aea
	ldr r1, [pc, #28]	@ 00105aea 0749
.org 0x105aec
	ldrb r0, [r4, #9]	@ 00105aec 607a
.org 0x105aee
	lsls r0, r0, #2	@ 00105aee 8000
.org 0x105af0
	adds r0, r0, r1	@ 00105af0 4018
.org 0x105af2
	movs r1, #1	@ 00105af2 0121
.org 0x105af4
	str r1, [r4, #12]	@ 00105af4 e160
.org 0x105af6
	ldr r0, [r0, #0]	@ 00105af6 0068
.org 0x105af8
	ldr r0, [r0, #4]	@ 00105af8 4068
.org 0x105afa
	str r0, [r4, #20]	@ 00105afa 6061
.org 0x105afc
	adds r0, r4, #0	@ 00105afc 201c
.org 0x105afe
	bl 0x1057b8	@ 00105afe fff75bfe
.org 0x105b02
	pop {r4}	@ 00105b02 10bc
.org 0x105b04
	pop {r0}	@ 00105b04 01bc
.org 0x105b06
	bx r0	@ 00105b06 0047
