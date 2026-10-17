@ FUN_0804adb4  entry 0x0804adb4  size 106
.thumb
.org 0x4adb4
FUN_0804adb4:
	push {r4, r5, r6, r7, lr}	@ 0004adb4 f0b5
.org 0x4adb6
	adds r6, r0, #0	@ 0004adb6 061c
.org 0x4adb8
	adds r7, r1, #0	@ 0004adb8 0f1c
.org 0x4adba
	lsls r2, r2, #24	@ 0004adba 1206
.org 0x4adbc
	lsrs r5, r2, #24	@ 0004adbc 150e
.org 0x4adbe
	ldr r0, [pc, #96]	@ 0004adbe 1848
.org 0x4adc0
	ldr r0, [r0, #0]	@ 0004adc0 0068
.org 0x4adc2
	bl 0x5500	@ 0004adc2 baf79dfb
.org 0x4adc6
	adds r4, r0, #0	@ 0004adc6 041c
.org 0x4adc8
	cmp r4, #0	@ 0004adc8 002c
.org 0x4adca
	beq.n 0x4ae16	@ 0004adca 24d0
.org 0x4adcc
	ldr r0, [pc, #84]	@ 0004adcc 1548
.org 0x4adce
	movs r1, #39	@ 0004adce 2721
.org 0x4add0
	strb r1, [r4, #9]	@ 0004add0 6172
.org 0x4add2
	adds r0, #156	@ 0004add2 9c30
.org 0x4add4
	ldr r0, [r0, #0]	@ 0004add4 0068
.org 0x4add6
	ldr r0, [r0, #0]	@ 0004add6 0068
.org 0x4add8
	str r0, [r4, #20]	@ 0004add8 6061
.org 0x4adda
	ldrb r1, [r4, #11]	@ 0004adda e17a
.org 0x4addc
	movs r0, #191	@ 0004addc bf20
.org 0x4adde
	ands r0, r1	@ 0004adde 0840
.org 0x4ade0
	strb r0, [r4, #11]	@ 0004ade0 e072
.org 0x4ade2
	adds r1, r4, #0	@ 0004ade2 211c
.org 0x4ade4
	adds r1, #37	@ 0004ade4 2531
.org 0x4ade6
	movs r0, #16	@ 0004ade6 1020
.org 0x4ade8
	strb r0, [r1, #0]	@ 0004ade8 0870
.org 0x4adea
	ldr r0, [pc, #60]	@ 0004adea 0f48
.org 0x4adec
	ldrh r0, [r0, #0]	@ 0004adec 0088
.org 0x4adee
	movs r1, #0	@ 0004adee 0021
.org 0x4adf0
	strh r0, [r4, #32]	@ 0004adf0 2084
.org 0x4adf2
	ldr r0, [pc, #56]	@ 0004adf2 0e48
.org 0x4adf4
	ldrb r0, [r0, #0]	@ 0004adf4 0078
.org 0x4adf6
	adds r2, r4, #0	@ 0004adf6 221c
.org 0x4adf8
	adds r2, #34	@ 0004adf8 2232
.org 0x4adfa
	strb r0, [r2, #0]	@ 0004adfa 1070
.org 0x4adfc
	adds r0, r4, #0	@ 0004adfc 201c
.org 0x4adfe
	adds r0, #180	@ 0004adfe b430
.org 0x4ae00
	str r6, [r0, #4]	@ 0004ae00 4660
.org 0x4ae02
	str r7, [r0, #0]	@ 0004ae02 0760
.org 0x4ae04
	strb r5, [r4, #16]	@ 0004ae04 2574
.org 0x4ae06
	strb r1, [r4, #17]	@ 0004ae06 6174
.org 0x4ae08
	cmp r5, #0	@ 0004ae08 002d
.org 0x4ae0a
	bne.n 0x4ae16	@ 0004ae0a 04d1
.org 0x4ae0c
	adds r0, r6, #0	@ 0004ae0c 301c
.org 0x4ae0e
	adds r1, r4, #0	@ 0004ae0e 211c
.org 0x4ae10
	movs r2, #1	@ 0004ae10 0122
.org 0x4ae12
	bl 0x4adb4	@ 0004ae12 fff7cfff
.org 0x4ae16
	adds r0, r4, #0	@ 0004ae16 201c
.org 0x4ae18
	pop {r4, r5, r6, r7}	@ 0004ae18 f0bc
.org 0x4ae1a
	pop {r1}	@ 0004ae1a 02bc
.org 0x4ae1c
	bx r1	@ 0004ae1c 0847
