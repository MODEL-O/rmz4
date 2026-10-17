@ FUN_080128b4  entry 0x080128b4  size 42
.thumb
.org 0x128b4
FUN_080128b4:
	push {lr}	@ 000128b4 00b5
.org 0x128b6
	adds r3, r0, #0	@ 000128b6 031c
.org 0x128b8
	ldrb r0, [r3, #14]	@ 000128b8 987b
.org 0x128ba
	cmp r0, #0	@ 000128ba 0028
.org 0x128bc
	bne.n 0x128da	@ 000128bc 0dd1
.org 0x128be
	ldr r1, [r3, #92]	@ 000128be d96d
.org 0x128c0
	lsrs r1, r1, #4	@ 000128c0 0909
.org 0x128c2
	lsls r1, r1, #1	@ 000128c2 4900
.org 0x128c4
	ldr r0, [pc, #24]	@ 000128c4 0648
.org 0x128c6
	adds r1, r1, r0	@ 000128c6 0918
.org 0x128c8
	ldrh r2, [r1, #0]	@ 000128c8 0a88
.org 0x128ca
	ldr r0, [pc, #24]	@ 000128ca 0648
.org 0x128cc
	ands r0, r2	@ 000128cc 1040
.org 0x128ce
	movs r2, #2	@ 000128ce 0222
.org 0x128d0
	orrs r0, r2	@ 000128d0 1043
.org 0x128d2
	strh r0, [r1, #0]	@ 000128d2 0880
.org 0x128d4
	ldrb r0, [r3, #14]	@ 000128d4 987b
.org 0x128d6
	adds r0, #1	@ 000128d6 0130
.org 0x128d8
	strb r0, [r3, #14]	@ 000128d8 9873
.org 0x128da
	pop {r0}	@ 000128da 01bc
.org 0x128dc
	bx r0	@ 000128dc 0047
