@ FUN_0810c7e0  entry 0x0810c7e0  size 78
.thumb
.org 0x10c7e0
FUN_0810c7e0:
	push {lr}	@ 0010c7e0 00b5
.org 0x10c7e2
	adds r2, r0, #0	@ 0010c7e2 021c
.org 0x10c7e4
	ldr r1, [r2, #40]	@ 0010c7e4 916a
.org 0x10c7e6
	ldr r3, [pc, #36]	@ 0010c7e6 094b
.org 0x10c7e8
	adds r0, r1, r3	@ 0010c7e8 c818
.org 0x10c7ea
	ldrb r0, [r0, #5]	@ 0010c7ea 4079
.org 0x10c7ec
	cmp r0, #0	@ 0010c7ec 0028
.org 0x10c7ee
	beq.n 0x10c814	@ 0010c7ee 11d0
.org 0x10c7f0
	ldr r1, [pc, #28]	@ 0010c7f0 0749
.org 0x10c7f2
	ldrb r0, [r2, #9]	@ 0010c7f2 507a
.org 0x10c7f4
	lsls r0, r0, #2	@ 0010c7f4 8000
.org 0x10c7f6
	adds r0, r0, r1	@ 0010c7f6 4018
.org 0x10c7f8
	movs r1, #2	@ 0010c7f8 0221
.org 0x10c7fa
	str r1, [r2, #12]	@ 0010c7fa d160
.org 0x10c7fc
	ldr r0, [r0, #0]	@ 0010c7fc 0068
.org 0x10c7fe
	ldr r0, [r0, #8]	@ 0010c7fe 8068
.org 0x10c800
	str r0, [r2, #20]	@ 0010c800 5061
.org 0x10c802
	adds r0, r2, #0	@ 0010c802 101c
.org 0x10c804
	bl 0x10c83c	@ 0010c804 00f01af8
.org 0x10c808
	b.n 0x10c834	@ 0010c808 14e0
.org 0x10c80a
	.byte 0x00	@ 0010c80a data
.org 0x10c80b
	.byte 0x00	@ 0010c80b data
.org 0x10c80c
	.byte 0xcc,0x0d,0x00,0x00	@ 0010c80c data
.org 0x10c810
	.byte 0xf8,0xca,0x86,0x08	@ 0010c810 data
.org 0x10c814
	ldrb r0, [r1, #3]	@ 0010c814 c878
.org 0x10c816
	cmp r0, #3	@ 0010c816 0328
.org 0x10c818
	bne.n 0x10c824	@ 0010c818 04d1
.org 0x10c81a
	ldrb r1, [r2, #10]	@ 0010c81a 917a
.org 0x10c81c
	movs r0, #254	@ 0010c81c fe20
.org 0x10c81e
	ands r0, r1	@ 0010c81e 0840
.org 0x10c820
	strb r0, [r2, #10]	@ 0010c820 9072
.org 0x10c822
	b.n 0x10c834	@ 0010c822 07e0
.org 0x10c824
	ldr r0, [pc, #16]	@ 0010c824 0448
.org 0x10c826
	ldrb r1, [r2, #16]	@ 0010c826 117c
.org 0x10c828
	lsls r1, r1, #2	@ 0010c828 8900
.org 0x10c82a
	adds r1, r1, r0	@ 0010c82a 0918
.org 0x10c82c
	ldr r1, [r1, #0]	@ 0010c82c 0968
