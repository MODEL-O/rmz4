@ FUN_080e09a4  entry 0x080e09a4  size 74
.thumb
.org 0xe09a4
FUN_080e09a4:
	push {r4, r5, lr}	@ 000e09a4 30b5
.org 0xe09a6
	sub sp, #8	@ 000e09a6 82b0
.org 0xe09a8
	adds r4, r0, #0	@ 000e09a8 041c
.org 0xe09aa
	ldr r0, [r4, #84]	@ 000e09aa 606d
.org 0xe09ac
	ldr r1, [pc, #64]	@ 000e09ac 1049
.org 0xe09ae
	adds r0, r0, r1	@ 000e09ae 4018
.org 0xe09b0
	str r0, [sp, #0]	@ 000e09b0 0090
.org 0xe09b2
	ldr r0, [r4, #88]	@ 000e09b2 a06d
.org 0xe09b4
	movs r1, #128	@ 000e09b4 8021
.org 0xe09b6
	lsls r1, r1, #3	@ 000e09b6 c900
.org 0xe09b8
	adds r0, r0, r1	@ 000e09b8 4018
.org 0xe09ba
	str r0, [sp, #4]	@ 000e09ba 0190
.org 0xe09bc
	movs r2, #128	@ 000e09bc 8022
.org 0xe09be
	lsls r2, r2, #2	@ 000e09be 9200
.org 0xe09c0
	ldrb r3, [r4, #10]	@ 000e09c0 a37a
.org 0xe09c2
	lsrs r3, r3, #4	@ 000e09c2 1b09
.org 0xe09c4
	movs r5, #1	@ 000e09c4 0125
.org 0xe09c6
	ands r3, r5	@ 000e09c6 2b40
.org 0xe09c8
	movs r0, #0	@ 000e09c8 0020
.org 0xe09ca
	mov r1, sp	@ 000e09ca 6946
.org 0xe09cc
	bl 0xd0dc4	@ 000e09cc f0f7faf9
.org 0xe09d0
	movs r0, #0	@ 000e09d0 0020
.org 0xe09d2
	strb r0, [r4, #17]	@ 000e09d2 6074
.org 0xe09d4
	adds r0, r4, #0	@ 000e09d4 201c
.org 0xe09d6
	adds r0, #84	@ 000e09d6 5430
.org 0xe09d8
	ldrb r3, [r4, #10]	@ 000e09d8 a37a
.org 0xe09da
	lsrs r3, r3, #4	@ 000e09da 1b09
.org 0xe09dc
	ands r3, r5	@ 000e09dc 2b40
.org 0xe09de
	movs r1, #3	@ 000e09de 0321
.org 0xe09e0
	movs r2, #1	@ 000e09e0 0122
.org 0xe09e2
	bl 0xe08bc	@ 000e09e2 fff76bff
.org 0xe09e6
	add sp, #8	@ 000e09e6 02b0
.org 0xe09e8
	pop {r4, r5}	@ 000e09e8 30bc
.org 0xe09ea
	pop {r0}	@ 000e09ea 01bc
.org 0xe09ec
	bx r0	@ 000e09ec 0047
