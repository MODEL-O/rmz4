@ FUN_080866d0  entry 0x080866d0  size 70
.thumb
.org 0x866d0
FUN_080866d0:
	push {r4, lr}	@ 000866d0 10b5
.org 0x866d2
	adds r4, r0, #0	@ 000866d2 041c
.org 0x866d4
	ldrb r0, [r4, #15]	@ 000866d4 e07b
.org 0x866d6
	cmp r0, #0	@ 000866d6 0028
.org 0x866d8
	bne.n 0x866f6	@ 000866d8 0dd1
.org 0x866da
	adds r0, r4, #0	@ 000866da 201c
.org 0x866dc
	adds r0, #116	@ 000866dc 7430
.org 0x866de
	ldr r1, [pc, #56]	@ 000866de 0e49
.org 0x866e0
	bl 0x5784	@ 000866e0 7ff750f8
.org 0x866e4
	adds r0, r4, #0	@ 000866e4 201c
.org 0x866e6
	movs r1, #0	@ 000866e6 0021
.org 0x866e8
	bl 0x86a14	@ 000866e8 00f094f9
.org 0x866ec
	movs r0, #64	@ 000866ec 4020
.org 0x866ee
	strb r0, [r4, #18]	@ 000866ee a074
.org 0x866f0
	ldrb r0, [r4, #15]	@ 000866f0 e07b
.org 0x866f2
	adds r0, #1	@ 000866f2 0130
.org 0x866f4
	strb r0, [r4, #15]	@ 000866f4 e073
.org 0x866f6
	adds r0, r4, #0	@ 000866f6 201c
.org 0x866f8
	bl 0x86a48	@ 000866f8 00f0a6f9
.org 0x866fc
	ldrb r0, [r4, #18]	@ 000866fc a07c
.org 0x866fe
	subs r0, #1	@ 000866fe 0138
.org 0x86700
	strb r0, [r4, #18]	@ 00086700 a074
.org 0x86702
	lsls r0, r0, #24	@ 00086702 0006
.org 0x86704
	cmp r0, #0	@ 00086704 0028
.org 0x86706
	bne.n 0x86710	@ 00086706 03d1
.org 0x86708
	adds r1, r4, #0	@ 00086708 211c
.org 0x8670a
	adds r1, #183	@ 0008670a b731
.org 0x8670c
	movs r0, #1	@ 0008670c 0120
.org 0x8670e
	strb r0, [r1, #0]	@ 0008670e 0870
.org 0x86710
	pop {r4}	@ 00086710 10bc
.org 0x86712
	pop {r0}	@ 00086712 01bc
.org 0x86714
	bx r0	@ 00086714 0047
