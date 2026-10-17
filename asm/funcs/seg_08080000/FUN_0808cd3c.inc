@ FUN_0808cd3c  entry 0x0808cd3c  size 34
.thumb
.org 0x8cd3c
FUN_0808cd3c:
	push {lr}	@ 0008cd3c 00b5
.org 0x8cd3e
	lsls r1, r1, #24	@ 0008cd3e 0906
.org 0x8cd40
	lsrs r1, r1, #24	@ 0008cd40 090e
.org 0x8cd42
	ldrb r0, [r0, #17]	@ 0008cd42 407c
.org 0x8cd44
	movs r3, #0	@ 0008cd44 0023
.org 0x8cd46
	ldr r2, [pc, #24]	@ 0008cd46 064a
.org 0x8cd48
	adds r0, r0, r2	@ 0008cd48 8018
.org 0x8cd4a
	ldrb r0, [r0, #0]	@ 0008cd4a 0078
.org 0x8cd4c
	subs r1, r1, r0	@ 0008cd4c 091a
.org 0x8cd4e
	lsls r1, r1, #24	@ 0008cd4e 0906
.org 0x8cd50
	lsrs r1, r1, #24	@ 0008cd50 090e
.org 0x8cd52
	cmp r1, #128	@ 0008cd52 8029
.org 0x8cd54
	bhi.n 0x8cd58	@ 0008cd54 00d8
.org 0x8cd56
	movs r3, #1	@ 0008cd56 0123
.org 0x8cd58
	adds r0, r3, #0	@ 0008cd58 181c
.org 0x8cd5a
	pop {r1}	@ 0008cd5a 02bc
.org 0x8cd5c
	bx r1	@ 0008cd5c 0847
