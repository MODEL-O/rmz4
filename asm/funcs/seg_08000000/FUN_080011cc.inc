@ FUN_080011cc  entry 0x080011cc  size 38
.thumb
.org 0x11cc
FUN_080011cc:
	push {lr}	@ 000011cc 00b5
.org 0x11ce
	ldr r3, [pc, #36]	@ 000011ce 094b
.org 0x11d0
	adds r1, r3, #0	@ 000011d0 191c
.org 0x11d2
	subs r1, #8	@ 000011d2 0839
.org 0x11d4
	movs r2, #0	@ 000011d4 0022
.org 0x11d6
	str r2, [r1, #0]	@ 000011d6 0a60
.org 0x11d8
	subs r1, r3, #4	@ 000011d8 191f
.org 0x11da
	str r0, [r1, #0]	@ 000011da 0860
.org 0x11dc
	ldr r0, [pc, #24]	@ 000011dc 0648
.org 0x11de
	str r2, [r0, #0]	@ 000011de 0260
.org 0x11e0
	movs r1, #1	@ 000011e0 0121
.org 0x11e2
	movs r0, #2	@ 000011e2 0220
.org 0x11e4
	strb r1, [r3, #0]	@ 000011e4 1970
.org 0x11e6
	subs r0, #1	@ 000011e6 0138
.org 0x11e8
	adds r3, #24	@ 000011e8 1833
.org 0x11ea
	cmp r0, #0	@ 000011ea 0028
.org 0x11ec
	bge.n 0x11e4	@ 000011ec fada
.org 0x11ee
	pop {r0}	@ 000011ee 01bc
.org 0x11f0
	bx r0	@ 000011f0 0047
