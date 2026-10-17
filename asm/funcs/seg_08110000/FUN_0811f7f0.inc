@ FUN_0811f7f0  entry 0x0811f7f0  size 66
.thumb
.org 0x11f7f0
FUN_0811f7f0:
	push {lr}	@ 0011f7f0 00b5
.org 0x11f7f2
	adds r2, r0, #0	@ 0011f7f2 021c
.org 0x11f7f4
	ldrb r3, [r2, #9]	@ 0011f7f4 537a
.org 0x11f7f6
	cmp r3, #0	@ 0011f7f6 002b
.org 0x11f7f8
	bne.n 0x11f82e	@ 0011f7f8 19d1
.org 0x11f7fa
	ldrb r1, [r2, #10]	@ 0011f7fa 917a
.org 0x11f7fc
	movs r0, #254	@ 0011f7fc fe20
.org 0x11f7fe
	ands r0, r1	@ 0011f7fe 0840
.org 0x11f800
	movs r1, #253	@ 0011f800 fd21
.org 0x11f802
	ands r0, r1	@ 0011f802 0840
.org 0x11f804
	strb r0, [r2, #10]	@ 0011f804 9072
.org 0x11f806
	adds r0, r2, #0	@ 0011f806 101c
.org 0x11f808
	adds r0, #140	@ 0011f808 8c30
.org 0x11f80a
	str r3, [r0, #0]	@ 0011f80a 0360
.org 0x11f80c
	adds r0, #4	@ 0011f80c 0430
.org 0x11f80e
	str r3, [r0, #0]	@ 0011f80e 0360
.org 0x11f810
	adds r0, #4	@ 0011f810 0430
.org 0x11f812
	strb r3, [r0, #0]	@ 0011f812 0370
.org 0x11f814
	ldrb r1, [r2, #10]	@ 0011f814 917a
.org 0x11f816
	movs r0, #251	@ 0011f816 fb20
.org 0x11f818
	ands r0, r1	@ 0011f818 0840
.org 0x11f81a
	strb r0, [r2, #10]	@ 0011f81a 9072
.org 0x11f81c
	ldr r1, [pc, #20]	@ 0011f81c 0549
.org 0x11f81e
	ldrb r0, [r2, #9]	@ 0011f81e 507a
.org 0x11f820
	lsls r0, r0, #2	@ 0011f820 8000
.org 0x11f822
	adds r0, r0, r1	@ 0011f822 4018
.org 0x11f824
	movs r1, #3	@ 0011f824 0321
.org 0x11f826
	str r1, [r2, #12]	@ 0011f826 d160
.org 0x11f828
	ldr r0, [r0, #0]	@ 0011f828 0068
.org 0x11f82a
	ldr r0, [r0, #12]	@ 0011f82a c068
.org 0x11f82c
	str r0, [r2, #20]	@ 0011f82c 5061
.org 0x11f82e
	pop {r0}	@ 0011f82e 01bc
.org 0x11f830
	bx r0	@ 0011f830 0047
