@ FUN_080d0148  entry 0x080d0148  size 36
.thumb
.org 0xd0148
FUN_080d0148:
	push {r4, lr}	@ 000d0148 10b5
.org 0xd014a
	adds r3, r0, #0	@ 000d014a 031c
.org 0xd014c
	ldr r0, [r3, #40]	@ 000d014c 986a
.org 0xd014e
	adds r1, r0, #0	@ 000d014e 011c
.org 0xd0150
	adds r1, #204	@ 000d0150 cc31
.org 0xd0152
	ldrh r2, [r1, #0]	@ 000d0152 0a88
.org 0xd0154
	movs r4, #0	@ 000d0154 0024
.org 0xd0156
	ldrsh r0, [r1, r4]	@ 000d0156 085f
.org 0xd0158
	cmp r0, #0	@ 000d0158 0028
.org 0xd015a
	beq.n 0xd0160	@ 000d015a 01d0
.org 0xd015c
	subs r0, r2, #1	@ 000d015c 501e
.org 0xd015e
	strh r0, [r1, #0]	@ 000d015e 0880
.org 0xd0160
	adds r0, r3, #0	@ 000d0160 181c
.org 0xd0162
	bl 0xbd3f8	@ 000d0162 edf749f9
.org 0xd0166
	pop {r4}	@ 000d0166 10bc
.org 0xd0168
	pop {r0}	@ 000d0168 01bc
.org 0xd016a
	bx r0	@ 000d016a 0047
