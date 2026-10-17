@ FUN_080d3078  entry 0x080d3078  size 74
.thumb
.org 0xd3078
FUN_080d3078:
	push {r4, r5, lr}	@ 000d3078 30b5
.org 0xd307a
	adds r4, r0, #0	@ 000d307a 041c
.org 0xd307c
	ldr r5, [r4, #40]	@ 000d307c a56a
.org 0xd307e
	bl 0x1cff0	@ 000d307e 49f7b7ff
.org 0xd3082
	adds r2, r4, #0	@ 000d3082 221c
.org 0xd3084
	adds r2, #80	@ 000d3084 5032
.org 0xd3086
	ldrh r1, [r2, #0]	@ 000d3086 1188
.org 0xd3088
	ldr r0, [pc, #56]	@ 000d3088 0e48
.org 0xd308a
	cmp r1, r0	@ 000d308a 8142
.org 0xd308c
	bhi.n 0xd309c	@ 000d308c 06d8
.org 0xd308e
	adds r0, r1, #4	@ 000d308e 081d
.org 0xd3090
	strh r0, [r2, #0]	@ 000d3090 1080
.org 0xd3092
	adds r1, r4, #0	@ 000d3092 211c
.org 0xd3094
	adds r1, #82	@ 000d3094 5231
.org 0xd3096
	ldrh r0, [r1, #0]	@ 000d3096 0888
.org 0xd3098
	adds r0, #4	@ 000d3098 0430
.org 0xd309a
	strh r0, [r1, #0]	@ 000d309a 0880
.org 0xd309c
	ldrb r0, [r5, #12]	@ 000d309c 287b
.org 0xd309e
	cmp r0, #4	@ 000d309e 0428
.org 0xd30a0
	bne.n 0xd30bc	@ 000d30a0 0cd1
.org 0xd30a2
	ldr r1, [pc, #36]	@ 000d30a2 0949
.org 0xd30a4
	ldrb r0, [r4, #9]	@ 000d30a4 607a
.org 0xd30a6
	lsls r0, r0, #2	@ 000d30a6 8000
.org 0xd30a8
	adds r0, r0, r1	@ 000d30a8 4018
.org 0xd30aa
	movs r1, #2	@ 000d30aa 0221
.org 0xd30ac
	str r1, [r4, #12]	@ 000d30ac e160
.org 0xd30ae
	ldr r0, [r0, #0]	@ 000d30ae 0068
.org 0xd30b0
	ldr r0, [r0, #8]	@ 000d30b0 8068
.org 0xd30b2
	str r0, [r4, #20]	@ 000d30b2 6061
.org 0xd30b4
	ldrb r1, [r4, #10]	@ 000d30b4 a17a
.org 0xd30b6
	movs r0, #254	@ 000d30b6 fe20
.org 0xd30b8
	ands r0, r1	@ 000d30b8 0840
.org 0xd30ba
	strb r0, [r4, #10]	@ 000d30ba a072
.org 0xd30bc
	pop {r4, r5}	@ 000d30bc 30bc
.org 0xd30be
	pop {r0}	@ 000d30be 01bc
.org 0xd30c0
	bx r0	@ 000d30c0 0047
