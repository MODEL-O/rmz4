@ FUN_080aa0ec  entry 0x080aa0ec  size 54
.thumb
.org 0xaa0ec
FUN_080aa0ec:
	push {r4, r5, r6, lr}	@ 000aa0ec 70b5
.org 0xaa0ee
	adds r5, r0, #0	@ 000aa0ee 051c
.org 0xaa0f0
	adds r6, r5, #0	@ 000aa0f0 2e1c
.org 0xaa0f2
	adds r6, #192	@ 000aa0f2 c036
.org 0xaa0f4
	ldr r0, [r6, #0]	@ 000aa0f4 3068
.org 0xaa0f6
	bl 0x2b3e4	@ 000aa0f6 81f775f9
.org 0xaa0fa
	cmp r0, #0	@ 000aa0fa 0028
.org 0xaa0fc
	beq.n 0xaa11c	@ 000aa0fc 0ed0
.org 0xaa0fe
	adds r0, r5, #0	@ 000aa0fe 281c
.org 0xaa100
	adds r0, #116	@ 000aa100 7430
.org 0xaa102
	ldr r1, [pc, #32]	@ 000aa102 0849
.org 0xaa104
	bl 0x5784	@ 000aa104 5bf73efb
.org 0xaa108
	movs r4, #0	@ 000aa108 0024
.org 0xaa10a
	str r4, [r6, #0]	@ 000aa10a 3460
.org 0xaa10c
	ldr r0, [r5, #84]	@ 000aa10c 686d
.org 0xaa10e
	ldr r1, [r5, #88]	@ 000aa10e a96d
.org 0xaa110
	bl 0x8534	@ 000aa110 5ef710fa
.org 0xaa114
	str r0, [r5, #88]	@ 000aa114 a865
.org 0xaa116
	movs r0, #4	@ 000aa116 0420
.org 0xaa118
	strb r0, [r5, #13]	@ 000aa118 6873
.org 0xaa11a
	strb r4, [r5, #14]	@ 000aa11a ac73
.org 0xaa11c
	pop {r4, r5, r6}	@ 000aa11c 70bc
.org 0xaa11e
	pop {r0}	@ 000aa11e 01bc
.org 0xaa120
	bx r0	@ 000aa120 0047
