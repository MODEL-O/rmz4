@ FUN_08042964  entry 0x08042964  size 136
.thumb
.org 0x42964
FUN_08042964:
	push {r4, r5, r6, r7, lr}	@ 00042964 f0b5
.org 0x42966
	adds r4, r0, #0	@ 00042966 041c
.org 0x42968
	adds r5, r1, #0	@ 00042968 0d1c
.org 0x4296a
	adds r6, r2, #0	@ 0004296a 161c
.org 0x4296c
	lsls r3, r3, #24	@ 0004296c 1b06
.org 0x4296e
	lsrs r7, r3, #24	@ 0004296e 1f0e
.org 0x42970
	ldr r0, [pc, #60]	@ 00042970 0f48
.org 0x42972
	ldr r0, [r0, #0]	@ 00042972 0068
.org 0x42974
	bl 0x5500	@ 00042974 c2f7c4fd
.org 0x42978
	adds r2, r0, #0	@ 00042978 021c
.org 0x4297a
	cmp r2, #0	@ 0004297a 002a
.org 0x4297c
	beq.n 0x429f4	@ 0004297c 3ad0
.org 0x4297e
	adds r0, r4, #0	@ 0004297e 201c
.org 0x42980
	adds r0, #248	@ 00042980 f830
.org 0x42982
	ldrb r0, [r0, #0]	@ 00042982 0078
.org 0x42984
	cmp r0, #2	@ 00042984 0228
.org 0x42986
	bne.n 0x429c0	@ 00042986 1bd1
.org 0x42988
	ldr r1, [pc, #40]	@ 00042988 0a49
.org 0x4298a
	movs r0, #14	@ 0004298a 0e20
.org 0x4298c
	strb r0, [r2, #9]	@ 0004298c 5072
.org 0x4298e
	ldr r0, [r1, #56]	@ 0004298e 886b
.org 0x42990
	ldr r0, [r0, #0]	@ 00042990 0068
.org 0x42992
	str r0, [r2, #20]	@ 00042992 5061
.org 0x42994
	ldrb r1, [r2, #11]	@ 00042994 d17a
.org 0x42996
	movs r0, #191	@ 00042996 bf20
.org 0x42998
	ands r0, r1	@ 00042998 0840
.org 0x4299a
	strb r0, [r2, #11]	@ 0004299a d072
.org 0x4299c
	adds r1, r2, #0	@ 0004299c 111c
.org 0x4299e
	adds r1, #37	@ 0004299e 2531
.org 0x429a0
	movs r0, #16	@ 000429a0 1020
.org 0x429a2
	strb r0, [r1, #0]	@ 000429a2 0870
.org 0x429a4
	ldr r0, [pc, #16]	@ 000429a4 0448
.org 0x429a6
	ldrh r0, [r0, #0]	@ 000429a6 0088
.org 0x429a8
	strh r0, [r2, #32]	@ 000429a8 1084
.org 0x429aa
	ldr r0, [pc, #16]	@ 000429aa 0448
.org 0x429ac
	ldrb r0, [r0, #0]	@ 000429ac 0078
.org 0x429ae
	b.n 0x429e6	@ 000429ae 1ae0
.org 0x429b0
	.byte 0x88,0xed,0x02,0x02	@ 000429b0 data
.org 0x429b4
	.byte 0xf8,0x39,0x85,0x08	@ 000429b4 data
.org 0x429b8
	.byte 0xfc,0x36,0x85,0x08	@ 000429b8 data
.org 0x429bc
	.byte 0x04,0x37,0x85,0x08	@ 000429bc data
.org 0x429c0
	ldr r1, [pc, #56]	@ 000429c0 0e49
.org 0x429c2
	movs r0, #14	@ 000429c2 0e20
.org 0x429c4
	strb r0, [r2, #9]	@ 000429c4 5072
.org 0x429c6
	ldr r0, [r1, #56]	@ 000429c6 886b
.org 0x429c8
	ldr r0, [r0, #0]	@ 000429c8 0068
.org 0x429ca
	str r0, [r2, #20]	@ 000429ca 5061
.org 0x429cc
	ldrb r1, [r2, #11]	@ 000429cc d17a
.org 0x429ce
	movs r0, #191	@ 000429ce bf20
.org 0x429d0
	ands r0, r1	@ 000429d0 0840
.org 0x429d2
	strb r0, [r2, #11]	@ 000429d2 d072
.org 0x429d4
	adds r1, r2, #0	@ 000429d4 111c
.org 0x429d6
	adds r1, #37	@ 000429d6 2531
.org 0x429d8
	movs r0, #16	@ 000429d8 1020
.org 0x429da
	strb r0, [r1, #0]	@ 000429da 0870
.org 0x429dc
	ldr r0, [pc, #32]	@ 000429dc 0848
.org 0x429de
	ldrh r0, [r0, #2]	@ 000429de 4088
.org 0x429e0
	strh r0, [r2, #32]	@ 000429e0 1084
.org 0x429e2
	ldr r0, [pc, #32]	@ 000429e2 0848
.org 0x429e4
	ldrb r0, [r0, #1]	@ 000429e4 4078
.org 0x429e6
	subs r1, #3	@ 000429e6 0339
.org 0x429e8
	strb r0, [r1, #0]	@ 000429e8 0870
.org 0x429ea
	str r5, [r2, #40]	@ 000429ea 9562
