@ FUN_0808dc1c  entry 0x0808dc1c  size 104
.thumb
.org 0x8dc1c
FUN_0808dc1c:
	push {r4, r5, r6, r7, lr}	@ 0008dc1c f0b5
.org 0x8dc1e
	mov r7, r8	@ 0008dc1e 4746
.org 0x8dc20
	push {r7}	@ 0008dc20 80b4
.org 0x8dc22
	mov r8, r0	@ 0008dc22 8046
.org 0x8dc24
	lsls r1, r1, #24	@ 0008dc24 0906
.org 0x8dc26
	lsrs r7, r1, #24	@ 0008dc26 0f0e
.org 0x8dc28
	lsls r2, r2, #24	@ 0008dc28 1206
.org 0x8dc2a
	lsrs r5, r2, #24	@ 0008dc2a 150e
.org 0x8dc2c
	lsls r3, r3, #24	@ 0008dc2c 1b06
.org 0x8dc2e
	lsrs r6, r3, #24	@ 0008dc2e 1e0e
.org 0x8dc30
	ldr r0, [pc, #80]	@ 0008dc30 1448
.org 0x8dc32
	ldr r0, [r0, #0]	@ 0008dc32 0068
.org 0x8dc34
	bl 0x5500	@ 0008dc34 77f764fc
.org 0x8dc38
	adds r4, r0, #0	@ 0008dc38 041c
.org 0x8dc3a
	cmp r4, #0	@ 0008dc3a 002c
.org 0x8dc3c
	beq.n 0x8dc78	@ 0008dc3c 1cd0
.org 0x8dc3e
	adds r1, r4, #0	@ 0008dc3e 211c
.org 0x8dc40
	adds r1, #37	@ 0008dc40 2531
.org 0x8dc42
	movs r3, #0	@ 0008dc42 0023
.org 0x8dc44
	movs r0, #24	@ 0008dc44 1820
.org 0x8dc46
	strb r0, [r1, #0]	@ 0008dc46 0870
.org 0x8dc48
	ldr r2, [pc, #60]	@ 0008dc48 0f4a
.org 0x8dc4a
	movs r1, #16	@ 0008dc4a 1021
.org 0x8dc4c
	movs r0, #16	@ 0008dc4c 1020
.org 0x8dc4e
	strb r0, [r4, #9]	@ 0008dc4e 6072
.org 0x8dc50
	ldr r0, [r2, #64]	@ 0008dc50 106c
.org 0x8dc52
	ldr r0, [r0, #0]	@ 0008dc52 0068
.org 0x8dc54
	str r0, [r4, #20]	@ 0008dc54 6061
.org 0x8dc56
	movs r0, #0	@ 0008dc56 0020
.org 0x8dc58
	strh r3, [r4, #32]	@ 0008dc58 2384
.org 0x8dc5a
	adds r2, r4, #0	@ 0008dc5a 221c
.org 0x8dc5c
	adds r2, #34	@ 0008dc5c 2232
.org 0x8dc5e
	strb r0, [r2, #0]	@ 0008dc5e 1070
.org 0x8dc60
	ldrb r0, [r4, #11]	@ 0008dc60 e07a
.org 0x8dc62
	orrs r1, r0	@ 0008dc62 0143
.org 0x8dc64
	strb r1, [r4, #11]	@ 0008dc64 e172
.org 0x8dc66
	ldrb r0, [r4, #28]	@ 0008dc66 207f
.org 0x8dc68
	strb r0, [r4, #29]	@ 0008dc68 6077
.org 0x8dc6a
	mov r0, r8	@ 0008dc6a 4046
.org 0x8dc6c
	str r0, [r4, #40]	@ 0008dc6c a062
.org 0x8dc6e
	strb r7, [r4, #16]	@ 0008dc6e 2774
.org 0x8dc70
	strb r5, [r4, #17]	@ 0008dc70 6574
.org 0x8dc72
	adds r0, r4, #0	@ 0008dc72 201c
.org 0x8dc74
	adds r0, #184	@ 0008dc74 b830
.org 0x8dc76
	strb r6, [r0, #0]	@ 0008dc76 0670
.org 0x8dc78
	adds r0, r4, #0	@ 0008dc78 201c
.org 0x8dc7a
	pop {r3}	@ 0008dc7a 08bc
.org 0x8dc7c
	mov r8, r3	@ 0008dc7c 9846
.org 0x8dc7e
	pop {r4, r5, r6, r7}	@ 0008dc7e f0bc
.org 0x8dc80
	pop {r1}	@ 0008dc80 02bc
.org 0x8dc82
	bx r1	@ 0008dc82 0847
