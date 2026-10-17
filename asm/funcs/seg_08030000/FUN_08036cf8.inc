@ FUN_08036cf8  entry 0x08036cf8  size 58
.thumb
.org 0x36cf8
FUN_08036cf8:
	push {r4, r5, lr}	@ 00036cf8 30b5
.org 0x36cfa
	adds r5, r0, #0	@ 00036cfa 051c
.org 0x36cfc
	ldr r4, [pc, #52]	@ 00036cfc 0d4c
.org 0x36cfe
	adds r1, r4, #0	@ 00036cfe 211c
.org 0x36d00
	bl 0x3a3b0	@ 00036d00 03f056fb
.org 0x36d04
	adds r0, r5, #0	@ 00036d04 281c
.org 0x36d06
	adds r1, r4, #0	@ 00036d06 211c
.org 0x36d08
	bl 0x3a3f0	@ 00036d08 03f072fb
.org 0x36d0c
	ldr r1, [pc, #40]	@ 00036d0c 0a49
.org 0x36d0e
	adds r0, r5, r1	@ 00036d0e 6818
.org 0x36d10
	ldrb r2, [r0, #0]	@ 00036d10 0278
.org 0x36d12
	cmp r2, #2	@ 00036d12 022a
.org 0x36d14
	bne.n 0x36d2c	@ 00036d14 0ad1
.org 0x36d16
	ldr r0, [pc, #36]	@ 00036d16 0948
.org 0x36d18
	adds r1, r5, r0	@ 00036d18 2918
.org 0x36d1a
	movs r0, #0	@ 00036d1a 0020
.org 0x36d1c
	strb r2, [r1, #0]	@ 00036d1c 0a70
.org 0x36d1e
	movs r2, #129	@ 00036d1e 8122
.org 0x36d20
	lsls r2, r2, #1	@ 00036d20 5200
.org 0x36d22
	adds r1, r5, r2	@ 00036d22 a918
.org 0x36d24
	strb r0, [r1, #0]	@ 00036d24 0870
.org 0x36d26
	adds r0, r5, #0	@ 00036d26 281c
.org 0x36d28
	bl 0x36d40	@ 00036d28 00f00af8
.org 0x36d2c
	pop {r4, r5}	@ 00036d2c 30bc
.org 0x36d2e
	pop {r0}	@ 00036d2e 01bc
.org 0x36d30
	bx r0	@ 00036d30 0047
