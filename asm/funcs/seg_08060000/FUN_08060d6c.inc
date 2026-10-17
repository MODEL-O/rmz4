@ FUN_08060d6c  entry 0x08060d6c  size 68
.thumb
.org 0x60d6c
FUN_08060d6c:
	push {r4, r5, lr}	@ 00060d6c 30b5
.org 0x60d6e
	adds r4, r0, #0	@ 00060d6e 041c
.org 0x60d70
	ldrb r5, [r4, #14]	@ 00060d70 a57b
.org 0x60d72
	cmp r5, #0	@ 00060d72 002d
.org 0x60d74
	bne.n 0x60d84	@ 00060d74 06d1
.org 0x60d76
	ldr r1, [pc, #56]	@ 00060d76 0e49
.org 0x60d78
	bl 0x1cf00	@ 00060d78 bcf7c2f8
.org 0x60d7c
	strb r5, [r4, #15]	@ 00060d7c e573
.org 0x60d7e
	ldrb r0, [r4, #14]	@ 00060d7e a07b
.org 0x60d80
	adds r0, #1	@ 00060d80 0130
.org 0x60d82
	strb r0, [r4, #14]	@ 00060d82 a073
.org 0x60d84
	adds r0, r4, #0	@ 00060d84 201c
.org 0x60d86
	bl 0x1cff0	@ 00060d86 bcf733f9
.org 0x60d8a
	ldr r0, [r4, #88]	@ 00060d8a a06d
.org 0x60d8c
	ldr r1, [r4, #96]	@ 00060d8c 216e
.org 0x60d8e
	adds r0, r0, r1	@ 00060d8e 4018
.org 0x60d90
	str r0, [r4, #88]	@ 00060d90 a065
.org 0x60d92
	adds r1, #64	@ 00060d92 4031
.org 0x60d94
	str r1, [r4, #96]	@ 00060d94 2166
.org 0x60d96
	adds r1, r4, #0	@ 00060d96 211c
.org 0x60d98
	adds r1, #180	@ 00060d98 b431
.org 0x60d9a
	ldr r1, [r1, #4]	@ 00060d9a 4968
.org 0x60d9c
	cmp r0, r1	@ 00060d9c 8842
.org 0x60d9e
	ble.n 0x60daa	@ 00060d9e 04dd
.org 0x60da0
	str r1, [r4, #88]	@ 00060da0 a165
.org 0x60da2
	movs r1, #0	@ 00060da2 0021
.org 0x60da4
	movs r0, #23	@ 00060da4 1720
.org 0x60da6
	strb r0, [r4, #13]	@ 00060da6 6073
.org 0x60da8
	strb r1, [r4, #14]	@ 00060da8 a173
.org 0x60daa
	pop {r4, r5}	@ 00060daa 30bc
.org 0x60dac
	pop {r0}	@ 00060dac 01bc
.org 0x60dae
	bx r0	@ 00060dae 0047
