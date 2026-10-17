@ FUN_08086a14  entry 0x08086a14  size 46
.thumb
.org 0x86a14
FUN_08086a14:
	push {r4, lr}	@ 00086a14 10b5
.org 0x86a16
	adds r4, r0, #0	@ 00086a16 041c
.org 0x86a18
	lsls r1, r1, #24	@ 00086a18 0906
.org 0x86a1a
	lsrs r1, r1, #24	@ 00086a1a 090e
.org 0x86a1c
	adds r0, #182	@ 00086a1c b630
.org 0x86a1e
	strb r1, [r0, #0]	@ 00086a1e 0170
.org 0x86a20
	subs r0, #1	@ 00086a20 0138
.org 0x86a22
	strb r1, [r0, #0]	@ 00086a22 0170
.org 0x86a24
	ldr r1, [pc, #28]	@ 00086a24 0749
.org 0x86a26
	subs r0, #1	@ 00086a26 0138
.org 0x86a28
	ldrb r0, [r0, #0]	@ 00086a28 0078
.org 0x86a2a
	lsls r0, r0, #2	@ 00086a2a 8000
.org 0x86a2c
	adds r0, r0, r1	@ 00086a2c 4018
.org 0x86a2e
	ldrh r1, [r0, #0]	@ 00086a2e 0188
.org 0x86a30
	adds r0, r4, #0	@ 00086a30 201c
.org 0x86a32
	bl 0x1cf00	@ 00086a32 96f765fa
.org 0x86a36
	adds r0, r4, #0	@ 00086a36 201c
.org 0x86a38
	bl 0x1cff0	@ 00086a38 96f7dafa
.org 0x86a3c
	pop {r4}	@ 00086a3c 10bc
.org 0x86a3e
	pop {r0}	@ 00086a3e 01bc
.org 0x86a40
	bx r0	@ 00086a40 0047
