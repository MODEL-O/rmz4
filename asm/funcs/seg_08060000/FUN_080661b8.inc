@ FUN_080661b8  entry 0x080661b8  size 70
.thumb
.org 0x661b8
FUN_080661b8:
	push {r4, r5, r6, r7, lr}	@ 000661b8 f0b5
.org 0x661ba
	mov r7, r8	@ 000661ba 4746
.org 0x661bc
	push {r7}	@ 000661bc 80b4
.org 0x661be
	movs r3, #208	@ 000661be d023
.org 0x661c0
	adds r3, r3, r1	@ 000661c0 5b18
.org 0x661c2
	mov ip, r3	@ 000661c2 9c46
.org 0x661c4
	ldr r5, [pc, #56]	@ 000661c4 0e4d
.org 0x661c6
	lsls r2, r2, #3	@ 000661c6 d200
.org 0x661c8
	adds r3, r2, r5	@ 000661c8 5319
.org 0x661ca
	ldr r3, [r3, #0]	@ 000661ca 1b68
.org 0x661cc
	movs r4, #240	@ 000661cc f024
.org 0x661ce
	lsls r4, r4, #7	@ 000661ce e401
.org 0x661d0
	adds r4, r4, r3	@ 000661d0 e418
.org 0x661d2
	mov r8, r4	@ 000661d2 a046
.org 0x661d4
	mov r3, ip	@ 000661d4 6346
.org 0x661d6
	ldr r3, [r3, #0]	@ 000661d6 1b68
.org 0x661d8
	mov ip, r3	@ 000661d8 9c46
.org 0x661da
	mov r6, ip	@ 000661da 6646
.org 0x661dc
	add r6, r8	@ 000661dc 4644
.org 0x661de
	adds r1, #212	@ 000661de d431
.org 0x661e0
	adds r5, #4	@ 000661e0 0435
.org 0x661e2
	adds r2, r2, r5	@ 000661e2 5219
.org 0x661e4
	ldr r2, [r2, #0]	@ 000661e4 1268
.org 0x661e6
	movs r4, #128	@ 000661e6 8024
.org 0x661e8
	lsls r4, r4, #8	@ 000661e8 2402
.org 0x661ea
	adds r2, r2, r4	@ 000661ea 1219
.org 0x661ec
	ldr r1, [r1, #0]	@ 000661ec 0968
.org 0x661ee
	adds r7, r1, r2	@ 000661ee 8f18
.org 0x661f0
	str r6, [r0, #0]	@ 000661f0 0660
.org 0x661f2
	str r7, [r0, #4]	@ 000661f2 4760
.org 0x661f4
	pop {r3}	@ 000661f4 08bc
.org 0x661f6
	mov r8, r3	@ 000661f6 9846
.org 0x661f8
	pop {r4, r5, r6, r7}	@ 000661f8 f0bc
.org 0x661fa
	pop {r2}	@ 000661fa 04bc
.org 0x661fc
	bx r2	@ 000661fc 1047
