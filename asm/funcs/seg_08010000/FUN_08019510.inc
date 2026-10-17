@ FUN_08019510  entry 0x08019510  size 42
.thumb
.org 0x19510
FUN_08019510:
	push {lr}	@ 00019510 00b5
.org 0x19512
	adds r3, r0, #0	@ 00019512 031c
.org 0x19514
	ldrb r0, [r3, #14]	@ 00019514 987b
.org 0x19516
	cmp r0, #0	@ 00019516 0028
.org 0x19518
	bne.n 0x19536	@ 00019518 0dd1
.org 0x1951a
	ldr r1, [r3, #92]	@ 0001951a d96d
.org 0x1951c
	lsrs r1, r1, #4	@ 0001951c 0909
.org 0x1951e
	lsls r1, r1, #1	@ 0001951e 4900
.org 0x19520
	ldr r0, [pc, #24]	@ 00019520 0648
.org 0x19522
	adds r1, r1, r0	@ 00019522 0918
.org 0x19524
	ldrh r2, [r1, #0]	@ 00019524 0a88
.org 0x19526
	ldr r0, [pc, #24]	@ 00019526 0648
.org 0x19528
	ands r0, r2	@ 00019528 1040
.org 0x1952a
	movs r2, #3	@ 0001952a 0322
.org 0x1952c
	orrs r0, r2	@ 0001952c 1043
.org 0x1952e
	strh r0, [r1, #0]	@ 0001952e 0880
.org 0x19530
	ldrb r0, [r3, #14]	@ 00019530 987b
.org 0x19532
	adds r0, #1	@ 00019532 0130
.org 0x19534
	strb r0, [r3, #14]	@ 00019534 9873
.org 0x19536
	pop {r0}	@ 00019536 01bc
.org 0x19538
	bx r0	@ 00019538 0047
