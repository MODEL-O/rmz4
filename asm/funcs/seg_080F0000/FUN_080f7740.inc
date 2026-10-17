@ FUN_080f7740  entry 0x080f7740  size 48
.thumb
.org 0xf7740
FUN_080f7740:
	push {r4, r5, r6, r7, lr}	@ 000f7740 f0b5
.org 0xf7742
	mov r7, r8	@ 000f7742 4746
.org 0xf7744
	push {r7}	@ 000f7744 80b4
.org 0xf7746
	adds r7, r0, #0	@ 000f7746 071c
.org 0xf7748
	ldr r2, [pc, #28]	@ 000f7748 074a
.org 0xf774a
	ldr r0, [r2, #0]	@ 000f774a 1068
.org 0xf774c
	ldr r1, [r0, #88]	@ 000f774c 816d
.org 0xf774e
	ldr r0, [r0, #84]	@ 000f774e 406d
.org 0xf7750
	str r0, [r7, #84]	@ 000f7750 7865
.org 0xf7752
	str r1, [r7, #88]	@ 000f7752 b965
.org 0xf7754
	ldrb r0, [r7, #14]	@ 000f7754 b87b
.org 0xf7756
	cmp r0, #4	@ 000f7756 0428
.org 0xf7758
	bls.n 0xf775c	@ 000f7758 00d9
.org 0xf775a
	b.n 0xf79c8	@ 000f775a 35e1
.org 0xf775c
	lsls r0, r0, #2	@ 000f775c 8000
.org 0xf775e
	ldr r1, [pc, #12]	@ 000f775e 0349
.org 0xf7760
	adds r0, r0, r1	@ 000f7760 4018
.org 0xf7762
	ldr r0, [r0, #0]	@ 000f7762 0068
.org 0xf7764
	mov pc, r0	@ 000f7764 8746
.org 0xf7766
	.byte 0x00	@ 000f7766 data
.org 0xf7767
	.byte 0x00	@ 000f7767 data
.org 0xf7768
	.byte 0xf0,0xdb,0x02,0x02	@ 000f7768 data
.org 0xf776c
	.byte 0x70,0x77,0x0f,0x08	@ 000f776c data
