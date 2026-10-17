@ FUN_080113c4  entry 0x080113c4  size 42
.thumb
.org 0x113c4
FUN_080113c4:
	push {lr}	@ 000113c4 00b5
.org 0x113c6
	adds r3, r0, #0	@ 000113c6 031c
.org 0x113c8
	ldrb r0, [r3, #14]	@ 000113c8 987b
.org 0x113ca
	cmp r0, #0	@ 000113ca 0028
.org 0x113cc
	bne.n 0x113ea	@ 000113cc 0dd1
.org 0x113ce
	ldr r1, [r3, #92]	@ 000113ce d96d
.org 0x113d0
	lsrs r1, r1, #4	@ 000113d0 0909
.org 0x113d2
	lsls r1, r1, #1	@ 000113d2 4900
.org 0x113d4
	ldr r0, [pc, #24]	@ 000113d4 0648
.org 0x113d6
	adds r1, r1, r0	@ 000113d6 0918
.org 0x113d8
	ldrh r2, [r1, #0]	@ 000113d8 0a88
.org 0x113da
	ldr r0, [pc, #24]	@ 000113da 0648
.org 0x113dc
	ands r0, r2	@ 000113dc 1040
.org 0x113de
	movs r2, #3	@ 000113de 0322
.org 0x113e0
	orrs r0, r2	@ 000113e0 1043
.org 0x113e2
	strh r0, [r1, #0]	@ 000113e2 0880
.org 0x113e4
	ldrb r0, [r3, #14]	@ 000113e4 987b
.org 0x113e6
	adds r0, #1	@ 000113e6 0130
.org 0x113e8
	strb r0, [r3, #14]	@ 000113e8 9873
.org 0x113ea
	pop {r0}	@ 000113ea 01bc
.org 0x113ec
	bx r0	@ 000113ec 0047
