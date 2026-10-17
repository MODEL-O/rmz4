@ FUN_0809806c  entry 0x0809806c  size 200
.thumb
.org 0x9806c
FUN_0809806c:
	push {r4, r5, r6, r7, lr}	@ 0009806c f0b5
.org 0x9806e
	mov r7, r8	@ 0009806e 4746
.org 0x98070
	push {r7}	@ 00098070 80b4
.org 0x98072
	sub sp, #8	@ 00098072 82b0
.org 0x98074
	adds r7, r0, #0	@ 00098074 071c
.org 0x98076
	ldr r0, [r7, #84]	@ 00098076 786d
.org 0x98078
	str r0, [sp, #0]	@ 00098078 0090
.org 0x9807a
	ldr r0, [r7, #88]	@ 0009807a b86d
.org 0x9807c
	str r0, [sp, #4]	@ 0009807c 0190
.org 0x9807e
	ldr r6, [pc, #180]	@ 0009807e 2d4e
.org 0x98080
	ldr r2, [pc, #180]	@ 00098080 2d4a
.org 0x98082
	ldr r1, [r2, #0]	@ 00098082 1168
.org 0x98084
	ldr r0, [pc, #180]	@ 00098084 2d48
.org 0x98086
	adds r3, r1, #0	@ 00098086 0b1c
.org 0x98088
	muls r3, r0	@ 00098088 4343
.org 0x9808a
	ldr r0, [pc, #180]	@ 0009808a 2d48
.org 0x9808c
	adds r3, r3, r0	@ 0009808c 1b18
.org 0x9808e
	lsls r3, r3, #1	@ 0009808e 5b00
.org 0x98090
	lsrs r0, r3, #1	@ 00098090 5808
.org 0x98092
	str r0, [r2, #0]	@ 00098092 1060
.org 0x98094
	lsrs r3, r3, #17	@ 00098094 5b0c
.org 0x98096
	movs r0, #1	@ 00098096 0120
.org 0x98098
	ands r3, r0	@ 00098098 0340
.org 0x9809a
	lsls r3, r3, #4	@ 0009809a 1b01
.org 0x9809c
	adds r5, r7, #0	@ 0009809c 3d1c
.org 0x9809e
	adds r5, #188	@ 0009809e bc35
.org 0x980a0
	ldrb r0, [r5, #0]	@ 000980a0 2878
.org 0x980a2
	orrs r3, r0	@ 000980a2 0343
.org 0x980a4
	mov r0, sp	@ 000980a4 6846
.org 0x980a6
	adds r1, r6, #0	@ 000980a6 311c
.org 0x980a8
	movs r2, #0	@ 000980a8 0022
.org 0x980aa
	bl 0xd4c8c	@ 000980aa 3cf0effd
.org 0x980ae
	movs r0, #28	@ 000980ae 1c20
.org 0x980b0
	adds r0, r0, r6	@ 000980b0 8019
.org 0x980b2
	mov r8, r0	@ 000980b2 8046
.org 0x980b4
	ldrb r3, [r5, #0]	@ 000980b4 2b78
.org 0x980b6
	mov r0, sp	@ 000980b6 6846
.org 0x980b8
	mov r1, r8	@ 000980b8 4146
.org 0x980ba
	movs r2, #0	@ 000980ba 0022
.org 0x980bc
	bl 0xd4c8c	@ 000980bc 3cf0e6fd
.org 0x980c0
	ldrb r0, [r5, #0]	@ 000980c0 2878
.org 0x980c2
	movs r4, #16	@ 000980c2 1024
.org 0x980c4
	adds r3, r4, #0	@ 000980c4 231c
.org 0x980c6
	orrs r3, r0	@ 000980c6 0343
.org 0x980c8
	mov r0, sp	@ 000980c8 6846
.org 0x980ca
	mov r1, r8	@ 000980ca 4146
.org 0x980cc
	movs r2, #0	@ 000980cc 0022
.org 0x980ce
	bl 0xd4c8c	@ 000980ce 3cf0ddfd
.org 0x980d2
	adds r6, #56	@ 000980d2 3836
.org 0x980d4
	ldrb r0, [r5, #0]	@ 000980d4 2878
.org 0x980d6
	orrs r4, r0	@ 000980d6 0443
.org 0x980d8
	mov r0, sp	@ 000980d8 6846
.org 0x980da
	adds r1, r6, #0	@ 000980da 311c
.org 0x980dc
	movs r2, #0	@ 000980dc 0022
.org 0x980de
	adds r3, r4, #0	@ 000980de 231c
.org 0x980e0
	bl 0xd4c8c	@ 000980e0 3cf0d4fd
.org 0x980e4
	movs r0, #1	@ 000980e4 0120
.org 0x980e6
	mov r1, sp	@ 000980e6 6946
.org 0x980e8
	bl 0xd0c88	@ 000980e8 38f0cefd
.org 0x980ec
	movs r0, #42	@ 000980ec 2a20
.org 0x980ee
	bl 0x2b10	@ 000980ee 6af70ffd
.org 0x980f2
	adds r4, r7, #0	@ 000980f2 3c1c
.org 0x980f4
	adds r4, #84	@ 000980f4 5434
.org 0x980f6
	movs r0, #2	@ 000980f6 0220
.org 0x980f8
	movs r1, #50	@ 000980f8 3221
.org 0x980fa
	adds r2, r4, #0	@ 000980fa 221c
.org 0x980fc
	bl 0x2ab88	@ 000980fc 92f744fd
.org 0x98100
	ldr r2, [pc, #64]	@ 00098100 104a
.org 0x98102
	ldrh r1, [r2, #12]	@ 00098102 9189
.org 0x98104
	ldr r0, [pc, #64]	@ 00098104 1048
.org 0x98106
	cmp r1, r0	@ 00098106 8142
.org 0x98108
	bhi.n 0x9810e	@ 00098108 01d8
.org 0x9810a
	adds r0, r1, #1	@ 0009810a 481c
.org 0x9810c
	strh r0, [r2, #12]	@ 0009810c 9081
.org 0x9810e
	adds r0, r7, #0	@ 0009810e 381c
.org 0x98110
	adds r1, r4, #0	@ 00098110 211c
.org 0x98112
	bl 0x2abe0	@ 00098112 92f765fd
.org 0x98116
	ldr r1, [pc, #52]	@ 00098116 0d49
.org 0x98118
	ldrb r0, [r7, #9]	@ 00098118 787a
.org 0x9811a
	lsls r0, r0, #2	@ 0009811a 8000
.org 0x9811c
	adds r0, r0, r1	@ 0009811c 4018
.org 0x9811e
	movs r1, #4	@ 0009811e 0421
.org 0x98120
	str r1, [r7, #12]	@ 00098120 f960
.org 0x98122
	ldr r0, [r0, #0]	@ 00098122 0068
.org 0x98124
	ldr r0, [r0, #16]	@ 00098124 0069
.org 0x98126
	str r0, [r7, #20]	@ 00098126 7861
.org 0x98128
	add sp, #8	@ 00098128 02b0
.org 0x9812a
	pop {r3}	@ 0009812a 08bc
.org 0x9812c
	mov r8, r3	@ 0009812c 9846
.org 0x9812e
	pop {r4, r5, r6, r7}	@ 0009812e f0bc
.org 0x98130
	pop {r0}	@ 00098130 01bc
.org 0x98132
	bx r0	@ 00098132 0047
