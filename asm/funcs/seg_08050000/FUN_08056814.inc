@ FUN_08056814  entry 0x08056814  size 20
.thumb
.org 0x56814
FUN_08056814:
	push {lr}	@ 00056814 00b5
.org 0x56816
	ldr r2, [pc, #16]	@ 00056816 044a
.org 0x56818
	ldrb r1, [r0, #14]	@ 00056818 817b
.org 0x5681a
	lsls r1, r1, #2	@ 0005681a 8900
.org 0x5681c
	adds r1, r1, r2	@ 0005681c 8918
.org 0x5681e
	ldr r1, [r1, #0]	@ 0005681e 0968
.org 0x56820
	bl 0x128f80	@ 00056820 d2f0aefb
.org 0x56824
	pop {r0}	@ 00056824 01bc
.org 0x56826
	bx r0	@ 00056826 0047
