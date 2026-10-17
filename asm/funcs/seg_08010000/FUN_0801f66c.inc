@ FUN_0801f66c  entry 0x0801f66c  size 36
.thumb
.org 0x1f66c
FUN_0801f66c:
	push {r4, lr}	@ 0001f66c 10b5
.org 0x1f66e
	ldr r1, [pc, #32]	@ 0001f66e 0849
.org 0x1f670
	strb r0, [r1, #3]	@ 0001f670 c870
.org 0x1f672
	ldr r4, [pc, #32]	@ 0001f672 084c
.org 0x1f674
	adds r0, r4, #0	@ 0001f674 201c
.org 0x1f676
	bl 0x1e918	@ 0001f676 fff74ff9
.org 0x1f67a
	movs r1, #156	@ 0001f67a 9c21
.org 0x1f67c
	lsls r1, r1, #1	@ 0001f67c 4900
.org 0x1f67e
	adds r0, r4, r1	@ 0001f67e 6018
.org 0x1f680
	ldr r0, [r0, #0]	@ 0001f680 0068
.org 0x1f682
	adds r4, #216	@ 0001f682 d834
.org 0x1f684
	adds r1, r4, #0	@ 0001f684 211c
.org 0x1f686
	bl 0x382e4	@ 0001f686 18f02dfe
.org 0x1f68a
	pop {r4}	@ 0001f68a 10bc
.org 0x1f68c
	pop {r0}	@ 0001f68c 01bc
.org 0x1f68e
	bx r0	@ 0001f68e 0047
