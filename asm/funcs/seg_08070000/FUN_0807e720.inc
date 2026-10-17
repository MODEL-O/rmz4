@ FUN_0807e720  entry 0x0807e720  size 30
.thumb
.org 0x7e720
FUN_0807e720:
	push {r4, lr}	@ 0007e720 10b5
.org 0x7e722
	adds r4, r0, #0	@ 0007e722 041c
.org 0x7e724
	bl 0x7e9b0	@ 0007e724 00f044f9
.org 0x7e728
	ldr r1, [pc, #20]	@ 0007e728 0549
.org 0x7e72a
	ldrb r0, [r4, #13]	@ 0007e72a 607b
.org 0x7e72c
	lsls r0, r0, #2	@ 0007e72c 8000
.org 0x7e72e
	adds r0, r0, r1	@ 0007e72e 4018
.org 0x7e730
	ldr r1, [r0, #0]	@ 0007e730 0168
.org 0x7e732
	adds r0, r4, #0	@ 0007e732 201c
.org 0x7e734
	bl 0x128f80	@ 0007e734 aaf024fc
.org 0x7e738
	pop {r4}	@ 0007e738 10bc
.org 0x7e73a
	pop {r0}	@ 0007e73a 01bc
.org 0x7e73c
	bx r0	@ 0007e73c 0047
