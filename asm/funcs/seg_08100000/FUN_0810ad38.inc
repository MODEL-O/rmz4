@ FUN_0810ad38  entry 0x0810ad38  size 70
.thumb
.org 0x10ad38
FUN_0810ad38:
	push {r4, r5, r6, lr}	@ 0010ad38 70b5
.org 0x10ad3a
	adds r6, r0, #0	@ 0010ad3a 061c
.org 0x10ad3c
	lsls r1, r1, #24	@ 0010ad3c 0906
.org 0x10ad3e
	lsrs r5, r1, #24	@ 0010ad3e 0d0e
.org 0x10ad40
	lsls r2, r2, #24	@ 0010ad40 1206
.org 0x10ad42
	lsrs r4, r2, #24	@ 0010ad42 140e
.org 0x10ad44
	ldr r0, [pc, #56]	@ 0010ad44 0e48
.org 0x10ad46
	ldr r0, [r0, #0]	@ 0010ad46 0068
.org 0x10ad48
	bl 0x5500	@ 0010ad48 faf6dafb
.org 0x10ad4c
	adds r3, r0, #0	@ 0010ad4c 031c
.org 0x10ad4e
	cmp r3, #0	@ 0010ad4e 002b
.org 0x10ad50
	beq.n 0x10ad78	@ 0010ad50 12d0
.org 0x10ad52
	adds r1, r3, #0	@ 0010ad52 191c
.org 0x10ad54
	adds r1, #37	@ 0010ad54 2531
.org 0x10ad56
	movs r2, #0	@ 0010ad56 0022
.org 0x10ad58
	movs r0, #16	@ 0010ad58 1020
.org 0x10ad5a
	strb r0, [r1, #0]	@ 0010ad5a 0870
.org 0x10ad5c
	ldr r1, [pc, #36]	@ 0010ad5c 0949
.org 0x10ad5e
	movs r0, #4	@ 0010ad5e 0420
.org 0x10ad60
	strb r0, [r3, #9]	@ 0010ad60 5872
.org 0x10ad62
	ldr r0, [r1, #16]	@ 0010ad62 0869
.org 0x10ad64
	ldr r0, [r0, #0]	@ 0010ad64 0068
.org 0x10ad66
	str r0, [r3, #20]	@ 0010ad66 5861
.org 0x10ad68
	movs r0, #0	@ 0010ad68 0020
.org 0x10ad6a
	strh r2, [r3, #32]	@ 0010ad6a 1a84
.org 0x10ad6c
	adds r1, r3, #0	@ 0010ad6c 191c
.org 0x10ad6e
	adds r1, #34	@ 0010ad6e 2231
.org 0x10ad70
	strb r0, [r1, #0]	@ 0010ad70 0870
.org 0x10ad72
	str r6, [r3, #40]	@ 0010ad72 9e62
.org 0x10ad74
	strb r5, [r3, #16]	@ 0010ad74 1d74
.org 0x10ad76
	strb r4, [r3, #17]	@ 0010ad76 5c74
.org 0x10ad78
	pop {r4, r5, r6}	@ 0010ad78 70bc
.org 0x10ad7a
	pop {r0}	@ 0010ad7a 01bc
.org 0x10ad7c
	bx r0	@ 0010ad7c 0047
