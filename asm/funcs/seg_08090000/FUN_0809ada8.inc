@ FUN_0809ada8  entry 0x0809ada8  size 96
.thumb
.org 0x9ada8
FUN_0809ada8:
	push {r4, r5, r6, r7, lr}	@ 0009ada8 f0b5
.org 0x9adaa
	adds r6, r0, #0	@ 0009adaa 061c
.org 0x9adac
	adds r7, r1, #0	@ 0009adac 0f1c
.org 0x9adae
	lsls r2, r2, #24	@ 0009adae 1206
.org 0x9adb0
	lsrs r5, r2, #24	@ 0009adb0 150e
.org 0x9adb2
	lsls r3, r3, #24	@ 0009adb2 1b06
.org 0x9adb4
	lsrs r4, r3, #24	@ 0009adb4 1c0e
.org 0x9adb6
	ldr r0, [pc, #80]	@ 0009adb6 1448
.org 0x9adb8
	ldr r0, [r0, #0]	@ 0009adb8 0068
.org 0x9adba
	bl 0x5500	@ 0009adba 6af7a1fb
.org 0x9adbe
	adds r3, r0, #0	@ 0009adbe 031c
.org 0x9adc0
	cmp r3, #0	@ 0009adc0 002b
.org 0x9adc2
	beq.n 0x9ae00	@ 0009adc2 1dd0
.org 0x9adc4
	adds r1, r3, #0	@ 0009adc4 191c
.org 0x9adc6
	adds r1, #37	@ 0009adc6 2531
.org 0x9adc8
	movs r2, #0	@ 0009adc8 0022
.org 0x9adca
	movs r0, #24	@ 0009adca 1820
.org 0x9adcc
	strb r0, [r1, #0]	@ 0009adcc 0870
.org 0x9adce
	ldr r0, [pc, #60]	@ 0009adce 0f48
.org 0x9add0
	movs r1, #37	@ 0009add0 2521
.org 0x9add2
	strb r1, [r3, #9]	@ 0009add2 5972
.org 0x9add4
	adds r0, #148	@ 0009add4 9430
.org 0x9add6
	ldr r0, [r0, #0]	@ 0009add6 0068
.org 0x9add8
	ldr r0, [r0, #0]	@ 0009add8 0068
.org 0x9adda
	str r0, [r3, #20]	@ 0009adda 5861
.org 0x9addc
	movs r0, #0	@ 0009addc 0020
.org 0x9adde
	strh r2, [r3, #32]	@ 0009adde 1a84
.org 0x9ade0
	adds r1, r3, #0	@ 0009ade0 191c
.org 0x9ade2
	adds r1, #34	@ 0009ade2 2231
.org 0x9ade4
	strb r0, [r1, #0]	@ 0009ade4 0870
.org 0x9ade6
	ldrb r1, [r3, #11]	@ 0009ade6 d97a
.org 0x9ade8
	movs r0, #16	@ 0009ade8 1020
.org 0x9adea
	orrs r0, r1	@ 0009adea 0843
.org 0x9adec
	strb r0, [r3, #11]	@ 0009adec d872
.org 0x9adee
	ldrb r0, [r3, #28]	@ 0009adee 187f
.org 0x9adf0
	strb r0, [r3, #29]	@ 0009adf0 5877
.org 0x9adf2
	str r6, [r3, #40]	@ 0009adf2 9e62
.org 0x9adf4
	ldr r0, [r7, #0]	@ 0009adf4 3868
.org 0x9adf6
	ldr r1, [r7, #4]	@ 0009adf6 7968
.org 0x9adf8
	str r0, [r3, #84]	@ 0009adf8 5865
.org 0x9adfa
	str r1, [r3, #88]	@ 0009adfa 9965
.org 0x9adfc
	strb r5, [r3, #16]	@ 0009adfc 1d74
.org 0x9adfe
	strb r4, [r3, #17]	@ 0009adfe 5c74
.org 0x9ae00
	adds r0, r3, #0	@ 0009ae00 181c
.org 0x9ae02
	pop {r4, r5, r6, r7}	@ 0009ae02 f0bc
.org 0x9ae04
	pop {r1}	@ 0009ae04 02bc
.org 0x9ae06
	bx r1	@ 0009ae06 0847
