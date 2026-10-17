@ FUN_0803ba64  entry 0x0803ba64  size 166
.thumb
.org 0x3ba64
FUN_0803ba64:
	push {r4, r5, r6, r7, lr}	@ 0003ba64 f0b5
.org 0x3ba66
	mov r7, r9	@ 0003ba66 4f46
.org 0x3ba68
	mov r6, r8	@ 0003ba68 4646
.org 0x3ba6a
	push {r6, r7}	@ 0003ba6a c0b4
.org 0x3ba6c
	sub sp, #8	@ 0003ba6c 82b0
.org 0x3ba6e
	adds r4, r0, #0	@ 0003ba6e 041c
.org 0x3ba70
	movs r0, #180	@ 0003ba70 b420
.org 0x3ba72
	adds r0, r0, r4	@ 0003ba72 0019
.org 0x3ba74
	mov r9, r0	@ 0003ba74 8146
.org 0x3ba76
	ldr r7, [r0, #0]	@ 0003ba76 0768
.org 0x3ba78
	adds r0, r4, #0	@ 0003ba78 201c
.org 0x3ba7a
	bl 0x1cc9c	@ 0003ba7a e1f70ff9
.org 0x3ba7e
	adds r0, r4, #0	@ 0003ba7e 201c
.org 0x3ba80
	bl 0x1ceec	@ 0003ba80 e1f734fa
.org 0x3ba84
	ldrb r1, [r4, #10]	@ 0003ba84 a17a
.org 0x3ba86
	movs r0, #1	@ 0003ba86 0120
.org 0x3ba88
	movs r5, #0	@ 0003ba88 0025
.org 0x3ba8a
	orrs r0, r1	@ 0003ba8a 0843
.org 0x3ba8c
	movs r1, #2	@ 0003ba8c 0221
.org 0x3ba8e
	orrs r0, r1	@ 0003ba8e 0843
.org 0x3ba90
	strb r0, [r4, #10]	@ 0003ba90 a072
.org 0x3ba92
	movs r1, #224	@ 0003ba92 e021
.org 0x3ba94
	lsls r1, r1, #7	@ 0003ba94 c901
.org 0x3ba96
	adds r0, r4, #0	@ 0003ba96 201c
.org 0x3ba98
	bl 0x1cf00	@ 0003ba98 e1f732fa
.org 0x3ba9c
	ldrb r1, [r4, #10]	@ 0003ba9c a17a
.org 0x3ba9e
	movs r0, #4	@ 0003ba9e 0420
.org 0x3baa0
	orrs r0, r1	@ 0003baa0 0843
.org 0x3baa2
	strb r0, [r4, #10]	@ 0003baa2 a072
.org 0x3baa4
	adds r6, r4, #0	@ 0003baa4 261c
.org 0x3baa6
	adds r6, #116	@ 0003baa6 7436
.org 0x3baa8
	ldr r1, [pc, #96]	@ 0003baa8 1849
.org 0x3baaa
	mov r8, r1	@ 0003baaa 8846
.org 0x3baac
	adds r2, r4, #0	@ 0003baac 221c
.org 0x3baae
	adds r2, #84	@ 0003baae 5432
.org 0x3bab0
	adds r0, r6, #0	@ 0003bab0 301c
.org 0x3bab2
	movs r3, #1	@ 0003bab2 0123
.org 0x3bab4
	bl 0x5760	@ 0003bab4 c9f754fe
.org 0x3bab8
	str r4, [r6, #44]	@ 0003bab8 f462
.org 0x3baba
	str r5, [r6, #36]	@ 0003baba 7562
.org 0x3babc
	strb r5, [r4, #18]	@ 0003babc a574
.org 0x3babe
	adds r0, r7, #0	@ 0003babe 381c
.org 0x3bac0
	bl 0x3a4a8	@ 0003bac0 fef7f2fc
.org 0x3bac4
	adds r0, #2	@ 0003bac4 0230
.org 0x3bac6
	lsls r0, r0, #24	@ 0003bac6 0006
.org 0x3bac8
	lsrs r4, r0, #24	@ 0003bac8 040e
.org 0x3baca
	adds r0, r7, #0	@ 0003baca 381c
.org 0x3bacc
	bl 0x38a78	@ 0003bacc fcf7d4ff
.org 0x3bad0
	lsls r0, r0, #24	@ 0003bad0 0006
.org 0x3bad2
	cmp r0, #0	@ 0003bad2 0028
.org 0x3bad4
	beq.n 0x3bada	@ 0003bad4 01d0
.org 0x3bad6
	lsls r0, r4, #25	@ 0003bad6 6006
.org 0x3bad8
	lsrs r4, r0, #24	@ 0003bad8 040e
.org 0x3bada
	movs r3, #1	@ 0003bada 0123
.org 0x3badc
	negs r3, r3	@ 0003badc 5b42
.org 0x3bade
	str r3, [sp, #0]	@ 0003bade 0093
.org 0x3bae0
	str r3, [sp, #4]	@ 0003bae0 0193
.org 0x3bae2
	adds r0, r6, #0	@ 0003bae2 301c
.org 0x3bae4
	mov r1, r8	@ 0003bae4 4146
.org 0x3bae6
	adds r2, r4, #0	@ 0003bae6 221c
.org 0x3bae8
	bl 0x5794	@ 0003bae8 c9f754fe
.org 0x3baec
	movs r0, #178	@ 0003baec b220
.org 0x3baee
	lsls r0, r0, #1	@ 0003baee 4000
.org 0x3baf0
	adds r1, r7, r0	@ 0003baf0 3918
.org 0x3baf2
	movs r0, #1	@ 0003baf2 0120
.org 0x3baf4
	strb r0, [r1, #0]	@ 0003baf4 0870
.org 0x3baf6
	movs r0, #4	@ 0003baf6 0420
.org 0x3baf8
	mov r1, r9	@ 0003baf8 4946
.org 0x3bafa
	strb r0, [r1, #14]	@ 0003bafa 8873
.org 0x3bafc
	add sp, #8	@ 0003bafc 02b0
.org 0x3bafe
	pop {r3, r4}	@ 0003bafe 18bc
.org 0x3bb00
	mov r8, r3	@ 0003bb00 9846
.org 0x3bb02
	mov r9, r4	@ 0003bb02 a146
.org 0x3bb04
	pop {r4, r5, r6, r7}	@ 0003bb04 f0bc
.org 0x3bb06
	pop {r0}	@ 0003bb06 01bc
.org 0x3bb08
	bx r0	@ 0003bb08 0047
