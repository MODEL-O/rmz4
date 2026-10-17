@ FUN_080b381c  entry 0x080b381c  size 38
.thumb
.org 0xb381c
FUN_080b381c:
	push {lr}	@ 000b381c 00b5
.org 0xb381e
	adds r2, r0, #0	@ 000b381e 021c
.org 0xb3820
	ldr r3, [r2, #40]	@ 000b3820 936a
.org 0xb3822
	ldr r0, [r3, #0]	@ 000b3822 1868
.org 0xb3824
	ldr r1, [r2, #84]	@ 000b3824 516d
.org 0xb3826
	subs r0, r0, r1	@ 000b3826 401a
.org 0xb3828
	ldr r1, [r3, #4]	@ 000b3828 5968
.org 0xb382a
	ldr r2, [r2, #88]	@ 000b382a 926d
.org 0xb382c
	subs r1, r1, r2	@ 000b382c 891a
.org 0xb382e
	lsls r0, r0, #8	@ 000b382e 0002
.org 0xb3830
	asrs r0, r0, #16	@ 000b3830 0014
.org 0xb3832
	lsls r1, r1, #8	@ 000b3832 0902
.org 0xb3834
	asrs r1, r1, #16	@ 000b3834 0914
.org 0xb3836
	bl 0x128bdc	@ 000b3836 75f0d1f9
.org 0xb383a
	lsls r0, r0, #16	@ 000b383a 0004
.org 0xb383c
	lsrs r0, r0, #24	@ 000b383c 000e
.org 0xb383e
	pop {r1}	@ 000b383e 02bc
.org 0xb3840
	bx r1	@ 000b3840 0847
