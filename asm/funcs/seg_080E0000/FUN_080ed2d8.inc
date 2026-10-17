@ FUN_080ed2d8  entry 0x080ed2d8  size 36
.thumb
.org 0xed2d8
FUN_080ed2d8:
	push {r4, r5, lr}	@ 000ed2d8 30b5
.org 0xed2da
	adds r5, r0, #0	@ 000ed2da 051c
.org 0xed2dc
	adds r4, r5, #0	@ 000ed2dc 2c1c
.org 0xed2de
	adds r4, #192	@ 000ed2de c034
.org 0xed2e0
	ldrh r0, [r4, #0]	@ 000ed2e0 2088
.org 0xed2e2
	cmp r0, #0	@ 000ed2e2 0028
.org 0xed2e4
	beq.n 0xed2f0	@ 000ed2e4 04d0
.org 0xed2e6
	movs r0, #119	@ 000ed2e6 7720
.org 0xed2e8
	bl 0x2b5c	@ 000ed2e8 15f738fc
.org 0xed2ec
	movs r0, #0	@ 000ed2ec 0020
.org 0xed2ee
	strh r0, [r4, #0]	@ 000ed2ee 2080
.org 0xed2f0
	adds r0, r5, #0	@ 000ed2f0 281c
.org 0xed2f2
	bl 0xe954c	@ 000ed2f2 fcf72bf9
.org 0xed2f6
	pop {r4, r5}	@ 000ed2f6 30bc
.org 0xed2f8
	pop {r0}	@ 000ed2f8 01bc
.org 0xed2fa
	bx r0	@ 000ed2fa 0047
