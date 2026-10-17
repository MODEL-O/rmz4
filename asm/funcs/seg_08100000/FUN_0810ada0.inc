@ FUN_0810ada0  entry 0x0810ada0  size 62
.thumb
.org 0x10ada0
FUN_0810ada0:
	push {lr}	@ 0010ada0 00b5
.org 0x10ada2
	adds r2, r0, #0	@ 0010ada2 021c
.org 0x10ada4
	ldr r0, [r2, #40]	@ 0010ada4 906a
.org 0x10ada6
	ldr r1, [pc, #36]	@ 0010ada6 0949
.org 0x10ada8
	adds r0, r0, r1	@ 0010ada8 4018
.org 0x10adaa
	ldrb r0, [r0, #5]	@ 0010adaa 4079
.org 0x10adac
	cmp r0, #0	@ 0010adac 0028
.org 0x10adae
	beq.n 0x10add4	@ 0010adae 11d0
.org 0x10adb0
	ldr r1, [pc, #28]	@ 0010adb0 0749
.org 0x10adb2
	ldrb r0, [r2, #9]	@ 0010adb2 507a
.org 0x10adb4
	lsls r0, r0, #2	@ 0010adb4 8000
.org 0x10adb6
	adds r0, r0, r1	@ 0010adb6 4018
.org 0x10adb8
	movs r1, #2	@ 0010adb8 0221
.org 0x10adba
	str r1, [r2, #12]	@ 0010adba d160
.org 0x10adbc
	ldr r0, [r0, #0]	@ 0010adbc 0068
.org 0x10adbe
	ldr r0, [r0, #8]	@ 0010adbe 8068
.org 0x10adc0
	str r0, [r2, #20]	@ 0010adc0 5061
.org 0x10adc2
	adds r0, r2, #0	@ 0010adc2 101c
.org 0x10adc4
	bl 0x10adec	@ 0010adc4 00f012f8
.org 0x10adc8
	b.n 0x10ade4	@ 0010adc8 0ce0
.org 0x10adca
	.byte 0x00	@ 0010adca data
.org 0x10adcb
	.byte 0x00	@ 0010adcb data
.org 0x10adcc
	.byte 0xcc,0x0d,0x00,0x00	@ 0010adcc data
.org 0x10add0
	.byte 0xf8,0xca,0x86,0x08	@ 0010add0 data
.org 0x10add4
	ldr r0, [pc, #16]	@ 0010add4 0448
.org 0x10add6
	ldrb r1, [r2, #16]	@ 0010add6 117c
.org 0x10add8
	lsls r1, r1, #2	@ 0010add8 8900
.org 0x10adda
	adds r1, r1, r0	@ 0010adda 0918
.org 0x10addc
	ldr r1, [r1, #0]	@ 0010addc 0968
