@ FUN_080c7de0  entry 0x080c7de0  size 78
.thumb
.org 0xc7de0
FUN_080c7de0:
	push {r4, r5, r6, lr}	@ 000c7de0 70b5
.org 0xc7de2
	adds r6, r0, #0	@ 000c7de2 061c
.org 0xc7de4
	lsls r1, r1, #24	@ 000c7de4 0906
.org 0xc7de6
	lsrs r4, r1, #24	@ 000c7de6 0c0e
.org 0xc7de8
	lsls r2, r2, #24	@ 000c7de8 1206
.org 0xc7dea
	lsrs r5, r2, #24	@ 000c7dea 150e
.org 0xc7dec
	ldr r0, [pc, #64]	@ 000c7dec 1048
.org 0xc7dee
	ldr r0, [r0, #0]	@ 000c7dee 0068
.org 0xc7df0
	bl 0x5500	@ 000c7df0 3df786fb
.org 0xc7df4
	adds r3, r0, #0	@ 000c7df4 031c
.org 0xc7df6
	cmp r3, #0	@ 000c7df6 002b
.org 0xc7df8
	beq.n 0xc7e26	@ 000c7df8 15d0
.org 0xc7dfa
	adds r1, r3, #0	@ 000c7dfa 191c
.org 0xc7dfc
	adds r1, #37	@ 000c7dfc 2531
.org 0xc7dfe
	movs r2, #0	@ 000c7dfe 0022
.org 0xc7e00
	movs r0, #8	@ 000c7e00 0820
.org 0xc7e02
	strb r0, [r1, #0]	@ 000c7e02 0870
.org 0xc7e04
	ldr r1, [pc, #44]	@ 000c7e04 0b49
.org 0xc7e06
	movs r0, #29	@ 000c7e06 1d20
.org 0xc7e08
	strb r0, [r3, #9]	@ 000c7e08 5872
.org 0xc7e0a
	ldr r0, [r1, #116]	@ 000c7e0a 486f
.org 0xc7e0c
	ldr r0, [r0, #0]	@ 000c7e0c 0068
.org 0xc7e0e
	str r0, [r3, #20]	@ 000c7e0e 5861
.org 0xc7e10
	movs r0, #0	@ 000c7e10 0020
.org 0xc7e12
	strh r2, [r3, #32]	@ 000c7e12 1a84
.org 0xc7e14
	adds r1, r3, #0	@ 000c7e14 191c
.org 0xc7e16
	adds r1, #34	@ 000c7e16 2231
.org 0xc7e18
	strb r0, [r1, #0]	@ 000c7e18 0870
.org 0xc7e1a
	str r6, [r3, #40]	@ 000c7e1a 9e62
.org 0xc7e1c
	strb r0, [r3, #16]	@ 000c7e1c 1874
.org 0xc7e1e
	strb r4, [r3, #17]	@ 000c7e1e 5c74
.org 0xc7e20
	adds r0, r3, #0	@ 000c7e20 181c
.org 0xc7e22
	adds r0, #181	@ 000c7e22 b530
.org 0xc7e24
	strb r5, [r0, #0]	@ 000c7e24 0570
.org 0xc7e26
	adds r0, r3, #0	@ 000c7e26 181c
.org 0xc7e28
	pop {r4, r5, r6}	@ 000c7e28 70bc
.org 0xc7e2a
	pop {r1}	@ 000c7e2a 02bc
.org 0xc7e2c
	bx r1	@ 000c7e2c 0847
