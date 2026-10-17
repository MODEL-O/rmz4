@ FUN_0803f2e8  entry 0x0803f2e8  size 42
.thumb
.org 0x3f2e8
FUN_0803f2e8:
	push {lr}	@ 0003f2e8 00b5
.org 0x3f2ea
	adds r2, r0, #0	@ 0003f2ea 021c
.org 0x3f2ec
	ldr r0, [r2, #20]	@ 0003f2ec 5069
.org 0x3f2ee
	movs r1, #4	@ 0003f2ee 0421
.org 0x3f2f0
	ands r0, r1	@ 0003f2f0 0840
.org 0x3f2f2
	cmp r0, #0	@ 0003f2f2 0028
.org 0x3f2f4
	beq.n 0x3f30e	@ 0003f2f4 0bd0
.org 0x3f2f6
	ldr r3, [r2, #44]	@ 0003f2f6 d36a
.org 0x3f2f8
	ldr r0, [r2, #12]	@ 0003f2f8 d068
.org 0x3f2fa
	ldr r0, [r0, #24]	@ 0003f2fa 8069
.org 0x3f2fc
	movs r1, #128	@ 0003f2fc 8021
.org 0x3f2fe
	lsls r1, r1, #2	@ 0003f2fe 8900
.org 0x3f300
	ands r0, r1	@ 0003f300 0840
.org 0x3f302
	cmp r0, #0	@ 0003f302 0028
.org 0x3f304
	bne.n 0x3f30e	@ 0003f304 03d1
.org 0x3f306
	adds r1, r3, #0	@ 0003f306 191c
.org 0x3f308
	adds r1, #180	@ 0003f308 b431
.org 0x3f30a
	movs r0, #1	@ 0003f30a 0120
.org 0x3f30c
	strb r0, [r1, #7]	@ 0003f30c c871
.org 0x3f30e
	pop {r0}	@ 0003f30e 01bc
.org 0x3f310
	bx r0	@ 0003f310 0047
