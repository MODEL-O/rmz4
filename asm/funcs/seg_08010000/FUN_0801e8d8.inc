@ FUN_0801e8d8  entry 0x0801e8d8  size 54
.thumb
.org 0x1e8d8
FUN_0801e8d8:
	push {r4, r5, lr}	@ 0001e8d8 30b5
.org 0x1e8da
	sub sp, #8	@ 0001e8da 82b0
.org 0x1e8dc
	adds r4, r0, #0	@ 0001e8dc 041c
.org 0x1e8de
	movs r5, #0	@ 0001e8de 0025
.org 0x1e8e0
	str r5, [sp, #0]	@ 0001e8e0 0095
.org 0x1e8e2
	ldr r2, [pc, #44]	@ 0001e8e2 0b4a
.org 0x1e8e4
	mov r0, sp	@ 0001e8e4 6846
.org 0x1e8e6
	adds r1, r4, #0	@ 0001e8e6 211c
.org 0x1e8e8
	bl 0x128be0	@ 0001e8e8 0af17af9
.org 0x1e8ec
	str r5, [sp, #4]	@ 0001e8ec 0195
.org 0x1e8ee
	add r0, sp, #4	@ 0001e8ee 01a8
.org 0x1e8f0
	adds r1, r4, #0	@ 0001e8f0 211c
.org 0x1e8f2
	adds r1, #32	@ 0001e8f2 2031
.org 0x1e8f4
	ldr r2, [pc, #28]	@ 0001e8f4 074a
.org 0x1e8f6
	bl 0x128be4	@ 0001e8f6 0af175f9
.org 0x1e8fa
	ldrb r1, [r4, #16]	@ 0001e8fa 217c
.org 0x1e8fc
	movs r0, #16	@ 0001e8fc 1020
.org 0x1e8fe
	orrs r0, r1	@ 0001e8fe 0843
.org 0x1e900
	movs r1, #32	@ 0001e900 2021
.org 0x1e902
	orrs r0, r1	@ 0001e902 0843
.org 0x1e904
	strb r0, [r4, #16]	@ 0001e904 2074
.org 0x1e906
	add sp, #8	@ 0001e906 02b0
.org 0x1e908
	pop {r4, r5}	@ 0001e908 30bc
.org 0x1e90a
	pop {r0}	@ 0001e90a 01bc
.org 0x1e90c
	bx r0	@ 0001e90c 0047
