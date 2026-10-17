@ FUN_080aa03c  entry 0x080aa03c  size 40
.thumb
.org 0xaa03c
FUN_080aa03c:
	push {r4, lr}	@ 000aa03c 10b5
.org 0xaa03e
	adds r4, r0, #0	@ 000aa03e 041c
.org 0xaa040
	bl 0xa9a70	@ 000aa040 fff716fd
.org 0xaa044
	lsls r0, r0, #24	@ 000aa044 0006
.org 0xaa046
	cmp r0, #0	@ 000aa046 0028
.org 0xaa048
	bne.n 0xaa058	@ 000aa048 06d1
.org 0xaa04a
	ldr r0, [r4, #88]	@ 000aa04a a06d
.org 0xaa04c
	ldr r1, [r4, #96]	@ 000aa04c 216e
.org 0xaa04e
	adds r0, r0, r1	@ 000aa04e 4018
.org 0xaa050
	str r0, [r4, #88]	@ 000aa050 a065
.org 0xaa052
	adds r1, #64	@ 000aa052 4031
.org 0xaa054
	str r1, [r4, #96]	@ 000aa054 2166
.org 0xaa056
	b.n 0xaa05e	@ 000aa056 02e0
.org 0xaa058
	ldr r0, [r4, #88]	@ 000aa058 a06d
.org 0xaa05a
	adds r0, #80	@ 000aa05a 5030
.org 0xaa05c
	str r0, [r4, #88]	@ 000aa05c a065
.org 0xaa05e
	pop {r4}	@ 000aa05e 10bc
.org 0xaa060
	pop {r0}	@ 000aa060 01bc
.org 0xaa062
	bx r0	@ 000aa062 0047
