@ FUN_0800f0ec  entry 0x0800f0ec  size 58
.thumb
.org 0xf0ec
FUN_0800f0ec:
	push {lr}	@ 0000f0ec 00b5
.org 0xf0ee
	adds r2, r0, #0	@ 0000f0ee 021c
.org 0xf0f0
	adds r3, r1, #0	@ 0000f0f0 0b1c
.org 0xf0f2
	ldr r1, [r2, #68]	@ 0000f0f2 516c
.org 0xf0f4
	movs r0, #128	@ 0000f0f4 8020
.org 0xf0f6
	lsls r0, r0, #1	@ 0000f0f6 4000
.org 0xf0f8
	cmp r1, r0	@ 0000f0f8 8142
.org 0xf0fa
	bne.n 0xf11a	@ 0000f0fa 0ed1
.org 0xf0fc
	adds r0, r2, #0	@ 0000f0fc 101c
.org 0xf0fe
	adds r0, #108	@ 0000f0fe 6c30
.org 0xf100
	ldrh r0, [r0, #0]	@ 0000f100 0088
.org 0xf102
	lsrs r0, r0, #4	@ 0000f102 0009
.org 0xf104
	str r0, [r2, #76]	@ 0000f104 d064
.org 0xf106
	ldr r1, [pc, #32]	@ 0000f106 0849
.org 0xf108
	ldrb r0, [r2, #16]	@ 0000f108 107c
.org 0xf10a
	adds r0, #64	@ 0000f10a 4030
.org 0xf10c
	lsls r0, r0, #24	@ 0000f10c 0006
.org 0xf10e
	lsrs r0, r0, #23	@ 0000f10e c00d
.org 0xf110
	adds r0, r0, r1	@ 0000f110 4018
.org 0xf112
	ldrh r0, [r0, #0]	@ 0000f112 0088
.org 0xf114
	lsls r0, r0, #16	@ 0000f114 0004
.org 0xf116
	asrs r0, r0, #22	@ 0000f116 8015
.org 0xf118
	str r0, [r2, #80]	@ 0000f118 1065
.org 0xf11a
	adds r0, r2, #0	@ 0000f11a 101c
.org 0xf11c
	adds r1, r3, #0	@ 0000f11c 191c
.org 0xf11e
	bl 0x7638	@ 0000f11e f8f78bfa
.org 0xf122
	pop {r0}	@ 0000f122 01bc
.org 0xf124
	bx r0	@ 0000f124 0047
