@ FUN_08054930  entry 0x08054930  size 20
.thumb
.org 0x54930
FUN_08054930:
	push {lr}	@ 00054930 00b5
.org 0x54932
	ldr r2, [pc, #16]	@ 00054932 044a
.org 0x54934
	ldrb r1, [r0, #14]	@ 00054934 817b
.org 0x54936
	lsls r1, r1, #2	@ 00054936 8900
.org 0x54938
	adds r1, r1, r2	@ 00054938 8918
.org 0x5493a
	ldr r1, [r1, #0]	@ 0005493a 0968
.org 0x5493c
	bl 0x128f80	@ 0005493c d4f020fb
.org 0x54940
	pop {r0}	@ 00054940 01bc
.org 0x54942
	bx r0	@ 00054942 0047
