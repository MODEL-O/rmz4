@ FUN_0800dfe0  entry 0x0800dfe0  size 60
.thumb
.org 0xdfe0
FUN_0800dfe0:
	push {r4, lr}	@ 0000dfe0 10b5
.org 0xdfe2
	adds r3, r0, #0	@ 0000dfe2 031c
.org 0xdfe4
	ldrb r4, [r3, #14]	@ 0000dfe4 9c7b
.org 0xdfe6
	cmp r4, #0	@ 0000dfe6 002c
.org 0xdfe8
	bne.n 0xe016	@ 0000dfe8 15d1
.org 0xdfea
	ldr r1, [r3, #92]	@ 0000dfea d96d
.org 0xdfec
	lsrs r1, r1, #4	@ 0000dfec 0909
.org 0xdfee
	lsls r1, r1, #1	@ 0000dfee 4900
.org 0xdff0
	ldr r0, [pc, #40]	@ 0000dff0 0a48
.org 0xdff2
	adds r1, r1, r0	@ 0000dff2 0918
.org 0xdff4
	ldrh r2, [r1, #0]	@ 0000dff4 0a88
.org 0xdff6
	ldr r0, [pc, #40]	@ 0000dff6 0a48
.org 0xdff8
	ands r0, r2	@ 0000dff8 1040
.org 0xdffa
	movs r2, #3	@ 0000dffa 0322
.org 0xdffc
	orrs r0, r2	@ 0000dffc 1043
.org 0xdffe
	strh r0, [r1, #0]	@ 0000dffe 0880
.org 0xe000
	movs r0, #160	@ 0000e000 a020
.org 0xe002
	lsls r0, r0, #4	@ 0000e002 0001
.org 0xe004
	str r0, [r3, #76]	@ 0000e004 d864
.org 0xe006
	str r4, [r3, #80]	@ 0000e006 1c65
.org 0xe008
	movs r0, #85	@ 0000e008 5520
.org 0xe00a
	str r0, [r3, #68]	@ 0000e00a 5864
.org 0xe00c
	adds r0, #171	@ 0000e00c ab30
.org 0xe00e
	str r0, [r3, #72]	@ 0000e00e 9864
.org 0xe010
	ldrb r0, [r3, #14]	@ 0000e010 987b
.org 0xe012
	adds r0, #1	@ 0000e012 0130
.org 0xe014
	strb r0, [r3, #14]	@ 0000e014 9873
.org 0xe016
	pop {r4}	@ 0000e016 10bc
.org 0xe018
	pop {r0}	@ 0000e018 01bc
.org 0xe01a
	bx r0	@ 0000e01a 0047
