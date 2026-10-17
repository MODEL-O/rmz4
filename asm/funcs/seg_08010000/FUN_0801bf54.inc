@ FUN_0801bf54  entry 0x0801bf54  size 44
.thumb
.org 0x1bf54
FUN_0801bf54:
	push {r4, lr}	@ 0001bf54 10b5
.org 0x1bf56
	adds r4, r0, #0	@ 0001bf56 041c
.org 0x1bf58
	movs r0, #118	@ 0001bf58 7620
.org 0x1bf5a
	bl 0x2b10	@ 0001bf5a e6f7d9fd
.org 0x1bf5e
	movs r0, #0	@ 0001bf5e 0020
.org 0x1bf60
	strh r0, [r4, #16]	@ 0001bf60 2082
.org 0x1bf62
	movs r0, #8	@ 0001bf62 0820
.org 0x1bf64
	strh r0, [r4, #18]	@ 0001bf64 6082
.org 0x1bf66
	ldr r1, [pc, #24]	@ 0001bf66 0649
.org 0x1bf68
	movs r0, #128	@ 0001bf68 8020
.org 0x1bf6a
	lsls r0, r0, #5	@ 0001bf6a 4001
.org 0x1bf6c
	strh r0, [r1, #2]	@ 0001bf6c 4880
.org 0x1bf6e
	ldr r1, [pc, #20]	@ 0001bf6e 0549
.org 0x1bf70
	ldr r0, [pc, #20]	@ 0001bf70 0548
.org 0x1bf72
	adds r1, r1, r0	@ 0001bf72 0918
.org 0x1bf74
	ldrb r0, [r1, #0]	@ 0001bf74 0878
.org 0x1bf76
	adds r0, #1	@ 0001bf76 0130
.org 0x1bf78
	strb r0, [r1, #0]	@ 0001bf78 0870
.org 0x1bf7a
	pop {r4}	@ 0001bf7a 10bc
.org 0x1bf7c
	pop {r0}	@ 0001bf7c 01bc
.org 0x1bf7e
	bx r0	@ 0001bf7e 0047
