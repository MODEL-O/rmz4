@ FUN_0801f63c  entry 0x0801f63c  size 40
.thumb
.org 0x1f63c
FUN_0801f63c:
	push {r4, lr}	@ 0001f63c 10b5
.org 0x1f63e
	ldr r1, [pc, #36]	@ 0001f63e 0949
.org 0x1f640
	strb r0, [r1, #2]	@ 0001f640 8870
.org 0x1f642
	movs r0, #255	@ 0001f642 ff20
.org 0x1f644
	strb r0, [r1, #3]	@ 0001f644 c870
.org 0x1f646
	ldr r4, [pc, #32]	@ 0001f646 084c
.org 0x1f648
	adds r0, r4, #0	@ 0001f648 201c
.org 0x1f64a
	bl 0x1e918	@ 0001f64a fff765f9
.org 0x1f64e
	movs r1, #156	@ 0001f64e 9c21
.org 0x1f650
	lsls r1, r1, #1	@ 0001f650 4900
.org 0x1f652
	adds r0, r4, r1	@ 0001f652 6018
.org 0x1f654
	ldr r0, [r0, #0]	@ 0001f654 0068
.org 0x1f656
	adds r4, #216	@ 0001f656 d834
.org 0x1f658
	adds r1, r4, #0	@ 0001f658 211c
.org 0x1f65a
	bl 0x382e4	@ 0001f65a 18f043fe
.org 0x1f65e
	pop {r4}	@ 0001f65e 10bc
.org 0x1f660
	pop {r0}	@ 0001f660 01bc
.org 0x1f662
	bx r0	@ 0001f662 0047
