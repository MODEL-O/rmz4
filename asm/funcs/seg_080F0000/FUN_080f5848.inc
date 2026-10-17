@ FUN_080f5848  entry 0x080f5848  size 42
.thumb
.org 0xf5848
FUN_080f5848:
	push {lr}	@ 000f5848 00b5
.org 0xf584a
	ldr r3, [r1, #0]	@ 000f584a 0b68
.org 0xf584c
	ldr r2, [r0, #0]	@ 000f584c 0268
.org 0xf584e
	subs r3, r3, r2	@ 000f584e 9b1a
.org 0xf5850
	asrs r3, r3, #4	@ 000f5850 1b11
.org 0xf5852
	ldr r1, [r1, #4]	@ 000f5852 4968
.org 0xf5854
	ldr r0, [r0, #4]	@ 000f5854 4068
.org 0xf5856
	subs r1, r1, r0	@ 000f5856 091a
.org 0xf5858
	asrs r1, r1, #4	@ 000f5858 0911
.org 0xf585a
	adds r0, r3, #0	@ 000f585a 181c
.org 0xf585c
	muls r0, r3	@ 000f585c 5843
.org 0xf585e
	adds r2, r1, #0	@ 000f585e 0a1c
.org 0xf5860
	muls r2, r1	@ 000f5860 4a43
.org 0xf5862
	adds r1, r2, #0	@ 000f5862 111c
.org 0xf5864
	adds r0, r0, r1	@ 000f5864 4018
.org 0xf5866
	bl 0x128bf4	@ 000f5866 33f0c5f9
.org 0xf586a
	lsls r0, r0, #16	@ 000f586a 0004
.org 0xf586c
	lsrs r0, r0, #16	@ 000f586c 000c
.org 0xf586e
	pop {r1}	@ 000f586e 02bc
.org 0xf5870
	bx r1	@ 000f5870 0847
