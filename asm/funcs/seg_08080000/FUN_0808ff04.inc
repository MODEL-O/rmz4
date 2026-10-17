@ FUN_0808ff04  entry 0x0808ff04  size 114
.thumb
.org 0x8ff04
FUN_0808ff04:
	push {r4, r5, r6, r7, lr}	@ 0008ff04 f0b5
.org 0x8ff06
	mov r7, r8	@ 0008ff06 4746
.org 0x8ff08
	push {r7}	@ 0008ff08 80b4
.org 0x8ff0a
	adds r7, r0, #0	@ 0008ff0a 071c
.org 0x8ff0c
	mov r8, r1	@ 0008ff0c 8846
.org 0x8ff0e
	lsls r2, r2, #24	@ 0008ff0e 1206
.org 0x8ff10
	lsrs r4, r2, #24	@ 0008ff10 140e
.org 0x8ff12
	lsls r3, r3, #24	@ 0008ff12 1b06
.org 0x8ff14
	lsrs r6, r3, #24	@ 0008ff14 1e0e
.org 0x8ff16
	ldr r0, [pc, #96]	@ 0008ff16 1848
.org 0x8ff18
	ldr r0, [r0, #0]	@ 0008ff18 0068
.org 0x8ff1a
	bl 0x5500	@ 0008ff1a 75f7f1fa
.org 0x8ff1e
	adds r3, r0, #0	@ 0008ff1e 031c
.org 0x8ff20
	cmp r3, #0	@ 0008ff20 002b
.org 0x8ff22
	beq.n 0x8ff6a	@ 0008ff22 22d0
.org 0x8ff24
	adds r1, r3, #0	@ 0008ff24 191c
.org 0x8ff26
	adds r1, #37	@ 0008ff26 2531
.org 0x8ff28
	movs r2, #0	@ 0008ff28 0022
.org 0x8ff2a
	movs r0, #24	@ 0008ff2a 1820
.org 0x8ff2c
	strb r0, [r1, #0]	@ 0008ff2c 0870
.org 0x8ff2e
	ldr r1, [pc, #76]	@ 0008ff2e 1349
.org 0x8ff30
	movs r0, #18	@ 0008ff30 1220
.org 0x8ff32
	strb r0, [r3, #9]	@ 0008ff32 5872
.org 0x8ff34
	ldr r0, [r1, #72]	@ 0008ff34 886c
.org 0x8ff36
	ldr r0, [r0, #0]	@ 0008ff36 0068
.org 0x8ff38
	str r0, [r3, #20]	@ 0008ff38 5861
.org 0x8ff3a
	movs r5, #0	@ 0008ff3a 0025
.org 0x8ff3c
	strh r2, [r3, #32]	@ 0008ff3c 1a84
.org 0x8ff3e
	adds r0, r3, #0	@ 0008ff3e 181c
.org 0x8ff40
	adds r0, #34	@ 0008ff40 2230
.org 0x8ff42
	strb r5, [r0, #0]	@ 0008ff42 0570
.org 0x8ff44
	ldrb r1, [r3, #11]	@ 0008ff44 d97a
.org 0x8ff46
	movs r0, #16	@ 0008ff46 1020
.org 0x8ff48
	orrs r0, r1	@ 0008ff48 0843
.org 0x8ff4a
	strb r0, [r3, #11]	@ 0008ff4a d872
.org 0x8ff4c
	ldrb r0, [r3, #28]	@ 0008ff4c 187f
.org 0x8ff4e
	strb r0, [r3, #29]	@ 0008ff4e 5877
.org 0x8ff50
	str r7, [r3, #40]	@ 0008ff50 9f62
.org 0x8ff52
	mov r2, r8	@ 0008ff52 4246
.org 0x8ff54
	ldr r0, [r2, #0]	@ 0008ff54 1068
.org 0x8ff56
	ldr r1, [r2, #4]	@ 0008ff56 5168
.org 0x8ff58
	str r0, [r3, #84]	@ 0008ff58 5865
.org 0x8ff5a
	str r1, [r3, #88]	@ 0008ff5a 9965
.org 0x8ff5c
	strb r4, [r3, #16]	@ 0008ff5c 1c74
.org 0x8ff5e
	strb r6, [r3, #17]	@ 0008ff5e 5e74
.org 0x8ff60
	cmp r4, #0	@ 0008ff60 002c
.org 0x8ff62
	bne.n 0x8ff6a	@ 0008ff62 02d1
.org 0x8ff64
	adds r0, r3, #0	@ 0008ff64 181c
.org 0x8ff66
	adds r0, #180	@ 0008ff66 b430
.org 0x8ff68
	strb r5, [r0, #0]	@ 0008ff68 0570
.org 0x8ff6a
	adds r0, r3, #0	@ 0008ff6a 181c
.org 0x8ff6c
	pop {r3}	@ 0008ff6c 08bc
.org 0x8ff6e
	mov r8, r3	@ 0008ff6e 9846
.org 0x8ff70
	pop {r4, r5, r6, r7}	@ 0008ff70 f0bc
.org 0x8ff72
	pop {r1}	@ 0008ff72 02bc
.org 0x8ff74
	bx r1	@ 0008ff74 0847
