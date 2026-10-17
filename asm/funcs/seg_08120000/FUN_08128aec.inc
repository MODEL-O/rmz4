@ FUN_08128aec  entry 0x08128aec  size 54
.thumb
.org 0x128aec
FUN_08128aec:
	push {r4, lr}	@ 00128aec 10b5
.org 0x128aee
	ldr r2, [r1, #64]	@ 00128aee 0a6c
.org 0x128af0
	ldr r0, [pc, #48]	@ 00128af0 0c48
.org 0x128af2
	ands r4, r0	@ 00128af2 0440
.org 0x128af4
	ldrb r0, [r2, #0]	@ 00128af4 1078
.org 0x128af6
	orrs r4, r0	@ 00128af6 0443
.org 0x128af8
	ldrb r0, [r2, #1]	@ 00128af8 5078
.org 0x128afa
	lsls r3, r0, #8	@ 00128afa 0302
.org 0x128afc
	ldr r0, [pc, #40]	@ 00128afc 0a48
.org 0x128afe
	ands r4, r0	@ 00128afe 0440
.org 0x128b00
	orrs r4, r3	@ 00128b00 1c43
.org 0x128b02
	ldrb r0, [r2, #2]	@ 00128b02 9078
.org 0x128b04
	lsls r3, r0, #16	@ 00128b04 0304
.org 0x128b06
	ldr r0, [pc, #36]	@ 00128b06 0948
.org 0x128b08
	ands r4, r0	@ 00128b08 0440
.org 0x128b0a
	orrs r4, r3	@ 00128b0a 1c43
.org 0x128b0c
	ldrb r0, [r2, #3]	@ 00128b0c d078
.org 0x128b0e
	lsls r3, r0, #24	@ 00128b0e 0306
.org 0x128b10
	ldr r0, [pc, #28]	@ 00128b10 0748
.org 0x128b12
	ands r4, r0	@ 00128b12 0440
.org 0x128b14
	orrs r4, r3	@ 00128b14 1c43
.org 0x128b16
	str r4, [r1, #40]	@ 00128b16 8c62
.org 0x128b18
	adds r2, #4	@ 00128b18 0432
.org 0x128b1a
	str r2, [r1, #64]	@ 00128b1a 0a64
.org 0x128b1c
	pop {r4}	@ 00128b1c 10bc
.org 0x128b1e
	pop {r0}	@ 00128b1e 01bc
.org 0x128b20
	bx r0	@ 00128b20 0047
