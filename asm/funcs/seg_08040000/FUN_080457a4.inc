@ FUN_080457a4  entry 0x080457a4  size 138
.thumb
.org 0x457a4
FUN_080457a4:
	push {r4, r5, lr}	@ 000457a4 30b5
.org 0x457a6
	adds r4, r0, #0	@ 000457a6 041c
.org 0x457a8
	adds r5, r1, #0	@ 000457a8 0d1c
.org 0x457aa
	ldr r0, [pc, #64]	@ 000457aa 1048
.org 0x457ac
	ldr r0, [r0, #0]	@ 000457ac 0068
.org 0x457ae
	bl 0x5500	@ 000457ae bff7a7fe
.org 0x457b2
	adds r2, r0, #0	@ 000457b2 021c
.org 0x457b4
	cmp r2, #0	@ 000457b4 002a
.org 0x457b6
	beq.n 0x4583a	@ 000457b6 40d0
.org 0x457b8
	adds r0, r4, #0	@ 000457b8 201c
.org 0x457ba
	adds r0, #248	@ 000457ba f830
.org 0x457bc
	ldrb r0, [r0, #0]	@ 000457bc 0078
.org 0x457be
	cmp r0, #2	@ 000457be 0228
.org 0x457c0
	bne.n 0x457fc	@ 000457c0 1cd1
.org 0x457c2
	ldr r1, [pc, #44]	@ 000457c2 0b49
.org 0x457c4
	movs r0, #23	@ 000457c4 1720
.org 0x457c6
	strb r0, [r2, #9]	@ 000457c6 5072
.org 0x457c8
	ldr r0, [r1, #92]	@ 000457c8 c86d
.org 0x457ca
	ldr r0, [r0, #0]	@ 000457ca 0068
.org 0x457cc
	str r0, [r2, #20]	@ 000457cc 5061
.org 0x457ce
	ldrb r1, [r2, #11]	@ 000457ce d17a
.org 0x457d0
	movs r0, #191	@ 000457d0 bf20
.org 0x457d2
	ands r0, r1	@ 000457d2 0840
.org 0x457d4
	strb r0, [r2, #11]	@ 000457d4 d072
.org 0x457d6
	adds r1, r2, #0	@ 000457d6 111c
.org 0x457d8
	adds r1, #37	@ 000457d8 2531
.org 0x457da
	movs r0, #16	@ 000457da 1020
.org 0x457dc
	strb r0, [r1, #0]	@ 000457dc 0870
.org 0x457de
	ldr r0, [pc, #20]	@ 000457de 0548
.org 0x457e0
	ldrh r0, [r0, #0]	@ 000457e0 0088
.org 0x457e2
	strh r0, [r2, #32]	@ 000457e2 1084
.org 0x457e4
	ldr r0, [pc, #16]	@ 000457e4 0448
.org 0x457e6
	ldrb r0, [r0, #0]	@ 000457e6 0078
.org 0x457e8
	b.n 0x45822	@ 000457e8 1be0
.org 0x457ea
	.byte 0x00	@ 000457ea data
.org 0x457eb
	.byte 0x00	@ 000457eb data
.org 0x457ec
	.byte 0x88,0xed,0x02,0x02	@ 000457ec data
.org 0x457f0
	.byte 0xf8,0x39,0x85,0x08	@ 000457f0 data
.org 0x457f4
	.byte 0xfc,0x36,0x85,0x08	@ 000457f4 data
.org 0x457f8
	.byte 0x04,0x37,0x85,0x08	@ 000457f8 data
.org 0x457fc
	ldr r1, [pc, #64]	@ 000457fc 1049
.org 0x457fe
	movs r0, #23	@ 000457fe 1720
.org 0x45800
	strb r0, [r2, #9]	@ 00045800 5072
.org 0x45802
	ldr r0, [r1, #92]	@ 00045802 c86d
.org 0x45804
	ldr r0, [r0, #0]	@ 00045804 0068
.org 0x45806
	str r0, [r2, #20]	@ 00045806 5061
.org 0x45808
	ldrb r1, [r2, #11]	@ 00045808 d17a
.org 0x4580a
	movs r0, #191	@ 0004580a bf20
.org 0x4580c
	ands r0, r1	@ 0004580c 0840
.org 0x4580e
	strb r0, [r2, #11]	@ 0004580e d072
.org 0x45810
	adds r1, r2, #0	@ 00045810 111c
.org 0x45812
	adds r1, #37	@ 00045812 2531
.org 0x45814
	movs r0, #16	@ 00045814 1020
.org 0x45816
	strb r0, [r1, #0]	@ 00045816 0870
.org 0x45818
	ldr r0, [pc, #40]	@ 00045818 0a48
.org 0x4581a
	ldrh r0, [r0, #2]	@ 0004581a 4088
.org 0x4581c
	strh r0, [r2, #32]	@ 0004581c 1084
.org 0x4581e
	ldr r0, [pc, #40]	@ 0004581e 0a48
.org 0x45820
	ldrb r0, [r0, #1]	@ 00045820 4078
.org 0x45822
	subs r1, #3	@ 00045822 0339
.org 0x45824
	strb r0, [r1, #0]	@ 00045824 0870
.org 0x45826
	str r5, [r2, #40]	@ 00045826 9562
.org 0x45828
	str r4, [r2, #44]	@ 00045828 d462
.org 0x4582a
	ldr r0, [r5, #84]	@ 0004582a 686d
.org 0x4582c
	ldr r1, [r5, #88]	@ 0004582c a96d
