@ FUN_080b8da4  entry 0x080b8da4  size 122
.thumb
.org 0xb8da4
FUN_080b8da4:
	push {r4, r5, r6, r7, lr}	@ 000b8da4 f0b5
.org 0xb8da6
	adds r4, r0, #0	@ 000b8da6 041c
.org 0xb8da8
	adds r7, r1, #0	@ 000b8da8 0f1c
.org 0xb8daa
	lsls r2, r2, #24	@ 000b8daa 1206
.org 0xb8dac
	lsrs r6, r2, #24	@ 000b8dac 160e
.org 0xb8dae
	lsls r3, r3, #24	@ 000b8dae 1b06
.org 0xb8db0
	lsrs r5, r3, #24	@ 000b8db0 1d0e
.org 0xb8db2
	ldr r0, [pc, #108]	@ 000b8db2 1b48
.org 0xb8db4
	ldr r0, [r0, #0]	@ 000b8db4 0068
.org 0xb8db6
	bl 0x5500	@ 000b8db6 4cf7a3fb
.org 0xb8dba
	adds r3, r0, #0	@ 000b8dba 031c
.org 0xb8dbc
	cmp r3, #0	@ 000b8dbc 002b
.org 0xb8dbe
	beq.n 0xb8e16	@ 000b8dbe 2ad0
.org 0xb8dc0
	adds r1, r3, #0	@ 000b8dc0 191c
.org 0xb8dc2
	adds r1, #37	@ 000b8dc2 2531
.org 0xb8dc4
	movs r2, #0	@ 000b8dc4 0022
.org 0xb8dc6
	movs r0, #24	@ 000b8dc6 1820
.org 0xb8dc8
	strb r0, [r1, #0]	@ 000b8dc8 0870
.org 0xb8dca
	ldr r0, [pc, #88]	@ 000b8dca 1648
.org 0xb8dcc
	movs r1, #106	@ 000b8dcc 6a21
.org 0xb8dce
	strb r1, [r3, #9]	@ 000b8dce 5972
.org 0xb8dd0
	movs r1, #212	@ 000b8dd0 d421
.org 0xb8dd2
	lsls r1, r1, #1	@ 000b8dd2 4900
.org 0xb8dd4
	adds r0, r0, r1	@ 000b8dd4 4018
.org 0xb8dd6
	ldr r0, [r0, #0]	@ 000b8dd6 0068
.org 0xb8dd8
	ldr r0, [r0, #0]	@ 000b8dd8 0068
.org 0xb8dda
	str r0, [r3, #20]	@ 000b8dda 5861
.org 0xb8ddc
	movs r0, #0	@ 000b8ddc 0020
.org 0xb8dde
	strh r2, [r3, #32]	@ 000b8dde 1a84
.org 0xb8de0
	adds r1, r3, #0	@ 000b8de0 191c
.org 0xb8de2
	adds r1, #34	@ 000b8de2 2231
.org 0xb8de4
	strb r0, [r1, #0]	@ 000b8de4 0870
.org 0xb8de6
	ldrb r1, [r3, #11]	@ 000b8de6 d97a
.org 0xb8de8
	movs r0, #16	@ 000b8de8 1020
.org 0xb8dea
	orrs r0, r1	@ 000b8dea 0843
.org 0xb8dec
	strb r0, [r3, #11]	@ 000b8dec d872
.org 0xb8dee
	ldrb r0, [r3, #28]	@ 000b8dee 187f
.org 0xb8df0
	strb r0, [r3, #29]	@ 000b8df0 5877
.org 0xb8df2
	str r4, [r3, #40]	@ 000b8df2 9c62
.org 0xb8df4
	ldr r0, [r7, #0]	@ 000b8df4 3868
.org 0xb8df6
	ldr r1, [r7, #4]	@ 000b8df6 7968
.org 0xb8df8
	str r0, [r3, #84]	@ 000b8df8 5865
.org 0xb8dfa
	str r1, [r3, #88]	@ 000b8dfa 9965
.org 0xb8dfc
	strb r6, [r3, #16]	@ 000b8dfc 1e74
.org 0xb8dfe
	strb r5, [r3, #17]	@ 000b8dfe 5d74
.org 0xb8e00
	adds r1, r4, #0	@ 000b8e00 211c
.org 0xb8e02
	adds r1, #204	@ 000b8e02 cc31
.org 0xb8e04
	ldrh r0, [r1, #0]	@ 000b8e04 0888
.org 0xb8e06
	adds r0, #1	@ 000b8e06 0130
.org 0xb8e08
	strh r0, [r1, #0]	@ 000b8e08 0880
.org 0xb8e0a
	adds r2, r4, #0	@ 000b8e0a 221c
.org 0xb8e0c
	adds r2, #191	@ 000b8e0c bf32
.org 0xb8e0e
	ldrb r1, [r2, #0]	@ 000b8e0e 1178
.org 0xb8e10
	movs r0, #251	@ 000b8e10 fb20
.org 0xb8e12
	ands r0, r1	@ 000b8e12 0840
.org 0xb8e14
	strb r0, [r2, #0]	@ 000b8e14 1070
.org 0xb8e16
	adds r0, r3, #0	@ 000b8e16 181c
.org 0xb8e18
	pop {r4, r5, r6, r7}	@ 000b8e18 f0bc
.org 0xb8e1a
	pop {r1}	@ 000b8e1a 02bc
.org 0xb8e1c
	bx r1	@ 000b8e1c 0847
