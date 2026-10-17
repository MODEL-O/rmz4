@ FUN_08117da0  entry 0x08117da0  size 68
.thumb
.org 0x117da0
FUN_08117da0:
	push {r4, r5, lr}	@ 00117da0 30b5
.org 0x117da2
	adds r5, r0, #0	@ 00117da2 051c
.org 0x117da4
	ldr r0, [pc, #60]	@ 00117da4 0f48
.org 0x117da6
	adds r4, r5, r0	@ 00117da6 2c18
.org 0x117da8
	movs r0, #0	@ 00117da8 0020
.org 0x117daa
	strb r0, [r4, #0]	@ 00117daa 2070
.org 0x117dac
	ldr r1, [pc, #56]	@ 00117dac 0e49
.org 0x117dae
	ldr r2, [pc, #60]	@ 00117dae 0f4a
.org 0x117db0
	adds r0, r5, r2	@ 00117db0 a818
.org 0x117db2
	ldrb r0, [r0, #0]	@ 00117db2 0078
.org 0x117db4
	lsls r0, r0, #2	@ 00117db4 8000
.org 0x117db6
	adds r0, r0, r1	@ 00117db6 4018
.org 0x117db8
	ldr r1, [r0, #0]	@ 00117db8 0168
.org 0x117dba
	adds r0, r5, #0	@ 00117dba 281c
.org 0x117dbc
	bl 0x128f80	@ 00117dbc 11f0e0f8
.org 0x117dc0
	movs r0, #18	@ 00117dc0 1220
.org 0x117dc2
	bl 0x25d8	@ 00117dc2 eaf609fc
.org 0x117dc6
	ldrb r0, [r4, #0]	@ 00117dc6 2078
.org 0x117dc8
	cmp r0, #0	@ 00117dc8 0028
.org 0x117dca
	bne.n 0x117dde	@ 00117dca 08d1
.org 0x117dcc
	ldr r0, [pc, #32]	@ 00117dcc 0848
.org 0x117dce
	ldrh r1, [r0, #4]	@ 00117dce 8188
.org 0x117dd0
	movs r0, #8	@ 00117dd0 0820
.org 0x117dd2
	ands r0, r1	@ 00117dd2 0840
.org 0x117dd4
	cmp r0, #0	@ 00117dd4 0028
.org 0x117dd6
	beq.n 0x117dde	@ 00117dd6 02d0
.org 0x117dd8
	movs r0, #3	@ 00117dd8 0320
.org 0x117dda
	strb r0, [r5, #1]	@ 00117dda 6870
.org 0x117ddc
	strb r0, [r5, #2]	@ 00117ddc a870
.org 0x117dde
	pop {r4, r5}	@ 00117dde 30bc
.org 0x117de0
	pop {r0}	@ 00117de0 01bc
.org 0x117de2
	bx r0	@ 00117de2 0047
