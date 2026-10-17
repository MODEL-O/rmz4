@ FUN_080125c8  entry 0x080125c8  size 42
.thumb
.org 0x125c8
FUN_080125c8:
	push {lr}	@ 000125c8 00b5
.org 0x125ca
	adds r3, r0, #0	@ 000125ca 031c
.org 0x125cc
	ldrb r0, [r3, #14]	@ 000125cc 987b
.org 0x125ce
	cmp r0, #0	@ 000125ce 0028
.org 0x125d0
	bne.n 0x125ee	@ 000125d0 0dd1
.org 0x125d2
	ldr r1, [r3, #92]	@ 000125d2 d96d
.org 0x125d4
	lsrs r1, r1, #4	@ 000125d4 0909
.org 0x125d6
	lsls r1, r1, #1	@ 000125d6 4900
.org 0x125d8
	ldr r0, [pc, #24]	@ 000125d8 0648
.org 0x125da
	adds r1, r1, r0	@ 000125da 0918
.org 0x125dc
	ldrh r2, [r1, #0]	@ 000125dc 0a88
.org 0x125de
	ldr r0, [pc, #24]	@ 000125de 0648
.org 0x125e0
	ands r0, r2	@ 000125e0 1040
.org 0x125e2
	movs r2, #1	@ 000125e2 0122
.org 0x125e4
	orrs r0, r2	@ 000125e4 1043
.org 0x125e6
	strh r0, [r1, #0]	@ 000125e6 0880
.org 0x125e8
	ldrb r0, [r3, #14]	@ 000125e8 987b
.org 0x125ea
	adds r0, #1	@ 000125ea 0130
.org 0x125ec
	strb r0, [r3, #14]	@ 000125ec 9873
.org 0x125ee
	pop {r0}	@ 000125ee 01bc
.org 0x125f0
	bx r0	@ 000125f0 0047
