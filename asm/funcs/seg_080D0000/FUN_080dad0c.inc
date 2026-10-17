@ FUN_080dad0c  entry 0x080dad0c  size 136
.thumb
.org 0xdad0c
FUN_080dad0c:
	push {r4, r5, r6, lr}	@ 000dad0c 70b5
.org 0xdad0e
	adds r4, r0, #0	@ 000dad0e 041c
.org 0xdad10
	lsls r1, r1, #24	@ 000dad10 0906
.org 0xdad12
	lsrs r6, r1, #24	@ 000dad12 0e0e
.org 0xdad14
	lsls r2, r2, #24	@ 000dad14 1206
.org 0xdad16
	lsrs r5, r2, #24	@ 000dad16 150e
.org 0xdad18
	ldr r0, [pc, #120]	@ 000dad18 1e48
.org 0xdad1a
	ldr r0, [r0, #0]	@ 000dad1a 0068
.org 0xdad1c
	bl 0x5500	@ 000dad1c 2af7f0fb
.org 0xdad20
	adds r3, r0, #0	@ 000dad20 031c
.org 0xdad22
	cmp r3, #0	@ 000dad22 002b
.org 0xdad24
	beq.n 0xdad8c	@ 000dad24 32d0
.org 0xdad26
	adds r1, r3, #0	@ 000dad26 191c
.org 0xdad28
	adds r1, #37	@ 000dad28 2531
.org 0xdad2a
	movs r2, #0	@ 000dad2a 0022
.org 0xdad2c
	movs r0, #1	@ 000dad2c 0120
.org 0xdad2e
	strb r0, [r1, #0]	@ 000dad2e 0870
.org 0xdad30
	ldr r0, [pc, #100]	@ 000dad30 1948
.org 0xdad32
	movs r1, #39	@ 000dad32 2721
.org 0xdad34
	strb r1, [r3, #9]	@ 000dad34 5972
.org 0xdad36
	adds r0, #156	@ 000dad36 9c30
.org 0xdad38
	ldr r0, [r0, #0]	@ 000dad38 0068
.org 0xdad3a
	ldr r0, [r0, #0]	@ 000dad3a 0068
.org 0xdad3c
	str r0, [r3, #20]	@ 000dad3c 5861
.org 0xdad3e
	movs r0, #0	@ 000dad3e 0020
.org 0xdad40
	strh r2, [r3, #32]	@ 000dad40 1a84
.org 0xdad42
	adds r1, r3, #0	@ 000dad42 191c
.org 0xdad44
	adds r1, #34	@ 000dad44 2231
.org 0xdad46
	strb r0, [r1, #0]	@ 000dad46 0870
.org 0xdad48
	ldr r0, [r4, #0]	@ 000dad48 2068
.org 0xdad4a
	str r0, [r3, #84]	@ 000dad4a 5865
.org 0xdad4c
	ldr r0, [r4, #4]	@ 000dad4c 6068
.org 0xdad4e
	ldr r1, [pc, #76]	@ 000dad4e 1349
.org 0xdad50
	adds r0, r0, r1	@ 000dad50 4018
.org 0xdad52
	str r0, [r3, #88]	@ 000dad52 9865
.org 0xdad54
	ldr r0, [r4, #0]	@ 000dad54 2068
.org 0xdad56
	movs r1, #128	@ 000dad56 8021
.org 0xdad58
	lsls r1, r1, #5	@ 000dad58 4901
.org 0xdad5a
	adds r0, r0, r1	@ 000dad5a 4018
.org 0xdad5c
	str r0, [r3, #100]	@ 000dad5c 5866
.org 0xdad5e
	ldr r0, [r4, #4]	@ 000dad5e 6068
.org 0xdad60
	str r0, [r3, #104]	@ 000dad60 9866
.org 0xdad62
	ldr r0, [r4, #0]	@ 000dad62 2068
.org 0xdad64
	str r0, [r3, #92]	@ 000dad64 d865
.org 0xdad66
	ldr r0, [r4, #4]	@ 000dad66 6068
.org 0xdad68
	adds r0, r0, r1	@ 000dad68 4018
.org 0xdad6a
	str r0, [r3, #96]	@ 000dad6a 1866
.org 0xdad6c
	ldr r0, [r4, #0]	@ 000dad6c 2068
.org 0xdad6e
	ldr r1, [pc, #44]	@ 000dad6e 0b49
.org 0xdad70
	adds r0, r0, r1	@ 000dad70 4018
.org 0xdad72
	str r0, [r3, #124]	@ 000dad72 d867
.org 0xdad74
	adds r1, r3, #0	@ 000dad74 191c
.org 0xdad76
	adds r1, #128	@ 000dad76 8031
.org 0xdad78
	ldr r0, [r4, #4]	@ 000dad78 6068
.org 0xdad7a
	str r0, [r1, #0]	@ 000dad7a 0860
.org 0xdad7c
	strb r6, [r3, #16]	@ 000dad7c 1e74
.org 0xdad7e
	strb r5, [r3, #17]	@ 000dad7e 5d74
.org 0xdad80
	subs r1, #8	@ 000dad80 0839
.org 0xdad82
	movs r0, #49	@ 000dad82 3120
.org 0xdad84
	strb r0, [r1, #0]	@ 000dad84 0870
.org 0xdad86
	adds r1, #1	@ 000dad86 0131
.org 0xdad88
	movs r0, #14	@ 000dad88 0e20
.org 0xdad8a
	strb r0, [r1, #0]	@ 000dad8a 0870
.org 0xdad8c
	adds r0, r3, #0	@ 000dad8c 181c
.org 0xdad8e
	pop {r4, r5, r6}	@ 000dad8e 70bc
.org 0xdad90
	pop {r1}	@ 000dad90 02bc
.org 0xdad92
	bx r1	@ 000dad92 0847
