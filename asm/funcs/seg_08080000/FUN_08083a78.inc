@ FUN_08083a78  entry 0x08083a78  size 92
.thumb
.org 0x83a78
FUN_08083a78:
	push {r4, r5, r6, lr}	@ 00083a78 70b5
.org 0x83a7a
	adds r6, r0, #0	@ 00083a7a 061c
.org 0x83a7c
	ldr r1, [pc, #84]	@ 00083a7c 1549
.org 0x83a7e
	bl 0x1cf00	@ 00083a7e 99f73ffa
.org 0x83a82
	adds r0, r6, #0	@ 00083a82 301c
.org 0x83a84
	bl 0x1cff0	@ 00083a84 99f7b4fa
.org 0x83a88
	ldrb r1, [r6, #10]	@ 00083a88 b17a
.org 0x83a8a
	movs r0, #4	@ 00083a8a 0420
.org 0x83a8c
	movs r5, #0	@ 00083a8c 0025
.org 0x83a8e
	orrs r0, r1	@ 00083a8e 0843
.org 0x83a90
	strb r0, [r6, #10]	@ 00083a90 b072
.org 0x83a92
	adds r4, r6, #0	@ 00083a92 341c
.org 0x83a94
	adds r4, #116	@ 00083a94 7434
.org 0x83a96
	ldr r1, [pc, #64]	@ 00083a96 1049
.org 0x83a98
	adds r2, r6, #0	@ 00083a98 321c
.org 0x83a9a
	adds r2, #84	@ 00083a9a 5432
.org 0x83a9c
	adds r0, r4, #0	@ 00083a9c 201c
.org 0x83a9e
	movs r3, #6	@ 00083a9e 0623
.org 0x83aa0
	bl 0x5760	@ 00083aa0 81f75efe
.org 0x83aa4
	str r6, [r4, #44]	@ 00083aa4 e662
.org 0x83aa6
	str r5, [r4, #36]	@ 00083aa6 6562
.org 0x83aa8
	ldrb r1, [r6, #10]	@ 00083aa8 b17a
.org 0x83aaa
	movs r0, #239	@ 00083aaa ef20
.org 0x83aac
	ands r0, r1	@ 00083aac 0840
.org 0x83aae
	strb r0, [r6, #10]	@ 00083aae b072
.org 0x83ab0
	adds r0, r6, #0	@ 00083ab0 301c
.org 0x83ab2
	adds r0, #76	@ 00083ab2 4c30
.org 0x83ab4
	strb r5, [r0, #0]	@ 00083ab4 0570
.org 0x83ab6
	adds r2, r6, #0	@ 00083ab6 321c
.org 0x83ab8
	adds r2, #74	@ 00083ab8 4a32
.org 0x83aba
	ldrb r1, [r2, #0]	@ 00083aba 1178
.org 0x83abc
	movs r0, #17	@ 00083abc 1120
.org 0x83abe
	negs r0, r0	@ 00083abe 4042
.org 0x83ac0
	ands r0, r1	@ 00083ac0 0840
.org 0x83ac2
	strb r0, [r2, #0]	@ 00083ac2 1070
.org 0x83ac4
	adds r0, r6, #0	@ 00083ac4 301c
.org 0x83ac6
	adds r0, #180	@ 00083ac6 b430
.org 0x83ac8
	str r5, [r0, #0]	@ 00083ac8 0560
.org 0x83aca
	movs r0, #255	@ 00083aca ff20
.org 0x83acc
	strb r0, [r6, #18]	@ 00083acc b074
.org 0x83ace
	pop {r4, r5, r6}	@ 00083ace 70bc
.org 0x83ad0
	pop {r0}	@ 00083ad0 01bc
.org 0x83ad2
	bx r0	@ 00083ad2 0047
