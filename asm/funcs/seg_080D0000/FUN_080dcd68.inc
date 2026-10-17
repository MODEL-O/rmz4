@ FUN_080dcd68  entry 0x080dcd68  size 78
.thumb
.org 0xdcd68
FUN_080dcd68:
	push {r4, r5, r6, lr}	@ 000dcd68 70b5
.org 0xdcd6a
	adds r6, r0, #0	@ 000dcd6a 061c
.org 0xdcd6c
	lsls r1, r1, #24	@ 000dcd6c 0906
.org 0xdcd6e
	lsrs r5, r1, #24	@ 000dcd6e 0d0e
.org 0xdcd70
	lsls r2, r2, #24	@ 000dcd70 1206
.org 0xdcd72
	lsrs r4, r2, #24	@ 000dcd72 140e
.org 0xdcd74
	ldr r0, [pc, #64]	@ 000dcd74 1048
.org 0xdcd76
	ldr r0, [r0, #0]	@ 000dcd76 0068
.org 0xdcd78
	bl 0x5500	@ 000dcd78 28f7c2fb
.org 0xdcd7c
	adds r3, r0, #0	@ 000dcd7c 031c
.org 0xdcd7e
	cmp r3, #0	@ 000dcd7e 002b
.org 0xdcd80
	beq.n 0xdcdb0	@ 000dcd80 16d0
.org 0xdcd82
	adds r1, r3, #0	@ 000dcd82 191c
.org 0xdcd84
	adds r1, #37	@ 000dcd84 2531
.org 0xdcd86
	movs r2, #0	@ 000dcd86 0022
.org 0xdcd88
	movs r0, #1	@ 000dcd88 0120
.org 0xdcd8a
	strb r0, [r1, #0]	@ 000dcd8a 0870
.org 0xdcd8c
	ldr r0, [pc, #44]	@ 000dcd8c 0b48
.org 0xdcd8e
	movs r1, #44	@ 000dcd8e 2c21
.org 0xdcd90
	strb r1, [r3, #9]	@ 000dcd90 5972
.org 0xdcd92
	adds r0, #176	@ 000dcd92 b030
.org 0xdcd94
	ldr r0, [r0, #0]	@ 000dcd94 0068
.org 0xdcd96
	ldr r0, [r0, #0]	@ 000dcd96 0068
.org 0xdcd98
	str r0, [r3, #20]	@ 000dcd98 5861
.org 0xdcd9a
	movs r0, #0	@ 000dcd9a 0020
.org 0xdcd9c
	strh r2, [r3, #32]	@ 000dcd9c 1a84
.org 0xdcd9e
	adds r1, r3, #0	@ 000dcd9e 191c
.org 0xdcda0
	adds r1, #34	@ 000dcda0 2231
.org 0xdcda2
	strb r0, [r1, #0]	@ 000dcda2 0870
.org 0xdcda4
	ldr r0, [r6, #0]	@ 000dcda4 3068
.org 0xdcda6
	ldr r1, [r6, #4]	@ 000dcda6 7168
.org 0xdcda8
	str r0, [r3, #84]	@ 000dcda8 5865
.org 0xdcdaa
	str r1, [r3, #88]	@ 000dcdaa 9965
.org 0xdcdac
	strb r5, [r3, #16]	@ 000dcdac 1d74
.org 0xdcdae
	strb r4, [r3, #17]	@ 000dcdae 5c74
.org 0xdcdb0
	pop {r4, r5, r6}	@ 000dcdb0 70bc
.org 0xdcdb2
	pop {r0}	@ 000dcdb2 01bc
.org 0xdcdb4
	bx r0	@ 000dcdb4 0047
