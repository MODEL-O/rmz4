@ FUN_080143b8  entry 0x080143b8  size 58
.thumb
.org 0x143b8
FUN_080143b8:
	push {lr}	@ 000143b8 00b5
.org 0x143ba
	adds r3, r0, #0	@ 000143ba 031c
.org 0x143bc
	ldrb r0, [r3, #14]	@ 000143bc 987b
.org 0x143be
	cmp r0, #0	@ 000143be 0028
.org 0x143c0
	bne.n 0x143ee	@ 000143c0 15d1
.org 0x143c2
	ldr r1, [pc, #48]	@ 000143c2 0c49
.org 0x143c4
	ldr r0, [pc, #48]	@ 000143c4 0c48
.org 0x143c6
	strh r0, [r1, #0]	@ 000143c6 0880
.org 0x143c8
	ldr r0, [pc, #48]	@ 000143c8 0c48
.org 0x143ca
	strh r0, [r1, #2]	@ 000143ca 4880
.org 0x143cc
	ldr r0, [pc, #48]	@ 000143cc 0c48
.org 0x143ce
	ldr r1, [pc, #52]	@ 000143ce 0d49
.org 0x143d0
	adds r0, r0, r1	@ 000143d0 4018
.org 0x143d2
	ldrb r1, [r0, #0]	@ 000143d2 0178
.org 0x143d4
	movs r0, #15	@ 000143d4 0f20
.org 0x143d6
	ands r0, r1	@ 000143d6 0840
.org 0x143d8
	cmp r0, #2	@ 000143d8 0228
.org 0x143da
	bne.n 0x143e8	@ 000143da 05d1
.org 0x143dc
	ldr r2, [pc, #40]	@ 000143dc 0a4a
.org 0x143de
	ldr r1, [r3, #92]	@ 000143de d96d
.org 0x143e0
	lsls r1, r1, #8	@ 000143e0 0902
.org 0x143e2
	ldrh r0, [r2, #0]	@ 000143e2 1088
.org 0x143e4
	bics r0, r1	@ 000143e4 8843
.org 0x143e6
	strh r0, [r2, #0]	@ 000143e6 1080
.org 0x143e8
	ldrb r0, [r3, #14]	@ 000143e8 987b
.org 0x143ea
	adds r0, #1	@ 000143ea 0130
.org 0x143ec
	strb r0, [r3, #14]	@ 000143ec 9873
.org 0x143ee
	pop {r0}	@ 000143ee 01bc
.org 0x143f0
	bx r0	@ 000143f0 0047
