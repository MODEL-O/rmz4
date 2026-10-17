@ FUN_0809ad58  entry 0x0809ad58  size 74
.thumb
.org 0x9ad58
FUN_0809ad58:
	push {r4, lr}	@ 0009ad58 10b5
.org 0x9ad5a
	adds r4, r0, #0	@ 0009ad5a 041c
.org 0x9ad5c
	adds r0, #84	@ 0009ad5c 5430
.org 0x9ad5e
	ldrb r2, [r4, #18]	@ 0009ad5e a27c
.org 0x9ad60
	adds r2, #3	@ 0009ad60 0332
.org 0x9ad62
	lsls r2, r2, #24	@ 0009ad62 1206
.org 0x9ad64
	lsrs r2, r2, #24	@ 0009ad64 120e
.org 0x9ad66
	movs r1, #0	@ 0009ad66 0021
.org 0x9ad68
	movs r3, #32	@ 0009ad68 2023
.org 0x9ad6a
	bl 0xc62a0	@ 0009ad6a 2bf099fa
.org 0x9ad6e
	adds r0, r4, #0	@ 0009ad6e 201c
.org 0x9ad70
	adds r0, #140	@ 0009ad70 8c30
.org 0x9ad72
	movs r1, #0	@ 0009ad72 0021
.org 0x9ad74
	str r1, [r0, #0]	@ 0009ad74 0160
.org 0x9ad76
	adds r0, #4	@ 0009ad76 0430
.org 0x9ad78
	str r1, [r0, #0]	@ 0009ad78 0160
.org 0x9ad7a
	adds r0, #4	@ 0009ad7a 0430
.org 0x9ad7c
	strb r1, [r0, #0]	@ 0009ad7c 0170
.org 0x9ad7e
	ldrb r1, [r4, #10]	@ 0009ad7e a17a
.org 0x9ad80
	movs r0, #251	@ 0009ad80 fb20
.org 0x9ad82
	ands r0, r1	@ 0009ad82 0840
.org 0x9ad84
	movs r1, #254	@ 0009ad84 fe21
.org 0x9ad86
	ands r0, r1	@ 0009ad86 0840
.org 0x9ad88
	strb r0, [r4, #10]	@ 0009ad88 a072
.org 0x9ad8a
	ldr r1, [pc, #24]	@ 0009ad8a 0649
.org 0x9ad8c
	ldrb r0, [r4, #9]	@ 0009ad8c 607a
.org 0x9ad8e
	lsls r0, r0, #2	@ 0009ad8e 8000
.org 0x9ad90
	adds r0, r0, r1	@ 0009ad90 4018
.org 0x9ad92
	movs r1, #4	@ 0009ad92 0421
.org 0x9ad94
	str r1, [r4, #12]	@ 0009ad94 e160
.org 0x9ad96
	ldr r0, [r0, #0]	@ 0009ad96 0068
.org 0x9ad98
	ldr r0, [r0, #16]	@ 0009ad98 0069
.org 0x9ad9a
	str r0, [r4, #20]	@ 0009ad9a 6061
.org 0x9ad9c
	pop {r4}	@ 0009ad9c 10bc
.org 0x9ad9e
	pop {r0}	@ 0009ad9e 01bc
.org 0x9ada0
	bx r0	@ 0009ada0 0047
