@ FUN_0810cbd4  entry 0x0810cbd4  size 114
.thumb
.org 0x10cbd4
FUN_0810cbd4:
	push {r4, r5, r6, r7, lr}	@ 0010cbd4 f0b5
.org 0x10cbd6
	mov r7, r8	@ 0010cbd6 4746
.org 0x10cbd8
	push {r7}	@ 0010cbd8 80b4
.org 0x10cbda
	mov r8, r0	@ 0010cbda 8046
.org 0x10cbdc
	ldr r0, [sp, #32]	@ 0010cbdc 0898
.org 0x10cbde
	lsls r1, r1, #24	@ 0010cbde 0906
.org 0x10cbe0
	lsrs r5, r1, #24	@ 0010cbe0 0d0e
.org 0x10cbe2
	lsls r2, r2, #24	@ 0010cbe2 1206
.org 0x10cbe4
	lsrs r4, r2, #24	@ 0010cbe4 140e
.org 0x10cbe6
	lsls r3, r3, #16	@ 0010cbe6 1b04
.org 0x10cbe8
	lsrs r6, r3, #16	@ 0010cbe8 1e0c
.org 0x10cbea
	lsls r0, r0, #24	@ 0010cbea 0006
.org 0x10cbec
	lsrs r7, r0, #24	@ 0010cbec 070e
.org 0x10cbee
	ldr r0, [pc, #88]	@ 0010cbee 1648
.org 0x10cbf0
	ldr r0, [r0, #0]	@ 0010cbf0 0068
.org 0x10cbf2
	bl 0x5500	@ 0010cbf2 f8f685fc
.org 0x10cbf6
	adds r3, r0, #0	@ 0010cbf6 031c
.org 0x10cbf8
	cmp r3, #0	@ 0010cbf8 002b
.org 0x10cbfa
	beq.n 0x10cc3a	@ 0010cbfa 1ed0
.org 0x10cbfc
	adds r1, r3, #0	@ 0010cbfc 191c
.org 0x10cbfe
	adds r1, #37	@ 0010cbfe 2531
.org 0x10cc00
	movs r2, #0	@ 0010cc00 0022
.org 0x10cc02
	movs r0, #16	@ 0010cc02 1020
.org 0x10cc04
	strb r0, [r1, #0]	@ 0010cc04 0870
.org 0x10cc06
	ldr r1, [pc, #68]	@ 0010cc06 1149
.org 0x10cc08
	movs r0, #13	@ 0010cc08 0d20
.org 0x10cc0a
	strb r0, [r3, #9]	@ 0010cc0a 5872
.org 0x10cc0c
	ldr r0, [r1, #52]	@ 0010cc0c 486b
.org 0x10cc0e
	ldr r0, [r0, #0]	@ 0010cc0e 0068
.org 0x10cc10
	str r0, [r3, #20]	@ 0010cc10 5861
.org 0x10cc12
	movs r1, #0	@ 0010cc12 0021
.org 0x10cc14
	strh r2, [r3, #32]	@ 0010cc14 1a84
.org 0x10cc16
	adds r0, r3, #0	@ 0010cc16 181c
.org 0x10cc18
	adds r0, #34	@ 0010cc18 2230
.org 0x10cc1a
	strb r1, [r0, #0]	@ 0010cc1a 0170
.org 0x10cc1c
	mov r0, r8	@ 0010cc1c 4046
.org 0x10cc1e
	str r0, [r3, #40]	@ 0010cc1e 9862
.org 0x10cc20
	strb r5, [r3, #16]	@ 0010cc20 1d74
.org 0x10cc22
	strb r4, [r3, #17]	@ 0010cc22 5c74
.org 0x10cc24
	ldr r0, [sp, #24]	@ 0010cc24 0698
.org 0x10cc26
	str r0, [r3, #84]	@ 0010cc26 5865
.org 0x10cc28
	ldr r0, [sp, #28]	@ 0010cc28 0798
.org 0x10cc2a
	str r0, [r3, #88]	@ 0010cc2a 9865
.org 0x10cc2c
	adds r0, r3, #0	@ 0010cc2c 181c
.org 0x10cc2e
	adds r0, #120	@ 0010cc2e 7830
.org 0x10cc30
	strh r6, [r0, #0]	@ 0010cc30 0680
.org 0x10cc32
	adds r0, #5	@ 0010cc32 0530
.org 0x10cc34
	strb r7, [r0, #0]	@ 0010cc34 0770
.org 0x10cc36
	adds r0, #2	@ 0010cc36 0230
.org 0x10cc38
	strb r1, [r0, #0]	@ 0010cc38 0170
.org 0x10cc3a
	adds r0, r3, #0	@ 0010cc3a 181c
.org 0x10cc3c
	pop {r3}	@ 0010cc3c 08bc
.org 0x10cc3e
	mov r8, r3	@ 0010cc3e 9846
.org 0x10cc40
	pop {r4, r5, r6, r7}	@ 0010cc40 f0bc
.org 0x10cc42
	pop {r1}	@ 0010cc42 02bc
.org 0x10cc44
	bx r1	@ 0010cc44 0847
