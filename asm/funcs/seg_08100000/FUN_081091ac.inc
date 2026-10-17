@ FUN_081091ac  entry 0x081091ac  size 22
.thumb
.org 0x1091ac
FUN_081091ac:
	push {lr}	@ 001091ac 00b5
.org 0x1091ae
	adds r1, r0, #0	@ 001091ae 011c
.org 0x1091b0
	ldr r0, [pc, #16]	@ 001091b0 0448
.org 0x1091b2
	ldr r0, [r0, #0]	@ 001091b2 0068
.org 0x1091b4
	bl 0x1cb30	@ 001091b4 13f7bcfc
.org 0x1091b8
	cmp r0, #0	@ 001091b8 0028
.org 0x1091ba
	bne.n 0x1091be	@ 001091ba 00d1
.org 0x1091bc
	movs r0, #0	@ 001091bc 0020
.org 0x1091be
	pop {r1}	@ 001091be 02bc
.org 0x1091c0
	bx r1	@ 001091c0 0847
