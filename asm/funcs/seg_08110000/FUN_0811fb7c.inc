@ FUN_0811fb7c  entry 0x0811fb7c  size 72
.thumb
.org 0x11fb7c
FUN_0811fb7c:
	push {r4, r5, r6, lr}	@ 0011fb7c 70b5
.org 0x11fb7e
	adds r5, r0, #0	@ 0011fb7e 051c
.org 0x11fb80
	ldr r0, [pc, #64]	@ 0011fb80 1048
.org 0x11fb82
	adds r1, r5, r0	@ 0011fb82 2918
.org 0x11fb84
	movs r0, #240	@ 0011fb84 f020
.org 0x11fb86
	lsls r0, r0, #7	@ 0011fb86 c001
.org 0x11fb88
	str r0, [r1, #0]	@ 0011fb88 0860
.org 0x11fb8a
	movs r0, #160	@ 0011fb8a a020
.org 0x11fb8c
	lsls r0, r0, #7	@ 0011fb8c c001
.org 0x11fb8e
	str r0, [r1, #4]	@ 0011fb8e 4860
.org 0x11fb90
	ldr r0, [pc, #52]	@ 0011fb90 0d48
.org 0x11fb92
	adds r6, r5, r0	@ 0011fb92 2e18
.org 0x11fb94
	adds r0, r6, #0	@ 0011fb94 301c
.org 0x11fb96
	movs r2, #0	@ 0011fb96 0022
.org 0x11fb98
	movs r3, #0	@ 0011fb98 0023
.org 0x11fb9a
	bl 0x2c0c	@ 0011fb9a e3f637f8
.org 0x11fb9e
	ldr r0, [pc, #44]	@ 0011fb9e 0b48
.org 0x11fba0
	adds r4, r5, r0	@ 0011fba0 2c18
.org 0x11fba2
	adds r0, r4, #0	@ 0011fba2 201c
.org 0x11fba4
	bl 0x3384	@ 0011fba4 e3f6eefb
.org 0x11fba8
	adds r0, r4, #0	@ 0011fba8 201c
.org 0x11fbaa
	adds r1, r6, #0	@ 0011fbaa 311c
.org 0x11fbac
	bl 0x33bc	@ 0011fbac e3f606fc
.org 0x11fbb0
	ldr r0, [pc, #28]	@ 0011fbb0 0748
.org 0x11fbb2
	adds r5, r5, r0	@ 0011fbb2 2d18
.org 0x11fbb4
	ldr r1, [pc, #28]	@ 0011fbb4 0749
.org 0x11fbb6
	adds r0, r5, #0	@ 0011fbb6 281c
.org 0x11fbb8
	movs r2, #64	@ 0011fbb8 4022
.org 0x11fbba
	bl 0x10a1b4	@ 0011fbba eaf7fbfa
.org 0x11fbbe
	pop {r4, r5, r6}	@ 0011fbbe 70bc
.org 0x11fbc0
	pop {r0}	@ 0011fbc0 01bc
.org 0x11fbc2
	bx r0	@ 0011fbc2 0047
