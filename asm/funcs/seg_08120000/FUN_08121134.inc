@ FUN_08121134  entry 0x08121134  size 24
.thumb
.org 0x121134
FUN_08121134:
	push {r4, r5, r6, r7, lr}	@ 00121134 f0b5
.org 0x121136
	adds r6, r0, #0	@ 00121136 061c
.org 0x121138
	ldrb r0, [r6, #2]	@ 00121138 b078
.org 0x12113a
	cmp r0, #99	@ 0012113a 6328
.org 0x12113c
	bls.n 0x121142	@ 0012113c 01d9
.org 0x12113e
	bl 0x1223fa	@ 0012113e 01f05cf9
.org 0x121142
	lsls r0, r0, #2	@ 00121142 8000
.org 0x121144
	ldr r1, [pc, #4]	@ 00121144 0149
.org 0x121146
	adds r0, r0, r1	@ 00121146 4018
.org 0x121148
	ldr r0, [r0, #0]	@ 00121148 0068
.org 0x12114a
	mov pc, r0	@ 0012114a 8746
