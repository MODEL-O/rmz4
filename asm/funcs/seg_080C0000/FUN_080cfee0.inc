@ FUN_080cfee0  entry 0x080cfee0  size 76
.thumb
.org 0xcfee0
FUN_080cfee0:
	push {r4, lr}	@ 000cfee0 10b5
.org 0xcfee2
	adds r2, r0, #0	@ 000cfee2 021c
.org 0xcfee4
	ldr r0, [r2, #40]	@ 000cfee4 906a
.org 0xcfee6
	adds r1, r0, #0	@ 000cfee6 011c
.org 0xcfee8
	adds r1, #204	@ 000cfee8 cc31
.org 0xcfeea
	ldrh r3, [r1, #0]	@ 000cfeea 0b88
.org 0xcfeec
	movs r4, #0	@ 000cfeec 0024
.org 0xcfeee
	ldrsh r0, [r1, r4]	@ 000cfeee 085f
.org 0xcfef0
	cmp r0, #0	@ 000cfef0 0028
.org 0xcfef2
	beq.n 0xcfef8	@ 000cfef2 01d0
.org 0xcfef4
	subs r0, r3, #1	@ 000cfef4 581e
.org 0xcfef6
	strh r0, [r1, #0]	@ 000cfef6 0880
.org 0xcfef8
	adds r0, r2, #0	@ 000cfef8 101c
.org 0xcfefa
	adds r0, #140	@ 000cfefa 8c30
.org 0xcfefc
	movs r1, #0	@ 000cfefc 0021
.org 0xcfefe
	str r1, [r0, #0]	@ 000cfefe 0160
.org 0xcff00
	adds r0, #4	@ 000cff00 0430
.org 0xcff02
	str r1, [r0, #0]	@ 000cff02 0160
.org 0xcff04
	adds r0, #4	@ 000cff04 0430
.org 0xcff06
	strb r1, [r0, #0]	@ 000cff06 0170
.org 0xcff08
	ldrb r1, [r2, #10]	@ 000cff08 917a
.org 0xcff0a
	movs r0, #251	@ 000cff0a fb20
.org 0xcff0c
	ands r0, r1	@ 000cff0c 0840
.org 0xcff0e
	movs r1, #254	@ 000cff0e fe21
.org 0xcff10
	ands r0, r1	@ 000cff10 0840
.org 0xcff12
	strb r0, [r2, #10]	@ 000cff12 9072
.org 0xcff14
	ldr r1, [pc, #20]	@ 000cff14 0549
.org 0xcff16
	ldrb r0, [r2, #9]	@ 000cff16 507a
.org 0xcff18
	lsls r0, r0, #2	@ 000cff18 8000
.org 0xcff1a
	adds r0, r0, r1	@ 000cff1a 4018
.org 0xcff1c
	movs r1, #4	@ 000cff1c 0421
.org 0xcff1e
	str r1, [r2, #12]	@ 000cff1e d160
.org 0xcff20
	ldr r0, [r0, #0]	@ 000cff20 0068
.org 0xcff22
	ldr r0, [r0, #16]	@ 000cff22 0069
.org 0xcff24
	str r0, [r2, #20]	@ 000cff24 5061
.org 0xcff26
	pop {r4}	@ 000cff26 10bc
.org 0xcff28
	pop {r0}	@ 000cff28 01bc
.org 0xcff2a
	bx r0	@ 000cff2a 0047
