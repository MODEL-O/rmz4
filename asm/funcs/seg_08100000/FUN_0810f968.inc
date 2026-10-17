@ FUN_0810f968  entry 0x0810f968  size 20
.thumb
.org 0x10f968
FUN_0810f968:
	push {r4, lr}	@ 0010f968 10b5
.org 0x10f96a
	adds r4, r0, #0	@ 0010f96a 041c
.org 0x10f96c
	bl 0x6808	@ 0010f96c f6f64cff
.org 0x10f970
	ldr r0, [pc, #8]	@ 0010f970 0248
.org 0x10f972
	ldrb r0, [r0, #0]	@ 0010f972 0078
.org 0x10f974
	strh r0, [r4, #16]	@ 0010f974 2082
.org 0x10f976
	pop {r4}	@ 0010f976 10bc
.org 0x10f978
	pop {r0}	@ 0010f978 01bc
.org 0x10f97a
	bx r0	@ 0010f97a 0047
