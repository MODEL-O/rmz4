@ FUN_080166c4  entry 0x080166c4  size 44
.thumb
.org 0x166c4
FUN_080166c4:
	push {lr}	@ 000166c4 00b5
.org 0x166c6
	adds r3, r0, #0	@ 000166c6 031c
.org 0x166c8
	ldrb r0, [r3, #14]	@ 000166c8 987b
.org 0x166ca
	cmp r0, #0	@ 000166ca 0028
.org 0x166cc
	bne.n 0x166ec	@ 000166cc 0ed1
.org 0x166ce
	ldr r0, [r3, #92]	@ 000166ce d86d
.org 0x166d0
	lsls r0, r0, #16	@ 000166d0 0004
.org 0x166d2
	lsrs r0, r0, #20	@ 000166d2 000d
.org 0x166d4
	lsls r0, r0, #1	@ 000166d4 4000
.org 0x166d6
	ldr r1, [pc, #24]	@ 000166d6 0649
.org 0x166d8
	adds r0, r0, r1	@ 000166d8 4018
.org 0x166da
	ldrh r2, [r0, #0]	@ 000166da 0288
.org 0x166dc
	ldr r1, [pc, #20]	@ 000166dc 0549
.org 0x166de
	ands r1, r2	@ 000166de 1140
.org 0x166e0
	movs r2, #3	@ 000166e0 0322
.org 0x166e2
	orrs r1, r2	@ 000166e2 1143
.org 0x166e4
	strh r1, [r0, #0]	@ 000166e4 0180
.org 0x166e6
	ldrb r0, [r3, #14]	@ 000166e6 987b
.org 0x166e8
	adds r0, #1	@ 000166e8 0130
.org 0x166ea
	strb r0, [r3, #14]	@ 000166ea 9873
.org 0x166ec
	pop {r0}	@ 000166ec 01bc
.org 0x166ee
	bx r0	@ 000166ee 0047
