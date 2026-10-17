@ FUN_0806eed8  entry 0x0806eed8  size 40
.thumb
.org 0x6eed8
FUN_0806eed8:
	push {r4, r5, r6, lr}	@ 0006eed8 70b5
.org 0x6eeda
	sub sp, #16	@ 0006eeda 84b0
.org 0x6eedc
	adds r5, r0, #0	@ 0006eedc 051c
.org 0x6eede
	ldrb r0, [r5, #10]	@ 0006eede a87a
.org 0x6eee0
	lsrs r6, r0, #4	@ 0006eee0 0609
.org 0x6eee2
	movs r0, #1	@ 0006eee2 0120
.org 0x6eee4
	ands r6, r0	@ 0006eee4 0640
.org 0x6eee6
	ldrb r0, [r5, #15]	@ 0006eee6 e87b
.org 0x6eee8
	cmp r0, #7	@ 0006eee8 0728
.org 0x6eeea
	bls.n 0x6eeee	@ 0006eeea 00d9
.org 0x6eeec
	b.n 0x6f0d4	@ 0006eeec f2e0
.org 0x6eeee
	lsls r0, r0, #2	@ 0006eeee 8000
.org 0x6eef0
	ldr r1, [pc, #4]	@ 0006eef0 0149
.org 0x6eef2
	adds r0, r0, r1	@ 0006eef2 4018
.org 0x6eef4
	ldr r0, [r0, #0]	@ 0006eef4 0068
.org 0x6eef6
	mov pc, r0	@ 0006eef6 8746
.org 0x6eef8
	.byte 0xfc,0xee,0x06,0x08	@ 0006eef8 data
.org 0x6eefc
	.byte 0x1c,0xef,0x06,0x08	@ 0006eefc data
