@ FUN_08077ed8  entry 0x08077ed8  size 30
.thumb
.org 0x77ed8
FUN_08077ed8:
	push {r4, lr}	@ 00077ed8 10b5
.org 0x77eda
	adds r4, r0, #0	@ 00077eda 041c
.org 0x77edc
	bl 0x79270	@ 00077edc 01f0c8f9
.org 0x77ee0
	ldr r1, [pc, #20]	@ 00077ee0 0549
.org 0x77ee2
	ldrb r0, [r4, #13]	@ 00077ee2 607b
.org 0x77ee4
	lsls r0, r0, #2	@ 00077ee4 8000
.org 0x77ee6
	adds r0, r0, r1	@ 00077ee6 4018
.org 0x77ee8
	ldr r1, [r0, #0]	@ 00077ee8 0168
.org 0x77eea
	adds r0, r4, #0	@ 00077eea 201c
.org 0x77eec
	bl 0x128f80	@ 00077eec b1f048f8
.org 0x77ef0
	pop {r4}	@ 00077ef0 10bc
.org 0x77ef2
	pop {r0}	@ 00077ef2 01bc
.org 0x77ef4
	bx r0	@ 00077ef4 0047
