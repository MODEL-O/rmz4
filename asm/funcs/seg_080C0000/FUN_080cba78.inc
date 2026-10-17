@ FUN_080cba78  entry 0x080cba78  size 132
.thumb
.org 0xcba78
FUN_080cba78:
	push {r4, r5, r6, lr}	@ 000cba78 70b5
.org 0xcba7a
	adds r4, r0, #0	@ 000cba7a 041c
.org 0xcba7c
	movs r6, #0	@ 000cba7c 0026
.org 0xcba7e
	ldr r1, [pc, #124]	@ 000cba7e 1f49
.org 0xcba80
	ldrb r0, [r4, #9]	@ 000cba80 607a
.org 0xcba82
	lsls r0, r0, #2	@ 000cba82 8000
.org 0xcba84
	adds r0, r0, r1	@ 000cba84 4018
.org 0xcba86
	movs r1, #1	@ 000cba86 0121
.org 0xcba88
	str r1, [r4, #12]	@ 000cba88 e160
.org 0xcba8a
	ldr r0, [r0, #0]	@ 000cba8a 0068
.org 0xcba8c
	ldr r0, [r0, #4]	@ 000cba8c 4068
.org 0xcba8e
	str r0, [r4, #20]	@ 000cba8e 6061
.org 0xcba90
	strb r6, [r4, #13]	@ 000cba90 6673
.org 0xcba92
	strb r6, [r4, #14]	@ 000cba92 a673
.org 0xcba94
	strb r6, [r4, #15]	@ 000cba94 e673
.org 0xcba96
	ldrb r0, [r4, #10]	@ 000cba96 a07a
.org 0xcba98
	orrs r0, r1	@ 000cba98 0843
.org 0xcba9a
	movs r1, #2	@ 000cba9a 0221
.org 0xcba9c
	orrs r0, r1	@ 000cba9c 0843
.org 0xcba9e
	strb r0, [r4, #10]	@ 000cba9e a072
.org 0xcbaa0
	adds r0, r4, #0	@ 000cbaa0 201c
.org 0xcbaa2
	bl 0x1cc9c	@ 000cbaa2 51f7fbf8
.org 0xcbaa6
	ldrb r1, [r4, #10]	@ 000cbaa6 a17a
.org 0xcbaa8
	movs r0, #239	@ 000cbaa8 ef20
.org 0xcbaaa
	ands r0, r1	@ 000cbaaa 0840
.org 0xcbaac
	strb r0, [r4, #10]	@ 000cbaac a072
.org 0xcbaae
	adds r0, r4, #0	@ 000cbaae 201c
.org 0xcbab0
	adds r0, #76	@ 000cbab0 4c30
.org 0xcbab2
	strb r6, [r0, #0]	@ 000cbab2 0670
.org 0xcbab4
	adds r2, r4, #0	@ 000cbab4 221c
.org 0xcbab6
	adds r2, #74	@ 000cbab6 4a32
.org 0xcbab8
	ldrb r1, [r2, #0]	@ 000cbab8 1178
.org 0xcbaba
	movs r0, #17	@ 000cbaba 1120
.org 0xcbabc
	negs r0, r0	@ 000cbabc 4042
.org 0xcbabe
	ands r0, r1	@ 000cbabe 0840
.org 0xcbac0
	strb r0, [r2, #0]	@ 000cbac0 1070
.org 0xcbac2
	movs r1, #146	@ 000cbac2 9221
.org 0xcbac4
	lsls r1, r1, #8	@ 000cbac4 0902
.org 0xcbac6
	adds r0, r4, #0	@ 000cbac6 201c
.org 0xcbac8
	bl 0x1cf00	@ 000cbac8 51f71afa
.org 0xcbacc
	adds r0, r4, #0	@ 000cbacc 201c
.org 0xcbace
	bl 0x1cff0	@ 000cbace 51f78ffa
.org 0xcbad2
	ldrb r1, [r4, #10]	@ 000cbad2 a17a
.org 0xcbad4
	movs r0, #4	@ 000cbad4 0420
.org 0xcbad6
	orrs r0, r1	@ 000cbad6 0843
.org 0xcbad8
	strb r0, [r4, #10]	@ 000cbad8 a072
.org 0xcbada
	adds r5, r4, #0	@ 000cbada 251c
.org 0xcbadc
	adds r5, #116	@ 000cbadc 7435
.org 0xcbade
	ldr r1, [pc, #32]	@ 000cbade 0849
.org 0xcbae0
	adds r2, r4, #0	@ 000cbae0 221c
.org 0xcbae2
	adds r2, #84	@ 000cbae2 5432
.org 0xcbae4
	adds r0, r5, #0	@ 000cbae4 281c
.org 0xcbae6
	movs r3, #64	@ 000cbae6 4023
.org 0xcbae8
	bl 0x5760	@ 000cbae8 39f73afe
.org 0xcbaec
	str r4, [r5, #44]	@ 000cbaec ec62
.org 0xcbaee
	str r6, [r5, #36]	@ 000cbaee 6e62
.org 0xcbaf0
	adds r0, r4, #0	@ 000cbaf0 201c
.org 0xcbaf2
	bl 0xcbb04	@ 000cbaf2 00f007f8
.org 0xcbaf6
	pop {r4, r5, r6}	@ 000cbaf6 70bc
.org 0xcbaf8
	pop {r0}	@ 000cbaf8 01bc
.org 0xcbafa
	bx r0	@ 000cbafa 0047
