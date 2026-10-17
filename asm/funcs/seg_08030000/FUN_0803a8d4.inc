@ FUN_0803a8d4  entry 0x0803a8d4  size 26
.thumb
.org 0x3a8d4
FUN_0803a8d4:
	push {r4, lr}	@ 0003a8d4 10b5
.org 0x3a8d6
	lsls r0, r0, #16	@ 0003a8d6 0004
.org 0x3a8d8
	lsrs r0, r0, #16	@ 0003a8d8 000c
.org 0x3a8da
	ldr r4, [pc, #20]	@ 0003a8da 054c
.org 0x3a8dc
	lsls r3, r0, #1	@ 0003a8dc 4300
.org 0x3a8de
	adds r3, r3, r4	@ 0003a8de 1b19
.org 0x3a8e0
	strh r1, [r3, #0]	@ 0003a8e0 1980
.org 0x3a8e2
	ldr r1, [pc, #16]	@ 0003a8e2 0449
.org 0x3a8e4
	adds r0, r0, r1	@ 0003a8e4 4018
.org 0x3a8e6
	strb r2, [r0, #0]	@ 0003a8e6 0270
.org 0x3a8e8
	pop {r4}	@ 0003a8e8 10bc
.org 0x3a8ea
	pop {r0}	@ 0003a8ea 01bc
.org 0x3a8ec
	bx r0	@ 0003a8ec 0047
