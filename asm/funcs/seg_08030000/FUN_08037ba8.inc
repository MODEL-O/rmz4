@ FUN_08037ba8  entry 0x08037ba8  size 26
.thumb
.org 0x37ba8
FUN_08037ba8:
	push {lr}	@ 00037ba8 00b5
.org 0x37baa
	ldr r2, [pc, #24]	@ 00037baa 064a
.org 0x37bac
	movs r3, #128	@ 00037bac 8023
.org 0x37bae
	lsls r3, r3, #1	@ 00037bae 5b00
.org 0x37bb0
	adds r1, r0, r3	@ 00037bb0 c118
.org 0x37bb2
	ldrb r1, [r1, #0]	@ 00037bb2 0978
.org 0x37bb4
	lsls r1, r1, #2	@ 00037bb4 8900
.org 0x37bb6
	adds r1, r1, r2	@ 00037bb6 8918
.org 0x37bb8
	ldr r1, [r1, #0]	@ 00037bb8 0968
.org 0x37bba
	bl 0x128f80	@ 00037bba f1f0e1f9
.org 0x37bbe
	pop {r0}	@ 00037bbe 01bc
.org 0x37bc0
	bx r0	@ 00037bc0 0047
