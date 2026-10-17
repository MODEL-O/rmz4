@ FUN_08043830  entry 0x08043830  size 42
.thumb
.org 0x43830
FUN_08043830:
	push {lr}	@ 00043830 00b5
.org 0x43832
	adds r2, r0, #0	@ 00043832 021c
.org 0x43834
	ldr r0, [r2, #20]	@ 00043834 5069
.org 0x43836
	movs r1, #1	@ 00043836 0121
.org 0x43838
	ands r0, r1	@ 00043838 0840
.org 0x4383a
	cmp r0, #0	@ 0004383a 0028
.org 0x4383c
	beq.n 0x43856	@ 0004383c 0bd0
.org 0x4383e
	ldr r0, [r2, #12]	@ 0004383e d068
.org 0x43840
	ldr r0, [r0, #44]	@ 00043840 c06a
.org 0x43842
	ldr r2, [r2, #44]	@ 00043842 d26a
.org 0x43844
	movs r3, #0	@ 00043844 0023
.org 0x43846
	ldr r1, [r0, #84]	@ 00043846 416d
.org 0x43848
	ldr r0, [r2, #84]	@ 00043848 506d
.org 0x4384a
	cmp r1, r0	@ 0004384a 8142
.org 0x4384c
	ble.n 0x43850	@ 0004384c 00dd
.org 0x4384e
	movs r3, #1	@ 0004384e 0123
.org 0x43850
	adds r0, r2, #0	@ 00043850 101c
.org 0x43852
	adds r0, #188	@ 00043852 bc30
.org 0x43854
	strb r3, [r0, #0]	@ 00043854 0370
.org 0x43856
	pop {r0}	@ 00043856 01bc
.org 0x43858
	bx r0	@ 00043858 0047
