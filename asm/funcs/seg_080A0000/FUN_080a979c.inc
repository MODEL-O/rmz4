@ FUN_080a979c  entry 0x080a979c  size 50
.thumb
.org 0xa979c
FUN_080a979c:
	push {r4, r5, lr}	@ 000a979c 30b5
.org 0xa979e
	adds r2, r0, #0	@ 000a979e 021c
.org 0xa97a0
	ldr r0, [r2, #20]	@ 000a97a0 5069
.org 0xa97a2
	movs r1, #1	@ 000a97a2 0121
.org 0xa97a4
	ands r0, r1	@ 000a97a4 0840
.org 0xa97a6
	cmp r0, #0	@ 000a97a6 0028
.org 0xa97a8
	beq.n 0xa97c8	@ 000a97a8 0ed0
.org 0xa97aa
	ldr r0, [r2, #12]	@ 000a97aa d068
.org 0xa97ac
	ldr r4, [r0, #44]	@ 000a97ac c46a
.org 0xa97ae
	ldr r5, [r2, #44]	@ 000a97ae d56a
.org 0xa97b0
	movs r0, #13	@ 000a97b0 0d20
.org 0xa97b2
	bl 0x6984	@ 000a97b2 5df7e7f8
.org 0xa97b6
	movs r2, #0	@ 000a97b6 0022
.org 0xa97b8
	ldr r1, [r4, #84]	@ 000a97b8 616d
.org 0xa97ba
	ldr r0, [r5, #84]	@ 000a97ba 686d
.org 0xa97bc
	cmp r1, r0	@ 000a97bc 8142
.org 0xa97be
	ble.n 0xa97c2	@ 000a97be 00dd
.org 0xa97c0
	movs r2, #1	@ 000a97c0 0122
.org 0xa97c2
	adds r0, r5, #0	@ 000a97c2 281c
.org 0xa97c4
	adds r0, #188	@ 000a97c4 bc30
.org 0xa97c6
	strb r2, [r0, #0]	@ 000a97c6 0270
.org 0xa97c8
	pop {r4, r5}	@ 000a97c8 30bc
.org 0xa97ca
	pop {r0}	@ 000a97ca 01bc
.org 0xa97cc
	bx r0	@ 000a97cc 0047
