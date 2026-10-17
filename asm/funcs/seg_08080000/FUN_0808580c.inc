@ FUN_0808580c  entry 0x0808580c  size 28
.thumb
.org 0x8580c
FUN_0808580c:
	push {r4, lr}	@ 0008580c 10b5
.org 0x8580e
	adds r4, r0, #0	@ 0008580e 041c
.org 0x85810
	bl 0x853f8	@ 00085810 fff7f2fd
.org 0x85814
	lsls r0, r0, #24	@ 00085814 0006
.org 0x85816
	lsrs r1, r0, #24	@ 00085816 010e
.org 0x85818
	cmp r1, #0	@ 00085818 0029
.org 0x8581a
	bne.n 0x85822	@ 0008581a 02d1
.org 0x8581c
	movs r0, #5	@ 0008581c 0520
.org 0x8581e
	strb r0, [r4, #13]	@ 0008581e 6073
.org 0x85820
	strb r1, [r4, #14]	@ 00085820 a173
.org 0x85822
	pop {r4}	@ 00085822 10bc
.org 0x85824
	pop {r0}	@ 00085824 01bc
.org 0x85826
	bx r0	@ 00085826 0047
