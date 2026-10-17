@ FUN_080dab38  entry 0x080dab38  size 128
.thumb
.org 0xdab38
FUN_080dab38:
	push {r4, r5, r6, lr}	@ 000dab38 70b5
.org 0xdab3a
	adds r5, r0, #0	@ 000dab3a 051c
.org 0xdab3c
	ldrb r4, [r5, #17]	@ 000dab3c 6c7c
.org 0xdab3e
	ldr r1, [pc, #64]	@ 000dab3e 1049
.org 0xdab40
	ldrb r0, [r5, #9]	@ 000dab40 687a
.org 0xdab42
	lsls r0, r0, #2	@ 000dab42 8000
.org 0xdab44
	adds r0, r0, r1	@ 000dab44 4018
.org 0xdab46
	movs r2, #1	@ 000dab46 0122
.org 0xdab48
	str r2, [r5, #12]	@ 000dab48 ea60
.org 0xdab4a
	ldr r0, [r0, #0]	@ 000dab4a 0068
.org 0xdab4c
	ldr r0, [r0, #4]	@ 000dab4c 4068
.org 0xdab4e
	str r0, [r5, #20]	@ 000dab4e 6861
.org 0xdab50
	ldrb r1, [r5, #10]	@ 000dab50 a97a
.org 0xdab52
	movs r0, #1	@ 000dab52 0120
.org 0xdab54
	movs r6, #0	@ 000dab54 0026
.org 0xdab56
	movs r3, #0	@ 000dab56 0023
.org 0xdab58
	orrs r0, r1	@ 000dab58 0843
.org 0xdab5a
	movs r1, #2	@ 000dab5a 0221
.org 0xdab5c
	orrs r0, r1	@ 000dab5c 0843
.org 0xdab5e
	strb r0, [r5, #10]	@ 000dab5e a872
.org 0xdab60
	lsls r0, r4, #1	@ 000dab60 6000
.org 0xdab62
	subs r2, r2, r0	@ 000dab62 121a
.org 0xdab64
	lsls r2, r2, #6	@ 000dab64 9201
.org 0xdab66
	str r2, [r5, #92]	@ 000dab66 ea65
.org 0xdab68
	str r3, [r5, #96]	@ 000dab68 2b66
.org 0xdab6a
	movs r0, #20	@ 000dab6a 1420
.org 0xdab6c
	strb r0, [r5, #18]	@ 000dab6c a874
.org 0xdab6e
	adds r0, r5, #0	@ 000dab6e 281c
.org 0xdab70
	bl 0x1cc9c	@ 000dab70 42f794f8
.org 0xdab74
	cmp r4, #0	@ 000dab74 002c
.org 0xdab76
	beq.n 0xdab84	@ 000dab76 05d0
.org 0xdab78
	ldrb r0, [r5, #10]	@ 000dab78 a87a
.org 0xdab7a
	movs r1, #16	@ 000dab7a 1021
.org 0xdab7c
	orrs r0, r1	@ 000dab7c 0843
.org 0xdab7e
	b.n 0xdab8a	@ 000dab7e 04e0
.org 0xdab80
	.byte 0x64,0x6f,0x86,0x08	@ 000dab80 data
.org 0xdab84
	ldrb r1, [r5, #10]	@ 000dab84 a97a
.org 0xdab86
	movs r0, #239	@ 000dab86 ef20
.org 0xdab88
	ands r0, r1	@ 000dab88 0840
.org 0xdab8a
	strb r0, [r5, #10]	@ 000dab8a a872
.org 0xdab8c
	movs r1, #1	@ 000dab8c 0121
.org 0xdab8e
	ands r1, r4	@ 000dab8e 2140
.org 0xdab90
	adds r0, r5, #0	@ 000dab90 281c
.org 0xdab92
	adds r0, #76	@ 000dab92 4c30
.org 0xdab94
	strb r1, [r0, #0]	@ 000dab94 0170
.org 0xdab96
	adds r3, r5, #0	@ 000dab96 2b1c
.org 0xdab98
	adds r3, #74	@ 000dab98 4a33
.org 0xdab9a
	lsls r1, r1, #4	@ 000dab9a 0901
.org 0xdab9c
	ldrb r2, [r3, #0]	@ 000dab9c 1a78
.org 0xdab9e
	movs r0, #17	@ 000dab9e 1120
.org 0xdaba0
	negs r0, r0	@ 000daba0 4042
.org 0xdaba2
	ands r0, r2	@ 000daba2 1040
.org 0xdaba4
	orrs r0, r1	@ 000daba4 0843
.org 0xdaba6
	strb r0, [r3, #0]	@ 000daba6 1870
.org 0xdaba8
	ldr r1, [pc, #16]	@ 000daba8 0449
.org 0xdabaa
	adds r0, r5, #0	@ 000dabaa 281c
.org 0xdabac
	bl 0x1cf00	@ 000dabac 42f7a8f9
.org 0xdabb0
	adds r0, r5, #0	@ 000dabb0 281c
.org 0xdabb2
	bl 0xdabc0	@ 000dabb2 00f005f8
.org 0xdabb6
	pop {r4, r5, r6}	@ 000dabb6 70bc
