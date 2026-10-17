@ FUN_080d9ac8  entry 0x080d9ac8  size 128
.thumb
.org 0xd9ac8
FUN_080d9ac8:
	push {r4, r5, r6, lr}	@ 000d9ac8 70b5
.org 0xd9aca
	mov r6, r8	@ 000d9aca 4646
.org 0xd9acc
	push {r6}	@ 000d9acc 40b4
.org 0xd9ace
	sub sp, #8	@ 000d9ace 82b0
.org 0xd9ad0
	adds r4, r0, #0	@ 000d9ad0 041c
.org 0xd9ad2
	ldrb r1, [r4, #10]	@ 000d9ad2 a17a
.org 0xd9ad4
	movs r0, #254	@ 000d9ad4 fe20
.org 0xd9ad6
	ands r0, r1	@ 000d9ad6 0840
.org 0xd9ad8
	strb r0, [r4, #10]	@ 000d9ad8 a072
.org 0xd9ada
	ldr r0, [pc, #108]	@ 000d9ada 1b48
.org 0xd9adc
	mov r8, r0	@ 000d9adc 8046
.org 0xd9ade
	ldr r0, [r0, #0]	@ 000d9ade 0068
.org 0xd9ae0
	ldr r6, [pc, #104]	@ 000d9ae0 1a4e
.org 0xd9ae2
	muls r0, r6	@ 000d9ae2 7043
.org 0xd9ae4
	ldr r2, [pc, #104]	@ 000d9ae4 1a4a
.org 0xd9ae6
	adds r0, r0, r2	@ 000d9ae6 8018
.org 0xd9ae8
	lsls r0, r0, #1	@ 000d9ae8 4000
.org 0xd9aea
	lsrs r5, r0, #1	@ 000d9aea 4508
.org 0xd9aec
	lsrs r0, r0, #17	@ 000d9aec 400c
.org 0xd9aee
	movs r3, #7	@ 000d9aee 0723
.org 0xd9af0
	ands r0, r3	@ 000d9af0 1840
.org 0xd9af2
	subs r0, #3	@ 000d9af2 0338
.org 0xd9af4
	lsls r0, r0, #8	@ 000d9af4 0002
.org 0xd9af6
	ldr r1, [r4, #84]	@ 000d9af6 616d
.org 0xd9af8
	adds r1, r1, r0	@ 000d9af8 0918
.org 0xd9afa
	str r1, [sp, #0]	@ 000d9afa 0091
.org 0xd9afc
	adds r0, r5, #0	@ 000d9afc 281c
.org 0xd9afe
	muls r0, r6	@ 000d9afe 7043
.org 0xd9b00
	adds r0, r0, r2	@ 000d9b00 8018
.org 0xd9b02
	lsls r0, r0, #1	@ 000d9b02 4000
.org 0xd9b04
	lsrs r1, r0, #1	@ 000d9b04 4108
.org 0xd9b06
	mov r2, r8	@ 000d9b06 4246
.org 0xd9b08
	str r1, [r2, #0]	@ 000d9b08 1160
.org 0xd9b0a
	lsrs r0, r0, #17	@ 000d9b0a 400c
.org 0xd9b0c
	ands r0, r3	@ 000d9b0c 1840
.org 0xd9b0e
	subs r0, #3	@ 000d9b0e 0338
.org 0xd9b10
	lsls r0, r0, #8	@ 000d9b10 0002
.org 0xd9b12
	ldr r1, [r4, #88]	@ 000d9b12 a16d
.org 0xd9b14
	adds r1, r1, r0	@ 000d9b14 0918
.org 0xd9b16
	ldr r0, [pc, #60]	@ 000d9b16 0f48
.org 0xd9b18
	adds r1, r1, r0	@ 000d9b18 0918
.org 0xd9b1a
	str r1, [sp, #4]	@ 000d9b1a 0191
.org 0xd9b1c
	movs r0, #1	@ 000d9b1c 0120
.org 0xd9b1e
	mov r1, sp	@ 000d9b1e 6946
.org 0xd9b20
	bl 0xd0c88	@ 000d9b20 f7f7b2f8
.org 0xd9b24
	adds r0, r4, #0	@ 000d9b24 201c
.org 0xd9b26
	bl 0xd9b5c	@ 000d9b26 00f019f8
.org 0xd9b2a
	ldr r1, [pc, #44]	@ 000d9b2a 0b49
.org 0xd9b2c
	ldrb r0, [r4, #9]	@ 000d9b2c 607a
.org 0xd9b2e
	lsls r0, r0, #2	@ 000d9b2e 8000
.org 0xd9b30
	adds r0, r0, r1	@ 000d9b30 4018
.org 0xd9b32
	movs r1, #4	@ 000d9b32 0421
.org 0xd9b34
	str r1, [r4, #12]	@ 000d9b34 e160
.org 0xd9b36
	ldr r0, [r0, #0]	@ 000d9b36 0068
.org 0xd9b38
	ldr r0, [r0, #16]	@ 000d9b38 0069
.org 0xd9b3a
	str r0, [r4, #20]	@ 000d9b3a 6061
.org 0xd9b3c
	add sp, #8	@ 000d9b3c 02b0
.org 0xd9b3e
	pop {r3}	@ 000d9b3e 08bc
.org 0xd9b40
	mov r8, r3	@ 000d9b40 9846
.org 0xd9b42
	pop {r4, r5, r6}	@ 000d9b42 70bc
.org 0xd9b44
	pop {r0}	@ 000d9b44 01bc
.org 0xd9b46
	bx r0	@ 000d9b46 0047
