@ FUN_0801c734  entry 0x0801c734  size 58
.thumb
.org 0x1c734
FUN_0801c734:
	push {lr}	@ 0001c734 00b5
.org 0x1c736
	bl 0x1d444	@ 0001c736 00f085fe
.org 0x1c73a
	ldr r0, [pc, #52]	@ 0001c73a 0d48
.org 0x1c73c
	movs r1, #0	@ 0001c73c 0021
.org 0x1c73e
	strb r1, [r0, #0]	@ 0001c73e 0170
.org 0x1c740
	ldr r0, [pc, #48]	@ 0001c740 0c48
.org 0x1c742
	strb r1, [r0, #0]	@ 0001c742 0170
.org 0x1c744
	ldr r0, [pc, #48]	@ 0001c744 0c48
.org 0x1c746
	strb r1, [r0, #0]	@ 0001c746 0170
.org 0x1c748
	ldr r0, [pc, #48]	@ 0001c748 0c48
.org 0x1c74a
	movs r1, #0	@ 0001c74a 0021
.org 0x1c74c
	str r1, [r0, #0]	@ 0001c74c 0160
.org 0x1c74e
	ldr r0, [pc, #48]	@ 0001c74e 0c48
.org 0x1c750
	str r1, [r0, #0]	@ 0001c750 0160
.org 0x1c752
	ldr r0, [pc, #48]	@ 0001c752 0c48
.org 0x1c754
	str r1, [r0, #0]	@ 0001c754 0160
.org 0x1c756
	ldr r0, [pc, #48]	@ 0001c756 0c48
.org 0x1c758
	strb r1, [r0, #0]	@ 0001c758 0170
.org 0x1c75a
	ldr r0, [pc, #48]	@ 0001c75a 0c48
.org 0x1c75c
	strb r1, [r0, #0]	@ 0001c75c 0170
.org 0x1c75e
	ldr r0, [pc, #48]	@ 0001c75e 0c48
.org 0x1c760
	strb r1, [r0, #0]	@ 0001c760 0170
.org 0x1c762
	ldr r0, [pc, #48]	@ 0001c762 0c48
.org 0x1c764
	strb r1, [r0, #0]	@ 0001c764 0170
.org 0x1c766
	ldr r0, [pc, #48]	@ 0001c766 0c48
.org 0x1c768
	strh r1, [r0, #0]	@ 0001c768 0180
.org 0x1c76a
	pop {r0}	@ 0001c76a 01bc
.org 0x1c76c
	bx r0	@ 0001c76c 0047
