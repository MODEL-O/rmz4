@ FUN_08090140  entry 0x08090140  size 50
.thumb
.org 0x90140
FUN_08090140:
	push {r4, r5, lr}	@ 00090140 30b5
.org 0x90142
	adds r4, r0, #0	@ 00090142 041c
.org 0x90144
	ldr r5, [r4, #40]	@ 00090144 a56a
.org 0x90146
	ldrb r0, [r4, #15]	@ 00090146 e07b
.org 0x90148
	cmp r0, #0	@ 00090148 0028
.org 0x9014a
	bne.n 0x90164	@ 0009014a 0bd1
.org 0x9014c
	adds r0, r4, #0	@ 0009014c 201c
.org 0x9014e
	adds r0, #116	@ 0009014e 7430
.org 0x90150
	ldr r1, [pc, #32]	@ 00090150 0849
.org 0x90152
	bl 0x5784	@ 00090152 75f717fb
.org 0x90156
	ldrb r1, [r4, #10]	@ 00090156 a17a
.org 0x90158
	movs r0, #254	@ 00090158 fe20
.org 0x9015a
	ands r0, r1	@ 0009015a 0840
.org 0x9015c
	strb r0, [r4, #10]	@ 0009015c a072
.org 0x9015e
	ldrb r0, [r4, #15]	@ 0009015e e07b
.org 0x90160
	adds r0, #1	@ 00090160 0130
.org 0x90162
	strb r0, [r4, #15]	@ 00090162 e073
.org 0x90164
	ldr r0, [r5, #84]	@ 00090164 686d
.org 0x90166
	ldr r1, [r5, #88]	@ 00090166 a96d
.org 0x90168
	str r0, [r4, #84]	@ 00090168 6065
.org 0x9016a
	str r1, [r4, #88]	@ 0009016a a165
.org 0x9016c
	pop {r4, r5}	@ 0009016c 30bc
.org 0x9016e
	pop {r0}	@ 0009016e 01bc
.org 0x90170
	bx r0	@ 00090170 0047
