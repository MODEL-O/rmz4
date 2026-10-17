@ FUN_0801bf8c  entry 0x0801bf8c  size 38
.thumb
.org 0x1bf8c
FUN_0801bf8c:
	push {lr}	@ 0001bf8c 00b5
.org 0x1bf8e
	adds r1, r0, #0	@ 0001bf8e 011c
.org 0x1bf90
	ldrh r0, [r1, #16]	@ 0001bf90 088a
.org 0x1bf92
	cmp r0, #31	@ 0001bf92 1f28
.org 0x1bf94
	bhi.n 0x1bfae	@ 0001bf94 0bd8
.org 0x1bf96
	adds r0, #1	@ 0001bf96 0130
.org 0x1bf98
	strh r0, [r1, #16]	@ 0001bf98 0882
.org 0x1bf9a
	ldr r2, [pc, #24]	@ 0001bf9a 064a
.org 0x1bf9c
	lsls r0, r0, #16	@ 0001bf9c 0004
.org 0x1bf9e
	lsrs r0, r0, #20	@ 0001bf9e 000d
.org 0x1bfa0
	movs r1, #31	@ 0001bfa0 1f21
.org 0x1bfa2
	ands r0, r1	@ 0001bfa2 0840
.org 0x1bfa4
	movs r3, #128	@ 0001bfa4 8023
.org 0x1bfa6
	lsls r3, r3, #5	@ 0001bfa6 5b01
.org 0x1bfa8
	adds r1, r3, #0	@ 0001bfa8 191c
.org 0x1bfaa
	orrs r0, r1	@ 0001bfaa 0843
.org 0x1bfac
	strh r0, [r2, #2]	@ 0001bfac 5080
.org 0x1bfae
	pop {r0}	@ 0001bfae 01bc
.org 0x1bfb0
	bx r0	@ 0001bfb0 0047
