@ FUN_0807fe54  entry 0x0807fe54  size 66
.thumb
.org 0x7fe54
FUN_0807fe54:
	push {r4, r5, r6, lr}	@ 0007fe54 70b5
.org 0x7fe56
	adds r4, r0, #0	@ 0007fe56 041c
.org 0x7fe58
	ldr r6, [r4, #84]	@ 0007fe58 666d
.org 0x7fe5a
	movs r0, #128	@ 0007fe5a 8020
.org 0x7fe5c
	lsls r0, r0, #3	@ 0007fe5c c000
.org 0x7fe5e
	adds r2, r6, r0	@ 0007fe5e 3218
.org 0x7fe60
	ldr r0, [r4, #88]	@ 0007fe60 a06d
.org 0x7fe62
	movs r1, #128	@ 0007fe62 8021
.org 0x7fe64
	lsls r1, r1, #4	@ 0007fe64 0901
.org 0x7fe66
	adds r5, r0, r1	@ 0007fe66 4518
.org 0x7fe68
	adds r0, r2, #0	@ 0007fe68 101c
.org 0x7fe6a
	adds r1, r5, #0	@ 0007fe6a 291c
.org 0x7fe6c
	bl 0x7c7c	@ 0007fe6c 87f706ff
.org 0x7fe70
	lsls r0, r0, #16	@ 0007fe70 0004
.org 0x7fe72
	cmp r0, #0	@ 0007fe72 0028
.org 0x7fe74
	bne.n 0x7fe90	@ 0007fe74 0cd1
.org 0x7fe76
	ldr r0, [pc, #32]	@ 0007fe76 0848
.org 0x7fe78
	adds r2, r6, r0	@ 0007fe78 3218
.org 0x7fe7a
	adds r0, r2, #0	@ 0007fe7a 101c
.org 0x7fe7c
	adds r1, r5, #0	@ 0007fe7c 291c
.org 0x7fe7e
	bl 0x7c7c	@ 0007fe7e 87f7fdfe
.org 0x7fe82
	lsls r0, r0, #16	@ 0007fe82 0004
.org 0x7fe84
	lsrs r1, r0, #16	@ 0007fe84 010c
.org 0x7fe86
	cmp r1, #0	@ 0007fe86 0029
.org 0x7fe88
	bne.n 0x7fe90	@ 0007fe88 02d1
.org 0x7fe8a
	movs r0, #1	@ 0007fe8a 0120
.org 0x7fe8c
	strb r0, [r4, #13]	@ 0007fe8c 6073
.org 0x7fe8e
	strb r1, [r4, #14]	@ 0007fe8e a173
.org 0x7fe90
	pop {r4, r5, r6}	@ 0007fe90 70bc
.org 0x7fe92
	pop {r0}	@ 0007fe92 01bc
.org 0x7fe94
	bx r0	@ 0007fe94 0047
