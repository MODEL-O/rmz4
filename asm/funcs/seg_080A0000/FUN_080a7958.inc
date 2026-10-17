@ FUN_080a7958  entry 0x080a7958  size 34
.thumb
.org 0xa7958
FUN_080a7958:
	push {lr}	@ 000a7958 00b5
.org 0xa795a
	ldr r1, [r0, #12]	@ 000a795a c168
.org 0xa795c
	ldr r2, [r1, #44]	@ 000a795c ca6a
.org 0xa795e
	ldr r0, [r0, #44]	@ 000a795e c06a
.org 0xa7960
	ldr r1, [r0, #40]	@ 000a7960 816a
.org 0xa7962
	movs r0, #8	@ 000a7962 0820
.org 0xa7964
	ldrsb r0, [r2, r0]	@ 000a7964 1056
.org 0xa7966
	cmp r0, #6	@ 000a7966 0628
.org 0xa7968
	bne.n 0xa7976	@ 000a7968 05d1
.org 0xa796a
	ldrb r0, [r2, #9]	@ 000a796a 507a
.org 0xa796c
	cmp r0, #34	@ 000a796c 2228
.org 0xa796e
	bne.n 0xa7976	@ 000a796e 02d1
.org 0xa7970
	adds r1, #191	@ 000a7970 bf31
.org 0xa7972
	movs r0, #1	@ 000a7972 0120
.org 0xa7974
	strb r0, [r1, #0]	@ 000a7974 0870
.org 0xa7976
	pop {r0}	@ 000a7976 01bc
.org 0xa7978
	bx r0	@ 000a7978 0047
