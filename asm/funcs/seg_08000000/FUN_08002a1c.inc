@ FUN_08002a1c  entry 0x08002a1c  size 40
.thumb
.org 0x2a1c
FUN_08002a1c:
	push {r4, r5, lr}	@ 00002a1c 30b5
.org 0x2a1e
	ldr r0, [pc, #36]	@ 00002a1e 0948
.org 0x2a20
	lsls r0, r0, #16	@ 00002a20 0004
.org 0x2a22
	lsrs r0, r0, #16	@ 00002a22 000c
.org 0x2a24
	cmp r0, #0	@ 00002a24 0028
.org 0x2a26
	beq.n 0x2a3e	@ 00002a26 0ad0
.org 0x2a28
	ldr r5, [pc, #28]	@ 00002a28 074d
.org 0x2a2a
	adds r4, r0, #0	@ 00002a2a 041c
.org 0x2a2c
	ldr r0, [r5, #0]	@ 00002a2c 2868
.org 0x2a2e
	ldr r1, [pc, #28]	@ 00002a2e 0749
.org 0x2a30
	movs r2, #96	@ 00002a30 6022
.org 0x2a32
	bl 0x128714	@ 00002a32 25f16ffe
.org 0x2a36
	adds r5, #12	@ 00002a36 0c35
.org 0x2a38
	subs r4, #1	@ 00002a38 013c
.org 0x2a3a
	cmp r4, #0	@ 00002a3a 002c
.org 0x2a3c
	bne.n 0x2a2c	@ 00002a3c f6d1
.org 0x2a3e
	pop {r4, r5}	@ 00002a3e 30bc
.org 0x2a40
	pop {r0}	@ 00002a40 01bc
.org 0x2a42
	bx r0	@ 00002a42 0047
