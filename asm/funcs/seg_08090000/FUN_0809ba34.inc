@ FUN_0809ba34  entry 0x0809ba34  size 106
.thumb
.org 0x9ba34
FUN_0809ba34:
	push {r4, r5, r6, lr}	@ 0009ba34 70b5
.org 0x9ba36
	adds r4, r0, #0	@ 0009ba36 041c
.org 0x9ba38
	adds r5, r1, #0	@ 0009ba38 0d1c
.org 0x9ba3a
	lsls r2, r2, #24	@ 0009ba3a 1206
.org 0x9ba3c
	lsrs r6, r2, #24	@ 0009ba3c 160e
.org 0x9ba3e
	ldr r0, [pc, #96]	@ 0009ba3e 1848
.org 0x9ba40
	ldr r0, [r0, #0]	@ 0009ba40 0068
.org 0x9ba42
	bl 0x5500	@ 0009ba42 69f75dfd
.org 0x9ba46
	mov ip, r0	@ 0009ba46 8446
.org 0x9ba48
	cmp r0, #0	@ 0009ba48 0028
.org 0x9ba4a
	beq.n 0x9ba96	@ 0009ba4a 24d0
.org 0x9ba4c
	mov r1, ip	@ 0009ba4c 6146
.org 0x9ba4e
	adds r1, #37	@ 0009ba4e 2531
.org 0x9ba50
	movs r3, #0	@ 0009ba50 0023
.org 0x9ba52
	movs r0, #24	@ 0009ba52 1820
.org 0x9ba54
	strb r0, [r1, #0]	@ 0009ba54 0870
.org 0x9ba56
	ldr r0, [pc, #76]	@ 0009ba56 1348
.org 0x9ba58
	movs r1, #40	@ 0009ba58 2821
.org 0x9ba5a
	mov r2, ip	@ 0009ba5a 6246
.org 0x9ba5c
	strb r1, [r2, #9]	@ 0009ba5c 5172
.org 0x9ba5e
	adds r0, #160	@ 0009ba5e a030
.org 0x9ba60
	ldr r0, [r0, #0]	@ 0009ba60 0068
.org 0x9ba62
	ldr r0, [r0, #0]	@ 0009ba62 0068
.org 0x9ba64
	str r0, [r2, #20]	@ 0009ba64 5061
.org 0x9ba66
	movs r2, #0	@ 0009ba66 0022
.org 0x9ba68
	mov r0, ip	@ 0009ba68 6046
.org 0x9ba6a
	strh r3, [r0, #32]	@ 0009ba6a 0384
.org 0x9ba6c
	adds r0, #34	@ 0009ba6c 2230
.org 0x9ba6e
	strb r2, [r0, #0]	@ 0009ba6e 0270
.org 0x9ba70
	mov r3, ip	@ 0009ba70 6346
.org 0x9ba72
	ldrb r1, [r3, #11]	@ 0009ba72 d97a
.org 0x9ba74
	movs r0, #16	@ 0009ba74 1020
.org 0x9ba76
	orrs r0, r1	@ 0009ba76 0843
.org 0x9ba78
	strb r0, [r3, #11]	@ 0009ba78 d872
.org 0x9ba7a
	ldrb r0, [r3, #28]	@ 0009ba7a 187f
.org 0x9ba7c
	strb r0, [r3, #29]	@ 0009ba7c 5877
.org 0x9ba7e
	str r4, [r3, #40]	@ 0009ba7e 9c62
.org 0x9ba80
	ldr r0, [r5, #0]	@ 0009ba80 2868
.org 0x9ba82
	ldr r1, [r5, #4]	@ 0009ba82 6968
.org 0x9ba84
	str r0, [r3, #84]	@ 0009ba84 5865
.org 0x9ba86
	str r1, [r3, #88]	@ 0009ba86 9965
.org 0x9ba88
	strb r2, [r3, #16]	@ 0009ba88 1a74
.org 0x9ba8a
	strb r6, [r3, #17]	@ 0009ba8a 5e74
.org 0x9ba8c
	mov r0, ip	@ 0009ba8c 6046
.org 0x9ba8e
	adds r0, #188	@ 0009ba8e bc30
.org 0x9ba90
	strb r2, [r0, #0]	@ 0009ba90 0270
.org 0x9ba92
	adds r0, #1	@ 0009ba92 0130
.org 0x9ba94
	strb r2, [r0, #0]	@ 0009ba94 0270
.org 0x9ba96
	mov r0, ip	@ 0009ba96 6046
.org 0x9ba98
	pop {r4, r5, r6}	@ 0009ba98 70bc
.org 0x9ba9a
	pop {r1}	@ 0009ba9a 02bc
.org 0x9ba9c
	bx r1	@ 0009ba9c 0847
