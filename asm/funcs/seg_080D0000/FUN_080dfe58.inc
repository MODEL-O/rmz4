@ FUN_080dfe58  entry 0x080dfe58  size 56
.thumb
.org 0xdfe58
FUN_080dfe58:
	push {r4, lr}	@ 000dfe58 10b5
.org 0xdfe5a
	adds r3, r0, #0	@ 000dfe5a 031c
.org 0xdfe5c
	adds r3, #116	@ 000dfe5c 7433
.org 0xdfe5e
	ldrb r1, [r3, #0]	@ 000dfe5e 1978
.org 0xdfe60
	ldr r2, [pc, #44]	@ 000dfe60 0b4a
.org 0xdfe62
	lsls r1, r1, #26	@ 000dfe62 8906
.org 0xdfe64
	lsrs r1, r1, #23	@ 000dfe64 c90d
.org 0xdfe66
	adds r1, r1, r2	@ 000dfe66 8918
.org 0xdfe68
	movs r4, #0	@ 000dfe68 0024
.org 0xdfe6a
	ldrsh r2, [r1, r4]	@ 000dfe6a 0a5f
.org 0xdfe6c
	lsls r2, r2, #1	@ 000dfe6c 5200
.org 0xdfe6e
	ldr r1, [r0, #120]	@ 000dfe6e 816f
.org 0xdfe70
	adds r1, r1, r2	@ 000dfe70 8918
.org 0xdfe72
	str r1, [r0, #84]	@ 000dfe72 4165
.org 0xdfe74
	ldrb r1, [r3, #0]	@ 000dfe74 1978
.org 0xdfe76
	adds r2, r1, #1	@ 000dfe76 4a1c
.org 0xdfe78
	adds r0, r2, #0	@ 000dfe78 101c
.org 0xdfe7a
	cmp r2, #0	@ 000dfe7a 002a
.org 0xdfe7c
	bge.n 0xdfe82	@ 000dfe7c 01da
.org 0xdfe7e
	adds r0, r1, #0	@ 000dfe7e 081c
.org 0xdfe80
	adds r0, #64	@ 000dfe80 4030
.org 0xdfe82
	asrs r0, r0, #6	@ 000dfe82 8011
.org 0xdfe84
	lsls r0, r0, #6	@ 000dfe84 8001
.org 0xdfe86
	subs r0, r2, r0	@ 000dfe86 101a
.org 0xdfe88
	strb r0, [r3, #0]	@ 000dfe88 1870
.org 0xdfe8a
	pop {r4}	@ 000dfe8a 10bc
.org 0xdfe8c
	pop {r0}	@ 000dfe8c 01bc
.org 0xdfe8e
	bx r0	@ 000dfe8e 0047
