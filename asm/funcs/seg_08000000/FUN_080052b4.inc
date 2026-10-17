@ FUN_080052b4  entry 0x080052b4  size 24
.thumb
.org 0x52b4
FUN_080052b4:
	push {lr}	@ 000052b4 00b5
.org 0x52b6
	sub sp, #8	@ 000052b6 82b0
.org 0x52b8
	adds r1, r0, #0	@ 000052b8 011c
.org 0x52ba
	movs r0, #0	@ 000052ba 0020
.org 0x52bc
	str r0, [sp, #0]	@ 000052bc 0090
.org 0x52be
	ldr r2, [pc, #12]	@ 000052be 034a
.org 0x52c0
	mov r0, sp	@ 000052c0 6846
.org 0x52c2
	bl 0x128be0	@ 000052c2 23f18dfc
.org 0x52c6
	add sp, #8	@ 000052c6 02b0
.org 0x52c8
	pop {r0}	@ 000052c8 01bc
.org 0x52ca
	bx r0	@ 000052ca 0047
