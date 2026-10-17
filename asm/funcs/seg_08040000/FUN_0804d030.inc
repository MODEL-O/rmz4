@ FUN_0804d030  entry 0x0804d030  size 42
.thumb
.org 0x4d030
FUN_0804d030:
	push {lr}	@ 0004d030 00b5
.org 0x4d032
	adds r2, r0, #0	@ 0004d032 021c
.org 0x4d034
	ldr r0, [r2, #20]	@ 0004d034 5069
.org 0x4d036
	movs r1, #1	@ 0004d036 0121
.org 0x4d038
	ands r0, r1	@ 0004d038 0840
.org 0x4d03a
	cmp r0, #0	@ 0004d03a 0028
.org 0x4d03c
	beq.n 0x4d056	@ 0004d03c 0bd0
.org 0x4d03e
	ldr r0, [r2, #12]	@ 0004d03e d068
.org 0x4d040
	ldr r0, [r0, #44]	@ 0004d040 c06a
.org 0x4d042
	ldr r2, [r2, #44]	@ 0004d042 d26a
.org 0x4d044
	movs r3, #0	@ 0004d044 0023
.org 0x4d046
	ldr r1, [r0, #84]	@ 0004d046 416d
.org 0x4d048
	ldr r0, [r2, #84]	@ 0004d048 506d
.org 0x4d04a
	cmp r1, r0	@ 0004d04a 8142
.org 0x4d04c
	ble.n 0x4d050	@ 0004d04c 00dd
.org 0x4d04e
	movs r3, #1	@ 0004d04e 0123
.org 0x4d050
	adds r0, r2, #0	@ 0004d050 101c
.org 0x4d052
	adds r0, #188	@ 0004d052 bc30
.org 0x4d054
	strb r3, [r0, #0]	@ 0004d054 0370
.org 0x4d056
	pop {r0}	@ 0004d056 01bc
.org 0x4d058
	bx r0	@ 0004d058 0047
