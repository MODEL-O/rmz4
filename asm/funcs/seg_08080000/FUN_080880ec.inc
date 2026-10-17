@ FUN_080880ec  entry 0x080880ec  size 78
.thumb
.org 0x880ec
FUN_080880ec:
	push {r4, r5, lr}	@ 000880ec 30b5
.org 0x880ee
	adds r2, r0, #0	@ 000880ee 021c
.org 0x880f0
	adds r1, r2, #0	@ 000880f0 111c
.org 0x880f2
	adds r1, #180	@ 000880f2 b431
.org 0x880f4
	movs r0, #3	@ 000880f4 0320
.org 0x880f6
	strb r0, [r1, #0]	@ 000880f6 0870
.org 0x880f8
	ldrb r0, [r2, #10]	@ 000880f8 907a
.org 0x880fa
	lsrs r3, r0, #4	@ 000880fa 0309
.org 0x880fc
	movs r5, #1	@ 000880fc 0125
.org 0x880fe
	ands r3, r5	@ 000880fe 2b40
.org 0x88100
	movs r4, #0	@ 00088100 0024
.org 0x88102
	ldr r0, [pc, #28]	@ 00088102 0748
.org 0x88104
	ldr r0, [r0, #0]	@ 00088104 0068
.org 0x88106
	ldr r1, [r2, #84]	@ 00088106 516d
.org 0x88108
	ldr r0, [r0, #84]	@ 00088108 406d
.org 0x8810a
	cmp r1, r0	@ 0008810a 8142
.org 0x8810c
	bge.n 0x88110	@ 0008810c 00da
.org 0x8810e
	movs r4, #1	@ 0008810e 0124
.org 0x88110
	adds r0, r3, #0	@ 00088110 181c
.org 0x88112
	eors r0, r4	@ 00088112 6040
.org 0x88114
	cmp r0, #0	@ 00088114 0028
.org 0x88116
	beq.n 0x88124	@ 00088116 05d0
.org 0x88118
	movs r0, #5	@ 00088118 0520
.org 0x8811a
	strb r0, [r2, #14]	@ 0008811a 9073
.org 0x8811c
	movs r0, #0	@ 0008811c 0020
.org 0x8811e
	b.n 0x88126	@ 0008811e 02e0
.org 0x88120
	.byte 0xf0,0xdb,0x02,0x02	@ 00088120 data
.org 0x88124
	strb r5, [r2, #14]	@ 00088124 9573
.org 0x88126
	strb r0, [r2, #15]	@ 00088126 d073
.org 0x88128
	ldr r0, [pc, #20]	@ 00088128 0548
.org 0x8812a
	ldrb r1, [r2, #14]	@ 0008812a 917b
.org 0x8812c
	lsls r1, r1, #2	@ 0008812c 8900
.org 0x8812e
	adds r1, r1, r0	@ 0008812e 0918
.org 0x88130
	ldr r1, [r1, #0]	@ 00088130 0968
.org 0x88132
	adds r0, r2, #0	@ 00088132 101c
.org 0x88134
	bl 0x128f80	@ 00088134 a0f024ff
.org 0x88138
	pop {r4, r5}	@ 00088138 30bc
