@ FUN_08037aa8  entry 0x08037aa8  size 58
.thumb
.org 0x37aa8
FUN_08037aa8:
	push {r4, r5, lr}	@ 00037aa8 30b5
.org 0x37aaa
	adds r5, r0, #0	@ 00037aaa 051c
.org 0x37aac
	ldr r4, [pc, #52]	@ 00037aac 0d4c
.org 0x37aae
	adds r1, r4, #0	@ 00037aae 211c
.org 0x37ab0
	bl 0x3a3b0	@ 00037ab0 02f07efc
.org 0x37ab4
	adds r0, r5, #0	@ 00037ab4 281c
.org 0x37ab6
	adds r1, r4, #0	@ 00037ab6 211c
.org 0x37ab8
	bl 0x3a3f0	@ 00037ab8 02f09afc
.org 0x37abc
	ldr r1, [pc, #40]	@ 00037abc 0a49
.org 0x37abe
	adds r0, r5, r1	@ 00037abe 6818
.org 0x37ac0
	ldrb r2, [r0, #0]	@ 00037ac0 0278
.org 0x37ac2
	cmp r2, #2	@ 00037ac2 022a
.org 0x37ac4
	bne.n 0x37adc	@ 00037ac4 0ad1
.org 0x37ac6
	ldr r0, [pc, #36]	@ 00037ac6 0948
.org 0x37ac8
	adds r1, r5, r0	@ 00037ac8 2918
.org 0x37aca
	movs r0, #0	@ 00037aca 0020
.org 0x37acc
	strb r2, [r1, #0]	@ 00037acc 0a70
.org 0x37ace
	movs r2, #129	@ 00037ace 8122
.org 0x37ad0
	lsls r2, r2, #1	@ 00037ad0 5200
.org 0x37ad2
	adds r1, r5, r2	@ 00037ad2 a918
.org 0x37ad4
	strb r0, [r1, #0]	@ 00037ad4 0870
.org 0x37ad6
	adds r0, r5, #0	@ 00037ad6 281c
.org 0x37ad8
	bl 0x37af0	@ 00037ad8 00f00af8
.org 0x37adc
	pop {r4, r5}	@ 00037adc 30bc
.org 0x37ade
	pop {r0}	@ 00037ade 01bc
.org 0x37ae0
	bx r0	@ 00037ae0 0047
