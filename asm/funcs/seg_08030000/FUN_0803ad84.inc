@ FUN_0803ad84  entry 0x0803ad84  size 148
.thumb
.org 0x3ad84
FUN_0803ad84:
	push {r4, r5, r6, lr}	@ 0003ad84 70b5
.org 0x3ad86
	sub sp, #16	@ 0003ad86 84b0
.org 0x3ad88
	adds r4, r0, #0	@ 0003ad88 041c
.org 0x3ad8a
	lsls r1, r1, #24	@ 0003ad8a 0906
.org 0x3ad8c
	lsrs r6, r1, #24	@ 0003ad8c 0e0e
.org 0x3ad8e
	cmp r6, #0	@ 0003ad8e 002e
.org 0x3ad90
	beq.n 0x3ad98	@ 0003ad90 02d0
.org 0x3ad92
	movs r0, #0	@ 0003ad92 0020
.org 0x3ad94
	str r0, [r4, #100]	@ 0003ad94 6066
.org 0x3ad96
	str r0, [r4, #104]	@ 0003ad96 a066
.org 0x3ad98
	ldrb r1, [r4, #10]	@ 0003ad98 a17a
.org 0x3ad9a
	movs r0, #16	@ 0003ad9a 1020
.org 0x3ad9c
	ands r0, r1	@ 0003ad9c 0840
.org 0x3ad9e
	cmp r0, #0	@ 0003ad9e 0028
.org 0x3ada0
	beq.n 0x3adaa	@ 0003ada0 03d0
.org 0x3ada2
	ldr r0, [r4, #84]	@ 0003ada2 606d
.org 0x3ada4
	movs r1, #192	@ 0003ada4 c021
.org 0x3ada6
	lsls r1, r1, #6	@ 0003ada6 8901
.org 0x3ada8
	b.n 0x3adae	@ 0003ada8 01e0
.org 0x3adaa
	ldr r0, [r4, #84]	@ 0003adaa 606d
.org 0x3adac
	ldr r1, [pc, #80]	@ 0003adac 1449
.org 0x3adae
	adds r0, r0, r1	@ 0003adae 4018
.org 0x3adb0
	str r0, [sp, #0]	@ 0003adb0 0090
.org 0x3adb2
	ldr r0, [r4, #88]	@ 0003adb2 a06d
.org 0x3adb4
	str r0, [sp, #4]	@ 0003adb4 0190
.org 0x3adb6
	mov r0, sp	@ 0003adb6 6846
.org 0x3adb8
	bl 0x3a92c	@ 0003adb8 fff7b8fd
.org 0x3adbc
	adds r3, r0, #0	@ 0003adbc 031c
.org 0x3adbe
	cmp r3, #0	@ 0003adbe 002b
.org 0x3adc0
	beq.n 0x3ae08	@ 0003adc0 22d0
.org 0x3adc2
	ldr r1, [pc, #64]	@ 0003adc2 1049
.org 0x3adc4
	ldrb r0, [r3, #9]	@ 0003adc4 587a
.org 0x3adc6
	lsls r0, r0, #2	@ 0003adc6 8000
.org 0x3adc8
	adds r0, r0, r1	@ 0003adc8 4018
.org 0x3adca
	add r5, sp, #8	@ 0003adca 02ad
.org 0x3adcc
	ldr r2, [r0, #0]	@ 0003adcc 0268
.org 0x3adce
	adds r0, r3, #0	@ 0003adce 181c
.org 0x3add0
	adds r1, r5, #0	@ 0003add0 291c
.org 0x3add2
	bl 0x128f84	@ 0003add2 eef0d7f8
.org 0x3add6
	lsls r0, r0, #24	@ 0003add6 0006
.org 0x3add8
	cmp r0, #0	@ 0003add8 0028
.org 0x3adda
	beq.n 0x3ae08	@ 0003adda 15d0
.org 0x3addc
	ldr r0, [sp, #8]	@ 0003addc 0298
.org 0x3adde
	ldr r1, [r4, #84]	@ 0003adde 616d
.org 0x3ade0
	subs r0, r0, r1	@ 0003ade0 401a
.org 0x3ade2
	ldr r1, [r5, #4]	@ 0003ade2 6968
.org 0x3ade4
	ldr r2, [r4, #88]	@ 0003ade4 a26d
.org 0x3ade6
	subs r1, r1, r2	@ 0003ade6 891a
.org 0x3ade8
	bl 0x10d338	@ 0003ade8 d2f0a6fa
.org 0x3adec
	lsls r0, r0, #24	@ 0003adec 0006
.org 0x3adee
	lsrs r1, r0, #24	@ 0003adee 010e
.org 0x3adf0
	cmp r6, #0	@ 0003adf0 002e
.org 0x3adf2
	beq.n 0x3adfc	@ 0003adf2 03d0
.org 0x3adf4
	ldr r0, [sp, #8]	@ 0003adf4 0298
.org 0x3adf6
	str r0, [r4, #100]	@ 0003adf6 6066
.org 0x3adf8
	ldr r0, [r5, #4]	@ 0003adf8 6868
.org 0x3adfa
	str r0, [r4, #104]	@ 0003adfa a066
.org 0x3adfc
	adds r0, r1, #0	@ 0003adfc 081c
.org 0x3adfe
	b.n 0x3ae18	@ 0003adfe 0be0
.org 0x3ae00
	.byte 0x00,0xd0,0xff,0xff	@ 0003ae00 data
.org 0x3ae04
	.byte 0xa8,0x37,0x85,0x08	@ 0003ae04 data
.org 0x3ae08
	ldrb r1, [r4, #10]	@ 0003ae08 a17a
.org 0x3ae0a
	movs r0, #16	@ 0003ae0a 1020
.org 0x3ae0c
	ands r0, r1	@ 0003ae0c 0840
.org 0x3ae0e
	cmp r0, #0	@ 0003ae0e 0028
.org 0x3ae10
	bne.n 0x3ae16	@ 0003ae10 01d1
.org 0x3ae12
	movs r0, #128	@ 0003ae12 8020
.org 0x3ae14
	b.n 0x3ae18	@ 0003ae14 00e0
.org 0x3ae16
	movs r0, #0	@ 0003ae16 0020
