@ FUN_080dfdd8  entry 0x080dfdd8  size 118
.thumb
.org 0xdfdd8
FUN_080dfdd8:
	push {r4, lr}	@ 000dfdd8 10b5
.org 0xdfdda
	adds r3, r0, #0	@ 000dfdda 031c
.org 0xdfddc
	adds r0, #119	@ 000dfddc 7730
.org 0xdfdde
	ldrb r0, [r0, #0]	@ 000dfdde 0078
.org 0xdfde0
	cmp r0, #0	@ 000dfde0 0028
.org 0xdfde2
	beq.n 0xdfe20	@ 000dfde2 1dd0
.org 0xdfde4
	movs r0, #6	@ 000dfde4 0620
.org 0xdfde6
	strb r0, [r3, #18]	@ 000dfde6 9874
.org 0xdfde8
	strb r0, [r3, #19]	@ 000dfde8 d874
.org 0xdfdea
	ldr r2, [pc, #48]	@ 000dfdea 0c4a
.org 0xdfdec
	movs r0, #117	@ 000dfdec 7520
.org 0xdfdee
	adds r0, r0, r3	@ 000dfdee c018
.org 0xdfdf0
	mov ip, r0	@ 000dfdf0 8446
.org 0xdfdf2
	ldrb r0, [r0, #0]	@ 000dfdf2 0078
.org 0xdfdf4
	adds r0, #64	@ 000dfdf4 4030
.org 0xdfdf6
	lsls r0, r0, #24	@ 000dfdf6 0006
.org 0xdfdf8
	lsrs r0, r0, #23	@ 000dfdf8 c00d
.org 0xdfdfa
	adds r0, r0, r2	@ 000dfdfa 8018
.org 0xdfdfc
	movs r4, #0	@ 000dfdfc 0024
.org 0xdfdfe
	ldrsh r1, [r0, r4]	@ 000dfdfe 015f
.org 0xdfe00
	lsls r0, r1, #1	@ 000dfe00 4800
.org 0xdfe02
	adds r0, r0, r1	@ 000dfe02 4018
.org 0xdfe04
	asrs r0, r0, #2	@ 000dfe04 8010
.org 0xdfe06
	str r0, [r3, #92]	@ 000dfe06 d865
.org 0xdfe08
	mov r1, ip	@ 000dfe08 6146
.org 0xdfe0a
	ldrb r0, [r1, #0]	@ 000dfe0a 0878
.org 0xdfe0c
	lsls r0, r0, #1	@ 000dfe0c 4000
.org 0xdfe0e
	adds r0, r0, r2	@ 000dfe0e 8018
.org 0xdfe10
	movs r2, #0	@ 000dfe10 0022
.org 0xdfe12
	ldrsh r1, [r0, r2]	@ 000dfe12 815e
.org 0xdfe14
	lsls r0, r1, #1	@ 000dfe14 4800
.org 0xdfe16
	adds r0, r0, r1	@ 000dfe16 4018
.org 0xdfe18
	b.n 0xdfe42	@ 000dfe18 13e0
.org 0xdfe1a
	.byte 0x00	@ 000dfe1a data
.org 0xdfe1b
	.byte 0x00	@ 000dfe1b data
.org 0xdfe1c
	.byte 0x0c,0x93,0x12,0x08	@ 000dfe1c data
.org 0xdfe20
	ldr r1, [pc, #48]	@ 000dfe20 0c49
.org 0xdfe22
	adds r2, r3, #0	@ 000dfe22 1a1c
.org 0xdfe24
	adds r2, #117	@ 000dfe24 7532
.org 0xdfe26
	ldrb r0, [r2, #0]	@ 000dfe26 1078
.org 0xdfe28
	adds r0, #64	@ 000dfe28 4030
.org 0xdfe2a
	lsls r0, r0, #24	@ 000dfe2a 0006
.org 0xdfe2c
	lsrs r0, r0, #23	@ 000dfe2c c00d
.org 0xdfe2e
	adds r0, r0, r1	@ 000dfe2e 4018
.org 0xdfe30
	movs r4, #0	@ 000dfe30 0024
.org 0xdfe32
	ldrsh r0, [r0, r4]	@ 000dfe32 005f
.org 0xdfe34
	asrs r0, r0, #2	@ 000dfe34 8010
.org 0xdfe36
	str r0, [r3, #92]	@ 000dfe36 d865
.org 0xdfe38
	ldrb r0, [r2, #0]	@ 000dfe38 1078
.org 0xdfe3a
	lsls r0, r0, #1	@ 000dfe3a 4000
.org 0xdfe3c
	adds r0, r0, r1	@ 000dfe3c 4018
.org 0xdfe3e
	movs r1, #0	@ 000dfe3e 0021
.org 0xdfe40
	ldrsh r0, [r0, r1]	@ 000dfe40 405e
.org 0xdfe42
	asrs r0, r0, #2	@ 000dfe42 8010
.org 0xdfe44
	str r0, [r3, #96]	@ 000dfe44 1866
.org 0xdfe46
	movs r0, #0	@ 000dfe46 0020
.org 0xdfe48
	str r0, [r3, #100]	@ 000dfe48 5866
.org 0xdfe4a
	movs r0, #1	@ 000dfe4a 0120
.org 0xdfe4c
	str r0, [r3, #104]	@ 000dfe4c 9866
