@ FUN_0804ad88  entry 0x0804ad88  size 42
.thumb
.org 0x4ad88
FUN_0804ad88:
	push {lr}	@ 0004ad88 00b5
.org 0x4ad8a
	adds r2, r0, #0	@ 0004ad8a 021c
.org 0x4ad8c
	ldr r0, [r2, #20]	@ 0004ad8c 5069
.org 0x4ad8e
	movs r1, #1	@ 0004ad8e 0121
.org 0x4ad90
	ands r0, r1	@ 0004ad90 0840
.org 0x4ad92
	cmp r0, #0	@ 0004ad92 0028
.org 0x4ad94
	beq.n 0x4adae	@ 0004ad94 0bd0
.org 0x4ad96
	ldr r0, [r2, #12]	@ 0004ad96 d068
.org 0x4ad98
	ldr r0, [r0, #44]	@ 0004ad98 c06a
.org 0x4ad9a
	ldr r2, [r2, #44]	@ 0004ad9a d26a
.org 0x4ad9c
	movs r3, #0	@ 0004ad9c 0023
.org 0x4ad9e
	ldr r1, [r0, #84]	@ 0004ad9e 416d
.org 0x4ada0
	ldr r0, [r2, #84]	@ 0004ada0 506d
.org 0x4ada2
	cmp r1, r0	@ 0004ada2 8142
.org 0x4ada4
	ble.n 0x4ada8	@ 0004ada4 00dd
.org 0x4ada6
	movs r3, #1	@ 0004ada6 0123
.org 0x4ada8
	adds r0, r2, #0	@ 0004ada8 101c
.org 0x4adaa
	adds r0, #188	@ 0004adaa bc30
.org 0x4adac
	strb r3, [r0, #0]	@ 0004adac 0370
.org 0x4adae
	pop {r0}	@ 0004adae 01bc
.org 0x4adb0
	bx r0	@ 0004adb0 0047
