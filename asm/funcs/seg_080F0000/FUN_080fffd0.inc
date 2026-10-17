@ FUN_080fffd0  entry 0x080fffd0  size 54
.thumb
.org 0xfffd0
FUN_080fffd0:
	push {lr}	@ 000fffd0 00b5
.org 0xfffd2
	adds r2, r0, #0	@ 000fffd2 021c
.org 0xfffd4
	adds r0, #140	@ 000fffd4 8c30
.org 0xfffd6
	ldr r0, [r0, #0]	@ 000fffd6 0068
.org 0xfffd8
	movs r1, #128	@ 000fffd8 8021
.org 0xfffda
	lsls r1, r1, #2	@ 000fffda 8900
.org 0xfffdc
	ands r0, r1	@ 000fffdc 0840
.org 0xfffde
	cmp r0, #0	@ 000fffde 0028
.org 0xfffe0
	beq.n 0x100000	@ 000fffe0 0ed0
.org 0xfffe2
	ldr r1, [pc, #24]	@ 000fffe2 0649
.org 0xfffe4
	ldrb r0, [r2, #9]	@ 000fffe4 507a
.org 0xfffe6
	lsls r0, r0, #2	@ 000fffe6 8000
.org 0xfffe8
	adds r0, r0, r1	@ 000fffe8 4018
.org 0xfffea
	movs r1, #2	@ 000fffea 0221
.org 0xfffec
	str r1, [r2, #12]	@ 000fffec d160
.org 0xfffee
	ldr r0, [r0, #0]	@ 000fffee 0068
.org 0xffff0
	ldr r0, [r0, #8]	@ 000ffff0 8068
.org 0xffff2
	str r0, [r2, #20]	@ 000ffff2 5061
.org 0xffff4
	adds r0, r2, #0	@ 000ffff4 101c
.org 0xffff6
	bl 0x10000c	@ 000ffff6 00f009f8
.org 0xffffa
	b.n 0x100006	@ 000ffffa 04e0
.org 0xffffc
	.byte 0xfc,0x92,0x86,0x08	@ 000ffffc data
.org 0x100000
	adds r0, r2, #0	@ 00100000 101c
.org 0x100002
	bl 0x1cff0	@ 00100002 1cf7f5ff
