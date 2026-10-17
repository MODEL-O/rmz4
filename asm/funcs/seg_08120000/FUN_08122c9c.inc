@ FUN_08122c9c  entry 0x08122c9c  size 22
.thumb
.org 0x122c9c
FUN_08122c9c:
	push {lr}	@ 00122c9c 00b5
.org 0x122c9e
	ldr r1, [pc, #12]	@ 00122c9e 0349
.org 0x122ca0
	ldrb r0, [r1, #0]	@ 00122ca0 0878
.org 0x122ca2
	cmp r0, #2	@ 00122ca2 0228
.org 0x122ca4
	beq.n 0x122cb0	@ 00122ca4 04d0
.org 0x122ca6
	movs r0, #28	@ 00122ca6 1c20
.org 0x122ca8
	ldrsb r0, [r1, r0]	@ 00122ca8 0856
.org 0x122caa
	b.n 0x122cb2	@ 00122caa 02e0
.org 0x122cac
	.byte 0x90,0x07,0x00,0x02	@ 00122cac data
.org 0x122cb0
	movs r0, #0	@ 00122cb0 0020
