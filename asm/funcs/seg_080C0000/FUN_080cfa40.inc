@ FUN_080cfa40  entry 0x080cfa40  size 110
.thumb
.org 0xcfa40
FUN_080cfa40:
	push {r4, r5, r6, r7, lr}	@ 000cfa40 f0b5
.org 0xcfa42
	adds r4, r0, #0	@ 000cfa42 041c
.org 0xcfa44
	adds r7, r1, #0	@ 000cfa44 0f1c
.org 0xcfa46
	lsls r2, r2, #24	@ 000cfa46 1206
.org 0xcfa48
	lsrs r6, r2, #24	@ 000cfa48 160e
.org 0xcfa4a
	lsls r3, r3, #24	@ 000cfa4a 1b06
.org 0xcfa4c
	lsrs r5, r3, #24	@ 000cfa4c 1d0e
.org 0xcfa4e
	ldr r0, [pc, #96]	@ 000cfa4e 1848
.org 0xcfa50
	ldr r0, [r0, #0]	@ 000cfa50 0068
.org 0xcfa52
	bl 0x5500	@ 000cfa52 35f755fd
.org 0xcfa56
	mov ip, r0	@ 000cfa56 8446
.org 0xcfa58
	cmp r0, #0	@ 000cfa58 0028
.org 0xcfa5a
	beq.n 0xcfaa6	@ 000cfa5a 24d0
.org 0xcfa5c
	mov r1, ip	@ 000cfa5c 6146
.org 0xcfa5e
	adds r1, #37	@ 000cfa5e 2531
.org 0xcfa60
	movs r3, #0	@ 000cfa60 0023
.org 0xcfa62
	movs r0, #8	@ 000cfa62 0820
.org 0xcfa64
	strb r0, [r1, #0]	@ 000cfa64 0870
.org 0xcfa66
	ldr r0, [pc, #76]	@ 000cfa66 1348
.org 0xcfa68
	movs r1, #60	@ 000cfa68 3c21
.org 0xcfa6a
	mov r2, ip	@ 000cfa6a 6246
.org 0xcfa6c
	strb r1, [r2, #9]	@ 000cfa6c 5172
.org 0xcfa6e
	adds r0, #240	@ 000cfa6e f030
.org 0xcfa70
	ldr r0, [r0, #0]	@ 000cfa70 0068
.org 0xcfa72
	ldr r0, [r0, #0]	@ 000cfa72 0068
.org 0xcfa74
	str r0, [r2, #20]	@ 000cfa74 5061
.org 0xcfa76
	movs r2, #0	@ 000cfa76 0022
.org 0xcfa78
	mov r0, ip	@ 000cfa78 6046
.org 0xcfa7a
	strh r3, [r0, #32]	@ 000cfa7a 0384
.org 0xcfa7c
	adds r0, #34	@ 000cfa7c 2230
.org 0xcfa7e
	strb r2, [r0, #0]	@ 000cfa7e 0270
.org 0xcfa80
	mov r1, ip	@ 000cfa80 6146
.org 0xcfa82
	str r4, [r1, #40]	@ 000cfa82 8c62
.org 0xcfa84
	ldr r0, [r7, #0]	@ 000cfa84 3868
.org 0xcfa86
	ldr r1, [r7, #4]	@ 000cfa86 7968
.org 0xcfa88
	mov r3, ip	@ 000cfa88 6346
.org 0xcfa8a
	str r0, [r3, #84]	@ 000cfa8a 5865
.org 0xcfa8c
	str r1, [r3, #88]	@ 000cfa8c 9965
.org 0xcfa8e
	strb r6, [r3, #16]	@ 000cfa8e 1e74
.org 0xcfa90
	strb r5, [r3, #17]	@ 000cfa90 5d74
.org 0xcfa92
	mov r0, ip	@ 000cfa92 6046
.org 0xcfa94
	adds r0, #180	@ 000cfa94 b430
.org 0xcfa96
	strb r2, [r0, #0]	@ 000cfa96 0270
.org 0xcfa98
	adds r0, #1	@ 000cfa98 0130
.org 0xcfa9a
	strb r2, [r0, #0]	@ 000cfa9a 0270
.org 0xcfa9c
	adds r1, r4, #0	@ 000cfa9c 211c
.org 0xcfa9e
	adds r1, #204	@ 000cfa9e cc31
.org 0xcfaa0
	ldrh r0, [r1, #0]	@ 000cfaa0 0888
.org 0xcfaa2
	adds r0, #1	@ 000cfaa2 0130
.org 0xcfaa4
	strh r0, [r1, #0]	@ 000cfaa4 0880
.org 0xcfaa6
	mov r0, ip	@ 000cfaa6 6046
.org 0xcfaa8
	pop {r4, r5, r6, r7}	@ 000cfaa8 f0bc
.org 0xcfaaa
	pop {r1}	@ 000cfaaa 02bc
.org 0xcfaac
	bx r1	@ 000cfaac 0847
