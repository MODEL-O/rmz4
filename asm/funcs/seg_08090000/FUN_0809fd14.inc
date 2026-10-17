@ FUN_0809fd14  entry 0x0809fd14  size 110
.thumb
.org 0x9fd14
FUN_0809fd14:
	push {r4, r5, r6, r7, lr}	@ 0009fd14 f0b5
.org 0x9fd16
	adds r6, r0, #0	@ 0009fd16 061c
.org 0x9fd18
	adds r7, r1, #0	@ 0009fd18 0f1c
.org 0x9fd1a
	lsls r2, r2, #24	@ 0009fd1a 1206
.org 0x9fd1c
	lsrs r4, r2, #24	@ 0009fd1c 140e
.org 0x9fd1e
	lsls r3, r3, #24	@ 0009fd1e 1b06
.org 0x9fd20
	lsrs r5, r3, #24	@ 0009fd20 1d0e
.org 0x9fd22
	ldr r0, [pc, #96]	@ 0009fd22 1848
.org 0x9fd24
	ldr r0, [r0, #0]	@ 0009fd24 0068
.org 0x9fd26
	bl 0x5500	@ 0009fd26 65f7ebfb
.org 0x9fd2a
	adds r3, r0, #0	@ 0009fd2a 031c
.org 0x9fd2c
	cmp r3, #0	@ 0009fd2c 002b
.org 0x9fd2e
	beq.n 0x9fd7a	@ 0009fd2e 24d0
.org 0x9fd30
	adds r1, r3, #0	@ 0009fd30 191c
.org 0x9fd32
	adds r1, #37	@ 0009fd32 2531
.org 0x9fd34
	movs r2, #0	@ 0009fd34 0022
.org 0x9fd36
	movs r0, #24	@ 0009fd36 1820
.org 0x9fd38
	strb r0, [r1, #0]	@ 0009fd38 0870
.org 0x9fd3a
	ldr r0, [pc, #76]	@ 0009fd3a 1348
.org 0x9fd3c
	movs r1, #50	@ 0009fd3c 3221
.org 0x9fd3e
	strb r1, [r3, #9]	@ 0009fd3e 5972
.org 0x9fd40
	adds r0, #200	@ 0009fd40 c830
.org 0x9fd42
	ldr r0, [r0, #0]	@ 0009fd42 0068
.org 0x9fd44
	ldr r0, [r0, #0]	@ 0009fd44 0068
.org 0x9fd46
	str r0, [r3, #20]	@ 0009fd46 5861
.org 0x9fd48
	movs r0, #0	@ 0009fd48 0020
.org 0x9fd4a
	strh r2, [r3, #32]	@ 0009fd4a 1a84
.org 0x9fd4c
	adds r1, r3, #0	@ 0009fd4c 191c
.org 0x9fd4e
	adds r1, #34	@ 0009fd4e 2231
.org 0x9fd50
	strb r0, [r1, #0]	@ 0009fd50 0870
.org 0x9fd52
	ldrb r1, [r3, #11]	@ 0009fd52 d97a
.org 0x9fd54
	movs r0, #16	@ 0009fd54 1020
.org 0x9fd56
	orrs r0, r1	@ 0009fd56 0843
.org 0x9fd58
	strb r0, [r3, #11]	@ 0009fd58 d872
.org 0x9fd5a
	ldrb r0, [r3, #28]	@ 0009fd5a 187f
.org 0x9fd5c
	strb r0, [r3, #29]	@ 0009fd5c 5877
.org 0x9fd5e
	str r6, [r3, #40]	@ 0009fd5e 9e62
.org 0x9fd60
	ldr r0, [r7, #0]	@ 0009fd60 3868
.org 0x9fd62
	ldr r1, [r7, #4]	@ 0009fd62 7968
.org 0x9fd64
	str r0, [r3, #84]	@ 0009fd64 5865
.org 0x9fd66
	str r1, [r3, #88]	@ 0009fd66 9965
.org 0x9fd68
	strb r4, [r3, #16]	@ 0009fd68 1c74
.org 0x9fd6a
	strb r5, [r3, #17]	@ 0009fd6a 5d74
.org 0x9fd6c
	cmp r4, #1	@ 0009fd6c 012c
.org 0x9fd6e
	bne.n 0x9fd7a	@ 0009fd6e 04d1
.org 0x9fd70
	ldr r1, [pc, #24]	@ 0009fd70 0649
.org 0x9fd72
	adds r1, #38	@ 0009fd72 2631
.org 0x9fd74
	ldrb r0, [r1, #0]	@ 0009fd74 0878
.org 0x9fd76
	adds r0, #1	@ 0009fd76 0130
.org 0x9fd78
	strb r0, [r1, #0]	@ 0009fd78 0870
.org 0x9fd7a
	adds r0, r3, #0	@ 0009fd7a 181c
.org 0x9fd7c
	pop {r4, r5, r6, r7}	@ 0009fd7c f0bc
.org 0x9fd7e
	pop {r1}	@ 0009fd7e 02bc
.org 0x9fd80
	bx r1	@ 0009fd80 0847
