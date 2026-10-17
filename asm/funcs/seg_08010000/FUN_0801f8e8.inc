@ FUN_0801f8e8  entry 0x0801f8e8  size 32
.thumb
.org 0x1f8e8
FUN_0801f8e8:
	push {r4, lr}	@ 0001f8e8 10b5
.org 0x1f8ea
	adds r1, r0, #0	@ 0001f8ea 011c
.org 0x1f8ec
	ldr r4, [r1, #16]	@ 0001f8ec 0c69
.org 0x1f8ee
	movs r0, #24	@ 0001f8ee 1820
.org 0x1f8f0
	ldrsb r0, [r1, r0]	@ 0001f8f0 0856
.org 0x1f8f2
	cmp r0, #0	@ 0001f8f2 0028
.org 0x1f8f4
	beq.n 0x1f902	@ 0001f8f4 05d0
.org 0x1f8f6
	adds r0, r4, #0	@ 0001f8f6 201c
.org 0x1f8f8
	bl 0x33bc	@ 0001f8f8 e3f760fd
.org 0x1f8fc
	adds r0, r4, #0	@ 0001f8fc 201c
.org 0x1f8fe
	bl 0x3420	@ 0001f8fe e3f78ffd
.org 0x1f902
	pop {r4}	@ 0001f902 10bc
.org 0x1f904
	pop {r0}	@ 0001f904 01bc
.org 0x1f906
	bx r0	@ 0001f906 0047
