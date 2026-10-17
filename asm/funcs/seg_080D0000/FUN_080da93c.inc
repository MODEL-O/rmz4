@ FUN_080da93c  entry 0x080da93c  size 20
.thumb
.org 0xda93c
FUN_080da93c:
	push {lr}	@ 000da93c 00b5
.org 0xda93e
	ldr r2, [pc, #16]	@ 000da93e 044a
.org 0xda940
	ldrb r1, [r0, #16]	@ 000da940 017c
.org 0xda942
	lsls r1, r1, #2	@ 000da942 8900
.org 0xda944
	adds r1, r1, r2	@ 000da944 8918
.org 0xda946
	ldr r1, [r1, #0]	@ 000da946 0968
.org 0xda948
	bl 0x128f80	@ 000da948 4ef01afb
.org 0xda94c
	pop {r0}	@ 000da94c 01bc
.org 0xda94e
	bx r0	@ 000da94e 0047
