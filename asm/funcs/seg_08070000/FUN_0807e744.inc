@ FUN_0807e744  entry 0x0807e744  size 32
.thumb
.org 0x7e744
FUN_0807e744:
	push {r4, r5, lr}	@ 0007e744 30b5
.org 0x7e746
	sub sp, #8	@ 0007e746 82b0
.org 0x7e748
	adds r4, r0, #0	@ 0007e748 041c
.org 0x7e74a
	ldrb r0, [r4, #15]	@ 0007e74a e07b
.org 0x7e74c
	cmp r0, #7	@ 0007e74c 0728
.org 0x7e74e
	bls.n 0x7e752	@ 0007e74e 00d9
.org 0x7e750
	b.n 0x7e8be	@ 0007e750 b5e0
.org 0x7e752
	lsls r0, r0, #2	@ 0007e752 8000
.org 0x7e754
	ldr r1, [pc, #4]	@ 0007e754 0149
.org 0x7e756
	adds r0, r0, r1	@ 0007e756 4018
.org 0x7e758
	ldr r0, [r0, #0]	@ 0007e758 0068
.org 0x7e75a
	mov pc, r0	@ 0007e75a 8746
.org 0x7e75c
	.byte 0x60,0xe7,0x07,0x08	@ 0007e75c data
.org 0x7e760
	.byte 0x80,0xe7,0x07,0x08	@ 0007e760 data
