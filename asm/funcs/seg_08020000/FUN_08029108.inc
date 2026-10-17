@ FUN_08029108  entry 0x08029108  size 102
.thumb
.org 0x29108
FUN_08029108:
	push {r4, lr}	@ 00029108 10b5
.org 0x2910a
	adds r4, r0, #0	@ 0002910a 041c
.org 0x2910c
	ldr r2, [r4, #12]	@ 0002910c e268
.org 0x2910e
	ldrb r0, [r2, #1]	@ 0002910e 5078
.org 0x29110
	cmp r0, #1	@ 00029110 0128
.org 0x29112
	beq.n 0x2913c	@ 00029112 13d0
.org 0x29114
	cmp r0, #1	@ 00029114 0128
.org 0x29116
	bgt.n 0x2911e	@ 00029116 02dc
.org 0x29118
	cmp r0, #0	@ 00029118 0028
.org 0x2911a
	beq.n 0x29124	@ 0002911a 03d0
.org 0x2911c
	b.n 0x29180	@ 0002911c 30e0
.org 0x2911e
	cmp r0, #2	@ 0002911e 0228
.org 0x29120
	beq.n 0x29158	@ 00029120 1ad0
.org 0x29122
	b.n 0x29180	@ 00029122 2de0
.org 0x29124
	bl 0x6e94	@ 00029124 ddf7b6fe
.org 0x29128
	ldr r0, [r4, #12]	@ 00029128 e068
.org 0x2912a
	movs r1, #2	@ 0002912a 0221
.org 0x2912c
	ldrsh r0, [r0, r1]	@ 0002912c 405e
.org 0x2912e
	ldr r1, [pc, #8]	@ 0002912e 0249
.org 0x29130
	bl 0x6a94	@ 00029130 ddf7b0fc
.org 0x29134
	b.n 0x29180	@ 00029134 24e0
.org 0x29136
	.byte 0x00	@ 00029136 data
.org 0x29137
	.byte 0x00	@ 00029137 data
.org 0x29138
	.byte 0x78,0x0c,0x00,0x02	@ 00029138 data
.org 0x2913c
	ldr r0, [pc, #16]	@ 0002913c 0448
.org 0x2913e
	movs r3, #2	@ 0002913e 0223
.org 0x29140
	ldrsh r1, [r2, r3]	@ 00029140 d15e
.org 0x29142
	ldr r3, [pc, #16]	@ 00029142 044b
.org 0x29144
	adds r0, r0, r3	@ 00029144 c018
.org 0x29146
	adds r1, r1, r0	@ 00029146 0918
.org 0x29148
	ldr r0, [r2, #4]	@ 00029148 5068
.org 0x2914a
	strb r0, [r1, #0]	@ 0002914a 0870
.org 0x2914c
	b.n 0x29180	@ 0002914c 18e0
.org 0x2914e
	.byte 0x00	@ 0002914e data
.org 0x2914f
	.byte 0x00	@ 0002914f data
.org 0x29150
	.byte 0xb0,0x0a,0x00,0x02	@ 00029150 data
.org 0x29154
	.byte 0x24,0xd0,0x02,0x00	@ 00029154 data
.org 0x29158
	ldr r0, [pc, #28]	@ 00029158 0748
.org 0x2915a
	movs r3, #2	@ 0002915a 0223
.org 0x2915c
	ldrsh r1, [r2, r3]	@ 0002915c d15e
.org 0x2915e
	ldr r3, [pc, #28]	@ 0002915e 074b
.org 0x29160
	adds r0, r0, r3	@ 00029160 c018
.org 0x29162
	adds r1, r1, r0	@ 00029162 0918
.org 0x29164
	ldrb r1, [r1, #0]	@ 00029164 0978
.org 0x29166
	ldr r0, [r2, #4]	@ 00029166 5068
.org 0x29168
	cmp r1, r0	@ 00029168 8142
.org 0x2916a
	beq.n 0x29172	@ 0002916a 02d0
.org 0x2916c
	adds r0, r2, #0	@ 0002916c 101c
