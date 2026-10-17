@ FUN_0803ae5c  entry 0x0803ae5c  size 46
.thumb
.org 0x3ae5c
FUN_0803ae5c:
	push {lr}	@ 0003ae5c 00b5
.org 0x3ae5e
	adds r2, r0, #0	@ 0003ae5e 021c
.org 0x3ae60
	adds r3, r1, #0	@ 0003ae60 0b1c
.org 0x3ae62
	ldrb r1, [r2, #10]	@ 0003ae62 917a
.org 0x3ae64
	movs r0, #32	@ 0003ae64 2020
.org 0x3ae66
	ands r0, r1	@ 0003ae66 0840
.org 0x3ae68
	cmp r0, #0	@ 0003ae68 0028
.org 0x3ae6a
	beq.n 0x3ae78	@ 0003ae6a 05d0
.org 0x3ae6c
	ldr r0, [r2, #84]	@ 0003ae6c 506d
.org 0x3ae6e
	str r0, [r3, #0]	@ 0003ae6e 1860
.org 0x3ae70
	ldr r0, [r2, #88]	@ 0003ae70 906d
.org 0x3ae72
	movs r1, #160	@ 0003ae72 a021
.org 0x3ae74
	lsls r1, r1, #4	@ 0003ae74 0901
.org 0x3ae76
	b.n 0x3ae80	@ 0003ae76 03e0
.org 0x3ae78
	ldr r0, [r2, #84]	@ 0003ae78 506d
.org 0x3ae7a
	str r0, [r3, #0]	@ 0003ae7a 1860
.org 0x3ae7c
	ldr r0, [r2, #88]	@ 0003ae7c 906d
.org 0x3ae7e
	ldr r1, [pc, #12]	@ 0003ae7e 0349
.org 0x3ae80
	adds r0, r0, r1	@ 0003ae80 4018
.org 0x3ae82
	str r0, [r3, #4]	@ 0003ae82 5860
.org 0x3ae84
	movs r0, #1	@ 0003ae84 0120
.org 0x3ae86
	pop {r1}	@ 0003ae86 02bc
.org 0x3ae88
	bx r1	@ 0003ae88 0847
