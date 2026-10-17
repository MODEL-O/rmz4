@ FUN_080aff88  entry 0x080aff88  size 116
.thumb
.org 0xaff88
FUN_080aff88:
	push {r4, r5, lr}	@ 000aff88 30b5
.org 0xaff8a
	adds r4, r0, #0	@ 000aff8a 041c
.org 0xaff8c
	ldrb r0, [r4, #14]	@ 000aff8c a07b
.org 0xaff8e
	cmp r0, #0	@ 000aff8e 0028
.org 0xaff90
	bne.n 0xaffd2	@ 000aff90 1fd1
.org 0xaff92
	adds r0, r4, #0	@ 000aff92 201c
.org 0xaff94
	adds r0, #183	@ 000aff94 b730
.org 0xaff96
	ldr r2, [pc, #100]	@ 000aff96 194a
.org 0xaff98
	adds r1, r2, #0	@ 000aff98 111c
.org 0xaff9a
	ldrb r0, [r0, #0]	@ 000aff9a 0078
.org 0xaff9c
	adds r1, r1, r0	@ 000aff9c 0918
.org 0xaff9e
	lsls r1, r1, #16	@ 000aff9e 0904
.org 0xaffa0
	lsrs r1, r1, #16	@ 000affa0 090c
.org 0xaffa2
	adds r0, r4, #0	@ 000affa2 201c
.org 0xaffa4
	bl 0x1cf00	@ 000affa4 6cf7acff
.org 0xaffa8
	ldrb r5, [r4, #16]	@ 000affa8 257c
.org 0xaffaa
	cmp r5, #0	@ 000affaa 002d
.org 0xaffac
	bne.n 0xaffcc	@ 000affac 0ed1
.org 0xaffae
	adds r0, r4, #0	@ 000affae 201c
.org 0xaffb0
	adds r0, #116	@ 000affb0 7430
.org 0xaffb2
	ldr r1, [pc, #76]	@ 000affb2 1349
.org 0xaffb4
	bl 0x5784	@ 000affb4 55f7e6fb
.org 0xaffb8
	ldr r1, [r4, #44]	@ 000affb8 e16a
.org 0xaffba
	movs r0, #4	@ 000affba 0420
.org 0xaffbc
	strb r0, [r1, #13]	@ 000affbc 4873
.org 0xaffbe
	ldr r0, [r4, #44]	@ 000affbe e06a
.org 0xaffc0
	strb r5, [r0, #14]	@ 000affc0 8573
.org 0xaffc2
	movs r0, #60	@ 000affc2 3c20
.org 0xaffc4
	strb r0, [r4, #18]	@ 000affc4 a074
.org 0xaffc6
	adds r0, #246	@ 000affc6 f630
.org 0xaffc8
	bl 0x2b10	@ 000affc8 52f7a2fd
.org 0xaffcc
	ldrb r0, [r4, #14]	@ 000affcc a07b
.org 0xaffce
	adds r0, #1	@ 000affce 0130
.org 0xaffd0
	strb r0, [r4, #14]	@ 000affd0 a073
.org 0xaffd2
	adds r0, r4, #0	@ 000affd2 201c
.org 0xaffd4
	bl 0xb0318	@ 000affd4 00f0a0f9
.org 0xaffd8
	lsls r0, r0, #24	@ 000affd8 0006
.org 0xaffda
	cmp r0, #0	@ 000affda 0028
.org 0xaffdc
	beq.n 0xafff6	@ 000affdc 0bd0
.org 0xaffde
	ldrb r5, [r4, #16]	@ 000affde 257c
.org 0xaffe0
	cmp r5, #0	@ 000affe0 002d
.org 0xaffe2
	bne.n 0xafff6	@ 000affe2 08d1
.org 0xaffe4
	adds r0, r4, #0	@ 000affe4 201c
.org 0xaffe6
	adds r0, #116	@ 000affe6 7430
.org 0xaffe8
	ldr r1, [pc, #24]	@ 000affe8 0649
.org 0xaffea
	bl 0x5784	@ 000affea 55f7cbfb
.org 0xaffee
	movs r0, #180	@ 000affee b420
.org 0xafff0
	strb r0, [r4, #19]	@ 000afff0 e074
.org 0xafff2
	strb r5, [r4, #13]	@ 000afff2 6573
.org 0xafff4
	strb r5, [r4, #14]	@ 000afff4 a573
.org 0xafff6
	pop {r4, r5}	@ 000afff6 30bc
.org 0xafff8
	pop {r0}	@ 000afff8 01bc
.org 0xafffa
	bx r0	@ 000afffa 0047
