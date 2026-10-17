@ FUN_080115d0  entry 0x080115d0  size 40
.thumb
.org 0x115d0
FUN_080115d0:
	push {lr}	@ 000115d0 00b5
.org 0x115d2
	movs r1, #0	@ 000115d2 0021
.org 0x115d4
	strh r1, [r0, #16]	@ 000115d4 0182
.org 0x115d6
	movs r1, #8	@ 000115d6 0821
.org 0x115d8
	strh r1, [r0, #18]	@ 000115d8 4182
.org 0x115da
	ldr r1, [pc, #28]	@ 000115da 0749
.org 0x115dc
	movs r0, #128	@ 000115dc 8020
.org 0x115de
	lsls r0, r0, #5	@ 000115de 4001
.org 0x115e0
	strh r0, [r1, #2]	@ 000115e0 4880
.org 0x115e2
	movs r0, #118	@ 000115e2 7620
.org 0x115e4
	bl 0x2b10	@ 000115e4 f1f794fa
.org 0x115e8
	ldr r1, [pc, #16]	@ 000115e8 0449
.org 0x115ea
	ldr r0, [pc, #20]	@ 000115ea 0548
.org 0x115ec
	adds r1, r1, r0	@ 000115ec 0918
.org 0x115ee
	ldrb r0, [r1, #0]	@ 000115ee 0878
.org 0x115f0
	adds r0, #1	@ 000115f0 0130
.org 0x115f2
	strb r0, [r1, #0]	@ 000115f2 0870
.org 0x115f4
	pop {r0}	@ 000115f4 01bc
.org 0x115f6
	bx r0	@ 000115f6 0047
