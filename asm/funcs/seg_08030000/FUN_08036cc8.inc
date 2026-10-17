@ FUN_08036cc8  entry 0x08036cc8  size 38
.thumb
.org 0x36cc8
FUN_08036cc8:
	push {r4, lr}	@ 00036cc8 10b5
.org 0x36cca
	adds r4, r0, #0	@ 00036cca 041c
.org 0x36ccc
	ldr r1, [pc, #32]	@ 00036ccc 0849
.org 0x36cce
	bl 0x1cf00	@ 00036cce e6f717f9
.org 0x36cd2
	adds r0, r4, #0	@ 00036cd2 201c
.org 0x36cd4
	movs r1, #1	@ 00036cd4 0121
.org 0x36cd6
	bl 0x3a39c	@ 00036cd6 03f061fb
.org 0x36cda
	ldr r0, [pc, #24]	@ 00036cda 0648
.org 0x36cdc
	adds r1, r4, r0	@ 00036cdc 2118
.org 0x36cde
	movs r0, #1	@ 00036cde 0120
.org 0x36ce0
	strb r0, [r1, #0]	@ 00036ce0 0870
.org 0x36ce2
	adds r0, r4, #0	@ 00036ce2 201c
.org 0x36ce4
	bl 0x36cf8	@ 00036ce4 00f008f8
.org 0x36ce8
	pop {r4}	@ 00036ce8 10bc
.org 0x36cea
	pop {r0}	@ 00036cea 01bc
.org 0x36cec
	bx r0	@ 00036cec 0047
