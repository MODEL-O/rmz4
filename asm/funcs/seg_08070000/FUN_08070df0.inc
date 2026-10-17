@ FUN_08070df0  entry 0x08070df0  size 42
.thumb
.org 0x70df0
FUN_08070df0:
	push {lr}	@ 00070df0 00b5
.org 0x70df2
	adds r1, r0, #0	@ 00070df2 011c
.org 0x70df4
	adds r1, #180	@ 00070df4 b431
.org 0x70df6
	ldr r1, [r1, #0]	@ 00070df6 0968
.org 0x70df8
	adds r1, #180	@ 00070df8 b431
.org 0x70dfa
	movs r3, #0	@ 00070dfa 0023
.org 0x70dfc
	movs r2, #1	@ 00070dfc 0122
.org 0x70dfe
	strb r2, [r1, #0]	@ 00070dfe 0a70
.org 0x70e00
	ldrb r1, [r0, #14]	@ 00070e00 817b
.org 0x70e02
	adds r1, #1	@ 00070e02 0131
.org 0x70e04
	strb r1, [r0, #14]	@ 00070e04 8173
.org 0x70e06
	strb r3, [r0, #15]	@ 00070e06 c373
.org 0x70e08
	ldr r2, [pc, #16]	@ 00070e08 044a
.org 0x70e0a
	ldrb r1, [r0, #14]	@ 00070e0a 817b
.org 0x70e0c
	lsls r1, r1, #2	@ 00070e0c 8900
.org 0x70e0e
	adds r1, r1, r2	@ 00070e0e 8918
.org 0x70e10
	ldr r1, [r1, #0]	@ 00070e10 0968
.org 0x70e12
	bl 0x128f80	@ 00070e12 b8f0b5f8
.org 0x70e16
	pop {r0}	@ 00070e16 01bc
.org 0x70e18
	bx r0	@ 00070e18 0047
