@ FUN_08104c9c  entry 0x08104c9c  size 96
.thumb
.org 0x104c9c
FUN_08104c9c:
	push {r4, r5, r6, r7, lr}	@ 00104c9c f0b5
.org 0x104c9e
	adds r5, r0, #0	@ 00104c9e 051c
.org 0x104ca0
	adds r7, r2, #0	@ 00104ca0 171c
.org 0x104ca2
	lsls r4, r1, #16	@ 00104ca2 0c04
.org 0x104ca4
	lsrs r6, r4, #16	@ 00104ca4 260c
.org 0x104ca6
	ldr r0, [pc, #84]	@ 00104ca6 1548
.org 0x104ca8
	ldr r0, [r0, #0]	@ 00104ca8 0068
.org 0x104caa
	bl 0x5500	@ 00104caa 00f729fc
.org 0x104cae
	adds r3, r0, #0	@ 00104cae 031c
.org 0x104cb0
	cmp r3, #0	@ 00104cb0 002b
.org 0x104cb2
	beq.n 0x104cf4	@ 00104cb2 1fd0
.org 0x104cb4
	adds r1, r3, #0	@ 00104cb4 191c
.org 0x104cb6
	adds r1, #37	@ 00104cb6 2531
.org 0x104cb8
	movs r2, #0	@ 00104cb8 0022
.org 0x104cba
	movs r0, #30	@ 00104cba 1e20
.org 0x104cbc
	strb r0, [r1, #0]	@ 00104cbc 0870
.org 0x104cbe
	ldr r0, [pc, #64]	@ 00104cbe 1048
.org 0x104cc0
	movs r1, #77	@ 00104cc0 4d21
.org 0x104cc2
	strb r1, [r3, #9]	@ 00104cc2 5972
.org 0x104cc4
	adds r1, #231	@ 00104cc4 e731
.org 0x104cc6
	adds r0, r0, r1	@ 00104cc6 4018
.org 0x104cc8
	ldr r0, [r0, #0]	@ 00104cc8 0068
.org 0x104cca
	ldr r0, [r0, #0]	@ 00104cca 0068
.org 0x104ccc
	str r0, [r3, #20]	@ 00104ccc 5861
.org 0x104cce
	movs r0, #0	@ 00104cce 0020
.org 0x104cd0
	strh r2, [r3, #32]	@ 00104cd0 1a84
.org 0x104cd2
	adds r1, r3, #0	@ 00104cd2 191c
.org 0x104cd4
	adds r1, #34	@ 00104cd4 2231
.org 0x104cd6
	strb r0, [r1, #0]	@ 00104cd6 0870
.org 0x104cd8
	ldrb r1, [r3, #11]	@ 00104cd8 d97a
.org 0x104cda
	movs r0, #16	@ 00104cda 1020
.org 0x104cdc
	orrs r0, r1	@ 00104cdc 0843
.org 0x104cde
	strb r0, [r3, #11]	@ 00104cde d872
.org 0x104ce0
	ldrb r0, [r3, #28]	@ 00104ce0 187f
.org 0x104ce2
	strb r0, [r3, #29]	@ 00104ce2 5877
.org 0x104ce4
	ldr r0, [r5, #0]	@ 00104ce4 2868
.org 0x104ce6
	ldr r1, [r5, #4]	@ 00104ce6 6968
.org 0x104ce8
	str r0, [r3, #84]	@ 00104ce8 5865
.org 0x104cea
	str r1, [r3, #88]	@ 00104cea 9965
.org 0x104cec
	lsrs r0, r4, #24	@ 00104cec 200e
.org 0x104cee
	strb r0, [r3, #16]	@ 00104cee 1874
.org 0x104cf0
	strb r6, [r3, #17]	@ 00104cf0 5e74
.org 0x104cf2
	str r7, [r3, #40]	@ 00104cf2 9f62
.org 0x104cf4
	adds r0, r3, #0	@ 00104cf4 181c
.org 0x104cf6
	pop {r4, r5, r6, r7}	@ 00104cf6 f0bc
.org 0x104cf8
	pop {r1}	@ 00104cf8 02bc
.org 0x104cfa
	bx r1	@ 00104cfa 0847
