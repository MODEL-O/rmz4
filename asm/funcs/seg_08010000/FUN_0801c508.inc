@ FUN_0801c508  entry 0x0801c508  size 42
.thumb
.org 0x1c508
FUN_0801c508:
	push {lr}	@ 0001c508 00b5
.org 0x1c50a
	adds r3, r0, #0	@ 0001c50a 031c
.org 0x1c50c
	ldrb r0, [r3, #14]	@ 0001c50c 987b
.org 0x1c50e
	cmp r0, #0	@ 0001c50e 0028
.org 0x1c510
	bne.n 0x1c52e	@ 0001c510 0dd1
.org 0x1c512
	ldr r1, [r3, #92]	@ 0001c512 d96d
.org 0x1c514
	lsrs r1, r1, #4	@ 0001c514 0909
.org 0x1c516
	lsls r1, r1, #1	@ 0001c516 4900
.org 0x1c518
	ldr r0, [pc, #24]	@ 0001c518 0648
.org 0x1c51a
	adds r1, r1, r0	@ 0001c51a 0918
.org 0x1c51c
	ldrh r2, [r1, #0]	@ 0001c51c 0a88
.org 0x1c51e
	ldr r0, [pc, #24]	@ 0001c51e 0648
.org 0x1c520
	ands r0, r2	@ 0001c520 1040
.org 0x1c522
	movs r2, #3	@ 0001c522 0322
.org 0x1c524
	orrs r0, r2	@ 0001c524 1043
.org 0x1c526
	strh r0, [r1, #0]	@ 0001c526 0880
.org 0x1c528
	ldrb r0, [r3, #14]	@ 0001c528 987b
.org 0x1c52a
	adds r0, #1	@ 0001c52a 0130
.org 0x1c52c
	strb r0, [r3, #14]	@ 0001c52c 9873
.org 0x1c52e
	pop {r0}	@ 0001c52e 01bc
.org 0x1c530
	bx r0	@ 0001c530 0047
