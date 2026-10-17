@ FUN_0811f838  entry 0x0811f838  size 32
.thumb
.org 0x11f838
FUN_0811f838:
	push {r4, lr}	@ 0011f838 10b5
.org 0x11f83a
	adds r4, r0, #0	@ 0011f83a 041c
.org 0x11f83c
	ldr r1, [pc, #24]	@ 0011f83c 0649
.org 0x11f83e
	ldrb r0, [r4, #1]	@ 0011f83e 6078
.org 0x11f840
	lsls r0, r0, #2	@ 0011f840 8000
.org 0x11f842
	adds r0, r0, r1	@ 0011f842 4018
.org 0x11f844
	ldr r1, [r0, #0]	@ 0011f844 0168
.org 0x11f846
	adds r0, r4, #0	@ 0011f846 201c
.org 0x11f848
	bl 0x128f80	@ 0011f848 09f09afb
.org 0x11f84c
	adds r0, r4, #0	@ 0011f84c 201c
.org 0x11f84e
	bl 0x11fbd8	@ 0011f84e 00f0c3f9
.org 0x11f852
	pop {r4}	@ 0011f852 10bc
.org 0x11f854
	pop {r0}	@ 0011f854 01bc
.org 0x11f856
	bx r0	@ 0011f856 0047
