@ FUN_0810cc50  entry 0x0810cc50  size 116
.thumb
.org 0x10cc50
FUN_0810cc50:
	push {r4, r5, r6, r7, lr}	@ 0010cc50 f0b5
.org 0x10cc52
	mov r7, r8	@ 0010cc52 4746
.org 0x10cc54
	push {r7}	@ 0010cc54 80b4
.org 0x10cc56
	mov r8, r0	@ 0010cc56 8046
.org 0x10cc58
	ldr r0, [sp, #32]	@ 0010cc58 0898
.org 0x10cc5a
	lsls r1, r1, #24	@ 0010cc5a 0906
.org 0x10cc5c
	lsrs r5, r1, #24	@ 0010cc5c 0d0e
.org 0x10cc5e
	lsls r2, r2, #24	@ 0010cc5e 1206
.org 0x10cc60
	lsrs r4, r2, #24	@ 0010cc60 140e
.org 0x10cc62
	lsls r3, r3, #16	@ 0010cc62 1b04
.org 0x10cc64
	lsrs r6, r3, #16	@ 0010cc64 1e0c
.org 0x10cc66
	lsls r0, r0, #24	@ 0010cc66 0006
.org 0x10cc68
	lsrs r7, r0, #24	@ 0010cc68 070e
.org 0x10cc6a
	ldr r0, [pc, #88]	@ 0010cc6a 1648
.org 0x10cc6c
	ldr r0, [r0, #0]	@ 0010cc6c 0068
.org 0x10cc6e
	bl 0x5500	@ 0010cc6e f8f647fc
.org 0x10cc72
	adds r3, r0, #0	@ 0010cc72 031c
.org 0x10cc74
	cmp r3, #0	@ 0010cc74 002b
.org 0x10cc76
	beq.n 0x10ccb8	@ 0010cc76 1fd0
.org 0x10cc78
	adds r1, r3, #0	@ 0010cc78 191c
.org 0x10cc7a
	adds r1, #37	@ 0010cc7a 2531
.org 0x10cc7c
	movs r2, #0	@ 0010cc7c 0022
.org 0x10cc7e
	movs r0, #16	@ 0010cc7e 1020
.org 0x10cc80
	strb r0, [r1, #0]	@ 0010cc80 0870
.org 0x10cc82
	ldr r1, [pc, #68]	@ 0010cc82 1149
.org 0x10cc84
	movs r0, #13	@ 0010cc84 0d20
.org 0x10cc86
	strb r0, [r3, #9]	@ 0010cc86 5872
.org 0x10cc88
	ldr r0, [r1, #52]	@ 0010cc88 486b
.org 0x10cc8a
	ldr r0, [r0, #0]	@ 0010cc8a 0068
.org 0x10cc8c
	str r0, [r3, #20]	@ 0010cc8c 5861
.org 0x10cc8e
	movs r0, #0	@ 0010cc8e 0020
.org 0x10cc90
	strh r2, [r3, #32]	@ 0010cc90 1a84
.org 0x10cc92
	adds r1, r3, #0	@ 0010cc92 191c
.org 0x10cc94
	adds r1, #34	@ 0010cc94 2231
.org 0x10cc96
	strb r0, [r1, #0]	@ 0010cc96 0870
.org 0x10cc98
	mov r0, r8	@ 0010cc98 4046
.org 0x10cc9a
	str r0, [r3, #40]	@ 0010cc9a 9862
.org 0x10cc9c
	strb r5, [r3, #16]	@ 0010cc9c 1d74
.org 0x10cc9e
	strb r4, [r3, #17]	@ 0010cc9e 5c74
.org 0x10cca0
	ldr r0, [sp, #24]	@ 0010cca0 0698
.org 0x10cca2
	str r0, [r3, #84]	@ 0010cca2 5865
.org 0x10cca4
	ldr r0, [sp, #28]	@ 0010cca4 0798
.org 0x10cca6
	str r0, [r3, #88]	@ 0010cca6 9865
.org 0x10cca8
	adds r0, r3, #0	@ 0010cca8 181c
.org 0x10ccaa
	adds r0, #120	@ 0010ccaa 7830
.org 0x10ccac
	strh r6, [r0, #0]	@ 0010ccac 0680
.org 0x10ccae
	adds r0, #5	@ 0010ccae 0530
.org 0x10ccb0
	strb r7, [r0, #0]	@ 0010ccb0 0770
.org 0x10ccb2
	adds r1, #93	@ 0010ccb2 5d31
.org 0x10ccb4
	movs r0, #1	@ 0010ccb4 0120
.org 0x10ccb6
	strb r0, [r1, #0]	@ 0010ccb6 0870
.org 0x10ccb8
	adds r0, r3, #0	@ 0010ccb8 181c
.org 0x10ccba
	pop {r3}	@ 0010ccba 08bc
.org 0x10ccbc
	mov r8, r3	@ 0010ccbc 9846
.org 0x10ccbe
	pop {r4, r5, r6, r7}	@ 0010ccbe f0bc
.org 0x10ccc0
	pop {r1}	@ 0010ccc0 02bc
.org 0x10ccc2
	bx r1	@ 0010ccc2 0847
